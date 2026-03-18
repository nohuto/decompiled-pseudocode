/*
 * XREFs of SetProtocolInfoFeatureData @ 0x1C002111C
 * Callers:
 *     IoctlSetProtocolInfoProcess @ 0x1C001BE78 (IoctlSetProtocolInfoProcess.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     GetNamespaceId @ 0x1C00051C8 (GetNamespaceId.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     memmove @ 0x1C0010700 (memmove.c)
 */

__int64 __fastcall SetProtocolInfoFeatureData(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  char v6; // dl
  __int64 v7; // r15
  _DWORD *v8; // rbp
  int v9; // eax
  unsigned int v10; // edi
  int NamespaceId; // esi
  int v12; // eax
  unsigned __int8 v13; // cl
  __int64 result; // rax
  int v15; // ecx
  int v16; // r11d
  int v17; // r10d
  int v18; // r9d
  int v19; // r8d
  int v20; // edx

  SrbExtension = GetSrbExtension(a2);
  v6 = *(_BYTE *)(v5 + 2);
  v7 = SrbExtension;
  if ( v6 == 40 )
    v8 = *(_DWORD **)(a2 + 64);
  else
    v8 = *(_DWORD **)(a2 + 24);
  v9 = v8[11];
  if ( (v9 & 0x7FFFFF00) != 0
    || (v10 = 16, (unsigned __int8)v9 != 16)
    && ((unsigned __int8)v9 <= 0x80u
     || (unsigned __int8)v9 > 0x83u && ((unsigned int)(unsigned __int8)v9 - 192 > 5 || (*(_DWORD *)(a1 + 12) & 1) == 0)) )
  {
    *(_BYTE *)(a2 + 3) = 6;
    return 3238002694LL;
  }
  if ( (unsigned __int8)v9 == 16 )
  {
    NamespaceId = -1;
  }
  else
  {
    if ( (unsigned __int8)v9 == 129 )
    {
      NamespaceId = -1;
      goto LABEL_17;
    }
    NamespaceId = 0;
    if ( (unsigned int)(unsigned __int8)v9 - 130 > 1 )
    {
      v10 = 4096;
      goto LABEL_17;
    }
  }
  v10 = 0;
LABEL_17:
  if ( (*(_DWORD *)(a1 + 12) & 1) == 0 )
    goto LABEL_22;
  if ( (unsigned __int8)v9 != 192 )
  {
    if ( (unsigned int)(unsigned __int8)v9 - 193 <= 4 )
    {
      v10 = 0;
      NamespaceId = 0;
      goto LABEL_24;
    }
LABEL_22:
    if ( !v10 )
      goto LABEL_24;
    goto LABEL_23;
  }
  v10 = 4096;
  NamespaceId = 0;
LABEL_23:
  if ( v8[13] < 0x40u )
  {
LABEL_25:
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
LABEL_24:
  if ( v8[14] < v10 )
    goto LABEL_25;
  if ( NamespaceId != -1 )
  {
    if ( v6 == 40 )
      v12 = *(_DWORD *)(a2 + 24);
    else
      v12 = *(_DWORD *)(a2 + 12);
    if ( (v12 & 1) != 0 )
    {
      NamespaceId = -1;
    }
    else
    {
      if ( v6 == 40 )
        v13 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v13 = *(_BYTE *)(a2 + 7);
      NamespaceId = GetNamespaceId(a1, v13);
    }
  }
  if ( v10 )
  {
    NVMeAllocateDmaBuffer(a1, v10);
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  else
  {
    *(_BYTE *)(v7 + 4253) = *(_BYTE *)(v7 + 4253) & 0xFD | (v10 != 0 ? 2 : 0) | 1;
    SrbAssignQueueId(a1, a2);
    v15 = v8[11];
    v16 = v8[19];
    v17 = v8[18];
    v18 = v8[17];
    v19 = v8[16];
    v20 = v8[12];
    *(_QWORD *)(v7 + 4120) = 0LL;
    *(_DWORD *)(v7 + 4136) = v15;
    *(_BYTE *)(v7 + 4096) = 9;
    *(_DWORD *)(v7 + 4100) = NamespaceId;
    *(_DWORD *)(v7 + 4140) = v20;
    *(_DWORD *)(v7 + 4144) = v19;
    *(_DWORD *)(v7 + 4148) = v18;
    *(_DWORD *)(v7 + 4152) = v17;
    *(_DWORD *)(v7 + 4156) = v16;
    LOBYTE(v15) = *(_BYTE *)(v7 + 4253) & 0xFB | (v10 != 0 ? 4 : 0);
    *(_QWORD *)(v7 + 4224) = SetProtocolInfoCompletion;
    *(_BYTE *)(v7 + 4253) = v15;
    *(_QWORD *)(v7 + 4200) = 0LL;
    *(_QWORD *)(v7 + 4208) = 0LL;
    result = 0LL;
    *(_DWORD *)(v7 + 4240) = v10;
  }
  return result;
}
