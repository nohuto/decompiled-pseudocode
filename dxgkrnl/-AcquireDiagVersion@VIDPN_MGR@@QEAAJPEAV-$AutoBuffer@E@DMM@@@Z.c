/*
 * XREFs of ?AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C03A747C
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C03A61F8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0068974 (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagVersion(__int64 a1, _QWORD *a2)
{
  int v4; // edi

  if ( a2 )
  {
    if ( a2[4] )
      WdLogSingleEntry0(1LL);
    v4 = DMM::AutoBuffer<unsigned char>::Initialize(a2, 2uLL, 0LL, 256LL);
    if ( v4 >= 0 )
    {
      *(_WORD *)a2[4] = 24577;
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(2LL, a2);
      return (unsigned int)v4;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
}
