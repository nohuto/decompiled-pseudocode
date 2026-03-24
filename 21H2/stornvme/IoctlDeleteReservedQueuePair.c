/*
 * XREFs of IoctlDeleteReservedQueuePair @ 0x1C0012BF4
 * Callers:
 *     IoctlToNVMe @ 0x1C0002660 (IoctlToNVMe.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C0005AAC (NVMeFreeDmaBuffer.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C0019BC4 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C001A2D4 (NVMeIoSubmissionQueueDelete.c)
 */

__int64 __fastcall IoctlDeleteReservedQueuePair(__int64 a1, __int64 a2)
{
  int v2; // r9d
  unsigned __int16 v3; // bp
  unsigned int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r8d
  _WORD *v10; // rdi
  unsigned int v11; // edx
  unsigned __int16 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r13
  unsigned int v15; // edi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned __int16 v19; // cx
  unsigned __int16 v20; // r9
  __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int16 v25; // ax
  _WORD *v27; // [rsp+D0h] [rbp-48h]
  __int64 v28; // [rsp+120h] [rbp+8h] BYREF
  __int64 v29; // [rsp+130h] [rbp+18h]
  __int64 VirtualAddress; // [rsp+138h] [rbp+20h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 822);
  v3 = 0;
  v6 = 0;
  if ( !(_WORD)v2 || !*(_WORD *)(a1 + 794) )
  {
    *(_BYTE *)(a2 + 3) = 6;
LABEL_35:
    v6 = -1056964601;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = *(_QWORD *)(a2 + 64);
    v8 = 60LL;
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 24);
    v8 = 16LL;
  }
  if ( *(_DWORD *)(a2 + v8) < 0x28u )
  {
    v6 = -1056964602;
    goto LABEL_36;
  }
  v9 = *(unsigned __int16 *)(a1 + 290);
  v10 = (_WORD *)(v7 + 36);
  v29 = v7 + 28;
  v11 = *(unsigned __int16 *)(v7 + 36);
  v27 = (_WORD *)(v7 + 36);
  if ( v11 > v9 + v2 || (unsigned __int16)v11 <= (unsigned __int16)v9 )
    goto LABEL_35;
  v12 = 0;
  LOWORD(v28) = *(_WORD *)(a1 + 792);
  if ( (_WORD)v28 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(a1 + 800);
      v14 = 32LL * v12;
      if ( *(_WORD *)(v13 + v14 + 20) == *v10 )
      {
        if ( *(_QWORD *)(136LL * v12 + *(_QWORD *)(a1 + 776) + 8) && (*(_DWORD *)(a1 + 128) & 1) != 0 )
        {
          v15 = *(unsigned __int16 *)(v13 + v14 + 18);
          v16 = *(_QWORD *)(v13 + 32LL * v12);
          VirtualAddress = StorPortGetVirtualAddress(a1, v16);
          NVMeFreeDmaBuffer(a1, (unsigned __int64)v15 << 6, &VirtualAddress, v16);
          v10 = v27;
        }
        if ( !(unsigned __int8)NVMeIoSubmissionQueueDelete(a1) )
        {
          *(_DWORD *)(a1 + 28) = 19;
          v6 = -1056964607;
          StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
          goto LABEL_36;
        }
        v17 = *(_QWORD *)(a1 + 800);
        *(_OWORD *)(v17 + 32LL * v12) = 0LL;
        *(_OWORD *)(v17 + v14 + 16) = 0LL;
        --*(_WORD *)(a1 + 792);
      }
      if ( ++v12 >= (unsigned __int16)v28 )
      {
        LOWORD(v11) = *(_WORD *)(v29 + 8);
        break;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 128) & 1) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 808);
    v19 = 0;
    v20 = *(_WORD *)(a1 + 794);
    v21 = *(unsigned __int16 *)(32LL * v12 + v18 + 18);
    if ( v20 )
    {
      while ( *(_WORD *)(32LL * v19 + v18 + 16) != (_WORD)v11 )
      {
        if ( ++v19 >= v20 )
          goto LABEL_26;
      }
      v22 = *(_QWORD *)(32LL * v19 + v18);
      v28 = StorPortGetVirtualAddress(a1, v22);
      NVMeFreeDmaBuffer(a1, v21 << 6, &v28, v22);
    }
  }
LABEL_26:
  if ( !(unsigned __int8)NVMeIoCompletionQueueDelete(a1) )
  {
    *(_DWORD *)(a1 + 28) = 20;
    v6 = -1056964607;
    StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
LABEL_36:
    if ( !*(_BYTE *)(a2 + 3) )
      *(_BYTE *)(a2 + 3) = 4;
    StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
    return v6;
  }
  while ( 1 )
  {
    v25 = *(_WORD *)(a1 + 794);
    if ( v3 >= v25 )
      break;
    v23 = *(_QWORD *)(a1 + 808);
    v24 = 32LL * v3;
    if ( *(_WORD *)(v24 + v23 + 16) == *v10 )
    {
      *(_OWORD *)(v24 + v23) = 0LL;
      *(_OWORD *)(v24 + v23 + 16) = 0LL;
    }
    ++v3;
  }
  *(_WORD *)(a1 + 794) = v25 - 1;
  *(_BYTE *)(a2 + 3) = 1;
  return v6;
}
