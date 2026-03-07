_BOOL8 __fastcall TelemetryCoverageValidateName(_BYTE *a1)
{
  int v1; // edx
  _BYTE *v2; // r10
  unsigned int v3; // r9d
  char v4; // r8

  v1 = 0;
  v2 = a1;
  v3 = 1;
  while ( 1 )
  {
    v4 = *a1;
    if ( (unsigned __int8)(*a1 - 97) <= 0x19u || (unsigned __int8)(v4 - 65) <= 0x19u || (unsigned __int8)(v4 - 48) <= 9u )
    {
      ++v1;
      goto LABEL_5;
    }
    if ( v4 != 95 )
      break;
    if ( !v1 )
      return 0LL;
    ++v3;
    v1 = 0;
LABEL_5:
    ++a1;
  }
  return !v4 && v1 && v3 >= 3 && a1 - v2 < 64;
}
