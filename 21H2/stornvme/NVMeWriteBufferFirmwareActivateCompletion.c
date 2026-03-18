/*
 * XREFs of NVMeWriteBufferFirmwareActivateCompletion @ 0x1C001F4D0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbScsiData @ 0x1C00031F8 (GetSrbScsiData.c)
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeControllerAsyncReset @ 0x1C001892C (NVMeControllerAsyncReset.c)
 *     IsFirmwareActivateWithoutResetEnabled @ 0x1C001C698 (IsFirmwareActivateWithoutResetEnabled.c)
 *     NVMeQueueWorkItem @ 0x1C001DF70 (NVMeQueueWorkItem.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x1C001F3CC (NVMeWriteBufferFirmwareActivate.c)
 */

char __fastcall NVMeWriteBufferFirmwareActivateCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r14
  char v8; // si
  unsigned int v9; // edx
  __int64 v10; // r9
  char v11; // dl
  int v12; // eax
  int v14; // [rsp+50h] [rbp+8h] BYREF

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
    if ( IsFirmwareActivateWithoutResetEnabled(a1) && (*(_DWORD *)(a1 + 32) & 0x400) == 0 )
    {
      *(_BYTE *)(a2 + 3) = 1;
      if ( (unsigned int)NVMeQueueWorkItem(a1, (__int64)NVMeControllerIdentifyWorkItem, 0LL, v10) )
        *(_DWORD *)(a1 + 32) |= 0x20u;
      goto LABEL_21;
    }
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFFFBDF | 0x20;
    v11 = 0;
LABEL_9:
    if ( NVMeControllerAsyncReset(a1, v11, (__int64)NVMeWriteBufferFirmwareActivateCompletionAfterReset, a2) )
    {
      v8 = 0;
      goto LABEL_21;
    }
    goto LABEL_11;
  }
  if ( (v9 & 0xE00) != 0x200 )
    goto LABEL_20;
  v12 = (unsigned __int8)(v9 >> 1);
  if ( v12 == 7 )
    goto LABEL_20;
  if ( v12 == 11 )
  {
LABEL_11:
    *(_BYTE *)(a2 + 3) = 1;
    goto LABEL_21;
  }
  if ( (unsigned int)(v12 - 16) <= 1 )
  {
    *(_DWORD *)(a1 + 32) |= 0x20u;
    v11 = (v9 & 0x1FE) == 32;
    goto LABEL_9;
  }
  if ( !IsFirmwareActivateWithoutResetEnabled(a1) || (*(_DWORD *)(a1 + 32) & 0x400) != 0 )
  {
LABEL_20:
    *(_BYTE *)(a2 + 3) = 4;
  }
  else
  {
    GetSrbScsiData(a2, &v14, 0LL, 0LL, 0LL);
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
