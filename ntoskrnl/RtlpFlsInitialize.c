/*
 * XREFs of RtlpFlsInitialize @ 0x140849CB4
 * Callers:
 *     PspTlsInitialize @ 0x140B641FC (PspTlsInitialize.c)
 * Callees:
 *     <none>
 */

void RtlpFlsInitialize()
{
  *(_OWORD *)&PspTlsContext = 0LL;
  unk_140D0BFE0 = 0LL;
  *(_OWORD *)(&PspTlsContext + 1) = 0LL;
  *(__int128 *)((char *)&xmmword_140D0BFD0 + 8) = 0LL;
}
