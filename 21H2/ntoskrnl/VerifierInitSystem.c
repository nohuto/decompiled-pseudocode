/*
 * XREFs of VerifierInitSystem @ 0x140B27AFC
 * Callers:
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ViInitSystemPhase0 @ 0x140B27B30 (ViInitSystemPhase0.c)
 *     ViInitSystemPhase1 @ 0x140B27E30 (ViInitSystemPhase1.c)
 */

__int64 VerifierInitSystem()
{
  if ( !(_DWORD)InitializationPhase )
    return ViInitSystemPhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 4uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return ViInitSystemPhase1();
}
