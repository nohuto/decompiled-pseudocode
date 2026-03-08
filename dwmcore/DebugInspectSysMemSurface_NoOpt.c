/*
 * XREFs of DebugInspectSysMemSurface_NoOpt @ 0x18026F714
 * Callers:
 *     ?DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z @ 0x18026F708 (-DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z.c)
 * Callees:
 *     ?reserve@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x1800AB7A8 (-reserve@-$vector@EV-$allocator@E@std@@@std@@QEAAX_K@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800EF9A8 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 *     IsSolidColorSurface @ 0x18026FDD4 (IsSolidColorSurface.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180279008 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

bool __fastcall DebugInspectSysMemSurface_NoOpt(void *a1, __int64 a2, int a3, __int64 a4, int a5)
{
  volatile bool result; // al
  char v6; // [rsp+30h] [rbp-28h]
  void *v7[2]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v8; // [rsp+48h] [rbp-10h]

  result = g_fSurfaceDebugDisableBreak;
  if ( !g_fSurfaceDebugDisableBreak )
  {
    v6 = IsSolidColorSurface(a1, a5);
    if ( g_TouchOnDebugReadSurface )
    {
      v8 = 0LL;
      *(_OWORD *)v7 = 0LL;
      std::vector<unsigned char>::reserve(v7, (unsigned int)(a5 * a3));
      memcpy_0(v7[0], a1, (unsigned int)(a5 * a3));
      g_TouchOnDebugReadSurface = 1;
      std::vector<unsigned char>::_Tidy((__int64)v7);
    }
    else if ( IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent() )
    {
      __debugbreak();
    }
    return v6;
  }
  return result;
}
