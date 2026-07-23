/*
 * XREFs of RtlpLfhIncrementDataSlot @ 0x1403F89C4
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x140347B90 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 */

__int64 RtlpLfhIncrementDataSlot()
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int16 Ucb_high; // bx
  __int16 v2; // ax
  __int16 v3; // ax

  CurrentThread = KeGetCurrentThread();
  Ucb_high = (unsigned __int8)HIWORD(CurrentThread[1].Ucb);
  if ( Ucb_high == HIBYTE(HIWORD(CurrentThread[1].Ucb)) )
  {
    v2 = ExGenRandom(1);
    v3 = (v2 << 8) | (unsigned __int8)(v2 + 1);
  }
  else
  {
    v3 = (unsigned __int8)(HIWORD(CurrentThread[1].Ucb) ^ (Ucb_high + 1)) ^ HIWORD(CurrentThread[1].Ucb);
  }
  HIWORD(CurrentThread[1].Ucb) = v3;
  return Ucb_high;
}
