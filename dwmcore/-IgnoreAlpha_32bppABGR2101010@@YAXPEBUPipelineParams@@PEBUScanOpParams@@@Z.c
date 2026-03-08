/*
 * XREFs of ?IgnoreAlpha_32bppABGR2101010@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802BAF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IgnoreAlpha_32bppABGR2101010(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  int *v2; // r8
  unsigned int *v3; // r9
  int i; // edx
  int v5; // eax

  v2 = (int *)*((_QWORD *)a2 + 1);
  v3 = *(unsigned int **)a2;
  for ( i = *((_DWORD *)a1 + 2); i; --i )
  {
    v5 = *v2++;
    *v3++ = v5 | 0xC0000000;
  }
}
