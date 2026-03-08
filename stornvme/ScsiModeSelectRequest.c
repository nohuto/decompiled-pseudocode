/*
 * XREFs of ScsiModeSelectRequest @ 0x1C0019DF8
 * Callers:
 *     ScsiToNVMe @ 0x1C00010C0 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     NVMeSetSenseData @ 0x1C0024238 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiModeSelectRequest(__int64 a1, __int64 a2)
{
  unsigned __int8 *SrbDataBuffer; // rax
  __int64 v4; // rdx
  _BYTE *v5; // r9
  __int64 v6; // r11
  unsigned __int8 *v7; // r10
  __int64 v8; // r8
  unsigned int v9; // ebx
  int v11; // eax
  unsigned int v12; // eax
  unsigned __int8 *v13; // rdi
  __int64 SrbExtension; // rbx
  __int64 v15; // r11
  char v16; // cl
  unsigned __int8 v17; // al
  unsigned int *v18; // [rsp+50h] [rbp+18h] BYREF

  v18 = 0LL;
  SrbDataBuffer = (unsigned __int8 *)GetSrbDataBuffer(a2, &v18);
  v7 = SrbDataBuffer;
  v8 = 4LL;
  if ( *v5 != 21 )
    v8 = 8LL;
  if ( (v5[1] & 0x10) == 0 )
    goto LABEL_7;
  if ( !SrbDataBuffer )
  {
    v9 = -1056964605;
LABEL_8:
    LOBYTE(v5) = 36;
    LOBYTE(v8) = 5;
    LOBYTE(v4) = 6;
    NVMeSetSenseData(v6, v4, v8, v5);
    return v9;
  }
  v4 = *v18;
  if ( (unsigned int)v4 < (unsigned int)v8 )
  {
LABEL_7:
    v9 = -1056964601;
    goto LABEL_8;
  }
  if ( *v5 == 21 )
  {
    v11 = SrbDataBuffer[3];
  }
  else
  {
    BYTE1(v18) = SrbDataBuffer[6];
    LOBYTE(v18) = SrbDataBuffer[7];
    v11 = (unsigned __int16)v18;
  }
  v12 = v8 + v11;
  v13 = &v7[v12];
  if ( (v12 < (unsigned int)v4 ? (unsigned int)v4 - v12 : 0) >= 0xC
    && (*v13 & 0x3F) == 8
    && v13[1] == 10
    && (*(_BYTE *)(*(_QWORD *)(a1 + 1840) + 525LL) & 1) != 0 )
  {
    *(_BYTE *)(a1 + 4236) = *(_BYTE *)(a1 + 4236) & 0xFE | ((unsigned __int8)(v13[2] & 4 | 8) >> 2);
    SrbExtension = GetSrbExtension(v6);
    *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
    SrbAssignQueueId(a1, v15);
    v16 = *(_BYTE *)(a1 + 4236);
    v17 = v13[2] >> 2;
    *(_BYTE *)(SrbExtension + 4096) = 9;
    *(_BYTE *)(SrbExtension + 4136) = 6;
    if ( (v16 & 4) != 0 )
      *(_DWORD *)(SrbExtension + 4136) |= 0x80000000;
    *(_DWORD *)(SrbExtension + 4140) ^= (*(_DWORD *)(SrbExtension + 4140) ^ v17) & 1;
    return 0LL;
  }
  else
  {
    LOBYTE(v5) = 36;
    LOBYTE(v8) = 5;
    LOBYTE(v4) = 6;
    NVMeSetSenseData(v6, v4, v8, v5);
    return 3238002694LL;
  }
}
