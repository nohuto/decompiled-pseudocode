__int64 __fastcall IpmiHwpParseSpmiTable(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  char v4; // dl
  __int64 result; // rax

  if ( *(_WORD *)(a2 + 38) == 256 || *(_WORD *)(a2 + 38) != 336 && *(_WORD *)(a2 + 38) != 512 )
    return 3221225659LL;
  WheaIpmiContext = 0LL;
  xmmword_140C2C7B0 = 0LL;
  LOWORD(WheaIpmiContext) = *(_WORD *)(a2 + 38) >> 4;
  DWORD1(WheaIpmiContext) = *(unsigned __int8 *)(a2 + 36);
  BYTE8(xmmword_140C2C7B0) = *(_BYTE *)(a2 + 48);
  v3 = *(_QWORD *)(a2 + 52);
  if ( BYTE8(xmmword_140C2C7B0) == 4 )
    v3 = *(_QWORD *)(a2 + 52) & 0xFELL;
  *(_QWORD *)&xmmword_140C2C7B0 = v3;
  v4 = 0;
  if ( *(_BYTE *)(a2 + 51) )
  {
    switch ( *(_BYTE *)(a2 + 51) )
    {
      case 1:
        v4 = 1;
        break;
      case 2:
        v4 = 2;
        break;
      case 3:
        v4 = 4;
        break;
      case 4:
        v4 = 8;
        break;
    }
  }
  BYTE8(WheaIpmiContext) = v4;
  result = 0LL;
  BYTE9(xmmword_140C2C7B0) = 32;
  return result;
}
