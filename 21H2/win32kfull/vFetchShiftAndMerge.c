/*
 * XREFs of vFetchShiftAndMerge @ 0x1C02DA418
 * Callers:
 *     ?vPatXorRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C0142BA0 (-vPatXorRect8@@YAXPEAU_PATBLTFRAME@@@Z.c)
 *     ?vPatXorRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02C6BD0 (-vPatXorRow8@@YAXPEAU_PATBLTFRAME@@JH@Z.c)
 * Callees:
 *     ?MergePattern@@YAXPEAKJJJ@Z @ 0x1C02DA278 (-MergePattern@@YAXPEAKJJJ@Z.c)
 */

void __fastcall vFetchShiftAndMerge(__int64 a1)
{
  unsigned int *v1; // r11
  __int64 v2; // rdx
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // r10
  int *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  v1 = *(unsigned int **)a1;
  v2 = *(unsigned int *)(a1 + 24);
  v3 = *(_DWORD *)(a1 + 20);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(unsigned int *)(a1 + 16);
  v6 = *(_QWORD *)a1 + 4 * v2;
  v7 = (int *)(v4 + v5);
  if ( v3 == 8 )
  {
    v8 = (unsigned int)(v5 - 4);
    if ( (unsigned int)(v5 + 4) < 8 )
      v8 = (unsigned int)(v5 + 4);
    MergePattern(v1, v2, *(_DWORD *)(v8 + v4), *v7);
  }
  else
  {
    while ( (unsigned __int64)v1 < v6 )
    {
      *v1 ^= *v7;
      v9 = (_DWORD)v5 + 4 - v3;
      ++v1;
      if ( (int)v5 + 4 < v3 )
        v9 = (unsigned int)(v5 + 4);
      LODWORD(v5) = v9;
      v7 = (int *)(v4 + v9);
    }
  }
}
