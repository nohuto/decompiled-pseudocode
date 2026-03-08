/*
 * XREFs of ??_EPTPEngineTraceProducer@@UEAAPEAXI@Z @ 0x1C023B640
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1PTPEngineTraceProducer@@UEAA@XZ @ 0x1C023B5F0 (--1PTPEngineTraceProducer@@UEAA@XZ.c)
 */

PTPEngineTraceProducer *__fastcall PTPEngineTraceProducer::`vector deleting destructor'(
        PTPEngineTraceProducer *this,
        char a2)
{
  PTPEngineTraceProducer::~PTPEngineTraceProducer(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
