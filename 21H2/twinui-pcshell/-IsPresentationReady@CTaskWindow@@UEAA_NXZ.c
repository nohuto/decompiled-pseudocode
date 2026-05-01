/*
 * XREFs of ?IsPresentationReady@CTaskWindow@@UEAA_NXZ @ 0x18004BDB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CTaskWindow::IsPresentationReady(CTaskWindow *this)
{
  void (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rcx
  char v2; // bl
  __int64 v3; // rcx
  bool v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 6);
  v2 = 0;
  v5 = v1 == 0LL;
  if ( !v1 )
    return 1;
  v6 = 0LL;
  (**v1)(v1, &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e, &v6);
  (*(void (__fastcall **)(__int64, bool *))(*(_QWORD *)v6 + 72LL))(v6, &v5);
  v3 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( v5 )
    return 1;
  return v2;
}
