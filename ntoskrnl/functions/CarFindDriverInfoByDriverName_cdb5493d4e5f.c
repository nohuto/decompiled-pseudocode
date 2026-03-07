__int64 __fastcall CarFindDriverInfoByDriverName(wchar_t *Str2)
{
  __int64 v1; // rbx

  v1 = CarDriverInfo;
  if ( !CarDriverInfo )
    return 0LL;
  do
  {
    if ( !wcsncmp((const wchar_t *)(v1 + 8), Str2, 0x20uLL) )
      break;
    v1 = *(_QWORD *)v1;
  }
  while ( v1 );
  return v1;
}
