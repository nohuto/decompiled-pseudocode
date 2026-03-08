/*
 * XREFs of ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C03B824C
 * Callers:
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C02F5DD8 (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C01BAE68 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01BD5E8 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C01BE5F4 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 */

__int64 __fastcall CCD_BTL::RetrieveActiveTopologyNoRetryNeeded(
        __int64 a1,
        __int64 a2,
        char a3,
        struct CCD_TOPOLOGY *a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int16 v7; // bx
  __int64 result; // rax
  int v9; // esi
  unsigned __int16 i; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(i) = a3;
  CCD_TOPOLOGY::Clear(a4);
  v7 = 8;
  for ( i = 8; ; v7 = i )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve(a4, v7, v5, v6) < v7 )
    {
      WdLogSingleEntry1(2LL, v7);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to reserve the memory for active topology. (RequiredPathsCount = %I64u)",
        v7,
        0LL,
        0LL,
        0LL,
        0LL);
      v9 = -1073741801;
      goto LABEL_8;
    }
    result = CCD_TOPOLOGY::RetrieveActive(a4, 1, 0, 1, &i);
    v9 = result;
    if ( (_DWORD)result != -1073741789 )
      break;
  }
  if ( (int)result >= 0 )
    return result;
LABEL_8:
  WdLogSingleEntry1(2LL, v9);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Unable to retrieve active topology. (Status = 0x%I64x)",
    v9,
    0LL,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v9;
}
