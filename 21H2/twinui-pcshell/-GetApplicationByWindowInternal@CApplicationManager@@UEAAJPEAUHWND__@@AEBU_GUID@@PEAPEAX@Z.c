/*
 * XREFs of ?GetApplicationByWindowInternal@CApplicationManager@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180044CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::GetApplicationByWindowInternal(
        CApplicationManager *this,
        HWND a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rbx
  int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  int v14; // ebx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD); // rcx
  __int64 (__fastcall ***v16)(_QWORD, const struct _GUID *, void **); // rcx
  HWND v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]
  char v20; // [rsp+48h] [rbp-8h]
  _QWORD *v21; // [rsp+90h] [rbp+40h] BYREF
  HWND v22; // [rsp+98h] [rbp+48h]
  __int64 (__fastcall ***v23)(_QWORD, const struct _GUID *, void **); // [rsp+A8h] [rbp+58h] BYREF

  v22 = a2;
  *a4 = 0LL;
  v23 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( *((_QWORD *)this + 50) )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 49) + 8 * v8);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v10 = -1;
      v21 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD **))v9)(
             v9,
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &v21) >= 0 )
      {
        v11 = *v21;
        v18 = v22;
        v19 = 0LL;
        v20 = 0;
        v10 = ((*(unsigned __int8 (__fastcall **)(_QWORD *, HWND *, __int64))(v11 + 296))(v21, &v18, 2LL) != 0) - 1;
        v12 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      v13 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      if ( !v10 )
        break;
      if ( (unsigned __int64)++v8 >= *((_QWORD *)this + 50) )
        goto LABEL_18;
    }
    v7 = v8;
    v14 = 0;
  }
  else
  {
LABEL_18:
    v14 = -2147319765;
  }
  if ( v14 >= 0 )
  {
    v15 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))(*((_QWORD *)this + 49) + 8 * v7);
    v14 = (**v15)(v15, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v23);
    if ( v14 >= 0 )
      v14 = (**v23)(v23, a3, a4);
  }
  v16 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **)))(*v16)[2])(v16);
  }
  return (unsigned int)v14;
}
