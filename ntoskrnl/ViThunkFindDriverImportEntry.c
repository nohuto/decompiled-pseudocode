/*
 * XREFs of ViThunkFindDriverImportEntry @ 0x140AD8A28
 * Callers:
 *     VfThunkApplyDriverAddedThunks @ 0x140AD8160 (VfThunkApplyDriverAddedThunks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViThunkFindDriverImportEntry(__int64 **a1, __int64 a2)
{
  __int64 *i; // rax
  unsigned int v3; // r10d
  _QWORD *v4; // r8
  int v5; // r9d

  for ( i = *a1; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)a1 )
      return 0LL;
    v3 = *((_DWORD *)i + 6);
    v4 = i + 4;
    v5 = 0;
    if ( v3 )
      break;
LABEL_5:
    ;
  }
  while ( a2 != *v4 )
  {
    v4 += 2;
    if ( ++v5 >= v3 )
      goto LABEL_5;
  }
  return v4[1];
}
