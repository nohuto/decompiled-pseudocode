/*
 * XREFs of PsGetThreadSessionId @ 0x140612EE0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionId @ 0x140252DB0 (MmGetSessionId.c)
 */

__int64 __fastcall PsGetThreadSessionId(__int64 a1)
{
  return MmGetSessionId(*(_QWORD *)(a1 + 544));
}
