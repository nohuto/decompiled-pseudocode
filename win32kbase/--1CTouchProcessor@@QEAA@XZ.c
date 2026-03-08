/*
 * XREFs of ??1CTouchProcessor@@QEAA@XZ @ 0x1C00954DC
 * Callers:
 *     ?UnInitialize@CTouchProcessor@@SAJXZ @ 0x1C0094E4C (-UnInitialize@CTouchProcessor@@SAJXZ.c)
 *     ??1CPTPProcessor@@AEAA@XZ @ 0x1C020CC9C (--1CPTPProcessor@@AEAA@XZ.c)
 * Callees:
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C0094C10 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C00952E4 (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 */

void __fastcall CTouchProcessor::~CTouchProcessor(PVOID *this)
{
  *this = &CBaseProcessor::`vftable';
  CTouchProcessor::CleanupCoalesceInfo((CTouchProcessor *)this);
  CInpLockGuard::Uninitialize(this + 4);
  *this = &CBaseProcessor::`vftable';
}
