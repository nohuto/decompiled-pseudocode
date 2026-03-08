/*
 * XREFs of ScsiUnmapRequest @ 0x1C001ADEC
 * Callers:
 *     ScsiToNVMe @ 0x1C00010C0 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     memset @ 0x1C0004580 (memset.c)
 *     GetNamespaceId @ 0x1C0007A8C (GetNamespaceId.c)
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     IsDeallocateSupported @ 0x1C0014A90 (IsDeallocateSupported.c)
 *     NVMeSetSenseData @ 0x1C0024238 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiUnmapRequest(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edi
  __int64 v9; // r14
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // si
  _BYTE *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r14
  unsigned __int8 v15; // cl
  int NamespaceId; // eax
  __int64 PhysicalAddress; // rax
  _DWORD *v19; // [rsp+68h] [rbp+20h] BYREF

  v19 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  GetSrbDataBuffer(a2, &v19);
  if ( !IsDeallocateSupported(a1) || (*(_BYTE *)(v7 + 1) & 1) != 0 )
  {
    LOBYTE(v7) = 36;
    LOBYTE(v6) = 5;
    LOBYTE(v5) = 6;
    NVMeSetSenseData(a2, v5, v6, v7);
    return 3238002694LL;
  }
  else
  {
    if ( *v19 < 0x18u )
    {
      v8 = -1056964604;
LABEL_14:
      LOBYTE(v7) = 36;
      LOBYTE(v6) = 5;
      LOBYTE(v5) = 21;
      NVMeSetSenseData(a2, v5, v6, v7);
      return v8;
    }
    v9 = v5 + 8;
    BYTE1(v19) = *(_BYTE *)(v5 + 2);
    LOBYTE(v19) = *(_BYTE *)(v5 + 3);
    v10 = *(unsigned __int8 *)(a1 + 4347);
    v11 = (unsigned __int16)v19 >> 4;
    if ( !(_BYTE)v10 )
      v10 = 256;
    if ( v11 > v10 )
    {
      v8 = -1056964602;
      goto LABEL_14;
    }
    memset((void *)SrbExtension, 0, 0x1000uLL);
    if ( v11 )
    {
      v12 = (_BYTE *)(SrbExtension + 14);
      v13 = v11;
      v14 = v9 - SrbExtension;
      do
      {
        v12[1] = v12[v14 - 14];
        *v12 = v12[v14 - 13];
        *(v12 - 1) = v12[v14 - 12];
        *(v12 - 2) = v12[v14 - 11];
        *(v12 - 3) = v12[v14 - 10];
        *(v12 - 4) = v12[v14 - 9];
        *(v12 - 5) = v12[v14 - 8];
        *(v12 - 6) = v12[v14 - 7];
        *(v12 - 7) = v12[v14 - 6];
        *(v12 - 8) = v12[v14 - 5];
        *(v12 - 9) = v12[v14 - 4];
        *(v12 - 10) = v12[v14 - 3];
        v12 += 16;
        --v13;
      }
      while ( v13 );
    }
    *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 2;
    SrbAssignQueueId(a1, a2);
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v15 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v15 = *(_BYTE *)(a2 + 7);
    NamespaceId = GetNamespaceId(a1, v15);
    *(_DWORD *)(SrbExtension + 4140) |= 4u;
    *(_BYTE *)(SrbExtension + 4096) = 9;
    *(_BYTE *)(SrbExtension + 4136) = v11 - 1;
    *(_DWORD *)(SrbExtension + 4100) = NamespaceId;
    LODWORD(v19) = 0;
    PhysicalAddress = StorPortGetPhysicalAddress(a1, a2, SrbExtension, &v19);
    *(_BYTE *)(SrbExtension + 4253) |= 4u;
    *(_QWORD *)(SrbExtension + 4120) = PhysicalAddress;
    return 0LL;
  }
}
