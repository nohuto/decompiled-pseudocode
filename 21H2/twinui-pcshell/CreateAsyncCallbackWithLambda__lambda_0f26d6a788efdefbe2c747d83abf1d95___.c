/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_0f26d6a788efdefbe2c747d83abf1d95___ @ 0x1801FB74C
 * Callers:
 *     CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___ @ 0x1801FC794 (CApplicationViewManager--_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_0f26d6a788efdefbe2c747d83abf1d95___::CAsyncCallbackWithLambda__lambda_0f26d6a788efdefbe2c747d83abf1d95___ @ 0x1801FCB78 (CAsyncCallbackWithLambda__lambda_0f26d6a788efdefbe2c747d83abf1d95___--CAsyncCallbackWithLambda__.c)
 */

__int64 *__fastcall CreateAsyncCallbackWithLambda__lambda_0f26d6a788efdefbe2c747d83abf1d95_(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 *result; // rax

  v4 = 0LL;
  v5 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = CAsyncCallbackWithLambda__lambda_0f26d6a788efdefbe2c747d83abf1d95___::CAsyncCallbackWithLambda__lambda_0f26d6a788efdefbe2c747d83abf1d95___(
           v5,
           a2);
  result = a1;
  *a1 = v4;
  return result;
}
