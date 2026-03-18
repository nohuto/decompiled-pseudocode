/*
 * XREFs of ScsiUnmapRequest @ 0x1C0002F48
 * Callers:
 *     ScsiToNVMe @ 0x1C0004650 (ScsiToNVMe.c)
 * Callees:
 *     GetNamespaceId @ 0x1C00051C8 (GetNamespaceId.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     IsDeallocateSupported @ 0x1C000566C (IsDeallocateSupported.c)
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall ScsiUnmapRequest(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 SrbExtension; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r14
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // si
  _BYTE *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int8 v19; // cl
  int NamespaceId; // eax
  __int64 PhysicalAddress; // rax
  unsigned int v23; // edi
  int v24; // [rsp+58h] [rbp+10h] BYREF

  SrbExtension = GetSrbExtension(a2);
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v6 = *(_QWORD *)(v4 + 64);
  else
    v6 = *(_QWORD *)(v4 + 24);
  if ( !(unsigned __int8)IsDeallocateSupported(a1, v6) || (*(_BYTE *)(v10 + 1) & 1) != 0 )
  {
    LOBYTE(v9) = 36;
    LOBYTE(v8) = 5;
    LOBYTE(v7) = 6;
    NVMeSetSenseData(a2, v7, v8, v9);
    return 3238002694LL;
  }
  if ( *(_DWORD *)(v9 + a2) < 0x18u )
  {
    v23 = -1056964604;
LABEL_19:
    LOBYTE(v9) = 36;
    LOBYTE(v8) = 5;
    LOBYTE(v7) = 21;
    NVMeSetSenseData(a2, v7, v8, v9);
    return v23;
  }
  v11 = v7 + 8;
  BYTE1(v24) = *(_BYTE *)(v7 + 2);
  LOBYTE(v24) = *(_BYTE *)(v7 + 3);
  v12 = *(unsigned __int8 *)(a1 + 4147);
  v13 = (unsigned __int16)v24 >> 4;
  if ( !(_BYTE)v12 )
    v12 = 256;
  if ( v13 > v12 )
  {
    v23 = -1056964602;
    goto LABEL_19;
  }
  memset((void *)SrbExtension, 0, 0x1000uLL);
  if ( v13 )
  {
    v14 = (_BYTE *)(SrbExtension + 14);
    v15 = v13;
    v16 = v11 - SrbExtension;
    do
    {
      v14[1] = v14[v16 - 14];
      *v14 = v14[v16 - 13];
      *(v14 - 1) = v14[v16 - 12];
      *(v14 - 2) = v14[v16 - 11];
      *(v14 - 3) = v14[v16 - 10];
      *(v14 - 4) = v14[v16 - 9];
      *(v14 - 5) = v14[v16 - 8];
      *(v14 - 6) = v14[v16 - 7];
      *(v14 - 7) = v14[v16 - 6];
      *(v14 - 8) = v14[v16 - 5];
      *(v14 - 9) = v14[v16 - 4];
      *(v14 - 10) = v14[v16 - 3];
      v14 += 16;
      --v15;
    }
    while ( v15 );
  }
  *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 2;
  SrbAssignQueueId(a1, a2);
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v19 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v19 = *(_BYTE *)(a2 + 7);
  NamespaceId = GetNamespaceId(a1, v19, v17, v18);
  *(_DWORD *)(SrbExtension + 4140) |= 4u;
  *(_BYTE *)(SrbExtension + 4096) = 9;
  *(_BYTE *)(SrbExtension + 4136) = v13 - 1;
  *(_DWORD *)(SrbExtension + 4100) = NamespaceId;
  v24 = 0;
  PhysicalAddress = StorPortGetPhysicalAddress(a1, a2, SrbExtension, &v24);
  *(_BYTE *)(SrbExtension + 4253) |= 4u;
  *(_QWORD *)(SrbExtension + 4120) = PhysicalAddress;
  return 0LL;
}
