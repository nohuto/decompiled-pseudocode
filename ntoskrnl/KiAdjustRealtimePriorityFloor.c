/*
 * XREFs of KiAdjustRealtimePriorityFloor @ 0x14033FCCC
 * Callers:
 *     ExpQueueWorkItem @ 0x14033EE40 (ExpQueueWorkItem.c)
 *     KeRemovePriQueue @ 0x140352720 (KeRemovePriQueue.c)
 *     KiTryUnwaitThreadWithPriority @ 0x14035538C (KiTryUnwaitThreadWithPriority.c)
 *     KeSetActualBasePriorityThread @ 0x140357730 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140369500 (KeSetBasePriorityThread.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __fastcall KiAdjustRealtimePriorityFloor(ULONG_PTR BugCheckParameter1, int a2)
{
  int v2; // r9d
  char v4; // al
  char v5; // al
  char v6; // cl

  v2 = *(_DWORD *)(BugCheckParameter1 + 1028);
  if ( a2 >= 16 )
  {
    v6 = *(_BYTE *)((char)a2 + BugCheckParameter1 + 824);
    if ( v6 == -1 )
      KeBugCheckEx(0x157u, BugCheckParameter1, (char)a2, 1uLL, 0LL);
    *(_BYTE *)((char)a2 + BugCheckParameter1 + 824) = v6 + 1;
    *(_DWORD *)(BugCheckParameter1 + 856) |= 1 << a2;
  }
  else
  {
    a2 = 32;
  }
  *(_DWORD *)(BugCheckParameter1 + 1028) = a2;
  if ( v2 != 32 )
  {
    v4 = *(_BYTE *)((char)v2 + BugCheckParameter1 + 824);
    if ( !v4 )
      KeBugCheckEx(0x157u, BugCheckParameter1, (char)v2, 2uLL, 0LL);
    v5 = v4 - 1;
    *(_BYTE *)((char)v2 + BugCheckParameter1 + 824) = v5;
    if ( !v5 )
      *(_DWORD *)(BugCheckParameter1 + 856) ^= 1 << v2;
  }
}
