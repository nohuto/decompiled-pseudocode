/*
 * XREFs of MiPreventControlAreaDelete @ 0x140529E9C
 * Callers:
 *     MiDeleteCachedSubsection @ 0x140528CEC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1405296D4 (MiFlushControlArea.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x1402062F8 (ObFastReferenceObjectLocked.c)
 */

unsigned __int64 __fastcall MiPreventControlAreaDelete(__int64 a1)
{
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 112));
  *(_QWORD *)(*(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)) + 1688LL) = a1;
  return ObFastReferenceObjectLocked((_QWORD *)(a1 + 64));
}
