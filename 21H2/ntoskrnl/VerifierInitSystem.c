/*
 * XREFs of VerifierInitSystem @ 0x140A6FA84
 * Callers:
 *     InitBootProcessor @ 0x140A3AAF4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     ViInitSystemPhase0 @ 0x140A6FAB8 (ViInitSystemPhase0.c)
 *     ViInitSystemPhase1 @ 0x140A6FD8C (ViInitSystemPhase1.c)
 */

__int64 VerifierInitSystem()
{
  if ( !(_DWORD)InitializationPhase )
    return ViInitSystemPhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 4uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return ViInitSystemPhase1();
}
