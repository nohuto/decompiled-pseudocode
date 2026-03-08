/*
 * XREFs of NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0015A60
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     GetControllerMaxTransferSize @ 0x1C0007A5C (GetControllerMaxTransferSize.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EE04 (NVMeFreeDmaBuffer.c)
 *     GetFirmwareGranularity @ 0x1C0012A5C (GetFirmwareGranularity.c)
 */

__int64 __fastcall NVMeGetLogPageFirmwareSlotCompletion(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 SrbExtension; // rbp
  __int64 v5; // r15
  _BYTE *v6; // r13
  _DWORD *v7; // rdi
  char *v8; // rbx
  _DWORD *v9; // rsi
  bool v10; // r12
  int v11; // r11d
  char v12; // al
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // r9
  __int64 v15; // r10
  __int64 v16; // rdx
  unsigned __int8 v17; // cl
  char v18; // al
  __int64 result; // rax
  unsigned int v20; // eax
  char v21; // al
  int FirmwareGranularity; // eax
  _DWORD *v23; // rcx
  unsigned int ControllerMaxTransferSize; // eax
  unsigned int v25; // r8d
  int v26; // eax
  int v27; // r8d
  int v28; // eax
  unsigned __int8 v29; // dl
  unsigned __int8 v30; // r8
  __int64 v31; // r9
  unsigned __int8 v32; // cl
  char v33; // al

  SrbExtension = GetSrbExtension(a2);
  v5 = *(_QWORD *)(a1 + 1840);
  v6 = *(_BYTE **)(SrbExtension + 4200);
  if ( *(_BYTE *)(v3 + 2) == 40 )
    v7 = *(_DWORD **)(v3 + 64);
  else
    v7 = *(_DWORD **)(v3 + 24);
  v8 = (char *)v7 + (unsigned int)v7[11];
  if ( *(_BYTE *)(v3 + 3) == 1 )
  {
    v9 = v8 + 4;
    v10 = *(_DWORD *)v8 == 2 && *v9 >= 0x18u;
    NVMeZeroMemory((char *)v7 + (unsigned int)v7[11], v7[12]);
    v11 = 1;
    if ( !v10 )
    {
      *(_DWORD *)v8 = 1;
      *v9 = 16;
      v8[8] = (*(_BYTE *)(v5 + 256) & 4) != 0;
      v8[9] = (*(_BYTE *)(v5 + 260) >> 1) & 7;
      v8[10] = *v6 & 7;
      v12 = -1;
      if ( ((*v6 >> 4) & 7) != 0 )
        v12 = (*v6 >> 4) & 7;
      v13 = 0;
      v8[11] = v12;
      v14 = *(_BYTE *)(v5 + 260);
      if ( (v14 & 0xE) != 0 )
      {
        while ( 1 )
        {
          v15 = v13;
          v16 = 16LL * v13;
          if ( (unsigned int)v7[12] < (unsigned __int64)(v16 + 32) )
            break;
          v17 = v13 + 1;
          v8[v16 + 16] = v13 + 1;
          if ( v13 )
            v18 = 0;
          else
            v18 = *(_BYTE *)(v5 + 260) & 1;
          v8[v16 + 17] = v18;
          ++v13;
          *(_QWORD *)&v8[v16 + 24] = *(_QWORD *)&v6[8 * v15 + 8];
          v14 = *(_BYTE *)(v5 + 260);
          if ( v17 >= (unsigned __int8)((v14 >> 1) & 7) )
            goto LABEL_19;
        }
        v20 = v14;
LABEL_22:
        v7[12] = 16 * (v11 + ((v20 >> 1) & 7));
        v7[5] = 5;
        goto LABEL_20;
      }
      goto LABEL_19;
    }
    *(_DWORD *)v8 = 2;
    *v9 = 24;
    v8[8] = (*(_BYTE *)(v5 + 256) & 4) != 0;
    v8[9] = (*(_BYTE *)(v5 + 260) >> 1) & 7;
    v8[10] = *v6 & 7;
    v21 = -1;
    if ( ((*v6 >> 4) & 7) != 0 )
      v21 = (*v6 >> 4) & 7;
    v8[11] = v21;
    v8[12] = 1;
    FirmwareGranularity = GetFirmwareGranularity(a1);
    v23 = (_DWORD *)a1;
    if ( FirmwareGranularity )
    {
      *((_DWORD *)v8 + 4) = FirmwareGranularity;
      ControllerMaxTransferSize = GetControllerMaxTransferSize((_DWORD *)a1);
      v23 = (_DWORD *)a1;
      if ( ControllerMaxTransferSize % v25 )
      {
        v26 = GetControllerMaxTransferSize((_DWORD *)a1);
        v28 = v26 - v27;
        goto LABEL_30;
      }
    }
    else
    {
      *((_DWORD *)v8 + 4) = 4;
    }
    v28 = GetControllerMaxTransferSize(v23);
LABEL_30:
    *((_DWORD *)v8 + 5) = v28;
    v29 = 0;
    v30 = *(_BYTE *)(v5 + 260);
    if ( (v30 & 0xE) != 0 )
    {
      while ( 1 )
      {
        v31 = v29;
        if ( (unsigned int)v7[12] < 16 * ((unsigned __int64)v29 + 2) )
          break;
        v32 = v11 + v29;
        v8[24 * v29 + 24] = v11 + v29;
        if ( v29 )
          v33 = 0;
        else
          v33 = v11 & *(_BYTE *)(v5 + 260);
        v8[24 * v29 + 25] = v33;
        v29 += v11;
        *(_QWORD *)&v8[24 * v31 + 32] = *(_QWORD *)&v6[8 * v31 + 8];
        v30 = *(_BYTE *)(v5 + 260);
        if ( v32 >= (unsigned __int8)((v30 >> 1) & 7) )
          goto LABEL_19;
      }
      v20 = v30;
      goto LABEL_22;
    }
LABEL_19:
    v7[5] = 0;
    goto LABEL_20;
  }
  v7[5] = 1;
LABEL_20:
  result = NVMeFreeDmaBuffer(
             a1,
             *(unsigned int *)(SrbExtension + 4240),
             (__int64 *)(SrbExtension + 4200),
             *(_QWORD *)(SrbExtension + 4208));
  *(_DWORD *)(SrbExtension + 4240) = 0;
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  return result;
}
