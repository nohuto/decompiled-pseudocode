/*
 * XREFs of RtlpHpLegacyGetEnvHandle @ 0x1402D3858
 * Callers:
 *     RtlCreateHeap @ 0x140768B60 (RtlCreateHeap.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall RtlpHpLegacyGetEnvHandle(_OWORD *a1)
{
  _OWORD *result; // rax

  result = a1;
  *a1 = RtlpHpLegacyEnvHandle;
  return result;
}
