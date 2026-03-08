/*
 * XREFs of IsFirmwareActivateWithoutResetEnabled @ 0x1C0014AC4
 * Callers:
 *     FirmwareActivate @ 0x1C00116D0 (FirmwareActivate.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C0015020 (NVMeFirmwareActivateCompletion.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x1C00180C8 (NVMeWriteBufferFirmwareActivate.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C00181D0 (NVMeWriteBufferFirmwareActivateCompletion.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsFirmwareActivateWithoutResetEnabled(__int64 a1)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *(_QWORD *)(a1 + 1840);
  v2 = 0;
  if ( v1 && (*(_BYTE *)(v1 + 260) & 0x10) != 0 )
    return (*(_BYTE *)(a1 + 64) & 0x20) == 0;
  return v2;
}
