unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsValidContentScaling(DMMVIDPNPRESENTPATH *this)
{
  unsigned __int8 v3; // al
  __int64 v4; // rcx

  if ( *((_DWORD *)this + 28) == 254 || !DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned((DMMVIDPNTARGET **)this) )
    return 1;
  v3 = DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch(this);
  v4 = *((int *)this + 28);
  if ( !v3 )
  {
    if ( (_DWORD)v4 == 1 )
      WdLogSingleEntry1(3LL, v4);
    return 1;
  }
  if ( (((_DWORD)v4 - 1) & 0xFFFFFFFB) == 0 )
    return 1;
  WdLogSingleEntry1(2LL, *((int *)this + 28));
  return 0;
}
