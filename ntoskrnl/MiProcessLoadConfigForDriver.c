/*
 * XREFs of MiProcessLoadConfigForDriver @ 0x140784998
 * Callers:
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MiReloadBootLoadedDrivers @ 0x140B3B9BC (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1407849F8 (MiProcessKernelCfgImageLoadConfig.c)
 *     LdrInitSecurityCookie @ 0x140784A8C (LdrInitSecurityCookie.c)
 */

__int64 __fastcall MiProcessLoadConfigForDriver(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // eax
  int v6; // r8d

  if ( !_bittest16((const signed __int16 *)(a1 + 110), 9u) )
  {
    result = MiProcessKernelCfgImageLoadConfig();
    if ( (int)result < 0 )
      return result;
    if ( a2 )
    {
      ExGenRandom(0);
      v5 = ExGenRandom(0);
      LdrInitSecurityCookie(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), v6, v5);
    }
  }
  return 0LL;
}
