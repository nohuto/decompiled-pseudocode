/*
 * XREFs of PsGetThreadSessionId @ 0x14071F760
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionId @ 0x140299600 (MmGetSessionId.c)
 */

__int64 __fastcall PsGetThreadSessionId(__int64 a1)
{
  return MmGetSessionId(*(_QWORD *)(a1 + 544));
}
