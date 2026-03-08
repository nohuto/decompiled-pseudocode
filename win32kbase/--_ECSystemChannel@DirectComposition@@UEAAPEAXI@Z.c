/*
 * XREFs of ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1C0098700
 * Callers:
 *     <none>
 * Callees:
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C0098BC8 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CSystemChannel *__fastcall DirectComposition::CSystemChannel::`vector deleting destructor'(
        DirectComposition::CSystemChannel *this,
        char a2)
{
  DirectComposition::CApplicationChannel::~CApplicationChannel(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
