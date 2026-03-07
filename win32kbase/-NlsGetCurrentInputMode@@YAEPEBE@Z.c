unsigned __int8 __fastcall NlsGetCurrentInputMode(unsigned __int8 *a1)
{
  unsigned __int8 v1; // di
  const unsigned __int8 *v2; // rbx
  unsigned __int8 v3; // al

  v1 = *a1;
  v2 = a1;
  if ( !*a1 )
    return v1;
  v3 = *a1;
  while ( !(unsigned int)NlsTestKeyStateToggle(v3) )
  {
    v3 = *++v2;
    if ( !*v2 )
      return v1;
  }
  return *v2;
}
