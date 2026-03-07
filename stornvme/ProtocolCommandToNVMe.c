__int64 __fastcall ProtocolCommandToNVMe(_DWORD *a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 SrbDataBuffer; // rbx
  unsigned int v8; // esi
  __int64 v9; // r13
  unsigned int v10; // r12d
  unsigned int *ScatterGatherList; // rax
  __int64 v12; // r9
  int NamespaceId; // r12d
  unsigned __int8 v14; // cl
  int v15; // ecx
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF
  void *v18; // [rsp+80h] [rbp+18h]

  SrbExtension = GetSrbExtension(a2);
  v5 = 0LL;
  v18 = 0LL;
  v6 = SrbExtension;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v17);
  v8 = NVMeValidateProtocolCommandRequest((__int64)a1, a2);
  if ( v8 )
    goto LABEL_24;
  if ( *(_DWORD *)(SrbDataBuffer + 36) )
  {
    v9 = *(unsigned int *)(SrbDataBuffer + 52);
    v5 = SrbDataBuffer + v9;
    goto LABEL_6;
  }
  if ( *(_DWORD *)(SrbDataBuffer + 32) )
  {
    LODWORD(v9) = *(_DWORD *)(SrbDataBuffer + 48);
    v5 = SrbDataBuffer + (unsigned int)v9;
LABEL_6:
    if ( v5 )
    {
      if ( (a1[16] & 8) != 0 )
      {
        *(_DWORD *)(v6 + 4216) = v9;
      }
      else
      {
        v10 = (((unsigned int)GetControllerMaxTransferSize(a1) - 1) >> 12) + 2;
        LODWORD(v17) = 24 * v10 + 16;
        StorPortExtendedFunction(0LL, a1, (unsigned int)v17, 1701672526LL);
        if ( !v18 )
        {
          *(_DWORD *)(SrbDataBuffer + 16) = 7;
LABEL_10:
          *(_BYTE *)(a2 + 3) = 21;
          v8 = -1056964607;
          goto LABEL_24;
        }
        NVMeZeroMemory(v18, v17);
        ScatterGatherList = (unsigned int *)StorPortGetScatterGatherList(a1, a2);
        if ( !FillClippedSGL(ScatterGatherList, (unsigned int *)v18, v10, v9) )
        {
          if ( v18 )
          {
            StorPortExtendedFunction(1LL, a1, v18, v12);
            v18 = 0LL;
          }
          *(_DWORD *)(SrbDataBuffer + 16) = 3;
          goto LABEL_10;
        }
        *(_QWORD *)(v6 + 4216) = v18;
      }
    }
  }
  if ( *(int *)(SrbDataBuffer + 12) >= 0 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v14 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v14 = *(_BYTE *)(a2 + 7);
    NamespaceId = GetNamespaceId((__int64)a1, v14);
  }
  else
  {
    NamespaceId = *(_DWORD *)(SrbDataBuffer + 84);
  }
  *(_BYTE *)(v6 + 4253) = (v5 != 0 ? 2 : 0) | *(_BYTE *)(v6 + 4253) & 0xFC | (*(_DWORD *)(SrbDataBuffer + 56) == 1);
  SrbAssignQueueId((__int64)a1, a2);
  *(_BYTE *)(v6 + 4096) = *(_BYTE *)(SrbDataBuffer + 80);
  v15 = *(_DWORD *)(SrbDataBuffer + 80) ^ *(_DWORD *)(v6 + 4096);
  *(_DWORD *)(v6 + 4100) = NamespaceId;
  *(_DWORD *)(v6 + 4096) ^= v15 & 0x300;
  *(_DWORD *)(v6 + 4136) = *(_DWORD *)(SrbDataBuffer + 120);
  *(_DWORD *)(v6 + 4140) = *(_DWORD *)(SrbDataBuffer + 124);
  *(_DWORD *)(v6 + 4144) = *(_DWORD *)(SrbDataBuffer + 128);
  *(_DWORD *)(v6 + 4148) = *(_DWORD *)(SrbDataBuffer + 132);
  *(_DWORD *)(v6 + 4152) = *(_DWORD *)(SrbDataBuffer + 136);
  *(_DWORD *)(v6 + 4156) = *(_DWORD *)(SrbDataBuffer + 140);
  *(_QWORD *)(v6 + 4224) = ProtocolCommandCompletion;
LABEL_24:
  if ( !*(_BYTE *)(a2 + 3) )
  {
    v8 = SetPrpFromSrb(a1, a2);
    if ( v8 )
    {
      *(_DWORD *)(SrbDataBuffer + 16) = 2;
      *(_BYTE *)(a2 + 3) = 4;
    }
    else
    {
      *(_DWORD *)(SrbDataBuffer + 16) = 0;
    }
  }
  return v8;
}
