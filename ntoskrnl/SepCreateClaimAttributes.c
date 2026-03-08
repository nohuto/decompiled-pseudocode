/*
 * XREFs of SepCreateClaimAttributes @ 0x140780934
 * Callers:
 *     SepSetTokenClaims @ 0x1407808B8 (SepSetTokenClaims.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14029705C (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402B8730 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1402FF8B0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     RtlSidHashInitialize @ 0x140310020 (RtlSidHashInitialize.c)
 *     SepLengthSidAndAttributesArray @ 0x1407103B8 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140710470 (SeCaptureSidAndAttributesArray.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140A57120 (AuthzBasepAllocateClaimCollectionNoLists.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCreateClaimAttributes(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, void *Src)
{
  __int64 result; // rax
  int v8; // ebx
  _DWORD *v9; // r14
  _DWORD *v10; // rsi
  char v11; // r12
  char *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *ClaimCollectionNoLists; // rdi
  _QWORD *SecurityAttributesList; // rax
  _QWORD *v17; // rax
  unsigned int v18; // ebx
  char *Pool2; // rax
  int v20; // [rsp+28h] [rbp-80h]
  int v21; // [rsp+30h] [rbp-78h]
  int v22; // [rsp+54h] [rbp-54h] BYREF
  __int64 v23; // [rsp+58h] [rbp-50h] BYREF
  __int64 v24; // [rsp+60h] [rbp-48h] BYREF
  char v25; // [rsp+B0h] [rbp+8h]

  v22 = 1;
  v25 = 0;
  result = a2;
  LODWORD(v23) = 0;
  v8 = 0;
  v24 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
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
      SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(v14, v13);
      v9 = SecurityAttributesList;
      if ( !SecurityAttributesList )
      {
        v8 = -1073741670;
LABEL_37:
        ExFreePoolWithTag(ClaimCollectionNoLists, 0);
        return (unsigned int)v8;
      }
      v8 = AuthzBasepSetSecurityAttributesToken((__int64)SecurityAttributesList, &v22, a2);
      if ( v8 < 0 )
        goto LABEL_30;
      v25 = 1;
      ClaimCollectionNoLists[72] = v9;
    }
    if ( a3 )
    {
      v17 = AuthzBasepAllocateSecurityAttributesList(v14, v13);
      v10 = v17;
      if ( !v17 )
      {
LABEL_26:
        v8 = -1073741670;
        goto LABEL_27;
      }
      v8 = AuthzBasepSetSecurityAttributesToken((__int64)v17, &v22, a3);
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
          if ( v12 )
            ExFreePoolWithTag(v12, 0);
          goto LABEL_37;
        }
        if ( v25 )
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
    v8 = SepLengthSidAndAttributesArray(Src, a4, &v23);
    if ( v8 < 0 )
      goto LABEL_27;
    v18 = v23;
    Pool2 = (char *)ExAllocatePool2(256LL, (unsigned int)v23, 1683252563LL);
    v12 = Pool2;
    if ( Pool2 )
    {
      v8 = SeCaptureSidAndAttributesArray((char *)Src, a4, 0, Pool2, v18, v20, v21, (PVOID *)&v24, (unsigned int *)&v23);
      if ( v8 >= 0 )
      {
        *(_DWORD *)ClaimCollectionNoLists = a4;
        ClaimCollectionNoLists[1] = v12;
        RtlSidHashInitialize((__int64 *)v12, a4, ClaimCollectionNoLists + 4);
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
