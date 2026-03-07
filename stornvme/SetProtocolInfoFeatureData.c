__int64 __fastcall SetProtocolInfoFeatureData(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // r15
  _DWORD *SrbDataBuffer; // rax
  _DWORD *v6; // rbp
  int v7; // ecx
  __int64 result; // rax
  unsigned int v9; // ebx
  int NamespaceId; // esi
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  char v15; // cl
  int v16; // eax
  unsigned __int8 v17; // cl
  int v18; // ecx
  int v19; // r11d
  int v20; // r10d
  int v21; // r9d
  int v22; // r8d
  int v23; // edx
  __int64 v24[7]; // [rsp+20h] [rbp-38h] BYREF

  SrbExtension = GetSrbExtension(a2);
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, v24);
  v6 = SrbDataBuffer + 7;
  v7 = SrbDataBuffer[11];
  if ( (v7 & 0x7FFFFF00) != 0 )
    goto LABEL_5;
  if ( (unsigned __int8)v7 > 0x80u )
  {
    if ( (unsigned __int8)v7 != 129
      && (unsigned __int8)v7 != 130
      && (unsigned __int8)v7 != 131
      && ((unsigned __int8)v7 != 192
       && (unsigned __int8)v7 != 193
       && (unsigned __int8)v7 != 194
       && (unsigned __int8)v7 != 195
       && (unsigned int)(unsigned __int8)v7 - 196 > 1
       || (*(_DWORD *)(a1 + 12) & 1) == 0) )
    {
      goto LABEL_5;
    }
  }
  else if ( (unsigned __int8)v7 == 128 || (unsigned __int8)v7 <= 9u || (unsigned __int8)v7 != 16 )
  {
LABEL_5:
    *(_BYTE *)(a2 + 3) = 6;
    return 3238002694LL;
  }
  v9 = 16;
  if ( (unsigned __int8)v7 == 16 )
  {
    NamespaceId = -1;
  }
  else
  {
    if ( (unsigned __int8)v7 == 129 )
    {
      NamespaceId = -1;
      goto LABEL_26;
    }
    if ( (unsigned int)(unsigned __int8)v7 - 130 >= 2 )
    {
      v9 = 4096;
      NamespaceId = 0;
      goto LABEL_26;
    }
    NamespaceId = 0;
  }
  v9 = 0;
LABEL_26:
  if ( (*(_DWORD *)(a1 + 12) & 1) == 0 )
    goto LABEL_34;
  v11 = (unsigned __int8)v7 - 192;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( !v12 || (v13 = v12 - 1) == 0 || (v14 = v13 - 1) == 0 || (unsigned int)(v14 - 1) <= 1 )
    {
      v9 = 0;
      NamespaceId = 0;
      goto LABEL_36;
    }
LABEL_34:
    if ( !v9 )
      goto LABEL_36;
    goto LABEL_35;
  }
  v9 = 4096;
  NamespaceId = 0;
LABEL_35:
  if ( SrbDataBuffer[13] < 0x40u )
  {
LABEL_37:
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
LABEL_36:
  if ( SrbDataBuffer[14] < v9 )
    goto LABEL_37;
  if ( NamespaceId != -1 )
  {
    v15 = *(_BYTE *)(a2 + 2);
    if ( v15 == 40 )
      v16 = *(_DWORD *)(a2 + 24);
    else
      v16 = *(_DWORD *)(a2 + 12);
    if ( (v16 & 1) != 0 )
    {
      NamespaceId = -1;
    }
    else
    {
      if ( v15 == 40 )
        v17 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v17 = *(_BYTE *)(a2 + 7);
      NamespaceId = GetNamespaceId(a1, v17);
    }
  }
  if ( v9 )
  {
    NVMeAllocateDmaBuffer(a1, v9);
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  else
  {
    *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFD | (v9 != 0 ? 2 : 0) | 1;
    SrbAssignQueueId(a1, a2);
    v18 = v6[4];
    v19 = v6[12];
    v20 = v6[11];
    v21 = v6[10];
    v22 = v6[9];
    v23 = v6[5];
    *(_QWORD *)(SrbExtension + 4120) = 0LL;
    *(_DWORD *)(SrbExtension + 4136) = v18;
    *(_BYTE *)(SrbExtension + 4096) = 9;
    *(_DWORD *)(SrbExtension + 4100) = NamespaceId;
    *(_DWORD *)(SrbExtension + 4140) = v23;
    *(_DWORD *)(SrbExtension + 4144) = v22;
    *(_DWORD *)(SrbExtension + 4148) = v21;
    *(_DWORD *)(SrbExtension + 4152) = v20;
    *(_DWORD *)(SrbExtension + 4156) = v19;
    LOBYTE(v18) = *(_BYTE *)(SrbExtension + 4253) & 0xFB | (v9 != 0 ? 4 : 0);
    *(_QWORD *)(SrbExtension + 4224) = SetProtocolInfoCompletion;
    *(_BYTE *)(SrbExtension + 4253) = v18;
    *(_QWORD *)(SrbExtension + 4200) = 0LL;
    *(_QWORD *)(SrbExtension + 4208) = 0LL;
    result = 0LL;
    *(_DWORD *)(SrbExtension + 4240) = v9;
  }
  return result;
}
