/*
 * XREFs of NVMeWriteBufferFirmwareActivateCompletion @ 0x1C00181D0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     NVMeControllerAsyncReset @ 0x1C000CAB0 (NVMeControllerAsyncReset.c)
 *     GetSrbScsiData @ 0x1C0012B7C (GetSrbScsiData.c)
 *     IsFirmwareActivateWithoutResetEnabled @ 0x1C0014AC4 (IsFirmwareActivateWithoutResetEnabled.c)
 *     NVMeQueueWorkItem @ 0x1C0016B88 (NVMeQueueWorkItem.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x1C00180C8 (NVMeWriteBufferFirmwareActivate.c)
 */

char __fastcall NVMeWriteBufferFirmwareActivateCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r14
  char v8; // si
  unsigned int v9; // edx
  __int16 v10; // r9
  __int64 v11; // r9
  char v12; // dl
  unsigned int v13; // edx
  int v15; // [rsp+50h] [rbp+8h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v7 = SrbExtension;
  v8 = 1;
  if ( !v6 )
  {
    *(_BYTE *)(v5 + 3) = 4;
    *(_BYTE *)(SrbExtension + 4253) |= 8u;
    return SrbExtension;
  }
  v9 = *(unsigned __int16 *)(v6 + 14);
  v10 = v9 & 0x1FE;
  if ( (v9 & 0x1FE) == 0 && (v9 & 0xE00) == 0 )
  {
    if ( IsFirmwareActivateWithoutResetEnabled(a1) && (*(_DWORD *)(a1 + 32) & 0x400) == 0 )
    {
      *(_BYTE *)(a2 + 3) = 1;
      if ( (unsigned int)NVMeQueueWorkItem(a1, (__int64)NVMeControllerIdentifyWorkItem, 0LL, v11) )
        *(_DWORD *)(a1 + 32) |= 0x20u;
      goto LABEL_21;
    }
    *(_DWORD *)(a1 + 32) |= 0x20u;
    *(_DWORD *)(a1 + 32) &= ~0x400u;
    v12 = 0;
LABEL_9:
    if ( NVMeControllerAsyncReset(a1, v12, (__int64)NVMeWriteBufferFirmwareActivateCompletionAfterReset, a2) )
    {
      v8 = 0;
      goto LABEL_21;
    }
    goto LABEL_11;
  }
  if ( (v9 & 0xE00) != 0x200 )
    goto LABEL_20;
  v13 = v9 >> 1;
  if ( (unsigned __int8)v13 == 7 )
    goto LABEL_20;
  if ( (unsigned __int8)v13 == 11 )
  {
LABEL_11:
    *(_BYTE *)(a2 + 3) = 1;
    goto LABEL_21;
  }
  if ( (unsigned int)(unsigned __int8)v13 - 16 < 2 )
  {
    *(_DWORD *)(a1 + 32) |= 0x20u;
    v12 = v10 == 32;
    goto LABEL_9;
  }
  if ( !IsFirmwareActivateWithoutResetEnabled(a1) || (*(_DWORD *)(a1 + 32) & 0x400) != 0 )
  {
LABEL_20:
    *(_BYTE *)(a2 + 3) = 4;
  }
  else
  {
    GetSrbScsiData(a2, &v15, 0LL, 0LL, 0LL);
    *(_DWORD *)(a1 + 32) |= 0x400u;
    v8 = 0;
    NVMeWriteBufferFirmwareActivate(a1, a2);
    ProcessCommand(a1, a2);
  }
LABEL_21:
  LOBYTE(SrbExtension) = 8 * v8;
  *(_BYTE *)(v7 + 4253) = (8 * v8) | *(_BYTE *)(v7 + 4253) & 0xF7;
  if ( v8 )
    *(_DWORD *)(a1 + 32) &= ~0x800u;
  return SrbExtension;
}
