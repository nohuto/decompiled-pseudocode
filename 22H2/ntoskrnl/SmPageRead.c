/*
 * XREFs of SmPageRead @ 0x1403070AC
 * Callers:
 *     MiIssueHardFaultIo @ 0x140306F74 (MiIssueHardFaultIo.c)
 *     MiMakeOutswappedPageResident @ 0x14052BA00 (MiMakeOutswappedPageResident.c)
 *     MiPfExecuteReadList @ 0x140636824 (MiPfExecuteReadList.c)
 * Callees:
 *     ?SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z @ 0x14026886C (-SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1403128F0 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 */

__int64 __fastcall SmPageRead(union _MM_STORE_KEY *a1, int a2)
{
  int v3; // ecx
  __int64 v4; // r10
  int v5; // r11d
  _DWORD v7[6]; // [rsp+30h] [rbp-18h] BYREF

  v7[0] = 0;
  SmKeyConvert(a1, (union _SM_PAGE_KEY *)v7);
  return SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(v3, (unsigned int)v7, a2, v5, v4);
}
