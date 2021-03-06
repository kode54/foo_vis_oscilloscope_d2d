#pragma once

class oscilloscope_config {
public:
    t_uint32 g_get_version();

    oscilloscope_config();

    void parse(ui_element_config_parser & parser);
    void build(ui_element_config_builder & builder);
    void reset();

    bool m_hw_rendering_enabled;
    bool m_downmix_enabled;
    bool m_trigger_enabled;
    bool m_resample_enabled;
    bool m_low_quality_enabled;
    t_uint32 m_window_duration_millis;
    t_uint32 m_zoom_percent;
    t_uint32 m_refresh_rate_limit_hz;
    t_uint32 m_line_stroke_width;

    double get_zoom_factor() {return (double) m_zoom_percent * 0.01;}
    double get_window_duration() {return (double) m_window_duration_millis * 0.001;}
    double get_line_stroke_width() {return (double) m_line_stroke_width * 0.1;}
};
