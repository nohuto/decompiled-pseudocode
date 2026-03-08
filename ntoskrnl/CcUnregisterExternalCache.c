/*
 * XREFs of CcUnregisterExternalCache @ 0x140534FD0
 * Callers:
 *     <none>
 * Callees:
 *     CcDeductDirtyPagesFromExternalCache @ 0x1403C9DE0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcRemoveExternalCache @ 0x140534DCC (CcRemoveExternalCache.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall CcUnregisterExternalCache(_QWORD *P)
{
  CcRemoveExternalCache(P);
  CcDeductDirtyPagesFromExternalCache((__int64)P, P[1]);
  ExFreePoolWithTag(P, 0x43456343u);
}
