/*
 * XREFs of ?Copy_32@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802BB010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Copy_32(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  int *v2; // r8
  _DWORD *v3; // r9
  int i; // edx
  int v5; // eax

  v2 = (int *)*((_QWORD *)a2 + 1);
  v3 = *(_DWORD **)a2;
  for ( i = *((_DWORD *)a1 + 2); i; --i )
  {
    v5 = *v2++;
    *v3++ = v5;
  }
}
