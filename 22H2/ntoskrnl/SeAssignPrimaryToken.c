/*
 * XREFs of SeAssignPrimaryToken @ 0x1407BC390
 * Callers:
 *     PspInitializeProcessSecurity @ 0x140703CD0 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140608B90 (SeAuditingWithTokenForSubcategory.c)
 *     SeDeassignPrimaryToken @ 0x1406143D4 (SeDeassignPrimaryToken.c)
 *     ObInitializeFastReference @ 0x140703ECC (ObInitializeFastReference.c)
 *     SepAuditAssignPrimaryToken @ 0x1407BC5A4 (SepAuditAssignPrimaryToken.c)
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
