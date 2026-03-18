/*
 * XREFs of SepDuplicateClaimAttributes @ 0x1409CE94C
 * Callers:
 *     SepConvertToOwnTokenClaims @ 0x1402D6AD0 (SepConvertToOwnTokenClaims.c)
 *     SepDuplicateTokenClaims @ 0x1409CEB64 (SepDuplicateTokenClaims.c)
 * Callees:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140204B30 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14028AB90 (AuthzBasepFreeSecurityAttributesList.c)
 *     RtlSidHashInitialize @ 0x1402E1660 (RtlSidHashInitialize.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140389ED0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     SepLengthSidAndAttributesArray @ 0x140799CF0 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140799DB0 (SeCaptureSidAndAttributesArray.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140A1A61C (AuthzBasepAllocateClaimCollectionNoLists.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepDuplicateClaimAttributes(unsigned int *a1, _QWORD *a2)
{
  __int64 result; // rax
  int v5; // ebx
  _DWORD *v6; // r15
  _DWORD *v7; // rdi
  char v8; // r13
  char *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *ClaimCollectionNoLists; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *SecurityAttributesList; // rax
  _QWORD *v16; // rax
  void *v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // ebx
  char *Pool2; // rax
  unsigned int v21; // edx
  int v22; // [rsp+28h] [rbp-70h]
  int v23; // [rsp+30h] [rbp-68h]
  char v24; // [rsp+A8h] [rbp+10h]
  __int64 v25; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+20h] BYREF

  result = 0LL;
  v24 = 0;
  LODWORD(v25) = 0;
  v5 = 0;
  v26 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  *a2 = 0LL;
  if ( a1 )
  {
    ClaimCollectionNoLists = (_QWORD *)AuthzBasepAllocateClaimCollectionNoLists();
    if ( !ClaimCollectionNoLists )
      return (unsigned int)-1073741670;
    if ( *((_QWORD *)a1 + 72) )
    {
      SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(v11, v10, v13, v14);
      v6 = SecurityAttributesList;
      if ( !SecurityAttributesList )
      {
        v5 = -1073741670;
LABEL_24:
        ExFreePoolWithTag(ClaimCollectionNoLists, 0);
        return (unsigned int)v5;
      }
      v5 = AuthzBasepDuplicateSecurityAttributes(*((_QWORD *)a1 + 72), SecurityAttributesList, 0);
      if ( v5 < 0 )
        goto LABEL_17;
      v24 = 1;
      ClaimCollectionNoLists[72] = v6;
    }
    if ( *((_QWORD *)a1 + 73) )
    {
      v16 = AuthzBasepAllocateSecurityAttributesList(v11, v10, v13, v14);
      v7 = v16;
      if ( !v16 )
      {
LABEL_13:
        v5 = -1073741670;
LABEL_14:
        if ( !v6 )
        {
LABEL_18:
          if ( v7 )
          {
            if ( v8 )
              AuthzBasepFreeSecurityAttributesList(v7);
            ExFreePoolWithTag(v7, 0);
          }
          if ( v9 )
            ExFreePoolWithTag(v9, 0);
          goto LABEL_24;
        }
        if ( v24 )
          AuthzBasepFreeSecurityAttributesList(v6);
LABEL_17:
        ExFreePoolWithTag(v6, 0);
        goto LABEL_18;
      }
      v5 = AuthzBasepDuplicateSecurityAttributes(*((_QWORD *)a1 + 73), v16, 0);
      if ( v5 < 0 )
        goto LABEL_14;
      v8 = 1;
      ClaimCollectionNoLists[73] = v7;
    }
    v17 = (void *)*((_QWORD *)a1 + 1);
    if ( v17 )
    {
      v18 = *a1;
      if ( (_DWORD)v18 )
      {
        v5 = SepLengthSidAndAttributesArray(v17, v18, &v25);
        if ( v5 < 0 )
          goto LABEL_14;
        v19 = v25;
        Pool2 = (char *)ExAllocatePool2(256LL, (unsigned int)v25, 1683252563LL);
        v9 = Pool2;
        if ( !Pool2 )
          goto LABEL_13;
        v5 = SeCaptureSidAndAttributesArray(
               *((char **)a1 + 1),
               *a1,
               0,
               Pool2,
               v19,
               v22,
               v23,
               (PVOID *)&v26,
               (unsigned int *)&v25);
        if ( v5 < 0 )
          goto LABEL_14;
        v21 = *a1;
        *(_DWORD *)ClaimCollectionNoLists = *a1;
        ClaimCollectionNoLists[1] = v9;
        RtlSidHashInitialize((__int64 *)v9, v21, ClaimCollectionNoLists + 4);
      }
    }
    *a2 = ClaimCollectionNoLists;
    return (unsigned int)v5;
  }
  return result;
}
