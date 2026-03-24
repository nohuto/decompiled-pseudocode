/*
 * XREFs of RtlpHpLegacyGetEnvHandle @ 0x14032CA90
 * Callers:
 *     RtlCreateHeap @ 0x140768180 (RtlCreateHeap.c)
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
