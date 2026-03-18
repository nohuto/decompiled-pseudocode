/*
 * XREFs of ScsiModeSelectRequest @ 0x1C0020788
 * Callers:
 *     ScsiToNVMe @ 0x1C0004650 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiModeSelectRequest(__int64 a1, __int64 a2, char *a3)
{
  unsigned __int8 *v5; // rdx
  __int64 v6; // r9
  char v7; // r11
  char v8; // al
  bool v9; // zf
  unsigned int v10; // r8d
  unsigned int v11; // ebx
  unsigned int v12; // ecx
  int v14; // eax
  unsigned int v15; // eax
  unsigned __int8 *v16; // rbx
  __int64 SrbExtension; // rdi
  __int64 v18; // r10
  char v19; // cl
  unsigned __int8 v20; // al
  unsigned __int16 v21; // [rsp+48h] [rbp+10h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = *(unsigned __int8 **)(a2 + 64);
    v6 = 60LL;
  }
  else
  {
    v5 = *(unsigned __int8 **)(a2 + 24);
    v6 = 16LL;
  }
  v7 = *a3;
  v8 = a3[1];
  v9 = *a3 == 21;
  v10 = 4;
  if ( !v9 )
    v10 = 8;
  if ( (v8 & 0x10) == 0 )
    goto LABEL_10;
  if ( !v5 )
  {
    v11 = -1056964605;
LABEL_11:
    NVMeSetSenseData(a2, 6, 5, 0x24u);
    return v11;
  }
  v12 = *(_DWORD *)(a2 + v6);
  if ( v12 < v10 )
  {
LABEL_10:
    v11 = -1056964601;
    goto LABEL_11;
  }
  if ( v7 == 21 )
  {
    v14 = v5[3];
  }
  else
  {
    HIBYTE(v21) = v5[6];
    LOBYTE(v21) = v5[7];
    v14 = v21;
  }
  v15 = v10 + v14;
  v16 = &v5[v15];
  if ( v12 > v15
    && v12 - v15 >= 0xC
    && (*v16 & 0x3F) == 8
    && v16[1] == 10
    && (*(_BYTE *)(*(_QWORD *)(a1 + 1640) + 525LL) & 1) != 0 )
  {
    *(_BYTE *)(a1 + 4036) = *(_BYTE *)(a1 + 4036) & 0xFE | ((unsigned __int8)(v16[2] & 4 | 8) >> 2);
    SrbExtension = GetSrbExtension(a2);
    *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
    SrbAssignQueueId(a1, v18);
    v19 = *(_BYTE *)(a1 + 4036);
    v20 = v16[2] >> 2;
    *(_BYTE *)(SrbExtension + 4096) = 9;
    *(_BYTE *)(SrbExtension + 4136) = 6;
    if ( (v19 & 4) != 0 )
      *(_DWORD *)(SrbExtension + 4136) |= 0x80000000;
    *(_DWORD *)(SrbExtension + 4140) ^= (*(_DWORD *)(SrbExtension + 4140) ^ v20) & 1;
    return 0LL;
  }
  else
  {
    NVMeSetSenseData(a2, 6, 5, 0x24u);
    return 3238002694LL;
  }
}
