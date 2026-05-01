/*
 * XREFs of winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::hstring_::AsyncOperationCompletedHandler_winrt::hstring___lambda_5a4cba7ff8acc8443f19110888439e90___ @ 0x18009BB10
 * Callers:
 *     ??$wait_for_completed@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@1@I@Z @ 0x18004D36C (--$wait_for_completed@U-$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 *     _lambda_f0c7bfcec3116c957850ec0211f27af7_::__lambda_f0c7bfcec3116c957850ec0211f27af7_ @ 0x1800A12C4 (_lambda_f0c7bfcec3116c957850ec0211f27af7_--__lambda_f0c7bfcec3116c957850ec0211f27af7_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::hstring_::AsyncOperationCompletedHandler_winrt::hstring___lambda_5a4cba7ff8acc8443f19110888439e90___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  _QWORD *v6; // [rsp+38h] [rbp+10h]

  v6 = operator new(0x18uLL);
  v4 = *a2;
  *a2 = 0LL;
  v6[1] = v4;
  *((_DWORD *)v6 + 4) = 1;
  *v6 = off_180501558;
  *a1 = v6;
  lambda_f0c7bfcec3116c957850ec0211f27af7_::__lambda_f0c7bfcec3116c957850ec0211f27af7_(a2);
  return a1;
}
