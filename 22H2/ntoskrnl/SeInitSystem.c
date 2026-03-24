/*
 * XREFs of SeInitSystem @ 0x140A478EC
 * Callers:
 *     InitBootProcessor @ 0x140A39F24 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     SepInitializationPhase1 @ 0x14079D7A8 (SepInitializationPhase1.c)
 *     SepInitializationPhase0 @ 0x140A47920 (SepInitializationPhase0.c)
 */

char __fastcall SeInitSystem(__int64 a1, __int64 a2)
{
  if ( !(_DWORD)InitializationPhase )
    return SepInitializationPhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 0LL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return SepInitializationPhase1(1LL, a2);
}
