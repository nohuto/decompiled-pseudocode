/*
 * XREFs of ??_GCChannel@DirectComposition@@MEAAPEAXI@Z @ 0x1C024A500
 * Callers:
 *     <none>
 * Callees:
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C009986C (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CChannel *__fastcall DirectComposition::CChannel::`scalar deleting destructor'(
        DirectComposition::CChannel *this,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  DirectComposition::CChannel::~CChannel(this, a2);
  if ( (v2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
