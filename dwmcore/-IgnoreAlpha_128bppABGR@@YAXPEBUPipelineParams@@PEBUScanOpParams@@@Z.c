/*
 * XREFs of ?IgnoreAlpha_128bppABGR@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802BAEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IgnoreAlpha_128bppABGR(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  int v2; // eax
  __int128 *v3; // r8
  _OWORD *i; // r9
  __int128 v5; // xmm0
  __int128 v6; // [rsp+0h] [rbp-18h]

  v2 = *((_DWORD *)a1 + 2);
  v3 = (__int128 *)*((_QWORD *)a2 + 1);
  for ( i = *(_OWORD **)a2; v2; --v2 )
  {
    v5 = *v3++;
    v6 = v5;
    HIDWORD(v6) = 1065353216;
    *i++ = v6;
  }
}
