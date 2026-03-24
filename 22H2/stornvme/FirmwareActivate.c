/*
 * XREFs of FirmwareActivate @ 0x1C00117D0
 * Callers:
 *     IoctlFirmwareProcess @ 0x1C0002278 (IoctlFirmwareProcess.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C0014340 (NVMeFirmwareActivateCompletion.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0005900 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 *     BuildFirmwareActivateCommand @ 0x1C0011038 (BuildFirmwareActivateCommand.c)
 *     IsFirmwareActivateWithoutResetEnabled @ 0x1C0013E0C (IsFirmwareActivateWithoutResetEnabled.c)
 */

__int64 __fastcall FirmwareActivate(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 SrbExtension; // r14
  char v6; // bl
  _DWORD *v7; // r9
  char *v8; // rdi
  int v9; // r15d

  v3 = 0;
  SrbExtension = GetSrbExtension(a2);
  v6 = 0;
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v7 = *(_DWORD **)(v4 + 64);
  else
    v7 = *(_DWORD **)(v4 + 24);
  v8 = (char *)v7 + (unsigned int)v7[11];
  if ( v7[12] < 0xCu
    || (unsigned __int8)v8[8] > (unsigned __int8)((*(_BYTE *)(*(_QWORD *)(a1 + 1624) + 260LL) >> 1) & 7) )
  {
    v7[5] = 3;
    *(_BYTE *)(v4 + 3) = 21;
    StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
    return (unsigned int)-1056964602;
  }
  else
  {
    v9 = v7[10] >> 31;
    *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
    SrbAssignQueueId(a1, v4);
    if ( (unsigned __int8)IsFirmwareActivateWithoutResetEnabled(a1) && (*(_DWORD *)(a1 + 24) & 0x400) == 0 )
      v6 = 1;
    BuildFirmwareActivateCommand(SrbExtension + 4096, v8[8], v9, v6);
    *(_QWORD *)(SrbExtension + 4224) = NVMeFirmwareActivateCompletion;
  }
  return v3;
}
