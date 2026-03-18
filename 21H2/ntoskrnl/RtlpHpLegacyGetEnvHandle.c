/*
 * XREFs of RtlpHpLegacyGetEnvHandle @ 0x14037003C
 * Callers:
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
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
