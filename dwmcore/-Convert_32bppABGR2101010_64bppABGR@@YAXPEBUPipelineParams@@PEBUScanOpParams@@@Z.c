void __fastcall Convert_32bppABGR2101010_64bppABGR(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  int v2; // r8d
  unsigned int *v3; // r10
  _WORD *i; // r9
  unsigned int v5; // edx
  __int16 v6; // ax
  unsigned int v7; // ecx

  v2 = *((_DWORD *)a1 + 2);
  v3 = (unsigned int *)*((_QWORD *)a2 + 1);
  for ( i = *(_WORD **)a2; v2; --v2 )
  {
    v5 = *v3;
    v6 = (unsigned __int16)*v3++ << 6;
    v7 = v5;
    v5 >>= 10;
    *i = v6 ^ (v7 >> 4) & 0x3F;
    i += 4;
    LOWORD(v7) = ((_WORD)v5 << 6) ^ (v5 >> 4) & 0x3F;
    v5 >>= 10;
    *(i - 3) = v7;
    *(i - 2) = ((_WORD)v5 << 6) ^ (v5 >> 4) & 0x3F;
    *(i - 1) = 21845 * (v5 >> 10);
  }
}
