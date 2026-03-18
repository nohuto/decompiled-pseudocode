/*
 * XREFs of ViThunkRecoverPristines @ 0x140A9415C
 * Callers:
 *     VfThunkAddSpecialDriverThunks @ 0x140A93398 (VfThunkAddSpecialDriverThunks.c)
 * Callees:
 *     ViThunkReplacePristine @ 0x140A94560 (ViThunkReplacePristine.c)
 */

void __fastcall ViThunkRecoverPristines(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r11d
  _QWORD *v3; // r8
  __int64 i; // r9
  PVOID *v5; // rcx
  PVOID *j; // rax
  unsigned int v7; // edi
  int v8; // ebx

  v2 = 0;
  v3 = (_QWORD *)(a1 + 32);
  for ( i = a1; v2 < *(_DWORD *)(i + 24); ++v2 )
  {
    v5 = (PVOID *)ViVerifierDriverAddedSpecialThunkListHead;
LABEL_10:
    if ( v5 == &ViVerifierDriverAddedSpecialThunkListHead )
    {
      if ( (unsigned int)ViThunkReplacePristine(&VfRegularThunks, a2, v3, i) != 1
        && (unsigned int)ViThunkReplacePristine(&VfPoolThunks, a2, v3, i) != 1
        && (unsigned int)ViThunkReplacePristine(&VfMandatoryThunks, a2, v3, i) != 1 )
      {
        ViThunkReplacePristine(&VfDifThunks, a2, v3, i);
      }
    }
    else
    {
      for ( j = (PVOID *)v5[3]; ; j = (PVOID *)*j )
      {
        if ( j == v5 + 3 )
        {
          v5 = (PVOID *)*v5;
          goto LABEL_10;
        }
        v7 = *((_DWORD *)j + 6);
        a2 = j + 4;
        v8 = 0;
        if ( v7 )
          break;
LABEL_7:
        ;
      }
      while ( *v3 != a2[1] )
      {
        a2 += 2;
        if ( ++v8 >= v7 )
          goto LABEL_7;
      }
      *v3 = *a2;
    }
    v3 += 2;
  }
}
