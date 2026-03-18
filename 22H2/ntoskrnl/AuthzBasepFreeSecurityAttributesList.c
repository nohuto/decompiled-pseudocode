/*
 * XREFs of AuthzBasepFreeSecurityAttributesList @ 0x1402A8C20
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140224D10 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14022525C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepFreeResourceInfo @ 0x1402295F8 (SepFreeResourceInfo.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14022BF60 (AuthzBasepEvaluateAceCondition.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14022C948 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SeAccessCheckWithHint @ 0x1402316A0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1402B3A90 (SeAccessCheckByType.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x14036F3DC (SepCleanupMarkedForDeletionEntries.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1405B81D4 (SepVerifyDesktopAppxPackageName.c)
 *     SepTokenDeleteMethod @ 0x140729600 (SepTokenDeleteMethod.c)
 *     SepCreateClaimAttributes @ 0x1407CF994 (SepCreateClaimAttributes.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140843BA4 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SeExamineSacl @ 0x1408A6730 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1409CE764 (SepExamineSaclEx.c)
 *     SepDeleteClaimAttributes @ 0x1409D146C (SepDeleteClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1409D14F4 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1402A8AF0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall AuthzBasepFreeSecurityAttributesList(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void **v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx
  void **v8; // rax

  v5 = (void **)(a1 + 2);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    if ( (v6[7] & 1) != 0 )
    {
      v7 = (_QWORD *)*v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (void **)v6[1], *v8 != v6) )
        __fastfail(3u);
      *v8 = v7;
      v7[1] = v8;
      *((_DWORD *)v6 + 14) &= ~1u;
      if ( a1 )
        --*a1;
    }
    AuthzBasepFreeSecurityAttributeValues((__int64)v6, 0, a3, a4);
    ExFreePoolWithTag(v6, 0);
  }
}
