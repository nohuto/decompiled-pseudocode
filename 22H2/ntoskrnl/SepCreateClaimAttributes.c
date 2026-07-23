/*
 * XREFs of SepCreateClaimAttributes @ 0x1405DC724
 * Callers:
 *     SepSetTokenClaims @ 0x1405DC6A8 (SepSetTokenClaims.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1402506CC (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140275910 (AuthzBasepFreeSecurityAttributesList.c)
 *     RtlSidHashInitialize @ 0x1402D6590 (RtlSidHashInitialize.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14030A32C (AuthzBasepAllocateSecurityAttributesList.c)
 *     SepLengthSidAndAttributesArray @ 0x1405DD4AC (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1405DD560 (SeCaptureSidAndAttributesArray.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x14096C778 (AuthzBasepAllocateClaimCollectionNoLists.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepCreateClaimAttributes(ULONG **a1, __int64 a2, __int64 a3, ULONG a4, void *Src)
{
  int v8; // ebx
  _DWORD *v9; // rbp
  _DWORD *v10; // rsi
  _SID_AND_ATTRIBUTES *PoolWithTag; // r14
  ULONG *ClaimCollectionNoLists; // rdi
  _QWORD *SecurityAttributesList; // rax
  _QWORD *v15; // rax
  int v16; // ebx
  int v17; // [rsp+28h] [rbp-70h]
  int v18; // [rsp+30h] [rbp-68h]
  char v19; // [rsp+50h] [rbp-48h]
  char v20; // [rsp+51h] [rbp-47h]
  int v21; // [rsp+54h] [rbp-44h] BYREF
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-40h] BYREF
  __int64 v23; // [rsp+60h] [rbp-38h] BYREF

  v21 = 1;
  v19 = 0;
  v20 = 0;
  LODWORD(NumberOfBytes) = 0;
  v8 = 0;
  v23 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  PoolWithTag = 0LL;
  if ( !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  if ( !a2 && !a3 && !a4 )
    return 0LL;
  ClaimCollectionNoLists = (ULONG *)AuthzBasepAllocateClaimCollectionNoLists();
  if ( ClaimCollectionNoLists )
  {
    if ( a2 )
    {
      SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
      v9 = SecurityAttributesList;
      if ( !SecurityAttributesList )
      {
        v8 = -1073741670;
LABEL_35:
        ExFreePoolWithTag(ClaimCollectionNoLists, 0);
        return (unsigned int)v8;
      }
      v8 = AuthzBasepSetSecurityAttributesToken((__int64)SecurityAttributesList, &v21, a2);
      if ( v8 < 0 )
        goto LABEL_25;
      v19 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 72) = v9;
    }
    if ( a3 )
    {
      v15 = AuthzBasepAllocateSecurityAttributesList();
      v10 = v15;
      if ( !v15 )
        goto LABEL_37;
      v8 = AuthzBasepSetSecurityAttributesToken((__int64)v15, &v21, a3);
      if ( v8 < 0 )
        goto LABEL_25;
      v20 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 73) = v10;
    }
    if ( !Src || !a4 )
      goto LABEL_24;
    v8 = SepLengthSidAndAttributesArray(Src);
    if ( v8 < 0 )
    {
LABEL_25:
      if ( v9 )
      {
        if ( v19 )
          AuthzBasepFreeSecurityAttributesList(v9);
        ExFreePoolWithTag(v9, 0);
      }
      if ( v10 )
      {
        if ( v20 )
          AuthzBasepFreeSecurityAttributesList(v10);
        ExFreePoolWithTag(v10, 0);
      }
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      goto LABEL_35;
    }
    v16 = NumberOfBytes;
    PoolWithTag = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64546553u);
    if ( PoolWithTag )
    {
      v8 = SeCaptureSidAndAttributesArray(Src, v16, v17, v18, (__int64)&v23, (__int64)&NumberOfBytes);
      if ( v8 >= 0 )
      {
        *ClaimCollectionNoLists = a4;
        *((_QWORD *)ClaimCollectionNoLists + 1) = PoolWithTag;
        RtlSidHashInitialize(PoolWithTag, a4, (PSID_AND_ATTRIBUTES_HASH)(ClaimCollectionNoLists + 8));
LABEL_24:
        *a1 = ClaimCollectionNoLists;
        return (unsigned int)v8;
      }
      goto LABEL_25;
    }
LABEL_37:
    v8 = -1073741670;
    goto LABEL_25;
  }
  return (unsigned int)-1073741670;
}
