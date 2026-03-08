/*
 * XREFs of ??_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z @ 0x1C0247E50
 * Callers:
 *     ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x1C00080A0 (-Release@CCompClockInfo@DirectComposition@@QEAAJXZ.c)
 *     ?Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z @ 0x1C000831C (-Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CCompClockInfo@DirectComposition@@AEAA@XZ @ 0x1C0247E24 (--1CCompClockInfo@DirectComposition@@AEAA@XZ.c)
 */

DirectComposition::CCompClockInfo *__fastcall DirectComposition::CCompClockInfo::`scalar deleting destructor'(
        DirectComposition::CCompClockInfo *this)
{
  DirectComposition::CCompClockInfo::~CCompClockInfo(this);
  if ( this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
