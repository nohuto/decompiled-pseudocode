/*
 * XREFs of CcUnregisterExternalCache @ 0x1405374A0
 * Callers:
 *     <none>
 * Callees:
 *     CcDeductDirtyPagesFromExternalCache @ 0x1403CF390 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcRemoveExternalCache @ 0x14053729C (CcRemoveExternalCache.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall CcUnregisterExternalCache(_QWORD *P)
{
  CcRemoveExternalCache(P);
  CcDeductDirtyPagesFromExternalCache((__int64)P, P[1]);
  ExFreePoolWithTag(P, 0x43456343u);
}
