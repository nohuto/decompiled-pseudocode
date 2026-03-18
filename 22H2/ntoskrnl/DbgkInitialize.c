/*
 * XREFs of DbgkInitialize @ 0x140B524F0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     DbgkpInitializePhase0 @ 0x140B6C29C (DbgkpInitializePhase0.c)
 *     DbgkpInitializePhase1 @ 0x140B6C3E4 (DbgkpInitializePhase1.c)
 */

__int64 DbgkInitialize()
{
  if ( !(_DWORD)InitializationPhase )
    return DbgkpInitializePhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 3uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return DbgkpInitializePhase1();
}
