/*
 * XREFs of SeInitSystem @ 0x140B48368
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     SepInitializationPhase1 @ 0x140810320 (SepInitializationPhase1.c)
 *     SepInitializationPhase0 @ 0x140B48678 (SepInitializationPhase0.c)
 */

char __fastcall SeInitSystem(__int64 a1, __int64 a2)
{
  if ( !(_DWORD)InitializationPhase )
    return SepInitializationPhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 0LL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return SepInitializationPhase1(1LL, a2);
}
