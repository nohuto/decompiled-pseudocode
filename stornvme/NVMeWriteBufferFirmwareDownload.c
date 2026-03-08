/*
 * XREFs of NVMeWriteBufferFirmwareDownload @ 0x1C00183BC
 * Callers:
 *     ScsiToNVMe @ 0x1C00010C0 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     GetControllerMaxTransferSize @ 0x1C0007A5C (GetControllerMaxTransferSize.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     FillClippedSGL @ 0x1C00115F0 (FillClippedSGL.c)
 *     GetFirmwareGranularity @ 0x1C0012A5C (GetFirmwareGranularity.c)
 *     NVMeQueueWorkItem @ 0x1C0016B88 (NVMeQueueWorkItem.c)
 *     NVMeSetSenseData @ 0x1C0024238 (NVMeSetSenseData.c)
 */

__int64 __fastcall NVMeWriteBufferFirmwareDownload(_DWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  __int64 SrbExtension; // rbp
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r15d
  unsigned int v10; // esi
  unsigned int FirmwareGranularity; // eax
  unsigned int v12; // r12d
  __int64 v13; // rdx

  v3 = 0;
  SrbExtension = GetSrbExtension(a2);
  v9 = *(unsigned __int8 *)(v7 + 5) | ((*(unsigned __int8 *)(v7 + 4) | (*(unsigned __int8 *)(v7 + 3) << 8)) << 8);
  v10 = *(unsigned __int8 *)(v7 + 8) | ((*(unsigned __int8 *)(v7 + 7) | (*(unsigned __int8 *)(v7 + 6) << 8)) << 8);
  if ( *(_BYTE *)(v7 + 5) & 3 | *(_BYTE *)(v7 + 8) & 3 )
  {
    LOBYTE(v5) = 6;
    goto LABEL_12;
  }
  if ( v10 > (unsigned int)GetControllerMaxTransferSize(a1) )
    goto LABEL_3;
  if ( (a1[8] & 0x800) == 0 )
  {
    NVMeQueueWorkItem((__int64)a1, (__int64)NVMeControllerValidateFirmwareActivateCapability, 0LL, v8);
    a1[8] |= 0x800u;
  }
  FirmwareGranularity = GetFirmwareGranularity((__int64)a1);
  v7 = FirmwareGranularity;
  if ( FirmwareGranularity )
  {
    v5 = v10 % FirmwareGranularity;
    if ( v10 % FirmwareGranularity )
    {
LABEL_3:
      LOBYTE(v5) = 21;
LABEL_12:
      LOBYTE(v8) = 36;
      LOBYTE(v7) = 5;
      NVMeSetSenseData(a2, v5, v7, v8);
      return (unsigned int)-1056964602;
    }
  }
  if ( (a1[16] & 8) != 0 )
  {
    *(_DWORD *)(SrbExtension + 4216) = v9;
    *(_BYTE *)(SrbExtension + 4253) |= 3u;
    SrbAssignQueueId((__int64)a1, a2);
    *(_BYTE *)(SrbExtension + 4096) = 17;
    *(_DWORD *)(SrbExtension + 4140) = v9 >> 2;
    *(_DWORD *)(SrbExtension + 4136) = (v10 >> 2) - 1;
    *(_QWORD *)(SrbExtension + 4224) = NVMeWriteBufferFirmwareDownloadCompletion;
  }
  else
  {
    v12 = (((unsigned int)GetControllerMaxTransferSize(a1) - 1) >> 12) + 2;
    StorPortExtendedFunction(0LL, a1, 24 * v12 + 16, 1701672526LL);
    LOBYTE(v13) = 38;
    NVMeSetSenseData(a2, v13, 0LL, 0LL);
    return (unsigned int)-1056964605;
  }
  return v3;
}
