/*
 * XREFs of ViXdvSearchAllThunkArrays @ 0x1409CA110
 * Callers:
 *     ViXdvBindXdvDDIWrappers @ 0x1409C9C50 (ViXdvBindXdvDDIWrappers.c)
 * Callees:
 *     ViXdvSearchAndReplaceThunkArray @ 0x1409CA17C (ViXdvSearchAndReplaceThunkArray.c)
 *     ViXdvSearchAndReplaceThunkArrayOrderDependent @ 0x1409CA1CC (ViXdvSearchAndReplaceThunkArrayOrderDependent.c)
 */

char __fastcall ViXdvSearchAllThunkArrays(unsigned int a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r9
  unsigned int v13; // r10d
  char result; // al

  if ( (unsigned __int8)ViXdvSearchAndReplaceThunkArray(&VfXdvThunks, a2, a1, a2) )
    return 1;
  if ( (unsigned __int8)ViXdvSearchAndReplaceThunkArray(&VfPoolThunks, v2, v3, v4) )
    return 1;
  if ( (unsigned __int8)ViXdvSearchAndReplaceThunkArray(&VfMandatoryThunks, v5, v6, v7) )
    return 1;
  if ( (unsigned __int8)ViXdvSearchAndReplaceThunkArray(&VfRegularThunks, v8, v9, v10) )
    return 1;
  result = ViXdvSearchAndReplaceThunkArrayOrderDependent(v11, v13, v12);
  if ( result )
    return 1;
  return result;
}
