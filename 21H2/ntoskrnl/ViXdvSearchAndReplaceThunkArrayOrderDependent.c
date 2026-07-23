/*
 * XREFs of ViXdvSearchAndReplaceThunkArrayOrderDependent @ 0x1409CA1CC
 * Callers:
 *     ViXdvSearchAllThunkArrays @ 0x1409CA110 (ViXdvSearchAllThunkArrays.c)
 * Callees:
 *     <none>
 */

char __fastcall ViXdvSearchAndReplaceThunkArrayOrderDependent(__int64 a1, int a2, __int64 a3)
{
  char **v3; // rax
  char *v4; // rcx
  char *v6; // rdx

  v3 = &VfOrderDependentThunks;
  while ( 1 )
  {
    if ( *((_DWORD *)v3 + 12) == a2 )
    {
      v4 = v3[4];
      if ( v4 )
        break;
    }
    v3 += 7;
    if ( !*v3 )
      return 0;
  }
  v6 = v3[2];
  if ( *(char **)v4 != v6 )
    ++ViXdvThunksNotPristine;
  if ( v6 )
    ++ViXdvThunksBoundToXdv;
  else
    ++ViXdvThunksShared;
  *(_QWORD *)v4 = a3;
  return 1;
}
