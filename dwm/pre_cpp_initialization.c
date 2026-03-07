int pre_cpp_initialization()
{
  int v0; // eax

  _scrt_set_unhandled_exception_filter();
  v0 = _scrt_initialize_winrt();
  return o__set_new_mode_0(v0);
}
