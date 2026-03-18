/*
 * XREFs of ScsiSanitizeRequest @ 0x1C0020C04
 * Callers:
 *     ScsiToNVMe @ 0x1C0004650 (ScsiToNVMe.c)
 * Callees:
 *     GetNamespaceId @ 0x1C00051C8 (GetNamespaceId.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiSanitizeRequest(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 SrbExtension; // rsi
  __int64 v5; // r8
  __int64 v6; // r10
  __int64 v7; // r11
  unsigned __int8 v8; // al
  unsigned int v9; // r14d
  __int64 v10; // r15
  char v11; // cl
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // edi
  unsigned int v15; // ecx
  int v16; // r12d
  int v17; // edi
  int NamespaceId; // eax
  __int16 v19; // dx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax

  SrbExtension = GetSrbExtension(a2);
  v7 = *(_QWORD *)(a1 + 1640);
  if ( *(_BYTE *)(v3 + 2) == 40 )
    v8 = *(_BYTE *)(*(unsigned int *)(v3 + 52) + v3 + 10);
  else
    v8 = *(_BYTE *)(v3 + 7);
  v9 = *(unsigned __int8 *)(v5 + 1);
  v10 = v8;
  if ( (v9 & 0x80u) == 0 )
  {
    v11 = v9 & 0x1F;
    if ( (unsigned __int8)((v9 & 0x1F) - 2) <= 1u )
    {
      v12 = *(_DWORD *)(v7 + 328);
      if ( (v12 & 2) != 0 && v11 == 2 || (v12 & 1) != 0 && v11 == 3 )
      {
        v13 = 0;
        if ( v11 == 3 )
          v14 = 4;
        else
          v14 = 2;
        *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
        SrbAssignQueueId(a1, v6);
        v15 = v14 | *(_DWORD *)(SrbExtension + 4136) & 0xFFFFFFF8;
        *(_BYTE *)(SrbExtension + 4096) = -124;
        *(_DWORD *)(SrbExtension + 4140) = 0;
        *(_QWORD *)(SrbExtension + 4224) = NVMeSanitizeCommandCompletion;
        *(_DWORD *)(SrbExtension + 4136) = (v9 >> 2) & 8 | v15 & 0xFFFFFC07;
        return v13;
      }
      if ( (*(_BYTE *)(v7 + 256) & 2) == 0 )
      {
        NVMeSetSenseData(v6, 6, 5, 0x24u);
        return (unsigned int)-1056964602;
      }
      if ( v11 != 31
        && (*(_DWORD *)(a1 + 212) <= 1u || (*(_BYTE *)(v7 + 524) & 2) == 0)
        && (v11 != 3 || (*(_BYTE *)(v7 + 524) & 4) != 0) )
      {
        v13 = 0;
        v16 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 8 * v10 + 1752) + 64LL);
        if ( v11 == 3 )
          v17 = 2;
        else
          v17 = v11 == 2;
        *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
        SrbAssignQueueId(a1, v6);
        NamespaceId = GetNamespaceId(a1, v10);
        v19 = *(_WORD *)(*(_QWORD *)(a1 + 8 * v10 + 1752) + 48LL);
        v20 = *(_QWORD *)(a1 + 1640);
        *(_BYTE *)(SrbExtension + 4096) = 0x80;
        if ( (*(_BYTE *)(v20 + 524) & 2) != 0 )
          NamespaceId = -1;
        *(_DWORD *)(SrbExtension + 4100) = NamespaceId;
        v21 = *(_DWORD *)(SrbExtension + 4136) ^ (*(_DWORD *)(SrbExtension + 4136) ^ v16) & 0xF;
        v22 = v21 | 0x10;
        v23 = v21 & 0xFFFFFFEF;
        if ( v19 )
          v22 = v23;
        *(_DWORD *)(SrbExtension + 4136) = (v17 << 9) | v22 & 0xFFFFF01F;
        return v13;
      }
    }
  }
  NVMeSetSenseData(v6, 6, 5, 0x24u);
  return 3238002694LL;
}
