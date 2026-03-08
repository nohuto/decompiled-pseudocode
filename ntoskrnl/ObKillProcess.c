/*
 * XREFs of ObKillProcess @ 0x1406C0F5C
 * Callers:
 *     PspRundownSingleProcess @ 0x1406F8160 (PspRundownSingleProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140244770 (IoSetThreadHardErrorMode.c)
 *     ExpFreeHandleTable @ 0x140704400 (ExpFreeHandleTable.c)
 *     ExSweepHandleTable @ 0x1407D8110 (ExSweepHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1407DCE80 (ExpRemoveHandleTable.c)
 */

void __fastcall ObKillProcess(__int64 a1)
{
  void *v1; // rdi
  BOOLEAN v3; // bl

  v1 = *(void **)(a1 + 1392);
  if ( v1 )
  {
    v3 = IoSetThreadHardErrorMode(0);
    ExSweepHandleTable(a1, v1, 0LL);
    IoSetThreadHardErrorMode(v3);
    *(_QWORD *)(a1 + 1392) = 0LL;
    ExpRemoveHandleTable(v1);
    ExpFreeHandleTable(v1);
  }
}
