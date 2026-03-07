__int64 __fastcall IoctlSetProtocolInfoProcess(__int64 a1, __int64 a2)
{
  _DWORD *SrbDataBuffer; // rdx
  __int64 v3; // r9
  __int64 v4; // r11
  unsigned __int64 v5; // rax
  __int64 v6; // r10
  unsigned int *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v8);
  v5 = *v8;
  if ( (unsigned int)v5 < 0x4C
    || (v6 = (unsigned int)SrbDataBuffer[13], v5 < v6 + 36 + (unsigned __int64)(unsigned int)SrbDataBuffer[14]) )
  {
    *(_BYTE *)(v3 + 3) = 21;
  }
  else
  {
    if ( (!(_DWORD)v6 || (((_BYTE)v6 + 36) & 7) == 0) && SrbDataBuffer[9] == 3 && SrbDataBuffer[10] == 3 )
      return SetProtocolInfoFeatureData(v4, v3);
    *(_BYTE *)(v3 + 3) = 6;
  }
  return 3238002694LL;
}
