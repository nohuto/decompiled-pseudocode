/*
 * XREFs of FirmwareDownload @ 0x1C001AA58
 * Callers:
 *     IoctlFirmwareProcess @ 0x1C00029FC (IoctlFirmwareProcess.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     GetControllerMaxTransferSize @ 0x1C000569C (GetControllerMaxTransferSize.c)
 *     GetFirmwareGranularity @ 0x1C00056D0 (GetFirmwareGranularity.c)
 *     FillClippedSGL @ 0x1C001A758 (FillClippedSGL.c)
 *     NVMeQueueWorkItem @ 0x1C001DF70 (NVMeQueueWorkItem.c)
 */

__int64 __fastcall FirmwareDownload(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  __int64 SrbExtension; // r15
  _DWORD *v7; // rdi
  char *v8; // rbp
  char *v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  char v13; // r9
  unsigned int ControllerMaxTransferSize; // eax
  unsigned __int64 v16; // r9
  unsigned int FirmwareGranularity; // eax
  unsigned int v18; // r12d
  int v19; // eax
  int v20; // eax
  unsigned __int64 v21; // rcx
  int v22; // eax

  v3 = 0;
  SrbExtension = GetSrbExtension(a2);
  if ( *(_BYTE *)(v5 + 2) == 40 )
    v7 = *(_DWORD **)(v5 + 64);
  else
    v7 = *(_DWORD **)(v5 + 24);
  v8 = (char *)v7 + (unsigned int)v7[11];
  if ( *(_DWORD *)v8 == 2 && *((_DWORD *)v8 + 1) >= 0x20u )
    v9 = (char *)v7 + (unsigned int)v7[11];
  else
    v9 = 0LL;
  v10 = (unsigned int)v7[12];
  if ( v9 )
  {
    if ( (unsigned int)v10 < 0x20 )
      goto LABEL_13;
    v11 = *((_QWORD *)v9 + 2);
    v12 = v11 + 32;
  }
  else
  {
    if ( (unsigned int)v10 < 0x18 )
      goto LABEL_13;
    v11 = *((_QWORD *)v8 + 2);
    v12 = v11 + 24;
  }
  if ( v10 < v12 || !v11 || (v8[8] & 3) != 0 || (*((_QWORD *)v8 + 2) & 3) != 0 )
    goto LABEL_13;
  ControllerMaxTransferSize = GetControllerMaxTransferSize((_DWORD *)a1);
  if ( v16 > ControllerMaxTransferSize )
  {
    v7[5] = 4;
    goto LABEL_14;
  }
  if ( (*(_DWORD *)(a1 + 32) & 0x800) == 0 )
  {
    NVMeQueueWorkItem(a1, NVMeControllerValidateFirmwareActivateCapability);
    *(_DWORD *)(a1 + 32) |= 0x800u;
  }
  FirmwareGranularity = GetFirmwareGranularity(a1);
  if ( FirmwareGranularity )
  {
    if ( *((_QWORD *)v8 + 2) % (unsigned __int64)FirmwareGranularity )
    {
LABEL_13:
      v7[5] = 3;
LABEL_14:
      v3 = -1056964602;
      v13 = 21;
      goto LABEL_15;
    }
  }
  if ( (*(_DWORD *)(a1 + 64) & 8) == 0 )
  {
    v18 = (((unsigned int)GetControllerMaxTransferSize((_DWORD *)a1) - 1) >> 12) + 2;
    StorPortExtendedFunction(0LL, a1, 24 * v18 + 16, 1701672526LL);
    v7[5] = 1;
    v13 = 4;
    v3 = -1056964605;
LABEL_15:
    *(_BYTE *)(a2 + 3) = v13;
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
    return v3;
  }
  v19 = v7[11];
  if ( v9 )
    v20 = v19 + 32;
  else
    v20 = v19 + 24;
  *(_DWORD *)(SrbExtension + 4216) = v20;
  *(_BYTE *)(SrbExtension + 4253) |= 3u;
  SrbAssignQueueId(a1, a2);
  v21 = *((_QWORD *)v8 + 1);
  v22 = (*((_QWORD *)v8 + 2) >> 2) - 1;
  *(_BYTE *)(SrbExtension + 4096) = 17;
  *(_DWORD *)(SrbExtension + 4136) = v22;
  *(_QWORD *)(SrbExtension + 4224) = NVMeFirmwareDownloadCompletion;
  *(_DWORD *)(SrbExtension + 4140) = v21 >> 2;
  return v3;
}
