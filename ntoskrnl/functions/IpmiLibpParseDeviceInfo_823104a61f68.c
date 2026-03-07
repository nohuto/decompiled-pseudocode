__int64 __fastcall IpmiLibpParseDeviceInfo(__int64 a1, __int64 a2)
{
  char v2; // al
  int v4; // eax
  char v5; // dl
  int v6; // ecx
  int v7; // ecx

  v2 = *(_BYTE *)(a2 + 5);
  if ( v2 == 16 || v2 != 21 && v2 != 32 )
    return 3221225659LL;
  WheaIpmiContext = 0LL;
  xmmword_140C2C7B0 = 0LL;
  LOWORD(WheaIpmiContext) = *(unsigned __int8 *)(a2 + 5);
  v4 = *(unsigned __int8 *)(a2 + 4);
  v5 = 0;
  DWORD1(WheaIpmiContext) = v4;
  v6 = *(unsigned __int8 *)(a2 + 16) >> 6;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        v5 = 16;
    }
    else
    {
      v5 = 4;
    }
  }
  else
  {
    v5 = 1;
  }
  BYTE8(WheaIpmiContext) = v5;
  *(_QWORD *)&xmmword_140C2C7B0 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
  BYTE8(xmmword_140C2C7B0) = *(_BYTE *)(a2 + 8) & 1;
  BYTE9(xmmword_140C2C7B0) = *(_BYTE *)(a2 + 6) & 0xFE;
  return 0LL;
}
