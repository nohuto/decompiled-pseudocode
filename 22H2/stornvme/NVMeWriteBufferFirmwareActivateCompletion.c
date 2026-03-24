/*
 * XREFs of NVMeWriteBufferFirmwareActivateCompletion @ 0x1C0015A60
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     GetSrbScsiData @ 0x1C0004498 (GetSrbScsiData.c)
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 *     NVMeControllerAsyncReset @ 0x1C000D560 (NVMeControllerAsyncReset.c)
 *     IsFirmwareActivateWithoutResetEnabled @ 0x1C0013E0C (IsFirmwareActivateWithoutResetEnabled.c)
 *     NVMeQueueWorkItem @ 0x1C001522C (NVMeQueueWorkItem.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x1C0015964 (NVMeWriteBufferFirmwareActivate.c)
 */

char __fastcall NVMeWriteBufferFirmwareActivateCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r14
  char v8; // si
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r9
  char v12; // dl
  int v13; // eax
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
  if ( (v9 & 0x1FE) == 0 && (v9 & 0xE00) == 0 )
  {
    if ( IsFirmwareActivateWithoutResetEnabled(a1) && (*(_DWORD *)(a1 + 24) & 0x400) == 0 )
    {
      *(_BYTE *)(a2 + 3) = 1;
      if ( (unsigned int)NVMeQueueWorkItem(v10, (__int64)NVMeControllerIdentifyWorkItem, 0LL, v11) )
        *(_DWORD *)(a1 + 24) |= 0x20u;
      goto LABEL_21;
    }
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFFFBDF | 0x20;
    v12 = 0;
LABEL_9:
    if ( NVMeControllerAsyncReset(v10, v12, (__int64)NVMeWriteBufferFirmwareActivateCompletionAfterReset, a2) )
    {
      v8 = 0;
      goto LABEL_21;
    }
    goto LABEL_11;
  }
  if ( (v9 & 0xE00) != 0x200 )
    goto LABEL_20;
  v13 = (unsigned __int8)(v9 >> 1);
  if ( v13 == 7 )
    goto LABEL_20;
  if ( v13 == 11 )
  {
LABEL_11:
    *(_BYTE *)(a2 + 3) = 1;
    goto LABEL_21;
  }
  if ( (unsigned int)(v13 - 16) <= 1 )
  {
    *(_DWORD *)(a1 + 24) |= 0x20u;
    v10 = a1;
    v12 = (v9 & 0x1FE) == 32;
    goto LABEL_9;
  }
  if ( !IsFirmwareActivateWithoutResetEnabled(a1) || (*(_DWORD *)(a1 + 24) & 0x400) != 0 )
  {
LABEL_20:
    *(_BYTE *)(a2 + 3) = 4;
  }
  else
  {
    GetSrbScsiData(a2, &v15, 0LL, 0LL, 0LL);
    *(_DWORD *)(a1 + 24) |= 0x400u;
    v8 = 0;
    NVMeWriteBufferFirmwareActivate(a1, a2);
    ProcessCommand(a1, a2);
  }
LABEL_21:
  LOBYTE(SrbExtension) = 8 * v8;
  *(_BYTE *)(v7 + 4253) = (8 * v8) | *(_BYTE *)(v7 + 4253) & 0xF7;
  if ( v8 )
    *(_DWORD *)(a1 + 24) &= ~0x800u;
  return SrbExtension;
}
