__int64 dynamic_atexit_destructor_for__g_spHotkeyCallback__()
{
  return wil::com_ptr_t<HotKeyCallback,wil::err_returncode_policy>::~com_ptr_t<HotKeyCallback,wil::err_returncode_policy>(&g_spHotkeyCallback);
}
