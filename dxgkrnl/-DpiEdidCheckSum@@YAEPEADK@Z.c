bool __fastcall DpiEdidCheckSum(char *a1, __int64 a2)
{
  char v2; // al

  v2 = 0;
  if ( !(_DWORD)a2 )
    return 1;
  a2 = (unsigned int)a2;
  do
  {
    v2 += *a1++;
    --a2;
  }
  while ( a2 );
  return v2 == 0;
}
