/*
 * XREFs of SepDuplicateClaimAttributes @ 0x1409CE654
 * Callers:
 *     SepConvertToOwnTokenClaims @ 0x1402BE4F0 (SepConvertToOwnTokenClaims.c)
 *     SepDuplicateTokenClaims @ 0x1408A1CFA (SepDuplicateTokenClaims.c)
 * Callees:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1402976E0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402B8730 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1402FF8B0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     RtlSidHashInitialize @ 0x140310020 (RtlSidHashInitialize.c)
 *     SepLengthSidAndAttributesArray @ 0x1407103B8 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140710470 (SeCaptureSidAndAttributesArray.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140A57120 (AuthzBasepAllocateClaimCollectionNoLists.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
  _QWORD *SecurityAttributesList; // rax
  _QWORD *v14; // rax
  void *v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // ebx
  char *Pool2; // rax
  unsigned int v19; // edx
  int v20; // [rsp+28h] [rbp-70h]
  int v21; // [rsp+30h] [rbp-68h]
  char v22; // [rsp+A8h] [rbp+10h]
  __int64 v23; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+20h] BYREF

  result = 0LL;
  v22 = 0;
  LODWORD(v23) = 0;
  v5 = 0;
  v24 = 0LL;
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
      SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(v11, v10);
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
      v22 = 1;
      ClaimCollectionNoLists[72] = v6;
    }
    if ( *((_QWORD *)a1 + 73) )
    {
      v14 = AuthzBasepAllocateSecurityAttributesList(v11, v10);
      v7 = v14;
      if ( !v14 )
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
        if ( v22 )
          AuthzBasepFreeSecurityAttributesList(v6);
LABEL_17:
        ExFreePoolWithTag(v6, 0);
        goto LABEL_18;
      }
      v5 = AuthzBasepDuplicateSecurityAttributes(*((_QWORD *)a1 + 73), v14, 0);
      if ( v5 < 0 )
        goto LABEL_14;
      v8 = 1;
      ClaimCollectionNoLists[73] = v7;
    }
    v15 = (void *)*((_QWORD *)a1 + 1);
    if ( v15 )
    {
      v16 = *a1;
      if ( (_DWORD)v16 )
      {
        v5 = SepLengthSidAndAttributesArray(v15, v16, &v23);
        if ( v5 < 0 )
          goto LABEL_14;
        v17 = v23;
        Pool2 = (char *)ExAllocatePool2(256LL, (unsigned int)v23, 1683252563LL);
        v9 = Pool2;
        if ( !Pool2 )
          goto LABEL_13;
        v5 = SeCaptureSidAndAttributesArray(
               *((char **)a1 + 1),
               *a1,
               0,
               Pool2,
               v17,
               v20,
               v21,
               (PVOID *)&v24,
               (unsigned int *)&v23);
        if ( v5 < 0 )
          goto LABEL_14;
        v19 = *a1;
        *(_DWORD *)ClaimCollectionNoLists = *a1;
        ClaimCollectionNoLists[1] = v9;
        RtlSidHashInitialize((__int64 *)v9, v19, ClaimCollectionNoLists + 4);
      }
    }
    *a2 = ClaimCollectionNoLists;
    return (unsigned int)v5;
  }
  return result;
}
