/*
 * XREFs of KiCheckForSListAddress @ 0x1403510B0
 * Callers:
 *     KiDeliverApc @ 0x140350B60 (KiDeliverApc.c)
 *     KxIsrLinkage @ 0x140419FA0 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x14041C4B0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x14041C810 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x14041CB70 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x14041CED0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x14041D230 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x14041E0D0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x14041EFD0 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x140423B80 (KiNmiInterruptStart.c)
 *     KiPageFault @ 0x140426F00 (KiPageFault.c)
 *     KiMcheckAbort @ 0x140427E80 (KiMcheckAbort.c)
 * Callees:
 *     VslKernelShadowStackAssist @ 0x140549640 (VslKernelShadowStackAssist.c)
 */

__int64 __fastcall KiCheckForSListAddress(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx

  result = *(unsigned __int16 *)(a1 + 368);
  v2 = *(_QWORD *)(a1 + 360);
  if ( (_WORD)result == 51 )
  {
    result = qword_140D1F378;
    if ( v2 > qword_140D1F378 && v2 <= qword_140D1F368 )
      *(_QWORD *)(a1 + 360) = qword_140D1F378;
  }
  else if ( (_WORD)result == 16 && v2 > (unsigned __int64)&ExpInterlockedPopEntrySListResume )
  {
    result = (__int64)&ExpInterlockedPopEntrySListEnd;
    if ( v2 <= (unsigned __int64)&ExpInterlockedPopEntrySListEnd )
    {
      *(_QWORD *)(a1 + 360) = &ExpInterlockedPopEntrySListResume;
      if ( (_BYTE)KiKernelCetEnabled )
        return VslKernelShadowStackAssist(
                 3,
                 *(_QWORD *)(a1 + 216),
                 0,
                 0,
                 (__int64)&ExpInterlockedPopEntrySListResume,
                 4);
    }
  }
  return result;
}
