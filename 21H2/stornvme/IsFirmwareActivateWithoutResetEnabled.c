/*
 * XREFs of IsFirmwareActivateWithoutResetEnabled @ 0x1C001C698
 * Callers:
 *     FirmwareActivate @ 0x1C001A838 (FirmwareActivate.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C001CB60 (NVMeFirmwareActivateCompletion.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x1C001F3CC (NVMeWriteBufferFirmwareActivate.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C001F4D0 (NVMeWriteBufferFirmwareActivateCompletion.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsFirmwareActivateWithoutResetEnabled(__int64 a1)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *(_QWORD *)(a1 + 1640);
  v2 = 0;
  if ( v1 && (*(_BYTE *)(v1 + 260) & 0x10) != 0 )
    return (*(_BYTE *)(a1 + 64) & 0x20) == 0;
  return v2;
}
