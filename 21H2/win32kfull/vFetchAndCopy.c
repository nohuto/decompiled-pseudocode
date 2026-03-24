/*
 * XREFs of vFetchAndCopy @ 0x1C02DBE2C
 * Callers:
 *     ?vPatCpyRect8_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02C73F0 (-vPatCpyRect8_8x8@@YAXPEAU_PATBLTFRAME@@H@Z.c)
 *     ?vPatCpyRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02C79E0 (-vPatCpyRow8@@YAXPEAU_PATBLTFRAME@@JH@Z.c)
 *     ?vPatCpyRow8_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02C7BEC (-vPatCpyRow8_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z.c)
 * Callees:
 *     ?CopyPattern@@YAXPEAKJJJ@Z @ 0x1C02DBD78 (-CopyPattern@@YAXPEAKJJJ@Z.c)
 */

void __fastcall vFetchAndCopy(__int64 a1)
{
  unsigned int *v1; // r11
  __int64 v2; // rbx
  __int64 v3; // r9
  unsigned int *v4; // r10
  __int64 v5; // rdx
  unsigned int *v6; // r8
  unsigned __int64 v7; // rcx
  unsigned int *v8; // rax
  unsigned int *v9; // rax

  v1 = *(unsigned int **)(a1 + 8);
  v2 = *(unsigned int *)(a1 + 16);
  v3 = *(unsigned int *)(a1 + 20);
  v4 = *(unsigned int **)a1;
  v5 = *(unsigned int *)(a1 + 24);
  v6 = (unsigned int *)((char *)v1 + v2);
  v7 = *(_QWORD *)a1 + 4 * v5;
  if ( (_DWORD)v3 == 8 )
  {
    v8 = v6 + 1;
    if ( (_DWORD)v2 )
      v8 = v1;
    CopyPattern(v4, v5, *v8, *v6);
  }
  else
  {
    while ( (unsigned __int64)v4 < v7 )
    {
      *v4 = *v6;
      v9 = v6 + 1;
      ++v4;
      v6 = v1;
      if ( v9 != (unsigned int *)((char *)v1 + v3) )
        v6 = v9;
    }
  }
}
