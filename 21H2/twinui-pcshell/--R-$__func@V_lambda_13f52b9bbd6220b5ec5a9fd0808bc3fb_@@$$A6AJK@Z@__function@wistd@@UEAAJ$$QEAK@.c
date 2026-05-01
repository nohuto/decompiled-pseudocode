/*
 * XREFs of ??R?$__func@V_lambda_13f52b9bbd6220b5ec5a9fd0808bc3fb_@@$$A6AJK@Z@__function@wistd@@UEAAJ$$QEAK@Z @ 0x1800E8920
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_13f52b9bbd6220b5ec5a9fd0808bc3fb_,long (unsigned long)>::operator()(
        __int64 a1,
        unsigned int *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 16))(*(_QWORD *)(a1 + 8), *a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E,
      (__int64)"internal\\shell\\private\\inc\\SmartCookie.h",
      (const char *)(unsigned int)v2);
  return v3;
}
