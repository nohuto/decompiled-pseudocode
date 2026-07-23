/*
 * XREFs of SeAssignPrimaryToken @ 0x1407BC360
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1406AD6E0 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     SeDeassignPrimaryToken @ 0x14067DBD4 (SeDeassignPrimaryToken.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406981E0 (SeAuditingWithTokenForSubcategory.c)
 *     ObInitializeFastReference @ 0x1406AD8DC (ObInitializeFastReference.c)
 *     SepAuditAssignPrimaryToken @ 0x1407BC574 (SepAuditAssignPrimaryToken.c)
 */

ULONG_PTR __fastcall SeAssignPrimaryToken(__int64 a1, _BYTE *a2)
{
  if ( SeAuditingWithTokenForSubcategory(134, 0LL) )
    SepAuditAssignPrimaryToken(a1, a2);
  if ( *(_QWORD *)(a1 + 1208) )
    SeDeassignPrimaryToken(a1);
  ObfReferenceObject(a2);
  a2[204] = 1;
  return ObInitializeFastReference((ULONG_PTR *)(a1 + 1208), (ULONG_PTR)a2);
}
