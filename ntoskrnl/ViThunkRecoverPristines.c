/*
 * XREFs of ViThunkRecoverPristines @ 0x140AD8D6C
 * Callers:
 *     VfThunkAddSpecialDriverThunks @ 0x140AD8020 (VfThunkAddSpecialDriverThunks.c)
 * Callees:
 *     ViThunkReplacePristine @ 0x140AD90D8 (ViThunkReplacePristine.c)
 *     ViThunkReplaceSpecialPristine @ 0x140AD91AC (ViThunkReplaceSpecialPristine.c)
 */

void __fastcall ViThunkRecoverPristines(__int64 a1)
{
  unsigned int v1; // edi
  __int64 i; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8

  v1 = 0;
  for ( i = a1 + 32; v1 < *(_DWORD *)(a1 + 24); ++v1 )
  {
    if ( (unsigned int)ViThunkReplaceSpecialPristine(i) != 1
      && (unsigned int)ViThunkReplacePristine(&VfRegularThunks, v4, i) != 1
      && (unsigned int)ViThunkReplacePristine(&VfPoolThunks, v5, v6) != 1 )
    {
      ViThunkReplacePristine(&VfDifThunks, v7, v8);
    }
    i += 16LL;
  }
}
