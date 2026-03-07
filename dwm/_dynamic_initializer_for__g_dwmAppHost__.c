int __fastcall dynamic_initializer_for__g_dwmAppHost__(CDwmAppHost *a1)
{
  CDwmAppHost::CDwmAppHost(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_dwmAppHost__);
}
