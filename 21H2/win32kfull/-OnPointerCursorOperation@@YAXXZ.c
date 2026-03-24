/*
 * XREFs of ?OnPointerCursorOperation@@YAXXZ @ 0x1C0028340
 * Callers:
 *     <none>
 * Callees:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C0028388 (-HandlePointerCursorSideOp@@YAXXZ.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00C14A4 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00C14D0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DAC78 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 */

void OnPointerCursorOperation(void)
{
  const struct tagPOINTERCURSORDATA *v0; // rbx
  char v1; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v1,
    "PointerCursorOperation",
    0LL);
  HandlePointerCursorSideOp();
  v0 = (const struct tagPOINTERCURSORDATA *)_InterlockedExchange64((volatile __int64 *)&Feedback::gppcdLatest, 0LL);
  if ( v0 )
  {
    RenderCursor(v0);
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)&(&Feedback::gppcdFree)[(v0 - (const struct tagPOINTERCURSORDATA *)&Feedback::gpcd)
                                                       / 0xCuLL],
      (signed __int64)v0,
      0LL);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v1);
}
