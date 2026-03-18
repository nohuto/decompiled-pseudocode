/*
 * XREFs of SepCreateClaimAttributes @ 0x14066B830
 * Callers:
 *     SepSetTokenClaims @ 0x14066B7B4 (SepSetTokenClaims.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140204870 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14028AB90 (AuthzBasepFreeSecurityAttributesList.c)
 *     RtlSidHashInitialize @ 0x1402E1660 (RtlSidHashInitialize.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140389ED0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     SepLengthSidAndAttributesArray @ 0x140799CF0 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140799DB0 (SeCaptureSidAndAttributesArray.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140A1A61C (AuthzBasepAllocateClaimCollectionNoLists.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepCreateClaimAttributes(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, void *Src)
{
  __int64 result; // rax
  int v8; // ebx
  _DWORD *v9; // r14
  _DWORD *v10; // rsi
  char v11; // r12
  void *Pool2; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *ClaimCollectionNoLists; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *SecurityAttributesList; // rax
  _QWORD *v19; // rax
  int v20; // ebx
  int v21; // [rsp+28h] [rbp-80h]
  int v22; // [rsp+30h] [rbp-78h]
  int v23; // [rsp+54h] [rbp-54h] BYREF
  __int64 v24; // [rsp+58h] [rbp-50h] BYREF
  __int64 v25[9]; // [rsp+60h] [rbp-48h] BYREF
  char v26; // [rsp+B0h] [rbp+8h]

  v23 = 1;
  v26 = 0;
  result = a2;
  LODWORD(v24) = 0;
  v8 = 0;
  v25[0] = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  Pool2 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  if ( a2 || a3 || a4 )
  {
    ClaimCollectionNoLists = (_QWORD *)AuthzBasepAllocateClaimCollectionNoLists();
    if ( !ClaimCollectionNoLists )
      return (unsigned int)-1073741670;
    if ( a2 )
    {
      SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(v14, v13, v16, v17);
      v9 = SecurityAttributesList;
      if ( !SecurityAttributesList )
      {
        v8 = -1073741670;
LABEL_37:
        ExFreePoolWithTag(ClaimCollectionNoLists, 0);
        return (unsigned int)v8;
      }
      v8 = AuthzBasepSetSecurityAttributesToken((__int64)SecurityAttributesList, &v23, a2);
      if ( v8 < 0 )
        goto LABEL_30;
      v26 = 1;
      ClaimCollectionNoLists[72] = v9;
    }
    if ( a3 )
    {
      v19 = AuthzBasepAllocateSecurityAttributesList(v14, v13, v16, v17);
      v10 = v19;
      if ( !v19 )
      {
LABEL_26:
        v8 = -1073741670;
        goto LABEL_27;
      }
      v8 = AuthzBasepSetSecurityAttributesToken((__int64)v19, &v23, a3);
      if ( v8 < 0 )
      {
LABEL_27:
        if ( !v9 )
        {
LABEL_31:
          if ( v10 )
          {
            if ( v11 )
              AuthzBasepFreeSecurityAttributesList(v10);
            ExFreePoolWithTag(v10, 0);
          }
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0);
          goto LABEL_37;
        }
        if ( v26 )
          AuthzBasepFreeSecurityAttributesList(v9);
LABEL_30:
        ExFreePoolWithTag(v9, 0);
        goto LABEL_31;
      }
      v11 = 1;
      ClaimCollectionNoLists[73] = v10;
    }
    if ( !Src || !a4 )
      goto LABEL_24;
    v8 = SepLengthSidAndAttributesArray(Src);
    if ( v8 < 0 )
      goto LABEL_27;
    v20 = v24;
    Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v24, 1683252563LL);
    if ( Pool2 )
    {
      v8 = SeCaptureSidAndAttributesArray(Src, v20, v21, v22, (__int64)v25, (__int64)&v24);
      if ( v8 >= 0 )
      {
        *(_DWORD *)ClaimCollectionNoLists = a4;
        ClaimCollectionNoLists[1] = Pool2;
        RtlSidHashInitialize((__int64 *)Pool2, a4, ClaimCollectionNoLists + 4);
LABEL_24:
        *a1 = ClaimCollectionNoLists;
        return (unsigned int)v8;
      }
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  return result;
}
