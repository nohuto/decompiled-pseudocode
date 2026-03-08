/*
 * XREFs of ?Copy_128@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1801086F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Copy_128(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  memcpy_0(*(void **)a2, *((const void **)a2 + 1), 16LL * *((unsigned int *)a1 + 2));
}
