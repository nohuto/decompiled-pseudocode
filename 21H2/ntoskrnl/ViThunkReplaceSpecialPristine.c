/*
 * XREFs of ViThunkReplaceSpecialPristine @ 0x1409DA770
 * Callers:
 *     ViThunkRecoverPristines @ 0x1409DA194 (ViThunkRecoverPristines.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViThunkReplaceSpecialPristine(_QWORD *a1)
{
  PVOID *v1; // rdx
  __int64 result; // rax
  PVOID *i; // rcx
  unsigned int v5; // r11d
  _QWORD *v6; // r9
  int v7; // r10d

  v1 = (PVOID *)ViVerifierDriverAddedSpecialThunkListHead;
  result = 0LL;
  while ( v1 != &ViVerifierDriverAddedSpecialThunkListHead )
  {
    for ( i = (PVOID *)v1[3]; i != v1 + 3; i = (PVOID *)*i )
    {
      v5 = *((_DWORD *)i + 6);
      v6 = i + 4;
      v7 = 0;
      if ( v5 )
      {
        while ( *a1 != v6[1] )
        {
          v6 += 2;
          if ( ++v7 >= v5 )
            goto LABEL_8;
        }
        *a1 = *v6;
        result = 1LL;
      }
LABEL_8:
      if ( (_DWORD)result == 1 )
        return result;
    }
    v1 = (PVOID *)*v1;
  }
  return result;
}
