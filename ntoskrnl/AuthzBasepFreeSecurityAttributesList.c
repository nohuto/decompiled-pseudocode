/*
 * XREFs of AuthzBasepFreeSecurityAttributesList @ 0x1402B8730
 * Callers:
 *     SepFreeResourceInfo @ 0x1402078B8 (SepFreeResourceInfo.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140246980 (AuthzBasepEvaluateAceCondition.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140247394 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SeAccessCheckWithHint @ 0x1402653A0 (SeAccessCheckWithHint.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x14029705C (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1402975A8 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1402B7F18 (SepCleanupMarkedForDeletionEntries.c)
 *     SeAccessCheckByType @ 0x14033BB40 (SeAccessCheckByType.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1405B5D24 (SepVerifyDesktopAppxPackageName.c)
 *     SepCreateClaimAttributes @ 0x140780934 (SepCreateClaimAttributes.c)
 *     SepTokenDeleteMethod @ 0x1407C3CB0 (SepTokenDeleteMethod.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140841554 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SeExamineSacl @ 0x1408A18B0 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1409CB8C4 (SepExamineSaclEx.c)
 *     SepDeleteClaimAttributes @ 0x1409CE5CC (SepDeleteClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1409CE654 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1402B87B0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall AuthzBasepFreeSecurityAttributesList(_DWORD *a1)
{
  void **v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // rcx
  void **v5; // rax

  v2 = (void **)(a1 + 2);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (v3[7] & 1) != 0 )
    {
      v4 = (_QWORD *)*v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (void **)v3[1], *v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      v4[1] = v5;
      *((_DWORD *)v3 + 14) &= ~1u;
      if ( a1 )
        --*a1;
    }
    AuthzBasepFreeSecurityAttributeValues(v3, 0LL);
    ExFreePoolWithTag(v3, 0);
  }
}
