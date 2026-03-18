/*
 * XREFs of FirmwareActivate @ 0x1C001A838
 * Callers:
 *     IoctlFirmwareProcess @ 0x1C00029FC (IoctlFirmwareProcess.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C001CB60 (NVMeFirmwareActivateCompletion.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     BuildFirmwareActivateCommand @ 0x1C001A08C (BuildFirmwareActivateCommand.c)
 *     IsFirmwareActivateWithoutResetEnabled @ 0x1C001C698 (IsFirmwareActivateWithoutResetEnabled.c)
 */

__int64 __fastcall FirmwareActivate(__int64 a1, __int64 a2)
{
  char v3; // bl
  unsigned int v4; // r14d
  __int64 v5; // rdx
  __int64 SrbExtension; // rbp
  _DWORD *v7; // r9
  char *v8; // rsi
  int v9; // r15d

  v3 = 0;
  v4 = 0;
  SrbExtension = GetSrbExtension(a2);
  if ( *(_BYTE *)(v5 + 2) == 40 )
    v7 = *(_DWORD **)(v5 + 64);
  else
    v7 = *(_DWORD **)(v5 + 24);
  v8 = (char *)v7 + (unsigned int)v7[11];
  if ( v7[12] < 0xCu
    || (unsigned __int8)v8[8] > (unsigned __int8)((*(_BYTE *)(*(_QWORD *)(a1 + 1640) + 260LL) >> 1) & 7) )
  {
    v7[5] = 3;
    v4 = -1056964602;
    *(_BYTE *)(v5 + 3) = 21;
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
  }
  else
  {
    v9 = v7[10] >> 31;
    *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
    SrbAssignQueueId(a1, v5);
    if ( (unsigned __int8)IsFirmwareActivateWithoutResetEnabled(a1) )
      v3 = (*(_DWORD *)(a1 + 32) & 0x400) == 0;
    BuildFirmwareActivateCommand(SrbExtension + 4096, v8[8], v9, v3);
    *(_QWORD *)(SrbExtension + 4224) = NVMeFirmwareActivateCompletion;
  }
  return v4;
}
