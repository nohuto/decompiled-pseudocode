__int64 __fastcall xwtol(unsigned __int16 *a1)
{
  unsigned int v1; // edx
  int v2; // r8d

  v1 = 0;
  while ( 1 )
  {
    v2 = *a1;
    if ( (unsigned __int16)(v2 - 48) <= 9u )
    {
      v1 = v2 + 2 * (5 * v1 - 24);
      goto LABEL_5;
    }
    if ( v2 != 32 )
      return v1;
LABEL_5:
    ++a1;
  }
}
