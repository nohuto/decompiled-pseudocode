/*
 * XREFs of EtwpEnqueueOverflowBuffer @ 0x140300FB4
 * Callers:
 *     EtwpSwitchBuffer @ 0x140205FF4 (EtwpSwitchBuffer.c)
 *     EtwpDequeueFreeBuffer @ 0x14020620C (EtwpDequeueFreeBuffer.c)
 * Callees:
 *     EtwpUnlockBufferList @ 0x140206498 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1402064E4 (EtwpLockBufferList.c)
 */

__int64 __fastcall EtwpEnqueueOverflowBuffer(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int8 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 44), 0, 1);
  EtwpLockBufferList(a1, &v5);
  *(_QWORD *)(a2 + 32) = 0LL;
  **(_QWORD **)(a1 + 64) = a2 + 32;
  *(_QWORD *)(a1 + 64) = a2 + 32;
  result = EtwpUnlockBufferList(a1, &v5);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
  return result;
}
