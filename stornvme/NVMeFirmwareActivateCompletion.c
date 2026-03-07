char __fastcall NVMeFirmwareActivateCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r15
  char v8; // r14
  __int64 v9; // rsi
  unsigned int v10; // edx
  __int16 v11; // r9
  int v12; // r8d
  char v13; // dl
  unsigned int v14; // edx
  __int16 v15; // r9
  int v16; // eax
  int v17; // eax

  SrbExtension = GetSrbExtension(a2);
  v7 = SrbExtension;
  v8 = 1;
  if ( *(_BYTE *)(v5 + 2) == 40 )
    v9 = *(_QWORD *)(v5 + 64);
  else
    v9 = *(_QWORD *)(v5 + 24);
  if ( !v6 )
  {
    *(_DWORD *)(v9 + 20) = 16;
    *(_BYTE *)(v5 + 3) = 4;
    *(_BYTE *)(SrbExtension + 4253) |= 8u;
    goto LABEL_34;
  }
  v10 = *(unsigned __int16 *)(v6 + 14);
  v11 = v10 & 0x1FE;
  if ( (v10 & 0x1FE) == 0 && (v10 & 0xE00) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 0x10000) != 0 )
    {
LABEL_16:
      *(_BYTE *)(a2 + 3) = 1;
      goto LABEL_32;
    }
    if ( IsFirmwareActivateWithoutResetEnabled(a1) && (v12 & 0x400) == 0 )
    {
      *(_DWORD *)(v9 + 20) = 0;
      *(_BYTE *)(a2 + 3) = 1;
      if ( (unsigned int)NVMeQueueWorkItem(a1, NVMeControllerIdentifyWorkItem) )
        *(_DWORD *)(a1 + 32) |= 0x20u;
      goto LABEL_32;
    }
    *(_DWORD *)(a1 + 32) = v12 & 0xFFFFFBDF | 0x20;
    v13 = 0;
    goto LABEL_13;
  }
  if ( (v10 & 0xE00) == 0x200 )
  {
    v14 = v10 >> 1;
    if ( (unsigned __int8)v14 == 7 )
    {
      *(_DWORD *)(v9 + 20) = 7;
    }
    else
    {
      if ( (unsigned __int8)v14 == 11 )
      {
LABEL_15:
        *(_DWORD *)(v9 + 20) = 32;
        goto LABEL_16;
      }
      if ( (unsigned int)(unsigned __int8)v14 - 16 < 2 )
      {
        *(_DWORD *)(a1 + 32) |= 0x20u;
        v13 = v11 == 32;
LABEL_13:
        if ( NVMeControllerAsyncReset(a1, v13, (__int64)NVMeFirmwareActivateCompletionAfterReset, a2) )
        {
          v8 = 0;
          goto LABEL_32;
        }
        goto LABEL_15;
      }
      if ( IsFirmwareActivateWithoutResetEnabled(a1) )
      {
        v16 = *(_DWORD *)(a1 + 32);
        if ( (v16 & 0x10400) == 0 )
        {
          *(_DWORD *)(a1 + 32) = v16 | 0x400;
          v8 = 0;
          FirmwareActivate(a1, a2);
          ProcessCommand(a1, a2);
          goto LABEL_32;
        }
      }
      v17 = 6;
      if ( v15 != 12 )
        v17 = 16;
      *(_DWORD *)(v9 + 20) = v17;
    }
  }
  else
  {
    *(_DWORD *)(v9 + 20) = 16;
  }
  *(_BYTE *)(a2 + 3) = 4;
LABEL_32:
  LOBYTE(SrbExtension) = 8 * v8;
  *(_BYTE *)(v7 + 4253) = (8 * v8) | *(_BYTE *)(v7 + 4253) & 0xF7;
  if ( v8 )
    *(_DWORD *)(a1 + 32) &= ~0x800u;
LABEL_34:
  *(_DWORD *)(a1 + 32) &= ~0x10000u;
  if ( *(_BYTE *)(a2 + 3) != 1 && *(_BYTE *)(a1 + 22) )
    LOBYTE(SrbExtension) = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  return SrbExtension;
}
