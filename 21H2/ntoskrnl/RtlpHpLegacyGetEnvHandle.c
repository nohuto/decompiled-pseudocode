/*
 * XREFs of RtlpHpLegacyGetEnvHandle @ 0x140251B50
 * Callers:
 *     RtlCreateHeap @ 0x140768D20 (RtlCreateHeap.c)
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
