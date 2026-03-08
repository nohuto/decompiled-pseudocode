/*
 * XREFs of ?IgnoreAlpha_64bppABGRFloat@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802BAF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IgnoreAlpha_64bppABGRFloat(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  __int16 *v2; // r9
  _WORD *v3; // r8
  int i; // edx
  __int16 v5; // ax

  v2 = (__int16 *)*((_QWORD *)a2 + 1);
  v3 = *(_WORD **)a2;
  for ( i = *((_DWORD *)a1 + 2); i; --i )
  {
    v5 = *v2;
    v2 += 4;
    *v3 = v5;
    v3 += 4;
    *(v3 - 3) = *(v2 - 3);
    *(v3 - 2) = *(v2 - 2);
    *(v3 - 1) = word_1803E2048;
  }
}
