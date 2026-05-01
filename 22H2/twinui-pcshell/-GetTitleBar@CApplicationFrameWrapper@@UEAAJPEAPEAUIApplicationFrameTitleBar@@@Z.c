/*
 * XREFs of ?GetTitleBar@CApplicationFrameWrapper@@UEAAJPEAPEAUIApplicationFrameTitleBar@@@Z @ 0x180069EE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationFrameWrapper::GetTitleBar(
        CApplicationFrameWrapper *this,
        struct IApplicationFrameTitleBar **a2)
{
  struct IApplicationFrameTitleBar *v4; // rcx
  __int64 result; // rax

  v4 = (struct IApplicationFrameTitleBar *)*((_QWORD *)this + 15);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IApplicationFrameTitleBar *))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = (struct IApplicationFrameTitleBar *)*((_QWORD *)this + 15);
  }
  result = 0LL;
  *a2 = v4;
  return result;
}
