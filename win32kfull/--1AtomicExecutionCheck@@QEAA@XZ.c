/*
 * XREFs of ??1AtomicExecutionCheck@@QEAA@XZ @ 0x1C01A6EB0
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

void __fastcall AtomicExecutionCheck::~AtomicExecutionCheck(AtomicExecutionCheck *this)
{
  AtomicExecutionCheck::Disarm(this);
}
