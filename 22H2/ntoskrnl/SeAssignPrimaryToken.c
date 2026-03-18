/*
 * XREFs of SeAssignPrimaryToken @ 0x14084222C
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1406B64F0 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 *     ObInitializeFastReference @ 0x1406B69CC (ObInitializeFastReference.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406BB250 (SeAuditingWithTokenForSubcategory.c)
 *     SeDeassignPrimaryToken @ 0x1407613E4 (SeDeassignPrimaryToken.c)
 *     SepAuditAssignPrimaryToken @ 0x140842830 (SepAuditAssignPrimaryToken.c)
 */

__int64 __fastcall SeAssignPrimaryToken(__int64 a1, _BYTE *a2)
{
  if ( SeAuditingWithTokenForSubcategory(134, 0LL) )
    SepAuditAssignPrimaryToken(a1, a2);
  if ( *(_QWORD *)(a1 + 1208) )
    SeDeassignPrimaryToken(a1);
  ObfReferenceObject(a2);
  a2[204] = 1;
  return ObInitializeFastReference((__int64 *)(a1 + 1208), (__int64)a2);
}
