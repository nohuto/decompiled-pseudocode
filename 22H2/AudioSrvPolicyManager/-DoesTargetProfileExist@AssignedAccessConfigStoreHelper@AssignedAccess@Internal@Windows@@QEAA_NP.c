/*
 * XREFs of ?DoesTargetProfileExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NPEBG@Z @ 0x180037AE0
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x180037338 (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180037780 (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x18003785C (-CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180037938 (-CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::DoesTargetProfileExist(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *this,
        const unsigned __int16 *a2)
{
  void *v3; // rdi
  char v4; // r14
  void *v5; // rbx
  void *v6; // rsi
  _QWORD *v7; // r15
  unsigned __int8 (__fastcall ***v8)(_QWORD, const unsigned __int16 *); // r12
  HANDLE ProcessHeap; // rax
  HANDLE v10; // rax
  HANDLE v11; // rax
  HANDLE v12; // rax
  HANDLE v13; // rax
  HANDLE v14; // rax
  HANDLE v15; // rax
  HANDLE v16; // rax
  LPVOID lpMem; // [rsp+20h] [rbp-40h] BYREF
  LPVOID v19; // [rsp+28h] [rbp-38h] BYREF
  LPVOID v20; // [rsp+30h] [rbp-30h] BYREF
  const unsigned __int16 *v21; // [rsp+38h] [rbp-28h]
  _QWORD v22[3]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+58h] [rbp-8h] BYREF

  v21 = a2;
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::CreateInstance(&v20);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::CreateInstance(&v19);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::CreateInstance(&lpMem);
  v3 = v20;
  v4 = 0;
  v5 = v19;
  if ( v20 && v19 )
  {
    v6 = lpMem;
    if ( lpMem )
    {
      v22[0] = v20;
      v7 = v22;
      v22[1] = v19;
      v22[2] = lpMem;
      while ( 1 )
      {
        v8 = (unsigned __int8 (__fastcall ***)(_QWORD, const unsigned __int16 *))*v7;
        if ( *((_DWORD *)this + 6) <= (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 24LL))(*v7) )
        {
          if ( (**v8)(v8, v21) )
            break;
        }
        if ( ++v7 == &v23 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v6);
          v10 = GetProcessHeap();
          HeapFree(v10, 0, v5);
          goto LABEL_15;
        }
      }
      v11 = GetProcessHeap();
      HeapFree(v11, 0, v6);
      v12 = GetProcessHeap();
      HeapFree(v12, 0, v5);
      v13 = GetProcessHeap();
      HeapFree(v13, 0, v3);
      return 1;
    }
  }
  else if ( lpMem )
  {
    v14 = GetProcessHeap();
    HeapFree(v14, 0, lpMem);
  }
  if ( v5 )
  {
    v15 = GetProcessHeap();
    HeapFree(v15, 0, v5);
  }
  if ( v3 )
  {
LABEL_15:
    v16 = GetProcessHeap();
    HeapFree(v16, 0, v3);
  }
  return v4;
}
