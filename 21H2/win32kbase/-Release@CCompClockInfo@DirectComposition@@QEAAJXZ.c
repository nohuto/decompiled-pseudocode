/*
 * XREFs of ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x1C0211064
 * Callers:
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1C00951A0 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 *     NtDCompositionWaitForCompositorClock @ 0x1C0212230 (NtDCompositionWaitForCompositorClock.c)
 *     ?GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z @ 0x1C0213278 (-GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z.c)
 * Callees:
 *     ??_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z @ 0x1C0211030 (--_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CCompClockInfo::Release(DirectComposition::CCompClockInfo *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v1 && this )
    DirectComposition::CCompClockInfo::`scalar deleting destructor'(this);
  return v1;
}
