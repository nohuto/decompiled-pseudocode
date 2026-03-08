/*
 * XREFs of ?Convert_64bppABGR_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802B9FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Convert_64bppABGR_32bppARGB(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  unsigned __int16 *v2; // r8
  unsigned int *v3; // r9
  int i; // edx
  int v5; // eax
  int v6; // ecx

  v2 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v3 = *(unsigned int **)a2;
  for ( i = *((_DWORD *)a1 + 2); i; --i )
  {
    v5 = v2[1];
    v6 = *v2;
    v2 += 4;
    *v3++ = *((unsigned __int8 *)v2 - 3) | ((*(v2 - 1) & 0xFF00) << 16) | v5 & 0xFFFFFF00 | ((v6 & 0xFFFFFF00) << 8);
  }
}
