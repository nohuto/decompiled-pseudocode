__int64 __fastcall BgpFoGetFontHandle(wchar_t *Str2, __int64 **a2)
{
  __int64 result; // rax
  __int64 i; // rdi
  __int64 *v6; // rbx

  result = 3221226021LL;
  if ( !a2 || !FontLibraryInitialized )
    return 3221225485LL;
  *a2 = 0LL;
  for ( i = FopFontFileListHead; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &FopFontFileListHead )
      return result;
    result = 3221226021LL;
    v6 = *(__int64 **)(i + 40);
    if ( v6 != (__int64 *)(i + 40) )
      break;
LABEL_10:
    ;
  }
  while ( !Str2 )
  {
    if ( (*(_DWORD *)(i + 28) & 1) != 0 )
      goto LABEL_12;
LABEL_8:
    v6 = (__int64 *)*v6;
    if ( v6 == (__int64 *)(i + 40) )
    {
      result = 3221226021LL;
      goto LABEL_10;
    }
  }
  if ( wcsicmp((const wchar_t *)v6[4], Str2) )
    goto LABEL_8;
LABEL_12:
  *a2 = v6;
  return 0LL;
}
