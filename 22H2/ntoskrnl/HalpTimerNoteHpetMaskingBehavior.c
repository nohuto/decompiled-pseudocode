/*
 * XREFs of HalpTimerNoteHpetMaskingBehavior @ 0x14037AFFC
 * Callers:
 *     HalpTimerInitialize @ 0x14037ABD0 (HalpTimerInitialize.c)
 * Callees:
 *     HalpFindTimer @ 0x14037B658 (HalpFindTimer.c)
 */

__int64 HalpTimerNoteHpetMaskingBehavior()
{
  __int64 result; // rax
  __int64 Timer; // rax

  result = HalpFindTimer(3, 256, 0, 0, 1);
  if ( result )
  {
    Timer = HalpFindTimer(4, 0, 0, 0, 1);
    if ( Timer )
      *(_DWORD *)(Timer + 224) &= 0xFFFFF0FF;
    result = HalpFindTimer(2, 0, 0, 0, 1);
    if ( result )
      *(_DWORD *)(result + 224) &= 0xFFFFF0FF;
  }
  return result;
}
