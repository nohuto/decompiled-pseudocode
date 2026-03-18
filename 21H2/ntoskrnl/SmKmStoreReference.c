/*
 * XREFs of SmKmStoreReference @ 0x14035F464
 * Callers:
 *     SmKmStoreReferenceEx @ 0x14035F5AC (SmKmStoreReferenceEx.c)
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140376B48 (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 *     SmpKeyedStoreReference @ 0x14037D810 (SmpKeyedStoreReference.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037FA00 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x1405FD08C (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmIssueIo @ 0x1405FD31C (SmIssueIo.c)
 *     SmProcessListRequestExtended @ 0x1409D4090 (SmProcessListRequestExtended.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14035F5E8 (SmKmStoreRefFromStoreIndex.c)
 */

unsigned __int64 __fastcall SmKmStoreReference(__int64 a1, unsigned int a2)
{
  struct _EX_RUNDOWN_REF *v3; // rax
  struct _EX_RUNDOWN_REF *v4; // rbx

  v3 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, a2 & 0x3FF);
  v4 = v3;
  if ( v3 && ExAcquireRundownProtection(v3 + 1) )
  {
    if ( (v4[4].Count & 0x3F) == a2 >> 10 )
      return v4->Count;
    ExReleaseRundownProtection(v4 + 1);
  }
  return 0LL;
}
