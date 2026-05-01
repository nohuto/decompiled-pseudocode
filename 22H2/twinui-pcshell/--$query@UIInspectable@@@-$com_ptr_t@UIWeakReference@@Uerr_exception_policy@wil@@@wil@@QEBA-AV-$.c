/*
 * XREFs of ??$query@UIInspectable@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@1@XZ @ 0x1803AA098
 * Callers:
 *     _lambda_2af879ce2c9e3fcc02b051f4333a3601_::operator() @ 0x1800CD3B4 (_lambda_2af879ce2c9e3fcc02b051f4333a3601_--operator().c)
 *     _lambda_2b7617dbfdc701c36860009cb2ce5ed6_::operator() @ 0x1800CD440 (_lambda_2b7617dbfdc701c36860009cb2ce5ed6_--operator().c)
 *     _lambda_ea573f709c56e8aaa4f248405340d00e_::operator() @ 0x1800CD718 (_lambda_ea573f709c56e8aaa4f248405340d00e_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::query<IInspectable>(
        _QWORD *a1,
        _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)*a1 + 24LL))(
         *a1,
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         a2);
  if ( v3 < 0 )
    goto LABEL_6;
  if ( !*a2 )
    v3 = -2147023728;
  if ( v3 < 0 )
  {
LABEL_6:
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5495LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x1803AA0F2LL);
  }
  return a2;
}
