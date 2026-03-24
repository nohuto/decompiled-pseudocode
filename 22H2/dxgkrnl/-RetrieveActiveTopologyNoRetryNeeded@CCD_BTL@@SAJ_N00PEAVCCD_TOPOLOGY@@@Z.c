/*
 * XREFs of ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C02ED8BC
 * Callers:
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C029666C (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 * Callees:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C013A304 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C013CEB4 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C013DEF0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 */

__int64 __fastcall CCD_BTL::RetrieveActiveTopologyNoRetryNeeded(
        __int64 a1,
        __int64 a2,
        char a3,
        struct CCD_TOPOLOGY *a4)
{
  unsigned __int16 v5; // bx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int16 v14; // [rsp+50h] [rbp+18h] BYREF

  LOBYTE(v14) = a3;
  CCD_TOPOLOGY::Clear(a4);
  v5 = 8;
  v14 = 8;
  while ( (unsigned __int16)CCD_TOPOLOGY::Reserve(a4, v5) >= v5 )
  {
    v10 = CCD_TOPOLOGY::RetrieveActive(a4, 1, 0, 1, &v14);
    if ( v10 != -1073741789 )
      goto LABEL_6;
    v5 = v14;
  }
  v11 = WdLogNewEntry5_WdError(v7, v6);
  *(_QWORD *)(v11 + 24) = v5;
  WdLogEvent5_WdError(v11);
  v10 = -1073741801;
LABEL_6:
  if ( v10 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v12 + 24) = v10;
    WdLogEvent5_WdError(v12);
  }
  return (unsigned int)v10;
}
