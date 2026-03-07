__int64 __fastcall FirmwareActivate(__int64 a1, __int64 a2)
{
  unsigned int v3; // r15d
  __int64 SrbExtension; // rax
  __int64 v5; // rbp
  char v6; // bl
  __int64 v7; // r14
  __int64 v8; // r10
  _DWORD *SrbDataBuffer; // rsi
  __int64 v10; // r10
  __int64 v11; // r13
  int v12; // r12d
  char v13; // al
  __int64 v15; // [rsp+120h] [rbp+18h] BYREF

  v3 = 0;
  SrbExtension = GetSrbExtension(a2);
  v5 = *(_QWORD *)(a1 + 1840);
  v6 = 0;
  v7 = SrbExtension;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(v8, &v15);
  v11 = (unsigned int)SrbDataBuffer[11];
  if ( SrbDataBuffer[12] >= 0xCu
    && *((_BYTE *)SrbDataBuffer + v11 + 8) <= (unsigned int)((*(_BYTE *)(v5 + 260) >> 1) & 7) )
  {
    v12 = SrbDataBuffer[10] >> 31;
    *(_BYTE *)(v7 + 4253) = *(_BYTE *)(v7 + 4253) & 0xFC | 1;
    SrbAssignQueueId(a1, v10);
    if ( (unsigned __int8)IsFirmwareActivateWithoutResetEnabled(a1) )
      v6 = (*(_DWORD *)(a1 + 32) & 0x400) == 0;
    if ( (SrbDataBuffer[10] & 0x40000000) != 0 )
    {
      v6 = 0;
      v13 = 1;
      *(_DWORD *)(a1 + 32) |= 0x10000u;
    }
    else
    {
      v13 = 0;
    }
    BuildFirmwareActivateCommand(v7 + 4096, *((_BYTE *)SrbDataBuffer + v11 + 8), v12, v6, v13);
    *(_QWORD *)(v7 + 4224) = NVMeFirmwareActivateCompletion;
  }
  else
  {
    v3 = -1056964602;
    SrbDataBuffer[5] = 3;
    *(_BYTE *)(v10 + 3) = 21;
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
  }
  return v3;
}
