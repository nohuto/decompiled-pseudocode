/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_209d4bad6fea09852d6c87e7361f85eb_@@CA@PEAX@Z @ 0x1C015D5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall _lambda_209d4bad6fea09852d6c87e7361f85eb_::_lambda_invoker_cdecl_(char *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    if ( a1 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
  }
}
