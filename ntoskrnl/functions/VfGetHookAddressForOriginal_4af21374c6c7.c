__int64 __fastcall VfGetHookAddressForOriginal(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r11
  __int64 v5; // rdx
  __int64 v6; // r11

  result = ViLookupThunkArray(&VfDifThunks, a2, a1);
  if ( !result )
  {
    result = ViLookupThunkArray(&VfPoolThunks, v3, v4);
    if ( !result )
      return ViLookupThunkArray(&VfRegularThunks, v5, v6);
  }
  return result;
}
