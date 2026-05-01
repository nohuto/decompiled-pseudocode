/*
 * XREFs of ?GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x1800415F0
 * Callers:
 *     _lambda_0f26d6a788efdefbe2c747d83abf1d95_::operator() @ 0x1801FD5C0 (_lambda_0f26d6a788efdefbe2c747d83abf1d95_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationViewManager::GetViewForApplication(
        RTL_SRWLOCK *this,
        struct IImmersiveApplication *a2,
        struct IApplicationView **a3)
{
  RTL_SRWLOCK *v6; // rdi
  unsigned int v7; // r14d
  struct IApplicationView *v8; // rbx
  PVOID i; // rsi
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v11; // rcx
  _QWORD *Ptr; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v6 = this + 67;
  AcquireSRWLockShared(this + 67);
  v7 = 0;
  *a3 = 0LL;
  v8 = 0LL;
  for ( i = 0LL; !v8 && i < this[69].Ptr; i = (char *)i + 1 )
  {
    v18 = 0LL;
    v10 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this[68].Ptr + (_QWORD)i);
    if ( (**v10)(v10, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v18) >= 0 )
    {
      v17 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 24LL))(v18, &v17) >= 0
        && (*(int (__fastcall **)(__int64, struct IImmersiveApplication *, int *))(*(_QWORD *)v17 + 104LL))(
             v17,
             a2,
             &v16) >= 0 )
      {
        if ( v16 )
        {
          Ptr = this[68].Ptr;
          v13 = Ptr[(_QWORD)i];
          if ( v13 )
          {
            v8 = (struct IApplicationView *)Ptr[(_QWORD)i];
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
          }
        }
      }
      v14 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
    v11 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  *a3 = v8;
  if ( !v8 )
    v7 = -2147319765;
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v7;
}
