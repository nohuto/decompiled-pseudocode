/*
 * XREFs of PsGetThreadSessionId @ 0x1406A2530
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionId @ 0x1402863C0 (MmGetSessionId.c)
 */

__int64 __fastcall PsGetThreadSessionId(__int64 a1)
{
  return MmGetSessionId(*(_QWORD *)(a1 + 544));
}
