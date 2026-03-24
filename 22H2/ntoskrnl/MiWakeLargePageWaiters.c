/*
 * XREFs of MiWakeLargePageWaiters @ 0x140557CBC
 * Callers:
 *     MiInsertLargePageChain @ 0x14027EE04 (MiInsertLargePageChain.c)
 *     MiInsertLargePageInNodeList @ 0x14027F0D0 (MiInsertLargePageInNodeList.c)
 *     MiLargePageMovesComplete @ 0x1403F63A0 (MiLargePageMovesComplete.c)
 * Callees:
 *     KeSignalGate @ 0x14031BEE0 (KeSignalGate.c)
 */

char __fastcall MiWakeLargePageWaiters(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v4; // rbx
  char result; // al

  if ( a1 )
  {
    do
    {
      v4 = (_QWORD *)*a1;
      result = KeSignalGate((__int64)(a1 + 1), 1LL, a3, a4);
      a1 = v4;
    }
    while ( v4 );
  }
  return result;
}
