/*
 * XREFs of AuthzBasepSetSecurityAttributesToken @ 0x14029705C
 * Callers:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1402975A8 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepDesktopAppxSubProcessToken @ 0x1402980AC (SepDesktopAppxSubProcessToken.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1402BE3C0 (SepInternalSetSecurityAttributesToken.c)
 *     SeSetSecurityAttributesTokenEx @ 0x14039D0A0 (SeSetSecurityAttributesTokenEx.c)
 *     SepSetSingletonEntry @ 0x14039D204 (SepSetSingletonEntry.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x1405B5AC4 (SepDesktopAppModifyTokenBreakaway.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1405B5D24 (SepVerifyDesktopAppxPackageName.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x1405B6FD0 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SepSetProcessUniqueAttribute @ 0x14070B6C4 (SepSetProcessUniqueAttribute.c)
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 *     SepCreateClaimAttributes @ 0x140780934 (SepCreateClaimAttributes.c)
 *     SepAddTokenOriginClaim @ 0x140794680 (SepAddTokenOriginClaim.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140841554 (AuthzBasepInitializeSystemSecurityAttributes.c)
 * Callees:
 *     AuthzBasepAddSecurityAttribute @ 0x140296FB0 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepValidateSecurityAttributes @ 0x140297140 (AuthzBasepValidateSecurityAttributes.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x140297A30 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x140297E14 (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x140297E80 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402B8730 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x14066C554 (AuthzBasepDeleteAllSecurityAttributes.c)
 */

__int64 __fastcall AuthzBasepSetSecurityAttributesToken(__int64 a1, int *a2, __int64 a3)
{
  int v3; // r14d
  int v7; // ebx
  __int64 v8; // rbp
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax

  v3 = *a2;
  if ( a3 )
  {
    v7 = AuthzBasepValidateSecurityAttributes(a3);
    if ( v7 >= 0 )
    {
      if ( v3 == 1 )
        AuthzBasepDeleteAllSecurityAttributes(a1);
      v8 = 0LL;
      if ( *(_DWORD *)(a3 + 4) )
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(a3 + 8) + 40 * v8;
          if ( v3 == 1 )
            goto LABEL_11;
          v10 = a2[v8];
          if ( v10 )
            break;
          v7 = 0;
LABEL_13:
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= *(_DWORD *)(a3 + 4) )
            goto LABEL_14;
        }
        v11 = v10 - 2;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 != 1 )
              goto LABEL_18;
LABEL_11:
            v13 = AuthzBasepReplaceSecurityAttribute(a1, v9);
          }
          else
          {
            v13 = AuthzBasepDeleteSecurityAttribute(a1, v9);
          }
        }
        else
        {
          v13 = AuthzBasepAddSecurityAttribute(a1, v9);
        }
        v7 = v13;
        if ( v13 < 0 )
          goto LABEL_14;
        goto LABEL_13;
      }
    }
  }
  else if ( v3 == 1 )
  {
    AuthzBasepFreeSecurityAttributesList(a1, a2, 0LL);
    v7 = 0;
  }
  else
  {
LABEL_18:
    v7 = -1073741811;
  }
LABEL_14:
  AuthzBasepFinaliseSecurityAttributesList(a1, v7 >= 0);
  return (unsigned int)v7;
}
