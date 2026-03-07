char *__cdecl strlwr(char *String)
{
  char v1; // dl
  char *v2; // r8

  v1 = *String;
  v2 = String;
  while ( v1 )
  {
    if ( (unsigned __int8)(v1 - 65) <= 0x19u )
      *v2 = v1 + 32;
    v1 = *++v2;
  }
  return String;
}
