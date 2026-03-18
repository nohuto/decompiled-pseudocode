/*
 * XREFs of ScsiModeSenseRequest @ 0x1C000335C
 * Callers:
 *     ScsiToNVMe @ 0x1C0004650 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     BuildGetLogPageCommand @ 0x1C0005458 (BuildGetLogPageCommand.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall ScsiModeSenseRequest(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdx
  unsigned __int8 v8; // cl
  unsigned int v9; // eax
  __int64 SrbExtension; // rbx
  void *v11; // r9
  int v12; // r8d
  __int64 v13; // rax
  __int64 result; // rax
  unsigned int v15; // ebx
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = *(_QWORD *)(a2 + 64);
    v6 = 60LL;
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 24);
    v6 = 16LL;
  }
  v7 = 4LL;
  v8 = a3[2];
  if ( *a3 != 26 )
    v7 = 8LL;
  if ( v8 >= 0x40u )
  {
    LOBYTE(v7) = 6;
LABEL_18:
    LOBYTE(a3) = 5;
    LOBYTE(v6) = 36;
    NVMeSetSenseData(a2, v7, a3, v6);
    return 3238002694LL;
  }
  if ( !v5 )
    goto LABEL_13;
  v9 = *(_DWORD *)(a2 + v6);
  if ( v9 < (unsigned int)v7 )
  {
    v15 = -1056964604;
    goto LABEL_14;
  }
  if ( v8 != 63 && v8 != 8 )
  {
LABEL_13:
    v15 = -1056964602;
LABEL_14:
    LOBYTE(v6) = 36;
    LOBYTE(a3) = 5;
    LOBYTE(v7) = 6;
    NVMeSetSenseData(a2, v7, a3, v6);
    return v15;
  }
  if ( v9 - (unsigned int)v7 < 0xC )
  {
    LOBYTE(v7) = 18;
    goto LABEL_18;
  }
  NVMeAllocateDmaBuffer(a1, 512LL, &v16, &v17);
  if ( v16 )
  {
    SrbExtension = GetSrbExtension(a2);
    memset(v11, 0, 0x200uLL);
    *(_BYTE *)(SrbExtension + 4253) |= 3u;
    SrbAssignQueueId(a1, a2);
    LOBYTE(v12) = 2;
    BuildGetLogPageCommand(a1, SrbExtension, v12, 512, v17, -1, 0LL, 0);
    *(_BYTE *)(SrbExtension + 4253) |= 4u;
    *(_QWORD *)(SrbExtension + 4224) = NVMeModeSenseGetLogPageHealthInfoCompletion;
    *(_QWORD *)(SrbExtension + 4200) = v16;
    v13 = v17;
    *(_QWORD *)(SrbExtension + 4232) = 0LL;
    *(_QWORD *)(SrbExtension + 4208) = v13;
    result = 0LL;
    *(_DWORD *)(SrbExtension + 4240) = 512;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  return result;
}
