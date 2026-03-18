/*
 * XREFs of ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1C0009F20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C000C784 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CSystemChannel *__fastcall DirectComposition::CSystemChannel::`vector deleting destructor'(
        DirectComposition::CSystemChannel *this,
        char a2)
{
  DirectComposition::CApplicationChannel::~CApplicationChannel(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      this);
  return this;
}
