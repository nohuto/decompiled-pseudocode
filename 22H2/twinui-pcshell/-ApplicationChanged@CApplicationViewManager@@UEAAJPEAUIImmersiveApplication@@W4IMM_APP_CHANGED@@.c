/*
 * XREFs of ?ApplicationChanged@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x18003FE20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationViewManager::ApplicationChanged(RTL_SRWLOCK *a1, __int64 a2, int a3)
{
  RTL_SRWLOCK *v6; // r14
  __int64 v7; // rbx
  PVOID i; // rdi
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v10; // rcx
  _QWORD *Ptr; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // edi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+28h] [rbp-40h] BYREF
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22; // [rsp+38h] [rbp-30h]
  __int64 v23; // [rsp+40h] [rbp-28h]
  RTL_SRWLOCK *v24; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v26; // [rsp+80h] [rbp+18h] BYREF

  if ( a3 != 8 )
    return 0LL;
  v6 = a1 + 61;
  v24 = a1 + 61;
  AcquireSRWLockShared(a1 + 61);
  v23 = 0LL;
  v7 = 0LL;
  v22 = 0LL;
  for ( i = 0LL; !v7 && i < a1[63].Ptr; i = (char *)i + 1 )
  {
    v20 = 0LL;
    v9 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a1[62].Ptr + (_QWORD)i);
    if ( (**v9)(v9, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v20) >= 0 )
    {
      v19 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 24LL))(v20, &v19) >= 0
        && (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v19 + 104LL))(v19, a2, &v26) >= 0 )
      {
        if ( v26 )
        {
          Ptr = a1[62].Ptr;
          v12 = Ptr[(_QWORD)i];
          if ( v12 )
          {
            v7 = Ptr[(_QWORD)i];
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
            v22 = v7;
          }
        }
      }
      v13 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    v10 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  v23 = v7;
  v14 = -2147319765;
  if ( v7 )
    v14 = 0;
  if ( v6 )
    ReleaseSRWLockShared(v6);
  if ( v14 >= 0 )
  {
    v21 = 0LL;
    v15 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v7)(
            v7,
            &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0,
            &v21);
    v14 = v15;
    if ( v15 < 0 )
    {
      v18 = 811LL;
    }
    else
    {
      LOBYTE(v16) = 1;
      v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 40LL))(v21, v16);
      v14 = v15;
      if ( v15 >= 0 )
        goto LABEL_24;
      v18 = 812LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v15,
      v19);
LABEL_24:
    v17 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v14;
}
