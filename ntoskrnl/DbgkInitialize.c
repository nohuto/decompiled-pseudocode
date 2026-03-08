/*
 * XREFs of DbgkInitialize @ 0x140B475E0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     DbgkpInitializePhase0 @ 0x140B44E78 (DbgkpInitializePhase0.c)
 *     DbgkpInitializePhase1 @ 0x140B44FC0 (DbgkpInitializePhase1.c)
 */

void DbgkInitialize()
{
  if ( (_DWORD)InitializationPhase )
  {
    if ( (_DWORD)InitializationPhase != 1 )
      KeBugCheckEx(0x33u, 3uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
    DbgkpInitializePhase1();
  }
  else
  {
    DbgkpInitializePhase0();
  }
}
