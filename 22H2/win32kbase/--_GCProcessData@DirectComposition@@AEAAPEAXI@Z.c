/*
 * XREFs of ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C020A184
 * Callers:
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C00336CC (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1C00338F8 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CProcessData *__fastcall DirectComposition::CProcessData::`scalar deleting destructor'(
        DirectComposition::CProcessData *this,
        unsigned int a2)
{
  DirectComposition::CProcessData::~CProcessData(this, a2);
  if ( this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
