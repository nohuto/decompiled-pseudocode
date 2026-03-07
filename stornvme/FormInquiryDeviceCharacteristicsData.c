__int64 __fastcall FormInquiryDeviceCharacteristicsData(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 SrbDataBuffer; // r9
  unsigned int v5; // r10d
  __int64 v6; // r11
  _DWORD *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v8);
  if ( *v8 >= 8u )
  {
    *(_BYTE *)(SrbDataBuffer + 7) &= 0xF0u;
    *(_WORD *)SrbDataBuffer = -20224;
    *(_WORD *)(SrbDataBuffer + 3) = 60;
    *(_BYTE *)(SrbDataBuffer + 5) = 1;
    *(_BYTE *)(v6 + 3) = 1;
  }
  else
  {
    LOBYTE(SrbDataBuffer) = 36;
    LOBYTE(v3) = 5;
    LOBYTE(v2) = 6;
    NVMeSetSenseData(v6, v2, v3, SrbDataBuffer);
    return (unsigned int)-1056964602;
  }
  return v5;
}
