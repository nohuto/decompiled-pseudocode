/*
 * XREFs of RtlpUnwindOpSlots @ 0x1404641F0
 * Callers:
 *     RtlpxVirtualUnwind @ 0x1402A5960 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x1402A5E30 (RtlpUnwindPrologue.c)
 *     RtlpUnwindEpilogue @ 0x140463D60 (RtlpUnwindEpilogue.c)
 *     RtlIsSpecialUnwind @ 0x1405B19DC (RtlIsSpecialUnwind.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlpUnwindOpSlots(unsigned __int16 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = HIBYTE(a1) & 0xF;
  if ( (unsigned int)v1 >= 0xB )
    RtlRaiseStatus(-1073741569);
  result = *((unsigned __int8 *)RtlpUnwindOpSlotTable + v1);
  if ( (_DWORD)v1 == 1 && (a1 & 0xF000u) != 0 )
    return (unsigned int)(result + 1);
  return result;
}
