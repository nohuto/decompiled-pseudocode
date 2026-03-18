/*
 * XREFs of SepAuditingEnabledForSubcategory @ 0x1402A4700
 * Callers:
 *     SepAdtAuditThisEventWithContext @ 0x140724320 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140882966 (SepAdtClassifyObjectIntoSubCategory.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepAuditingEnabledForSubcategory(int a1, char a2, char a3)
{
  __int64 v3; // rcx

  v3 = (unsigned int)(a1 - 100);
  return SeAuditingState[2 * v3] && a2 || SeAuditingState[2 * v3 + 1] && a3;
}
