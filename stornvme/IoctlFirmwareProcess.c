__int64 __fastcall IoctlFirmwareProcess(__int64 a1, __int64 a2)
{
  _DWORD *SrbDataBuffer; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  unsigned int Info; // eax
  unsigned int v8; // edi
  unsigned int *v10; // [rsp+100h] [rbp+18h] BYREF

  v10 = 0LL;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v10);
  v5 = *v10;
  if ( (unsigned int)v5 < 0x34 )
    goto LABEL_16;
  v6 = (unsigned int)SrbDataBuffer[11];
  if ( v5 < v6 + (unsigned __int64)(unsigned int)SrbDataBuffer[12]
    || !SrbDataBuffer[7]
    || (SrbDataBuffer[10] & 1) == 0
    || (unsigned int)v6 < 0x34
    || (v6 & 3) != 0 )
  {
    SrbDataBuffer[5] = 3;
    goto LABEL_16;
  }
  switch ( SrbDataBuffer[9] )
  {
    case 1:
      Info = FirmwareGetInfo(a1, a2);
LABEL_13:
      v8 = Info;
      if ( !Info )
        return v8;
      goto LABEL_17;
    case 2:
      Info = FirmwareDownload(a1, a2);
      goto LABEL_13;
    case 3:
      Info = FirmwareActivate(a1, a2);
      goto LABEL_13;
  }
LABEL_16:
  *(_BYTE *)(a2 + 3) = 21;
  v8 = -1056964602;
LABEL_17:
  if ( *(_BYTE *)(a1 + 24) )
    StorPortExtendedFunction(87LL, a1, 0LL, 0LL);
  return v8;
}
