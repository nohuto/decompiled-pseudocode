void __fastcall Convert_32bppARGB_64bppABGR(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  int v2; // r8d
  unsigned __int8 *v3; // r9
  _QWORD *i; // r10
  __int16 v5; // dx
  __int64 v6; // [rsp+8h] [rbp+8h]

  v2 = *((_DWORD *)a1 + 2);
  v3 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
  for ( i = *(_QWORD **)a2; v2; --v2 )
  {
    LOWORD(v6) = 257 * v3[2];
    WORD1(v6) = 257 * v3[1];
    v5 = *v3;
    v3 += 4;
    WORD2(v6) = 257 * v5;
    HIWORD(v6) = 257 * *(v3 - 1);
    *i++ = v6;
  }
}
