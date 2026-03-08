/*
 * XREFs of KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x14056C4D8
 * Callers:
 *     KeQueryPriorityThread @ 0x140240EA0 (KeQueryPriorityThread.c)
 *     KeQueryEffectivePriorityThread @ 0x1403A9A40 (KeQueryEffectivePriorityThread.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140226BD0 (KiProcessDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056C0C8 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 */

__int64 __fastcall KiUpdateVpBackingThreadPriorityOnPriorityQuery(ULONG_PTR BugCheckParameter1)
{
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  int v4; // eax
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v4 = 4;
    if ( CurrentIrql != 2 )
      v4 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v4;
  }
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v6);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
    KiUpdateVpBackingThreadPriorityFromTopLevel(BugCheckParameter1, (unsigned __int64)&v7);
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  return KiProcessDeferredReadyList((__int64)KeGetCurrentPrcb(), (__int64)&v7, CurrentIrql);
}
