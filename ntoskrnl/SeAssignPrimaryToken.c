/*
 * XREFs of SeAssignPrimaryToken @ 0x14083FBD8
 * Callers:
 *     PspInitializeProcessSecurity @ 0x140709ED0 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     SeDeassignPrimaryToken @ 0x140705614 (SeDeassignPrimaryToken.c)
 *     ObInitializeFastReference @ 0x14070A3AC (ObInitializeFastReference.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14070F610 (SeAuditingWithTokenForSubcategory.c)
 *     SepAuditAssignPrimaryToken @ 0x1408401DC (SepAuditAssignPrimaryToken.c)
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
