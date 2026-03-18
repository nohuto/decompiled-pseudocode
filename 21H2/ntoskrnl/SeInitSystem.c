/*
 * XREFs of SeInitSystem @ 0x140B1E13C
 * Callers:
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     SepInitializationPhase1 @ 0x140847FF0 (SepInitializationPhase1.c)
 *     SepInitializationPhase0 @ 0x140B1E170 (SepInitializationPhase0.c)
 */

char SeInitSystem()
{
  if ( !(_DWORD)InitializationPhase )
    return SepInitializationPhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 0LL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return SepInitializationPhase1();
}
