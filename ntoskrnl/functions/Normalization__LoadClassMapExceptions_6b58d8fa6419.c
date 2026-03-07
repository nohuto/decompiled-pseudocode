unsigned __int8 __fastcall Normalization__LoadClassMapExceptions(__int64 a1)
{
  unsigned __int8 *v1; // r8
  char v2; // dl
  unsigned __int8 result; // al
  unsigned __int8 v4; // r9

  *(_DWORD *)(a1 + 114) = -1;
  v1 = *(unsigned __int8 **)(a1 + 48);
  v2 = 0;
  *(_BYTE *)(a1 + 118) = -1;
  result = *v1;
  do
  {
    v4 = result;
    switch ( result )
    {
      case 0xD8:
        *(_BYTE *)(a1 + 114) = v2;
        break;
      case 0xDC:
        *(_BYTE *)(a1 + 115) = v2;
        break;
      case 0xDD:
        *(_BYTE *)(a1 + 116) = v2;
        break;
      case 0xE6:
        *(_BYTE *)(a1 + 117) = v2;
        break;
      case 0xE7:
        *(_BYTE *)(a1 + 118) = v2;
        break;
    }
    ++v1;
    ++v2;
    result = *v1;
  }
  while ( *v1 >= v4 );
  return result;
}
