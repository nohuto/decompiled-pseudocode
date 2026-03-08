/*
 * XREFs of VmFlushTb @ 0x14045DE9C
 * Callers:
 *     KeFlushSingleTb @ 0x140211E60 (KeFlushSingleTb.c)
 *     KeFlushTb @ 0x140323CB0 (KeFlushTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140387610 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushSingleCurrentTb @ 0x140387AD4 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeTb @ 0x14038C374 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     VmpFlushTb @ 0x14045E4DA (VmpFlushTb.c)
 */

struct _KTHREAD *__fastcall VmFlushTb(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax
  volatile LONG *v4; // rcx

  if ( a3 == 1 )
  {
    result = KeGetCurrentThread();
    v4 = (volatile LONG *)result->ApcState.Process[2].Affinity.StaticBitmap[5];
    if ( v4 )
      return (struct _KTHREAD *)VmpFlushTb(v4);
  }
  return result;
}
