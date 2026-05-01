/*
 * XREFs of ?get_RelativePositionAnchorView@PresentationRequestedArgs@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1801CAFB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PresentationRequestedArgs::get_RelativePositionAnchorView(
        PresentationRequestedArgs *this,
        struct IApplicationView **a2)
{
  struct IApplicationView *v2; // rcx
  __int64 result; // rax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct IApplicationView *)*((_QWORD *)this + 8);
  if ( !v2 )
    return 2147943568LL;
  *a2 = v2;
  try
  {
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v2 + 8LL))(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2BA,
                           (__int64)"pcshell\\twinui\\appmanager\\lib\\amcommon.cpp",
                           v4);
  }
  return result;
}
