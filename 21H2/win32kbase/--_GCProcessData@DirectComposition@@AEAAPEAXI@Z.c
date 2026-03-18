/*
 * XREFs of ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C009516C
 * Callers:
 *     DCompositionProcessCallout @ 0x1C0094EF0 (DCompositionProcessCallout.c)
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C0094F38 (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1C00951A0 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 */

DirectComposition::CProcessData *__fastcall DirectComposition::CProcessData::`scalar deleting destructor'(
        DirectComposition::CProcessData *this)
{
  DirectComposition::CProcessData::~CProcessData(this);
  if ( this )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
