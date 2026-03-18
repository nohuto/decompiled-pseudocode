/*
 * XREFs of NVMeWriteBufferFirmwareDownload @ 0x1C001F6BC
 * Callers:
 *     ScsiToNVMe @ 0x1C0004650 (ScsiToNVMe.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     GetControllerMaxTransferSize @ 0x1C000569C (GetControllerMaxTransferSize.c)
 *     GetFirmwareGranularity @ 0x1C00056D0 (GetFirmwareGranularity.c)
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 *     FillClippedSGL @ 0x1C001A758 (FillClippedSGL.c)
 *     NVMeQueueWorkItem @ 0x1C001DF70 (NVMeQueueWorkItem.c)
 */

__int64 __fastcall NVMeWriteBufferFirmwareDownload(_DWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 SrbExtension; // rbp
  unsigned __int8 *v6; // r8
  unsigned int v7; // r15d
  unsigned int v8; // esi
  __int64 v9; // r9
  char v10; // dl
  unsigned int FirmwareGranularity; // r8d
  unsigned int v12; // r12d

  v3 = 0;
  SrbExtension = GetSrbExtension(a2);
  v7 = v6[5] | ((v6[4] | (v6[3] << 8)) << 8);
  v8 = v6[8] | ((v6[7] | (v6[6] << 8)) << 8);
  if ( v6[5] & 3 | v6[8] & 3 )
  {
    v10 = 6;
    goto LABEL_12;
  }
  if ( v8 > (unsigned int)GetControllerMaxTransferSize(a1) )
    goto LABEL_3;
  if ( (a1[8] & 0x800) == 0 )
  {
    NVMeQueueWorkItem((__int64)a1, (__int64)NVMeControllerValidateFirmwareActivateCapability, 0LL, v9);
    a1[8] |= 0x800u;
  }
  FirmwareGranularity = GetFirmwareGranularity((__int64)a1);
  if ( FirmwareGranularity )
  {
    if ( v8 % FirmwareGranularity )
    {
LABEL_3:
      v10 = 21;
LABEL_12:
      NVMeSetSenseData(a2, v10, 5, 0x24u);
      return (unsigned int)-1056964602;
    }
  }
  if ( (a1[16] & 8) != 0 )
  {
    *(_DWORD *)(SrbExtension + 4216) = v7;
    *(_BYTE *)(SrbExtension + 4253) |= 3u;
    SrbAssignQueueId((__int64)a1, a2);
    *(_BYTE *)(SrbExtension + 4096) = 17;
    *(_DWORD *)(SrbExtension + 4140) = v7 >> 2;
    *(_DWORD *)(SrbExtension + 4136) = (v8 >> 2) - 1;
    *(_QWORD *)(SrbExtension + 4224) = NVMeWriteBufferFirmwareDownloadCompletion;
  }
  else
  {
    v12 = (((unsigned int)GetControllerMaxTransferSize(a1) - 1) >> 12) + 2;
    StorPortExtendedFunction(0LL, a1, 24 * v12 + 16, 1701672526LL);
    NVMeSetSenseData(a2, 38, 0, 0);
    return (unsigned int)-1056964605;
  }
  return v3;
}
