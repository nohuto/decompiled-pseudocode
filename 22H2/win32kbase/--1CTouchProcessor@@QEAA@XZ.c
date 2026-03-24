/*
 * XREFs of ??1CTouchProcessor@@QEAA@XZ @ 0x1C0075F88
 * Callers:
 *     UnInitializeInputComponents @ 0x1C00747B0 (UnInitializeInputComponents.c)
 *     ??1CPTPProcessor@@AEAA@XZ @ 0x1C01A5168 (--1CPTPProcessor@@AEAA@XZ.c)
 * Callees:
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C00760A0 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C00B8510 (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 */

void __fastcall CTouchProcessor::~CTouchProcessor(CTouchProcessor *this)
{
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  CTouchProcessor::CleanupCoalesceInfo(this);
  CInpLockGuard::Uninitialize((CTouchProcessor *)((char *)this + 40));
  *(_QWORD *)this = &CBaseProcessor::`vftable';
}
