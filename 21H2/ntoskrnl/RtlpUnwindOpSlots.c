/*
 * XREFs of RtlpUnwindOpSlots @ 0x14025DAA8
 * Callers:
 *     RtlpUnwindEpilogue @ 0x14025D8EC (RtlpUnwindEpilogue.c)
 *     RtlpxVirtualUnwind @ 0x140296FC0 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x140297430 (RtlpUnwindPrologue.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlpUnwindOpSlots(unsigned __int16 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = HIBYTE(a1) & 0xF;
  if ( (unsigned int)v1 >= 0xB )
    RtlRaiseStatus(3221225727LL);
  result = *((unsigned __int8 *)RtlpUnwindOpSlotTable + v1);
  if ( (_DWORD)v1 == 1 && (a1 & 0xF000u) != 0 )
    return (unsigned int)(result + 1);
  return result;
}
