/*
 * XREFs of ?IgnoreAlpha_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802BAF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IgnoreAlpha_32bppARGB(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  int *v2; // r8
  _DWORD *v3; // r9
  int i; // edx
  int v5; // eax
  int v6; // [rsp+8h] [rbp+8h]

  v2 = (int *)*((_QWORD *)a2 + 1);
  v3 = *(_DWORD **)a2;
  for ( i = *((_DWORD *)a1 + 2); i; --i )
  {
    v5 = *v2++;
    v6 = v5;
    HIBYTE(v6) = -1;
    *v3++ = v6;
  }
}
