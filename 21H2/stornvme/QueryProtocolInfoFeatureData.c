/*
 * XREFs of QueryProtocolInfoFeatureData @ 0x1C001FE84
 * Callers:
 *     IoctlQueryProtocolInfoProcess @ 0x1C0001414 (IoctlQueryProtocolInfoProcess.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     GetNamespaceId @ 0x1C00051C8 (GetNamespaceId.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 */

__int64 __fastcall QueryProtocolInfoFeatureData(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  char v6; // dl
  __int64 v7; // r15
  _DWORD *v8; // rbp
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int64 result; // rax
  int v12; // eax
  int v13; // eax
  int NamespaceId; // edi
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  int v18; // eax
  unsigned __int8 v19; // cl
  int v20; // ecx
  int v21; // edx

  SrbExtension = GetSrbExtension(a2);
  v6 = *(_BYTE *)(v5 + 2);
  v7 = SrbExtension;
  if ( v6 == 40 )
    v8 = *(_DWORD **)(a2 + 64);
  else
    v8 = *(_DWORD **)(a2 + 24);
  v9 = v8[11];
  if ( v9 >= 0x800 )
    goto LABEL_15;
  v10 = (unsigned __int8)v9;
  if ( (unsigned __int8)v9 > 0x83u )
  {
    v12 = (unsigned __int8)v9 - 192;
    if ( v10 != 192 )
    {
      v13 = v12 - 2;
      if ( v13 )
      {
        if ( v13 != 2 )
          goto LABEL_21;
      }
    }
    if ( (*(_DWORD *)(a1 + 12) & 1) == 0 )
      goto LABEL_21;
  }
  else if ( (unsigned __int8)v9 < 0x82u
         && (!(_BYTE)v9
          || (unsigned __int8)v9 > 3u
          && ((unsigned __int8)v9 <= 4u
           || (unsigned __int8)v9 > 0xEu
           && ((unsigned __int8)v9 <= 0xFu || (unsigned __int8)v9 > 0x11u && (unsigned __int8)v9 != 128))) )
  {
    goto LABEL_21;
  }
  if ( v8[12] )
  {
LABEL_15:
    *(_BYTE *)(a2 + 3) = 6;
    return 3238002694LL;
  }
LABEL_21:
  if ( v10 > 0xE )
  {
    v15 = 16;
    if ( v10 >= 0x10 )
    {
      if ( v10 <= 0x11 )
        goto LABEL_48;
      if ( v10 > 0x7C )
      {
        if ( v10 <= 0x7E )
          goto LABEL_36;
        if ( v10 != 127 )
        {
          if ( v10 == 128 )
            goto LABEL_48;
          if ( v10 == 129 )
            goto LABEL_49;
          if ( v10 - 130 <= 1 )
          {
            v15 = 0;
            NamespaceId = 0;
            goto LABEL_29;
          }
        }
      }
    }
LABEL_27:
    NamespaceId = 0;
LABEL_28:
    v15 = 4096;
    goto LABEL_29;
  }
  if ( v10 == 14 )
  {
    v15 = 8;
    goto LABEL_49;
  }
  if ( v10 <= 7 )
  {
    if ( v10 == 7 )
      goto LABEL_15;
    if ( !v10 || v10 == 3 )
      goto LABEL_27;
    goto LABEL_48;
  }
  if ( v10 <= 0xB )
  {
LABEL_48:
    v15 = 0;
    goto LABEL_49;
  }
  if ( v10 != 12 )
  {
LABEL_36:
    NamespaceId = -1;
    goto LABEL_28;
  }
  v15 = 256;
LABEL_49:
  NamespaceId = -1;
LABEL_29:
  if ( (*(_DWORD *)(a1 + 12) & 1) == 0 )
    goto LABEL_51;
  v16 = v10 - 192;
  if ( v16 )
  {
    v17 = v16 - 2;
    if ( !v17 || v17 == 2 )
    {
      v15 = 0;
      NamespaceId = 0;
      goto LABEL_53;
    }
LABEL_51:
    if ( !v15 )
      goto LABEL_53;
    goto LABEL_52;
  }
  v15 = 4096;
  NamespaceId = 0;
LABEL_52:
  if ( v8[13] < 0x28u )
  {
LABEL_54:
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
LABEL_53:
  if ( v8[14] < v15 )
    goto LABEL_54;
  if ( NamespaceId != -1 )
  {
    if ( v6 == 40 )
      v18 = *(_DWORD *)(a2 + 24);
    else
      v18 = *(_DWORD *)(a2 + 12);
    if ( (v18 & 1) != 0 )
    {
      NamespaceId = -1;
    }
    else
    {
      if ( v6 == 40 )
        v19 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v19 = *(_BYTE *)(a2 + 7);
      NamespaceId = GetNamespaceId(a1, v19);
    }
  }
  if ( v15 )
  {
    NVMeAllocateDmaBuffer(a1, v15);
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  else
  {
    *(_BYTE *)(v7 + 4253) = *(_BYTE *)(v7 + 4253) & 0xFD | (v15 != 0 ? 2 : 0) | 1;
    SrbAssignQueueId(a1, a2);
    v20 = v8[11];
    v21 = v8[12];
    *(_QWORD *)(v7 + 4120) = 0LL;
    *(_DWORD *)(v7 + 4136) = v20;
    *(_BYTE *)(v7 + 4096) = 10;
    *(_DWORD *)(v7 + 4100) = NamespaceId;
    *(_DWORD *)(v7 + 4140) = v21;
    LOBYTE(v20) = *(_BYTE *)(v7 + 4253) & 0xFB | (v15 != 0 ? 4 : 0);
    *(_QWORD *)(v7 + 4224) = QueryProtocolInfoCompletion;
    *(_BYTE *)(v7 + 4253) = v20;
    *(_QWORD *)(v7 + 4200) = 0LL;
    *(_QWORD *)(v7 + 4208) = 0LL;
    result = 0LL;
    *(_DWORD *)(v7 + 4240) = v15;
  }
  return result;
}
