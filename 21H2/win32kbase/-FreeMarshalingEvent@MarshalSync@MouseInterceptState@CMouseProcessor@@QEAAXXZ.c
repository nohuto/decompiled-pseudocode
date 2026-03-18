/*
 * XREFs of ?FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C005A8E0
 * Callers:
 *     ??1MouseInterceptState@CMouseProcessor@@QEAA@XZ @ 0x1C005A8A8 (--1MouseInterceptState@CMouseProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent(void **this)
{
  if ( *this )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      *this);
    *this = 0LL;
  }
}
