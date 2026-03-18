/*
 * XREFs of RtlpFlsInitialize @ 0x14084D444
 * Callers:
 *     PspTlsInitialize @ 0x140B67F24 (PspTlsInitialize.c)
 * Callees:
 *     <none>
 */

void RtlpFlsInitialize()
{
  *(_OWORD *)&PspTlsContext = 0LL;
  unk_140D0C3B8 = 0LL;
  *(_OWORD *)(&PspTlsContext + 1) = 0LL;
  *(__int128 *)((char *)&xmmword_140D0C3A8 + 8) = 0LL;
}
