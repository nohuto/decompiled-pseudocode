/*
 * XREFs of NVMeReservedCompletionQueueCreate @ 0x1C0022D64
 * Callers:
 *     IoctlCreateReservedQueuePair @ 0x1C0012DF0 (IoctlCreateReservedQueuePair.c)
 * Callees:
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     memset @ 0x1C0004580 (memset.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     LocalCommandReuse @ 0x1C000C15C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C1C0 (NVMeAllocateDmaBuffer.c)
 *     GetFreeReservedQueueIndex @ 0x1C0012A84 (GetFreeReservedQueueIndex.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeReservedCompletionQueueCreate(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned __int16 v3; // bp
  int v4; // r13d
  __int64 v6; // rsi
  __int64 v7; // r15
  unsigned __int16 FreeReservedQueueIndex; // ax
  __int64 v10; // r14
  __int64 v11; // rcx
  _WORD *v12; // rdx
  __int64 v13; // r8
  int v14; // edx
  int v15; // ecx
  __int64 v16; // rdx

  v3 = 0;
  v4 = a2;
  if ( *(_BYTE *)(a3 + 2) == 40 )
    v6 = *(_QWORD *)(a3 + 64);
  else
    v6 = *(_QWORD *)(a3 + 24);
  v7 = *(unsigned int *)(v6 + 36);
  FreeReservedQueueIndex = GetFreeReservedQueueIndex(a1);
  if ( FreeReservedQueueIndex == 0xFFFF )
    return 5LL;
  v10 = 6LL * FreeReservedQueueIndex;
  *(_WORD *)(*(_QWORD *)(a1 + 904) + 8 * v10 + 24) = v4;
  *(_QWORD *)(*(_QWORD *)(a1 + 904) + 8 * v10 + 16) = (unsigned int)(*(_DWORD *)(a1 + 208) * (2 * v4 + 1))
                                                    + *(_QWORD *)(a1 + 184)
                                                    + 4096LL;
  v11 = *(_QWORD *)(v6 + 44);
  if ( v11 )
  {
    v12 = (_WORD *)(v6 + 56);
    *(_QWORD *)(*(_QWORD *)(a1 + 904) + 48LL * FreeReservedQueueIndex) = v11;
  }
  else
  {
    v15 = *(unsigned __int16 *)(v6 + 56);
    v12 = (_WORD *)(v6 + 56);
    if ( (_WORD)v15 && (*(_DWORD *)(a1 + 136) & 1) != 0 )
    {
      NVMeAllocateDmaBuffer(a1, 16 * v15);
      return 8LL;
    }
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 904) + 48LL * FreeReservedQueueIndex + 28) = *(_DWORD *)(v6 + 52);
  *(_WORD *)(*(_QWORD *)(a1 + 904) + 48LL * FreeReservedQueueIndex + 26) = *v12;
  *(_WORD *)(*(_QWORD *)(a1 + 904) + 48LL * FreeReservedQueueIndex + 32) ^= (*(_WORD *)(v6 + 58) ^ *(_WORD *)(*(_QWORD *)(a1 + 904) + 48LL * FreeReservedQueueIndex + 32)) & 1;
  *(_WORD *)(*(_QWORD *)(a1 + 904) + 48LL * FreeReservedQueueIndex + 32) ^= (*(_WORD *)(v6 + 58) ^ *(_WORD *)(*(_QWORD *)(a1 + 904) + 48LL * FreeReservedQueueIndex + 32)) & 2;
  LocalCommandReuse(a1, a1 + 944);
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
  v13 = *(_QWORD *)(a1 + 1040) + 4096LL;
  *(_BYTE *)v13 = 5;
  *(_QWORD *)(v13 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 904) + 8 * v10);
  *(_WORD *)(v13 + 40) = v4;
  *(_WORD *)(v13 + 42) = *(_WORD *)(*(_QWORD *)(a1 + 904) + 8 * v10 + 26) - 1;
  v14 = *(_DWORD *)(v13 + 44) ^ (*(_DWORD *)(v13 + 44) ^ (*(unsigned __int16 *)(*(_QWORD *)(a1 + 904) + 8 * v10 + 32) >> 1)) & 1;
  *(_DWORD *)(v13 + 44) = v14;
  *(_DWORD *)(v13 + 44) = v14 ^ (v14 ^ (2 * *(unsigned __int16 *)(*(_QWORD *)(a1 + 904) + 8 * v10 + 32))) & 2;
  *(_WORD *)(v13 + 46) = *(_WORD *)(*(_QWORD *)(a1 + 904) + 8 * v10 + 28);
  ProcessCommand(a1, a1 + 952);
  WaitForCommandCompleteWithCustomTimeout(a1);
  if ( *(_BYTE *)(a1 + 955) == 1 )
  {
    v16 = *(_QWORD *)(a1 + 904);
    ++*(_WORD *)(a1 + 890);
    *(_QWORD *)(v16 + 8 * v10 + 40) = *(_QWORD *)(v6 + 60);
    memset((void *)(v7 + v6 + 28), 0, 0x68uLL);
    *(_QWORD *)(v7 + v6 + 36) = *(_QWORD *)(*(_QWORD *)(a1 + 904) + 8 * v10);
    *(_QWORD *)(v7 + v6 + 44) = *(_QWORD *)(*(_QWORD *)(a1 + 904) + 8 * v10 + 8);
    *(_QWORD *)(v7 + v6 + 52) = *(_QWORD *)(*(_QWORD *)(a1 + 904) + 8 * v10 + 16);
    *(_WORD *)(v7 + v6 + 60) = *(_WORD *)(*(_QWORD *)(a1 + 904) + 8 * v10 + 24);
    *(_WORD *)(v7 + v6 + 62) = *(_WORD *)(*(_QWORD *)(a1 + 904) + 8 * v10 + 26);
    *(_WORD *)(v7 + v6 + 68) ^= (*(_WORD *)(v7 + v6 + 68) ^ *(_WORD *)(*(_QWORD *)(a1 + 904) + 8 * v10 + 32)) & 1;
    *(_WORD *)(v7 + v6 + 68) ^= (*(_WORD *)(*(_QWORD *)(a1 + 904) + 8 * v10 + 32) ^ *(_WORD *)(v7 + v6 + 68)) & 2;
    *(_DWORD *)(v7 + v6 + 64) = *(_DWORD *)(*(_QWORD *)(a1 + 904) + 8 * v10 + 28);
  }
  else
  {
    return 10;
  }
  return v3;
}
