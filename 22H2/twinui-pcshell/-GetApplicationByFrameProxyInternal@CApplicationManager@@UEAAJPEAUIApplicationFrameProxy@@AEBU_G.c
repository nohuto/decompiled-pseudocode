/*
 * XREFs of ?GetApplicationByFrameProxyInternal@CApplicationManager@@UEAAJPEAUIApplicationFrameProxy@@AEBU_GUID@@PEAPEAX@Z @ 0x1800402E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CApplicationManager::GetApplicationByFrameProxyInternal(
        CApplicationManager *this,
        struct IApplicationFrameProxy *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rbx
  int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD); // rcx
  __int64 (__fastcall ***v16)(_QWORD, const struct _GUID *, void **); // rcx
  __int64 (__fastcall ***v18)(_QWORD, const struct _GUID *, void **); // [rsp+80h] [rbp+8h] BYREF
  __int64 v19; // [rsp+88h] [rbp+10h] BYREF
  __int64 v20; // [rsp+98h] [rbp+20h] BYREF

  *a4 = 0LL;
  v18 = 0LL;
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)a2 + 8LL))(a2);
  v18 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( *((_QWORD *)this + 50) )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 49) + 8 * v9);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v11 = -1;
      v20 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
             v10,
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &v20) >= 0 )
      {
        v19 = 0LL;
        if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 496LL))(v20, &v19) >= 0 )
          v11 = ((*(unsigned __int8 (__fastcall **)(__int64, struct IApplicationFrameProxy *))(*(_QWORD *)v19 + 232LL))(
                   v19,
                   a2) != 0)
              - 1;
        v12 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      v13 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      if ( !v11 )
        break;
      if ( (unsigned __int64)++v9 >= *((_QWORD *)this + 50) )
        goto LABEL_25;
    }
    v8 = v9;
    v14 = 0;
  }
  else
  {
LABEL_25:
    v14 = -2147319765;
  }
  if ( v14 >= 0 )
  {
    v15 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))(*((_QWORD *)this + 49) + 8 * v8);
    v14 = (**v15)(v15, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v18);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v14 >= 0 )
    v14 = (**v18)(v18, a3, a4);
  v16 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **)))(*v16)[2])(v16);
  }
  return (unsigned int)v14;
}
