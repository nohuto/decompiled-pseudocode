/*
 * XREFs of VfGetHookAddressForOriginal @ 0x140A89EA8
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x1409644D8 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViLookupThunkArray @ 0x140A8A088 (ViLookupThunkArray.c)
 */

__int64 __fastcall VfGetHookAddressForOriginal(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r11
  __int64 v5; // rdx
  __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // r11

  result = ViLookupThunkArray(&VfDifThunks, a2, a1);
  if ( !result )
  {
    result = ViLookupThunkArray(&VfPoolThunks, v3, v4);
    if ( !result )
    {
      result = ViLookupThunkArray(&VfMandatoryThunks, v5, v6);
      if ( !result )
        return ViLookupThunkArray(&VfRegularThunks, v7, v8);
    }
  }
  return result;
}
