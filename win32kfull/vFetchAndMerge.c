/*
 * XREFs of vFetchAndMerge @ 0x1C0005994
 * Callers:
 *     ?vPatXorRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C0005800 (-vPatXorRect8@@YAXPEAU_PATBLTFRAME@@@Z.c)
 *     ?vPatXorRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02E9550 (-vPatXorRow8@@YAXPEAU_PATBLTFRAME@@JH@Z.c)
 * Callees:
 *     ?MergePattern@@YAXPEAKJJJ@Z @ 0x1C0305EB8 (-MergePattern@@YAXPEAKJJJ@Z.c)
 */

void __fastcall vFetchAndMerge(__int64 a1)
{
  unsigned int *v1; // r10
  __int64 v2; // rdx
  __int64 v3; // r11
  int *v4; // r8
  __int64 v5; // rbx
  unsigned __int64 v6; // r9
  int *v7; // rcx
  int *v8; // rax
  int *v9; // rax

  v1 = *(unsigned int **)a1;
  v2 = *(unsigned int *)(a1 + 24);
  v3 = *(unsigned int *)(a1 + 20);
  v4 = *(int **)(a1 + 8);
  v5 = *(unsigned int *)(a1 + 16);
  v6 = *(_QWORD *)a1 + 4 * v2;
  v7 = (int *)((char *)v4 + v5);
  if ( (_DWORD)v3 == 8 )
  {
    v9 = v7 + 1;
    if ( (_DWORD)v5 )
      v9 = v4;
    MergePattern(v1, v2, *v9, *v7);
  }
  else
  {
    while ( (unsigned __int64)v1 < v6 )
    {
      *v1 ^= *v7;
      v8 = v7 + 1;
      ++v1;
      v7 = v4;
      if ( v8 != (int *)((char *)v4 + v3) )
        v7 = v8;
    }
  }
}
