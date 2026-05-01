/*
 * XREFs of CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::OnEndBatchUpdate @ 0x18047E490
 * Callers:
 *     <none>
 * Callees:
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback @ 0x1804810B0 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_InvokeCallback.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::OnEndBatchUpdate(
        __int64 a1)
{
  bool v1; // zf
  __int64 result; // rax

  v1 = (*(_DWORD *)(a1 + 40))-- == 1;
  if ( v1 )
  {
    v1 = *(_DWORD *)(a1 + 24) == 0;
    *(_DWORD *)(a1 + 28) = 2;
    if ( v1 || !*(_QWORD *)(a1 + 32) )
      return CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback();
  }
  return result;
}
