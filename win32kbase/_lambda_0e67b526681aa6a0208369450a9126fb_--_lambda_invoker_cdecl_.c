/*
 * XREFs of _lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_ @ 0x1C01E6430
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_(CInputDest *a1)
{
  CInputDest::SetEmpty(a1);
  if ( a1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a1);
}
