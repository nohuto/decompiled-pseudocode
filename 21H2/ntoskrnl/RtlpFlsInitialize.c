/*
 * XREFs of RtlpFlsInitialize @ 0x140853200
 * Callers:
 *     PspTlsInitialize @ 0x140B24668 (PspTlsInitialize.c)
 * Callees:
 *     <none>
 */

void RtlpFlsInitialize()
{
  *(_OWORD *)&PspTlsContext = 0LL;
  unk_140CF5E98 = 0LL;
  *(_OWORD *)(&PspTlsContext + 1) = 0LL;
  *(__int128 *)((char *)&xmmword_140CF5E88 + 8) = 0LL;
}
