/*
 * XREFs of KeComputeParallelSha256 @ 0x140569E10
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptParallelSha256Init @ 0x1403EFFB4 (SymCryptParallelSha256Init.c)
 *     SymCryptParallelSha256Process @ 0x1403EFFF0 (SymCryptParallelSha256Process.c)
 */

__int64 __fastcall KeComputeParallelSha256(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // r8
  __int64 v6; // rcx
  _QWORD *v7; // rdx

  v3 = (a1 + 399) & 0xFFFFFFFFFFFFFFF0uLL;
  SymCryptParallelSha256Init(v3, a2);
  v5 = 0LL;
  if ( a2 )
  {
    v6 = a1 + 16;
    v7 = (_QWORD *)(v3 + 1040);
    do
    {
      *(v7 - 2) = v5;
      *((_DWORD *)v7 - 2) = 1;
      *v7 = *(_QWORD *)(v6 - 16);
      v7 += 10;
      *(v7 - 9) = *(_QWORD *)(v6 - 8);
      *(v7 - 7) = v5++;
      *(v7 - 5) = v6;
      v6 += 48LL;
      *((_DWORD *)v7 - 12) = 2;
      *(v7 - 4) = 32LL;
    }
    while ( v5 < a2 );
  }
  return SymCryptParallelSha256Process(v3, a2, (int)v3 + 1024, 2 * a2, v3 + 1664, 2926LL);
}
