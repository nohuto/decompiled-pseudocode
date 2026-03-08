/*
 * XREFs of ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x1C00080A0
 * Callers:
 *     NtDCompositionWaitForCompositorClock @ 0x1C0007F80 (NtDCompositionWaitForCompositorClock.c)
 *     ?GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z @ 0x1C0008188 (-GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z.c)
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1C006BD88 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     ??_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z @ 0x1C0247E50 (--_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CCompClockInfo::Release(DirectComposition::CCompClockInfo *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
    DirectComposition::CCompClockInfo::`scalar deleting destructor'(this, a2);
  return v2;
}
