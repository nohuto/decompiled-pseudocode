/*
 * XREFs of ?Convert_32bppABGR_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802B9E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Convert_32bppABGR_32bppARGB(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  unsigned __int8 *v2; // r8
  int *v3; // r9
  int i; // edx
  int v5; // eax
  int v6; // ecx

  v2 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
  v3 = *(int **)a2;
  for ( i = *((_DWORD *)a1 + 2); i; --i )
  {
    v5 = *v2;
    v6 = v2[3];
    v2 += 4;
    *v3++ = *(v2 - 2) | ((*(v2 - 3) | ((v5 | (v6 << 8)) << 8)) << 8);
  }
}
