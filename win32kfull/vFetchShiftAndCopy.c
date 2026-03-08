/*
 * XREFs of vFetchShiftAndCopy @ 0x1C0305F74
 * Callers:
 *     ?vPatCpyRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C0017F50 (-vPatCpyRect8@@YAXPEAU_PATBLTFRAME@@@Z.c)
 *     ?vPatCpyRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02E8B50 (-vPatCpyRow8@@YAXPEAU_PATBLTFRAME@@JH@Z.c)
 * Callees:
 *     ?CopyPattern@@YAXPEAKJJJ@Z @ 0x1C0305E48 (-CopyPattern@@YAXPEAKJJJ@Z.c)
 */

void __fastcall vFetchShiftAndCopy(__int64 a1)
{
  unsigned int *v1; // r11
  __int64 v2; // rdx
  unsigned int v3; // r9d
  __int64 v4; // r8
  __int64 v5; // r10
  unsigned __int64 v6; // rbx
  unsigned int *v7; // rcx
  unsigned int v8; // r10d
  __int64 v9; // rax
  __int64 v10; // rax

  v1 = *(unsigned int **)a1;
  v2 = *(unsigned int *)(a1 + 24);
  v3 = *(_DWORD *)(a1 + 20);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(unsigned int *)(a1 + 16);
  v6 = *(_QWORD *)a1 + 4 * v2;
  v7 = (unsigned int *)(v4 + v5);
  if ( v3 == 8 )
  {
    v8 = v5 + 4;
    v9 = v8 - 8;
    if ( v8 < 8 )
      v9 = v8;
    CopyPattern(v1, v2, *(_DWORD *)(v9 + v4), *v7);
  }
  else
  {
    while ( (unsigned __int64)v1 < v6 )
    {
      *v1 = *v7;
      v10 = (_DWORD)v5 + 4 - v3;
      ++v1;
      if ( (int)v5 + 4 < v3 )
        v10 = (unsigned int)(v5 + 4);
      LODWORD(v5) = v10;
      v7 = (unsigned int *)(v4 + v10);
    }
  }
}
