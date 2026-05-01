/*
 * XREFs of _lambda_639cdbf1b0b4bc5a158a88668f16cd2e_::_lambda_639cdbf1b0b4bc5a158a88668f16cd2e_ @ 0x180147740
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A690 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x18008171C (--0-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z.c)
 */

__int64 *__fastcall lambda_639cdbf1b0b4bc5a158a88668f16cd2e_::_lambda_639cdbf1b0b4bc5a158a88668f16cd2e_(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(a1, a2);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(a1 + 1, a3);
  return a1;
}
