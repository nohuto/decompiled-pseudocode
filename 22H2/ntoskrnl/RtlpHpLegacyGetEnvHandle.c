/*
 * XREFs of RtlpHpLegacyGetEnvHandle @ 0x140362820
 * Callers:
 *     RtlCreateHeap @ 0x1407D9600 (RtlCreateHeap.c)
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
