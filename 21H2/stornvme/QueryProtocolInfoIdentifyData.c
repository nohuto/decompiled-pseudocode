/*
 * XREFs of QueryProtocolInfoIdentifyData @ 0x1C0020158
 * Callers:
 *     IoctlQueryProtocolInfoProcess @ 0x1C0001414 (IoctlQueryProtocolInfoProcess.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     GetNamespaceId @ 0x1C00051C8 (GetNamespaceId.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 */

__int64 __fastcall QueryProtocolInfoIdentifyData(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  char v5; // dl
  _DWORD *v6; // r8
  unsigned __int8 v7; // r10
  int v8; // r15d
  __int64 result; // rax
  int v10; // eax
  bool v11; // r9
  int v12; // eax
  int v13; // eax
  int v14; // eax

  GetSrbExtension(a2);
  v5 = *(_BYTE *)(v4 + 2);
  if ( v5 == 40 )
  {
    v6 = *(_DWORD **)(a2 + 64);
    v7 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v7 = *(_BYTE *)(a2 + 7);
    v6 = *(_DWORD **)(a2 + 24);
  }
  v8 = v6[11];
  switch ( v8 )
  {
    case 0:
      if ( v5 == 40 )
        v14 = *(_DWORD *)(a2 + 24);
      else
        v14 = *(_DWORD *)(a2 + 12);
      if ( (v14 & 1) != 0 )
        goto LABEL_32;
LABEL_36:
      GetNamespaceId(a1, v7);
      goto LABEL_37;
    case 1:
      goto LABEL_37;
    case 2:
      if ( v5 == 40 )
        v13 = *(_DWORD *)(a2 + 24);
      else
        v13 = *(_DWORD *)(a2 + 12);
      if ( (v13 & 1) != 0 )
        goto LABEL_37;
      goto LABEL_36;
  }
  if ( v8 != 3 )
  {
    if ( v8 != 5 )
    {
      if ( v8 != 6 )
      {
        result = 3238002690LL;
LABEL_35:
        *(_BYTE *)(a2 + 3) = 6;
        return result;
      }
      goto LABEL_37;
    }
    if ( v5 == 40 )
      v10 = *(_DWORD *)(a2 + 24);
    else
      v10 = *(_DWORD *)(a2 + 12);
    if ( (v10 & 1) != 0 )
    {
      v11 = v6[12] == 0;
      goto LABEL_33;
    }
    goto LABEL_22;
  }
  if ( v5 == 40 )
    v12 = *(_DWORD *)(a2 + 24);
  else
    v12 = *(_DWORD *)(a2 + 12);
  if ( (v12 & 1) == 0 )
  {
LABEL_22:
    GetNamespaceId(a1, v7);
    goto LABEL_33;
  }
LABEL_32:
  v11 = v6[12] == 0;
LABEL_33:
  if ( v11 )
  {
    result = 3238002694LL;
    goto LABEL_35;
  }
LABEL_37:
  if ( v6[14] >= 0x1000u )
  {
    NVMeAllocateDmaBuffer(a1, 0x1000u);
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
}
