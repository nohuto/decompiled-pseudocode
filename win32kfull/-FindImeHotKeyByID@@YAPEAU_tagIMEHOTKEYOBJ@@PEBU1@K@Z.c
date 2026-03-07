struct _tagIMEHOTKEYOBJ *__fastcall FindImeHotKeyByID(const struct _tagIMEHOTKEYOBJ *a1, int a2)
{
  while ( 1 )
  {
    if ( !a1 )
      return 0LL;
    if ( *((_DWORD *)a1 + 2) == a2 )
      break;
    a1 = *(const struct _tagIMEHOTKEYOBJ **)a1;
  }
  return a1;
}
