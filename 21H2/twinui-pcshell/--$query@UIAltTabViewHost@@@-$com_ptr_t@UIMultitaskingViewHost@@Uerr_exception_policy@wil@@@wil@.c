/*
 * XREFs of ??$query@UIAltTabViewHost@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAltTabViewHost@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800CB7EC
 * Callers:
 *     _lambda_2e36a2b14ac9c065e7d81a4387bad0af_::operator() @ 0x18038F740 (_lambda_2e36a2b14ac9c065e7d81a4387bad0af_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAltTabViewHost>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_405444d2_baa5_48ed_abfe_a673f70be863, a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5495LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  return a2;
}
