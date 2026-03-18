/*
 * XREFs of KiDpcInterruptBypass @ 0x140427320
 * Callers:
 *     KiChainedDispatch @ 0x14041FBE0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1404205B0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1404209F0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140420E30 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140421270 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404216A0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140422330 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x140425920 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140425D70 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140426460 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140427360 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x140249510 (KiDispatchInterrupt.c)
 */

__int64 __fastcall KiDpcInterruptBypass()
{
  __int64 v0; // rbp
  __int64 result; // rax

  __writecr8(2uLL);
  _enable();
  result = KiDispatchInterrupt(*(_QWORD *)(v0 - 87), v0 - 128);
  _disable();
  return result;
}
