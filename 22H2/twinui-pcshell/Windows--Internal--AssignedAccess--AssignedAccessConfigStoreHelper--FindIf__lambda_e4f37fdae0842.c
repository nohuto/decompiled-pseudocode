/*
 * XREFs of Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___ @ 0x1804E7EEC
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x1804E79C8 (GetAssignedAccessTypeForUser_0.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1800906B4 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1804E80D0 (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1804E8184 (-CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1804E8214 (-CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___(
        __int64 a1,
        __int64 *a2)
{
  void *v3; // rsi
  void *v4; // rbx
  void *v5; // rdi
  _QWORD *v6; // r14
  unsigned __int8 (__fastcall ***v7)(_QWORD, __int64); // r15
  __int64 v8; // rbp
  __int64 v9; // r13
  char v10; // bp
  void *v12; // [rsp+20h] [rbp-68h] BYREF
  void *Block; // [rsp+28h] [rbp-60h] BYREF
  void *v14; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v16; // [rsp+50h] [rbp-38h] BYREF

  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::CreateInstance(&v14);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::CreateInstance(&v12);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::CreateInstance(&Block);
  v3 = v14;
  v4 = v12;
  v5 = Block;
  if ( v14 && v12 && Block )
  {
    v15[0] = v14;
    v6 = v15;
    v15[1] = v12;
    v15[2] = Block;
    while ( 1 )
    {
      v7 = (unsigned __int8 (__fastcall ***)(_QWORD, __int64))*v6;
      v8 = *a2;
      v9 = a2[1];
      if ( *(_DWORD *)(v8 + 24) <= (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 24LL))(*v6) )
      {
        if ( (**v7)(v7, v9) )
          break;
      }
      if ( ++v6 == &v16 )
        goto LABEL_8;
    }
    v10 = 1;
  }
  else
  {
LABEL_8:
    v10 = 0;
  }
  if ( v5 )
    operator delete(v5);
  if ( v4 )
    operator delete(v4);
  if ( v3 )
    operator delete(v3);
  return v10;
}
