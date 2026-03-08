/*
 * XREFs of SmPageRead @ 0x1405C76E0
 * Callers:
 *     MiIssueHardFaultIo @ 0x1403435F0 (MiIssueHardFaultIo.c)
 *     MiMakeOutswappedPageResident @ 0x14061612C (MiMakeOutswappedPageResident.c)
 *     MiPfExecuteReadList @ 0x1406A3F98 (MiPfExecuteReadList.c)
 * Callees:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14045C966 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z @ 0x1405CA728 (-SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z.c)
 */

__int64 __fastcall SmPageRead(__int64 a1, union _MM_STORE_KEY *a2, unsigned __int64 a3, __int64 a4, _SLIST_ENTRY *a5)
{
  __int64 v6; // r10
  _SLIST_ENTRY *v7; // r11
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  SmKeyConvert(a2, (union _SM_PAGE_KEY *)&v9);
  return SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(*(_QWORD *)(v6 + 24), &v9, a3, v7, a5);
}
