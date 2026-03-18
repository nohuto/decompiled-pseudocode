/*
 * XREFs of SeInitSystem @ 0x140B53278
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     SepInitializationPhase1 @ 0x140823D08 (SepInitializationPhase1.c)
 *     SepInitializationPhase0 @ 0x140B57104 (SepInitializationPhase0.c)
 */

char SeInitSystem()
{
  if ( !(_DWORD)InitializationPhase )
    return SepInitializationPhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 0LL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return SepInitializationPhase1();
}
