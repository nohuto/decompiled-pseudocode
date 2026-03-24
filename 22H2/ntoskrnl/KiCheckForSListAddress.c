/*
 * XREFs of KiCheckForSListAddress @ 0x14024CF20
 * Callers:
 *     KiDeliverApc @ 0x14024A0C0 (KiDeliverApc.c)
 *     KxIsrLinkage @ 0x1404011C0 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140402C80 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140402F70 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140403260 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140403550 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140403840 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1404045E0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140405370 (KiIpiInterrupt.c)
 *     KiDispatchInterrupt @ 0x140405BD0 (KiDispatchInterrupt.c)
 *     KiNmiInterruptStart @ 0x14040A440 (KiNmiInterruptStart.c)
 *     KiPageFault @ 0x14040D300 (KiPageFault.c)
 *     KiMcheckAbort @ 0x14040E1C0 (KiMcheckAbort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiCheckForSListAddress(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx

  result = *(unsigned __int16 *)(a1 + 368);
  v2 = *(_QWORD *)(a1 + 360);
  if ( (_WORD)result == 51 )
  {
    result = KeUserPopEntrySListResume;
    if ( v2 > KeUserPopEntrySListResume && v2 <= KeUserPopEntrySListEnd )
      *(_QWORD *)(a1 + 360) = KeUserPopEntrySListResume;
  }
  else if ( (_WORD)result == 16 && v2 > (unsigned __int64)&ExpInterlockedPopEntrySListResume )
  {
    result = (__int64)&ExpInterlockedPopEntrySListEnd;
    if ( v2 <= (unsigned __int64)&ExpInterlockedPopEntrySListEnd )
      *(_QWORD *)(a1 + 360) = &ExpInterlockedPopEntrySListResume;
  }
  return result;
}
