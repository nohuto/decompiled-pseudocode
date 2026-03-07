__int64 __fastcall UsbhWmiInsufficentBandwidth(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  __int64 v6; // r11
  unsigned int v7; // r10d
  __int64 result; // rax
  __int64 PortData; // rax

  Log(a1, 64, 1299474532, 1LL, a5);
  *a4 = 0;
  if ( v7 < 0x18 )
    return 3221225507LL;
  PortData = UsbhGetPortData(v6, *(_WORD *)(a5 + 4));
  if ( !PortData )
    return 3221225485LL;
  *(_DWORD *)(a5 + 8) = *(_DWORD *)(PortData + 436);
  result = 0LL;
  *a4 = 24;
  return result;
}
