/*
 * XREFs of QueryProtocolInfoFeatureData @ 0x1C0018ED0
 * Callers:
 *     IoctlQueryProtocolInfoProcess @ 0x1C0013B68 (IoctlQueryProtocolInfoProcess.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     GetNamespaceId @ 0x1C0007A8C (GetNamespaceId.c)
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C1C0 (NVMeAllocateDmaBuffer.c)
 */

__int64 __fastcall QueryProtocolInfoFeatureData(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // r15
  _DWORD *SrbDataBuffer; // rbp
  unsigned int v6; // ecx
  bool v7; // zf
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 result; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ebx
  int NamespaceId; // edi
  int v18; // ecx
  int v19; // ecx
  char v20; // cl
  int v21; // eax
  unsigned __int8 v22; // cl
  int v23; // ecx
  int v24; // edx
  _QWORD v25[7]; // [rsp+20h] [rbp-38h] BYREF

  SrbExtension = GetSrbExtension(a2);
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, v25);
  v6 = SrbDataBuffer[11];
  if ( v6 >= 0x800 )
    goto LABEL_32;
  if ( (unsigned __int8)v6 <= 0x80u )
  {
    if ( (unsigned __int8)v6 != 128 )
    {
      if ( (unsigned __int8)v6 > 9u )
      {
        if ( (unsigned __int8)v6 != 10
          && (unsigned __int8)v6 != 11
          && (unsigned __int8)v6 != 12
          && (unsigned __int8)v6 != 13
          && (unsigned __int8)v6 != 14 )
        {
          v8 = (unsigned __int8)v6 - 16;
          v7 = (unsigned __int8)v6 == 16;
          goto LABEL_18;
        }
      }
      else if ( (unsigned __int8)v6 != 9
             && (unsigned __int8)v6 != 1
             && (unsigned __int8)v6 != 2
             && (unsigned __int8)v6 != 3
             && (unsigned __int8)v6 != 5
             && (unsigned __int8)v6 != 6 )
      {
        v8 = (unsigned __int8)v6 - 7;
        v7 = (unsigned __int8)v6 == 7;
LABEL_18:
        if ( !v7 && v8 != 1 )
          goto LABEL_21;
      }
    }
LABEL_20:
    if ( SrbDataBuffer[12] )
    {
LABEL_32:
      *(_BYTE *)(a2 + 3) = 6;
      return 3238002694LL;
    }
    goto LABEL_21;
  }
  if ( (unsigned __int8)v6 == 130 || (unsigned __int8)v6 == 131 )
    goto LABEL_20;
  if ( (unsigned __int8)v6 == 192 || (unsigned __int8)v6 == 194 || (unsigned __int8)v6 == 196 )
  {
    if ( (*(_DWORD *)(a1 + 12) & 1) != 0 && SrbDataBuffer[12] )
      goto LABEL_32;
    v9 = (unsigned __int8)v6;
LABEL_42:
    v12 = v9 - 126;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 )
        goto LABEL_48;
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( !v15 )
        {
          v16 = 16;
          goto LABEL_57;
        }
        if ( (unsigned int)(v15 - 1) <= 1 )
        {
          v16 = 0;
          NamespaceId = 0;
          goto LABEL_63;
        }
        goto LABEL_48;
      }
LABEL_56:
      v16 = 0;
LABEL_57:
      NamespaceId = -1;
      goto LABEL_63;
    }
LABEL_61:
    NamespaceId = -1;
    goto LABEL_62;
  }
LABEL_21:
  v9 = (unsigned __int8)v6;
  if ( (unsigned __int8)v6 > 0x7Du )
    goto LABEL_42;
  if ( (unsigned __int8)v6 == 125 )
    goto LABEL_61;
  if ( (unsigned __int8)v6 > 9u )
  {
    if ( (unsigned __int8)v6 == 10 || (unsigned __int8)v6 == 11 )
      goto LABEL_56;
    if ( (unsigned __int8)v6 == 12 )
    {
      v16 = 256;
      goto LABEL_57;
    }
    if ( (unsigned __int8)v6 != 13 )
    {
      if ( (unsigned __int8)v6 == 14 )
      {
        v16 = 8;
        goto LABEL_57;
      }
      v10 = (unsigned __int8)v6 - 16;
      if ( (unsigned __int8)v6 != 16 )
        goto LABEL_55;
      goto LABEL_56;
    }
    goto LABEL_61;
  }
  if ( (unsigned __int8)v6 == 9 || (unsigned __int8)v6 == 1 || (unsigned __int8)v6 == 2 )
    goto LABEL_56;
  if ( (unsigned __int8)v6 != 3 )
  {
    if ( (unsigned __int8)v6 == 4 || (unsigned __int8)v6 == 5 || (unsigned __int8)v6 == 6 )
      goto LABEL_56;
    v10 = (unsigned __int8)v6 - 7;
    if ( (unsigned __int8)v6 == 7 )
      goto LABEL_32;
LABEL_55:
    if ( v10 == 1 )
      goto LABEL_56;
  }
LABEL_48:
  NamespaceId = 0;
LABEL_62:
  v16 = 4096;
LABEL_63:
  if ( (*(_DWORD *)(a1 + 12) & 1) == 0 )
    goto LABEL_69;
  v18 = (unsigned __int8)v6 - 192;
  if ( v18 )
  {
    v19 = v18 - 2;
    if ( !v19 || v19 == 2 )
    {
      v16 = 0;
      NamespaceId = 0;
      goto LABEL_71;
    }
LABEL_69:
    if ( !v16 )
      goto LABEL_71;
    goto LABEL_70;
  }
  v16 = 4096;
  NamespaceId = 0;
LABEL_70:
  if ( SrbDataBuffer[13] < 0x28u )
  {
LABEL_72:
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
LABEL_71:
  if ( SrbDataBuffer[14] < v16 )
    goto LABEL_72;
  if ( NamespaceId != -1 )
  {
    v20 = *(_BYTE *)(a2 + 2);
    if ( v20 == 40 )
      v21 = *(_DWORD *)(a2 + 24);
    else
      v21 = *(_DWORD *)(a2 + 12);
    if ( (v21 & 1) != 0 )
    {
      NamespaceId = -1;
    }
    else
    {
      if ( v20 == 40 )
        v22 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v22 = *(_BYTE *)(a2 + 7);
      NamespaceId = GetNamespaceId(a1, v22);
    }
  }
  if ( v16 )
  {
    NVMeAllocateDmaBuffer(a1, v16);
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  else
  {
    *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFD | (v16 != 0 ? 2 : 0) | 1;
    SrbAssignQueueId(a1, a2);
    v23 = SrbDataBuffer[11];
    v24 = SrbDataBuffer[12];
    *(_QWORD *)(SrbExtension + 4120) = 0LL;
    *(_DWORD *)(SrbExtension + 4136) = v23;
    *(_BYTE *)(SrbExtension + 4096) = 10;
    *(_DWORD *)(SrbExtension + 4100) = NamespaceId;
    *(_DWORD *)(SrbExtension + 4140) = v24;
    LOBYTE(v23) = *(_BYTE *)(SrbExtension + 4253) & 0xFB | (v16 != 0 ? 4 : 0);
    *(_QWORD *)(SrbExtension + 4224) = QueryProtocolInfoCompletion;
    *(_BYTE *)(SrbExtension + 4253) = v23;
    *(_QWORD *)(SrbExtension + 4200) = 0LL;
    *(_QWORD *)(SrbExtension + 4208) = 0LL;
    result = 0LL;
    *(_DWORD *)(SrbExtension + 4240) = v16;
  }
  return result;
}
