/*
 * XREFs of ??$query@UIWICBitmapSource@@@?$com_ptr_t@UIWICBitmap@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIWICBitmapSource@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800D33C4
 * Callers:
 *     _anonymous_namespace_::GetBitmapStreamFromHICON @ 0x1803EB45C (_anonymous_namespace_--GetBitmapStreamFromHICON.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IWICBitmap,wil::err_exception_policy>::query<IWICBitmapSource>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94, a2);
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
