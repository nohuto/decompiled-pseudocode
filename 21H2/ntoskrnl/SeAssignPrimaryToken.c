/*
 * XREFs of SeAssignPrimaryToken @ 0x1408471EC
 * Callers:
 *     PspInitializeProcessSecurity @ 0x14070F0D8 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ObInitializeFastReference @ 0x14070F2D8 (ObInitializeFastReference.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     SeDeassignPrimaryToken @ 0x1407E0C48 (SeDeassignPrimaryToken.c)
 *     SepAuditAssignPrimaryToken @ 0x140847400 (SepAuditAssignPrimaryToken.c)
 */

__int64 __fastcall SeAssignPrimaryToken(__int64 a1, _BYTE *a2)
{
  if ( SeAuditingWithTokenForSubcategory(133, 0LL) )
    SepAuditAssignPrimaryToken(a1, a2);
  if ( *(_QWORD *)(a1 + 1208) )
    SeDeassignPrimaryToken(a1);
  ObfReferenceObject(a2);
  a2[204] = 1;
  return ObInitializeFastReference((__int64 *)(a1 + 1208), (__int64)a2);
}
