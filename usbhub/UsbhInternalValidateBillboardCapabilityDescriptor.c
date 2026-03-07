char __fastcall UsbhInternalValidateBillboardCapabilityDescriptor(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // r10
  char v5; // si
  int v6; // r11d
  __int64 v7; // r9
  int v8; // r8d
  char v10; // r10

  v3 = 0LL;
  v5 = 1;
  v6 = 256;
  v7 = *a2;
  if ( ((*a2 - 40) & 0xFB) != 0 )
  {
    if ( *a2 < 0x30u )
    {
      v8 = 1111704625;
LABEL_4:
      Log(a1, 256, v8, v7, 0LL);
      return 0;
    }
    if ( v7 != 4LL * a2[4] + 44 )
    {
      v8 = 1111704626;
      goto LABEL_4;
    }
  }
  else
  {
    Log(a1, 256, 1111704631, v7, 0LL);
  }
  if ( a2[4] == (_BYTE)v3 )
  {
    Log(a1, v6, 1111704627, 0LL, v3);
    v5 = v3;
  }
  if ( a2[4] > 0x80u )
  {
    Log(a1, v6, 1111704628, a2[4], v3);
    v5 = v3;
  }
  if ( a2[5] > a2[4] )
  {
    Log(a1, v6, 1111704630, a2[5], v3);
    return v10;
  }
  return v5;
}
