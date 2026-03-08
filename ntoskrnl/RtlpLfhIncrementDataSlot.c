/*
 * XREFs of RtlpLfhIncrementDataSlot @ 0x14040C250
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x140310BA0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 */

__int64 RtlpLfhIncrementDataSlot()
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int16 Spare18_high; // bx
  __int16 v2; // ax
  __int16 v3; // ax

  CurrentThread = KeGetCurrentThread();
  Spare18_high = (unsigned __int8)HIWORD(CurrentThread[1].Spare18);
  if ( Spare18_high == HIBYTE(HIWORD(CurrentThread[1].Spare18)) )
  {
    v2 = ExGenRandom(1);
    v3 = (v2 << 8) | (unsigned __int8)(v2 + 1);
  }
  else
  {
    v3 = (unsigned __int8)(HIWORD(CurrentThread[1].Spare18) ^ (Spare18_high + 1)) ^ HIWORD(CurrentThread[1].Spare18);
  }
  HIWORD(CurrentThread[1].Spare18) = v3;
  return Spare18_high;
}
