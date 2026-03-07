__int64 __fastcall IpmiLibAddSelRecord(__int64 a1, __int128 *a2, __int64 a3)
{
  __int128 v4; // xmm1
  int v5; // ecx
  __int16 v7; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v8[5]; // [rsp+22h] [rbp-2Eh]
  char v9; // [rsp+28h] [rbp-28h] BYREF
  int v10; // [rsp+29h] [rbp-27h]
  __int128 v11; // [rsp+2Dh] [rbp-23h]

  v4 = *a2;
  *(_DWORD *)&v8[1] = 0;
  v9 = BYTE9(xmmword_140C2C7B0);
  v7 = 7;
  v10 = 1143472144;
  v8[0] = -1;
  v11 = v4;
  if ( DWORD1(WheaIpmiContext) == 1 )
  {
    v5 = IpmiLibpKcsRequestAndReceive(*(_QWORD *)((char *)&WheaIpmiContext + 4), &v9, &v7);
    if ( v5 >= 0 )
    {
      if ( (unsigned __int16)v7 >= 2u )
      {
        *(_WORD *)a3 = *(_WORD *)v8;
        *(_BYTE *)(a3 + 2) = v8[2];
      }
      else
      {
        return (unsigned int)-1073741762;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v5;
}
