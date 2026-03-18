/*
 * XREFs of NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0002BF0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C00053FC (NVMeFreeDmaBuffer.c)
 *     GetControllerMaxTransferSize @ 0x1C000569C (GetControllerMaxTransferSize.c)
 *     GetFirmwareGranularity @ 0x1C00056D0 (GetFirmwareGranularity.c)
 */

__int64 __fastcall NVMeGetLogPageFirmwareSlotCompletion(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 SrbExtension; // rsi
  __int64 v5; // r14
  _BYTE *v6; // r12
  _DWORD *v7; // rdi
  char *v8; // rbx
  bool v9; // r15
  int v10; // r11d
  char v11; // al
  unsigned int FirmwareGranularity; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  int ControllerMaxTransferSize; // eax
  unsigned __int8 v17; // dl
  unsigned __int8 v18; // r9
  __int64 v19; // r8
  unsigned __int8 v20; // cl
  char v21; // al
  __int64 result; // rax
  char v23; // al
  unsigned __int8 v24; // r8
  __int64 v25; // r10
  __int64 v26; // rdx
  char v27; // al
  unsigned int v28; // eax
  unsigned int v29; // r8d
  int v30; // eax
  int v31; // r8d

  SrbExtension = GetSrbExtension(a2);
  v5 = *(_QWORD *)(a1 + 1640);
  v6 = *(_BYTE **)(SrbExtension + 4200);
  if ( *(_BYTE *)(v3 + 2) == 40 )
    v7 = *(_DWORD **)(v3 + 64);
  else
    v7 = *(_DWORD **)(v3 + 24);
  v8 = (char *)v7 + (unsigned int)v7[11];
  if ( *(_BYTE *)(v3 + 3) != 1 )
  {
    v7[5] = 1;
    goto LABEL_19;
  }
  v9 = *(_DWORD *)v8 == 2 && *((_DWORD *)v8 + 1) >= 0x18u;
  NVMeZeroMemory((char *)v7 + (unsigned int)v7[11], (unsigned int)v7[12]);
  v10 = 1;
  if ( !v9 )
  {
    *(_DWORD *)v8 = 1;
    *((_DWORD *)v8 + 1) = 16;
    v8[8] = (*(_BYTE *)(v5 + 256) & 4) != 0;
    v8[9] = (*(_BYTE *)(v5 + 260) >> 1) & 7;
    v8[10] = *v6 & 7;
    v23 = -1;
    if ( ((*v6 >> 4) & 7) != 0 )
      v23 = (*v6 >> 4) & 7;
    v24 = 0;
    v8[11] = v23;
    v18 = *(_BYTE *)(v5 + 260);
    if ( (v18 & 0xE) != 0 )
    {
      while ( 1 )
      {
        v25 = v24;
        v26 = 16LL * v24;
        if ( (unsigned int)v7[12] < (unsigned __int64)(v26 + 32) )
          goto LABEL_33;
        v8[v26 + 16] = v24 + 1;
        if ( v24 )
          v27 = 0;
        else
          v27 = *(_BYTE *)(v5 + 260) & 1;
        v8[v26 + 17] = v27;
        ++v24;
        *(_QWORD *)&v8[16 * v25 + 24] = *(_QWORD *)&v6[8 * v25 + 8];
        v18 = *(_BYTE *)(v5 + 260);
        if ( v24 >= (unsigned __int8)((v18 >> 1) & 7) )
          goto LABEL_18;
      }
    }
    goto LABEL_18;
  }
  *(_DWORD *)v8 = 2;
  *((_DWORD *)v8 + 1) = 24;
  v8[8] = (*(_BYTE *)(v5 + 256) & 4) != 0;
  v8[9] = (*(_BYTE *)(v5 + 260) >> 1) & 7;
  v8[10] = *v6 & 7;
  v11 = -1;
  if ( ((*v6 >> 4) & 7) != 0 )
    v11 = (*v6 >> 4) & 7;
  v8[11] = v11;
  v8[12] = 1;
  FirmwareGranularity = GetFirmwareGranularity(a1);
  v14 = FirmwareGranularity;
  v15 = a1;
  if ( !FirmwareGranularity )
  {
    *((_DWORD *)v8 + 4) = 4;
LABEL_12:
    ControllerMaxTransferSize = GetControllerMaxTransferSize(v15, v13, v14);
    goto LABEL_13;
  }
  *((_DWORD *)v8 + 4) = FirmwareGranularity;
  v28 = GetControllerMaxTransferSize(a1, v13, FirmwareGranularity);
  v15 = a1;
  v13 = v28 % v29;
  v14 = v13;
  if ( !(_DWORD)v13 )
    goto LABEL_12;
  v30 = GetControllerMaxTransferSize(a1, v13, v13);
  ControllerMaxTransferSize = v30 - v31;
LABEL_13:
  *((_DWORD *)v8 + 5) = ControllerMaxTransferSize;
  v17 = 0;
  v18 = *(_BYTE *)(v5 + 260);
  if ( (v18 & 0xE) != 0 )
  {
    while ( 1 )
    {
      v19 = v17;
      if ( (unsigned int)v7[12] < 16 * ((unsigned __int64)v17 + 2) )
        break;
      v20 = v10 + v17;
      v8[24 * v17 + 24] = v10 + v17;
      if ( v17 )
        v21 = 0;
      else
        v21 = v10 & *(_BYTE *)(v5 + 260);
      v8[24 * v17 + 25] = v21;
      v17 += v10;
      *(_QWORD *)&v8[24 * v19 + 32] = *(_QWORD *)&v6[8 * v19 + 8];
      v18 = *(_BYTE *)(v5 + 260);
      if ( v20 >= (unsigned __int8)((v18 >> 1) & 7) )
        goto LABEL_18;
    }
LABEL_33:
    v7[12] = 16 * (v10 + ((v18 >> 1) & 7));
    v7[5] = 5;
    goto LABEL_19;
  }
LABEL_18:
  v7[5] = 0;
LABEL_19:
  result = NVMeFreeDmaBuffer(
             a1,
             *(unsigned int *)(SrbExtension + 4240),
             SrbExtension + 4200,
             *(_QWORD *)(SrbExtension + 4208));
  *(_DWORD *)(SrbExtension + 4240) = 0;
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  return result;
}
