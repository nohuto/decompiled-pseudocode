/*
 * XREFs of SepDuplicateClaimAttributes @ 0x1409251D0
 * Callers:
 *     SepConvertToOwnTokenClaims @ 0x140243B88 (SepConvertToOwnTokenClaims.c)
 *     SepDuplicateTokenClaims @ 0x1409253DC (SepDuplicateTokenClaims.c)
 * Callees:
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140230D8C (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402FFFE0 (AuthzBasepFreeSecurityAttributesList.c)
 *     RtlSidHashInitialize @ 0x140360B30 (RtlSidHashInitialize.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140360E30 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepLengthSidAndAttributesArray @ 0x1406CCC08 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406CCCC0 (SeCaptureSidAndAttributesArray.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x14096C908 (AuthzBasepAllocateClaimCollectionNoLists.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepDuplicateClaimAttributes(unsigned int *a1, _QWORD *a2)
{
  __int64 result; // rax
  int v5; // ebx
  _DWORD *v6; // r14
  _DWORD *v7; // rbp
  char v8; // r13
  _SID_AND_ATTRIBUTES *v9; // r15
  _DWORD *ClaimCollectionNoLists; // rsi
  _QWORD *SecurityAttributesList; // rax
  _QWORD *v12; // rax
  void *v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // ebx
  char *PoolWithTag; // rax
  ULONG v17; // edx
  int v18; // [rsp+28h] [rbp-60h]
  int v19; // [rsp+30h] [rbp-58h]
  char v20; // [rsp+98h] [rbp+10h]
  SIZE_T NumberOfBytes; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+20h] BYREF

  result = 0LL;
  v20 = 0;
  LODWORD(NumberOfBytes) = 0;
  v5 = 0;
  v22 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  *a2 = 0LL;
  if ( a1 )
  {
    ClaimCollectionNoLists = (_DWORD *)AuthzBasepAllocateClaimCollectionNoLists();
    if ( !ClaimCollectionNoLists )
      return (unsigned int)-1073741670;
    if ( *((_QWORD *)a1 + 72) )
    {
      SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
      v6 = SecurityAttributesList;
      if ( !SecurityAttributesList )
      {
        v5 = -1073741670;
LABEL_33:
        ExFreePoolWithTag(ClaimCollectionNoLists, 0);
        return (unsigned int)v5;
      }
      v5 = AuthzBasepDuplicateSecurityAttributes(*((_QWORD *)a1 + 72), SecurityAttributesList, 0);
      if ( v5 < 0 )
      {
LABEL_23:
        if ( v6 )
        {
          if ( v8 )
            AuthzBasepFreeSecurityAttributesList(v6);
          ExFreePoolWithTag(v6, 0);
        }
        if ( v7 )
        {
          if ( v20 )
            AuthzBasepFreeSecurityAttributesList(v7);
          ExFreePoolWithTag(v7, 0);
        }
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        goto LABEL_33;
      }
      v8 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 72) = v6;
    }
    if ( *((_QWORD *)a1 + 73) )
    {
      v12 = AuthzBasepAllocateSecurityAttributesList();
      v7 = v12;
      if ( !v12 )
      {
LABEL_13:
        v5 = -1073741670;
        goto LABEL_23;
      }
      v5 = AuthzBasepDuplicateSecurityAttributes(*((_QWORD *)a1 + 73), v12, 0);
      if ( v5 < 0 )
        goto LABEL_23;
      v20 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 73) = v7;
    }
    v13 = (void *)*((_QWORD *)a1 + 1);
    if ( v13 )
    {
      v14 = *a1;
      if ( (_DWORD)v14 )
      {
        v5 = SepLengthSidAndAttributesArray(v13, v14, &NumberOfBytes);
        if ( v5 < 0 )
          goto LABEL_23;
        v15 = NumberOfBytes;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64546553u);
        v9 = (_SID_AND_ATTRIBUTES *)PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_13;
        v5 = SeCaptureSidAndAttributesArray(
               *((char **)a1 + 1),
               *a1,
               0,
               PoolWithTag,
               v15,
               v18,
               v19,
               (PVOID *)&v22,
               (unsigned int *)&NumberOfBytes);
        if ( v5 < 0 )
          goto LABEL_23;
        v17 = *a1;
        *ClaimCollectionNoLists = *a1;
        *((_QWORD *)ClaimCollectionNoLists + 1) = v9;
        RtlSidHashInitialize(v9, v17, (PSID_AND_ATTRIBUTES_HASH)(ClaimCollectionNoLists + 8));
      }
    }
    *a2 = ClaimCollectionNoLists;
    return (unsigned int)v5;
  }
  return result;
}
