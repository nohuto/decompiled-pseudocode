__int64 __fastcall ScsiSanitizeRequest(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rdx
  unsigned __int8 v8; // al
  unsigned int v9; // ebx
  __int64 v10; // r12
  int v11; // edi
  char v12; // cl
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  int v17; // r13d
  int v18; // r14d
  int NamespaceId; // eax
  __int16 v20; // dx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax

  SrbExtension = GetSrbExtension(a2);
  v7 = *(_QWORD *)(a1 + 1840);
  if ( *(_BYTE *)(v6 + 2) == 40 )
  {
    v4 = *(unsigned int *)(v6 + 52);
    v8 = *(_BYTE *)(v4 + v6 + 10);
  }
  else
  {
    v8 = *(_BYTE *)(v6 + 7);
  }
  v9 = *(unsigned __int8 *)(v5 + 1);
  v10 = v8;
  if ( (v9 & 0x80u) == 0 )
  {
    v11 = 2;
    v12 = v9 & 0x1F;
    v4 = 1LL;
    if ( (unsigned __int8)((v9 & 0x1F) - 2) <= 1u )
    {
      v13 = *(_DWORD *)(v7 + 328);
      if ( (v13 & 2) != 0 && v12 == 2 )
        goto LABEL_12;
      if ( (v13 & 1) != 0 && v12 == 3 && (*(_DWORD *)(a1 + 64) & 0x80000) == 0 )
      {
        v11 = 4;
LABEL_12:
        *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
        SrbAssignQueueId(a1, v6);
        v14 = v11 | *(_DWORD *)(SrbExtension + 4136) & 0xFFFFFFF8;
        *(_BYTE *)(SrbExtension + 4096) = -124;
        v15 = (v9 >> 2) & 8 | v14 & 0xFFFFFC07;
        v16 = 0;
        *(_QWORD *)(SrbExtension + 4136) = v15;
        *(_QWORD *)(SrbExtension + 4224) = NVMeSanitizeCommandCompletion;
        return v16;
      }
      if ( (*(_BYTE *)(v7 + 256) & 2) == 0 )
      {
        LOBYTE(v5) = 36;
        LOBYTE(v4) = 5;
        LOBYTE(v7) = 6;
        NVMeSetSenseData(v6, v7, v4, v5);
        return (unsigned int)-1056964602;
      }
      if ( v12 != 31
        && (*(_DWORD *)(a1 + 220) <= 1u || (*(_BYTE *)(v7 + 524) & 2) == 0)
        && (v12 != 3 || (*(_BYTE *)(v7 + 524) & 4) != 0) )
      {
        v16 = 0;
        v17 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 8 * v10 + 1952) + 64LL);
        if ( v12 == 3 )
          v18 = 2;
        else
          v18 = v12 == 2;
        *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
        SrbAssignQueueId(a1, v6);
        NamespaceId = GetNamespaceId(a1, v10);
        v20 = *(_WORD *)(*(_QWORD *)(a1 + 8 * v10 + 1952) + 48LL);
        v21 = *(_QWORD *)(a1 + 1840);
        *(_BYTE *)(SrbExtension + 4096) = 0x80;
        if ( (*(_BYTE *)(v21 + 524) & 2) != 0 )
          NamespaceId = -1;
        *(_DWORD *)(SrbExtension + 4100) = NamespaceId;
        v22 = *(_DWORD *)(SrbExtension + 4136) ^ (*(_DWORD *)(SrbExtension + 4136) ^ v17) & 0xF;
        v23 = v22 | 0x10;
        v24 = v22 & 0xFFFFFFEF;
        if ( v20 )
          v23 = v24;
        *(_DWORD *)(SrbExtension + 4136) = (v18 << 9) | v23 & 0xFFFFF01F;
        return v16;
      }
    }
  }
  LOBYTE(v5) = 36;
  LOBYTE(v4) = 5;
  LOBYTE(v7) = 6;
  NVMeSetSenseData(v6, v7, v4, v5);
  return 3238002694LL;
}
