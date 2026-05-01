/*
 * XREFs of ??$com_weak_query_failfast@AEAPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1802BAD04
 * Callers:
 *     holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_fa229aea017a19cbc9cb3db68405d883___ @ 0x1800C8290 (holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem__lambda_fa229ae.c)
 *     holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_cc5deaedd2cfca8d7c581af421c5ead5___ @ 0x1800C8354 (holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem__lambda_cc5deae.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180097E78 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetWeakReference@VWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@details@wil@@YAJPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAPEAUIWeakReference@@@Z @ 0x1802B9B14 (--$GetWeakReference@VWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@details@wil@@Y.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_weak_query_failfast<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem * &>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rbx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a2;
  *a1 = 0LL;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(a1);
  v4 = wil::details::GetWeakReference<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem>(v3, a1);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1785LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  return a1;
}
