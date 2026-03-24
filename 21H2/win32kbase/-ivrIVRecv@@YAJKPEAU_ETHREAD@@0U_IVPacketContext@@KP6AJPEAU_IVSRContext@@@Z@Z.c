/*
 * XREFs of ?ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01BA370
 * Callers:
 *     ?_ivHeaderCallback@CBaseInput@@CAJPEAU_IVSRContext@@@Z @ 0x1C01B7750 (-_ivHeaderCallback@CBaseInput@@CAJPEAU_IVSRContext@@@Z.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01BD1D8 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ivrIVRecv(unsigned int a1, __int64 a2, __int64 a3, __int128 *a4, int a5, __int64 a6)
{
  __int64 v6; // xmm1_8
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]

  if ( !gpfnIVRecv )
    return 3221225659LL;
  v6 = *((_QWORD *)a4 + 2);
  v8 = *a4;
  v9 = v6;
  return gpfnIVRecv(a1, a2, a3, &v8, a5, a6);
}
