/*
 * XREFs of KiDeferredReadyThread @ 0x140226178
 * Callers:
 *     KiFastReadyThread @ 0x140239100 (KiFastReadyThread.c)
 *     KiQueueReadyThread @ 0x140257C00 (KiQueueReadyThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1403557B8 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140226FA0 (KiReadyDeferredReadyList.c)
 */

__int64 __fastcall KiDeferredReadyThread(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)(a2 + 216) = 0LL;
  v3 = a2 + 216;
  return KiReadyDeferredReadyList(a1, &v3);
}
