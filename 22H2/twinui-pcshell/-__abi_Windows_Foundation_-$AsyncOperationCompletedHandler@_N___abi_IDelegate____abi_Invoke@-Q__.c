/*
 * XREFs of ?__abi_Windows_Foundation_?$AsyncOperationCompletedHandler@_N___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@?$AsyncOperationCompletedHandler@_N@Foundation@Windows@@234@UE$AAAJPE$AAU?$IAsyncOperation@_N@34@W4AsyncStatus@34@@Z @ 0x180398690
 * Callers:
 *     <none>
 * Callees:
 *     ?Invoke@?$AsyncOperationCompletedHandler@_N@Foundation@Windows@@UE$AAAXPE$AAU?$IAsyncOperation@_N@23@W4AsyncStatus@23@@Z @ 0x180395910 (-Invoke@-$AsyncOperationCompletedHandler@_N@Foundation@Windows@@UE$AAAXPE$AAU-$IAsyncOperation@_.c)
 */

__int64 __fastcall ___abi_Windows_Foundation___AsyncOperationCompletedHandler__N___abi_IDelegate____abi_Invoke__Q__abi_IDelegate___AsyncOperationCompletedHandler__N_Foundation_Windows__234_UE_AAAJPE_AAU__IAsyncOperation__N_34_W4AsyncStatus_34__Z(
        _QWORD **a1)
{
  try
  {
    Windows::Foundation::AsyncOperationCompletedHandler<bool>::Invoke(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
