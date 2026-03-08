/*
 * XREFs of ?Convert_64bppABGR_32bppABGR2101010@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802B9F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Convert_64bppABGR_32bppABGR2101010(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  unsigned __int16 *v2; // r8
  int *v3; // r9
  int i; // edx
  int v5; // ecx
  int v6; // eax

  v2 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v3 = *(int **)a2;
  for ( i = *((_DWORD *)a1 + 2); i; --i )
  {
    v5 = ((v2[3] & 0xC000) << 12) | v2[1] & 0xFFC0 | ((v2[2] & 0xFFC0) << 10);
    v6 = *v2 >> 6;
    v2 += 4;
    *v3++ = v6 | (16 * v5);
  }
}
