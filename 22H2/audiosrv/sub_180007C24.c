/*
 * XREFs of sub_180007C24 @ 0x180007C24
 * Callers:
 *     sub_180007930 @ 0x180007930 (sub_180007930.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800D5648 @ 0x1800D5648 (sub_1800D5648.c)
 *     sub_1800D5670 @ 0x1800D5670 (sub_1800D5670.c)
 */

void __fastcall sub_180007C24(PSECURITY_DESCRIPTOR *a1)
{
  PSECURITY_DESCRIPTOR v2; // rcx
  PSECURITY_DESCRIPTOR v3; // rcx
  __int64 v4; // rcx
  void *v5; // r12
  DWORD v6; // ecx
  void *pOwner; // r15
  DWORD v8; // eax
  void *pPrimaryGroup; // r14
  DWORD v10; // eax
  struct _ACL *v11; // rsi
  DWORD v12; // eax
  struct _ACL *pSacl; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // ebx
  DWORD dwDaclSize; // [rsp+60h] [rbp-18h] BYREF
  DWORD dwAbsoluteSecurityDescriptorSize; // [rsp+64h] [rbp-14h] BYREF
  DWORD dwRevision[4]; // [rsp+68h] [rbp-10h] BYREF
  WORD pControl; // [rsp+C0h] [rbp+48h] BYREF
  DWORD dwPrimaryGroupSize; // [rsp+C8h] [rbp+50h] BYREF
  DWORD dwOwnerSize; // [rsp+D0h] [rbp+58h] BYREF
  DWORD dwSaclSize; // [rsp+D8h] [rbp+60h] BYREF

  v2 = a1[1];
  if ( v2 )
  {
    pControl = 0;
    if ( !GetSecurityDescriptorControl(v2, &pControl, dwRevision) )
      goto LABEL_25;
    if ( (pControl & 0x8000u) == 0 )
      return;
    v3 = a1[1];
    dwSaclSize = 0;
    dwDaclSize = 0;
    dwPrimaryGroupSize = 0;
    dwOwnerSize = 0;
    dwAbsoluteSecurityDescriptorSize = 0;
    MakeAbsoluteSD(
      v3,
      0LL,
      &dwAbsoluteSecurityDescriptorSize,
      0LL,
      &dwDaclSize,
      0LL,
      &dwSaclSize,
      0LL,
      &dwOwnerSize,
      0LL,
      &dwPrimaryGroupSize);
    if ( GetLastError() != 122 )
      sub_1800D5670(v4);
    v5 = (void *)o_malloc(dwAbsoluteSecurityDescriptorSize);
    if ( !v5 )
      goto LABEL_25;
    v6 = dwOwnerSize;
    if ( dwOwnerSize )
    {
      v17 = o_malloc(dwOwnerSize);
      v6 = dwOwnerSize;
      pOwner = (void *)v17;
    }
    else
    {
      pOwner = 0LL;
    }
    if ( v6 && !pOwner )
      goto LABEL_25;
    v8 = dwPrimaryGroupSize;
    if ( dwPrimaryGroupSize )
    {
      pPrimaryGroup = (void *)o_malloc(dwPrimaryGroupSize);
      v8 = dwPrimaryGroupSize;
    }
    else
    {
      pPrimaryGroup = 0LL;
    }
    if ( v8 && !pPrimaryGroup
      || ((v10 = dwDaclSize) == 0
        ? (v11 = 0LL)
        : (struct _ACL *)(v11 = (struct _ACL *)o_malloc(dwDaclSize), v10 = dwDaclSize),
          v10 && !v11
       || ((v12 = dwSaclSize) != 0
         ? (struct _ACL *)(pSacl = (struct _ACL *)o_malloc(dwSaclSize), v12 = dwSaclSize)
         : (pSacl = 0LL),
           v12 && !pSacl)) )
    {
LABEL_25:
      sub_1800B8610(2147500037LL);
    }
    if ( !MakeAbsoluteSD(
            a1[1],
            v5,
            &dwAbsoluteSecurityDescriptorSize,
            v11,
            &dwDaclSize,
            pSacl,
            &dwSaclSize,
            pOwner,
            &dwOwnerSize,
            pPrimaryGroup,
            &dwPrimaryGroupSize) )
    {
      v18 = sub_1800D5648(v15, v14, v16);
      _o_free(v5);
      _o_free(pOwner);
      _o_free(pPrimaryGroup);
      _o_free(v11);
      _o_free(pSacl);
      sub_1800B8610(v18);
    }
    (*((void (__fastcall **)(PSECURITY_DESCRIPTOR *))*a1 + 1))(a1);
    a1[1] = v5;
  }
}
