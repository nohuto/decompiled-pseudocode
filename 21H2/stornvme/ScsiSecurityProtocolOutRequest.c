/*
 * XREFs of ScsiSecurityProtocolOutRequest @ 0x1C0020E6C
 * Callers:
 *     ScsiToNVMe @ 0x1C0004650 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiSecurityProtocolOutRequest(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v4; // rdx
  __int64 SrbExtension; // rsi
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 result; // rax
  unsigned int v9; // edi
  unsigned int *v10; // rcx
  unsigned int *v11; // rdx
  unsigned int v12; // ecx
  unsigned int v13; // [rsp+40h] [rbp+8h]
  unsigned __int16 v14; // [rsp+40h] [rbp+8h]

  SrbExtension = GetSrbExtension(a2);
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 1640) + 256LL) & 1) == 0 )
    goto LABEL_2;
  HIBYTE(v13) = a3[6];
  BYTE2(v13) = a3[7];
  BYTE1(v13) = a3[8];
  LOBYTE(v13) = a3[9];
  v9 = v13;
  if ( (char)a3[4] < 0 )
    v9 = v13 << 9;
  v10 = (unsigned int *)(v4 + 16);
  v11 = (unsigned int *)(v4 + 60);
  HIBYTE(v14) = a3[2];
  if ( *(_BYTE *)(v7 + 2) != 40 )
    v11 = v10;
  LOBYTE(v14) = a3[3];
  if ( *v11 >= v9 )
  {
    *(_BYTE *)(SrbExtension + 4253) = (v9 != 0 ? 2 : 0) | *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
    SrbAssignQueueId(v6, v7);
    *(_BYTE *)(SrbExtension + 4139) = a3[1];
    v12 = *(_DWORD *)(SrbExtension + 4136) & 0xFF0000FF | (v14 << 8);
    *(_BYTE *)(SrbExtension + 4096) = -127;
    *(_DWORD *)(SrbExtension + 4136) = v12;
    result = 0LL;
    *(_DWORD *)(SrbExtension + 4140) = v9;
  }
  else
  {
LABEL_2:
    NVMeSetSenseData(v7, 6, 5, 0x24u);
    return 3238002694LL;
  }
  return result;
}
