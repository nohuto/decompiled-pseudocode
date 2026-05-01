/*
 * XREFs of winrt::Windows::Foundation::AsyncOperationCompletedHandler_unsigned_int_::AsyncOperationCompletedHandler_unsigned_int___lambda_2c0233b8eff337f44babb0a39eb13a06___ @ 0x1804CFC34
 * Callers:
 *     ??$make_agile_delegate@U?$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$AsyncOperationCompletedHandler@I@Foundation@Windows@1@AEBU2341@@Z @ 0x1804D0C78 (--$make_agile_delegate@U-$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@@impl@winrt.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::AsyncOperationCompletedHandler_unsigned_int_::AsyncOperationCompletedHandler_unsigned_int___lambda_2c0233b8eff337f44babb0a39eb13a06___(
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
  *v6 = off_180507590;
  *a1 = v6;
  if ( *a2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a2);
  return a1;
}
