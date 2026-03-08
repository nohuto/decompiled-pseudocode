/*
 * XREFs of NVMeReservedSubmissionQueueCreate @ 0x1C0023104
 * Callers:
 *     IoctlCreateReservedQueuePair @ 0x1C0012DF0 (IoctlCreateReservedQueuePair.c)
 * Callees:
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     LocalCommandReuse @ 0x1C000C15C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C1C0 (NVMeAllocateDmaBuffer.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeReservedSubmissionQueueCreate(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  unsigned __int16 v6; // bp
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r8
  int v14; // edx
  int v15; // ecx
  __int64 v17; // r8

  v6 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v8 = *(_QWORD *)(a2 + 64);
  else
    v8 = *(_QWORD *)(a2 + 24);
  v9 = v8 + *(unsigned int *)(v8 + 36);
  v10 = 6LL * a5;
  *(_WORD *)(*(_QWORD *)(a1 + 896) + 8 * v10 + 24) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 896) + 8 * v10 + 16) = 2 * *(_DWORD *)(a1 + 208) * (unsigned int)a3
                                                    + *(_QWORD *)(a1 + 184)
                                                    + 4096LL;
  v11 = *(_QWORD *)(v8 + 16 * (a6 + 3LL) + 28);
  if ( v11 )
  {
    v12 = 16LL * a6;
    *(_QWORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5) = v11;
  }
  else
  {
    v12 = 16LL * a6;
    v15 = *(unsigned __int16 *)(v12 + v8 + 86);
    if ( (_WORD)v15 && (*(_DWORD *)(a1 + 136) & 1) != 0 )
    {
      NVMeAllocateDmaBuffer(a1, v15 << 6);
      return 8LL;
    }
  }
  *(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 26) = *(_WORD *)(v12 + v8 + 86);
  *(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 30) ^= (*(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 30) ^ *(_WORD *)(v12 + v8 + 88)) & 1;
  *(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 28) = a4;
  *(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 32) = *(unsigned __int8 *)(v12 + v8 + 84);
  LocalCommandReuse(a1, a1 + 944);
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
  v13 = *(_QWORD *)(a1 + 1040) + 4096LL;
  *(_BYTE *)v13 = 1;
  *(_QWORD *)(v13 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5);
  *(_WORD *)(v13 + 40) = a3;
  *(_WORD *)(v13 + 42) = *(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 26) - 1;
  v14 = *(_DWORD *)(v13 + 44) ^ (*(_DWORD *)(v13 + 44) ^ *(unsigned __int16 *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 30)) & 1;
  *(_DWORD *)(v13 + 44) = v14;
  *(_DWORD *)(v13 + 44) = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(2
                                                                        * *(_WORD *)(*(_QWORD *)(a1 + 896)
                                                                                   + 48LL * a5
                                                                                   + 32))) & 6;
  *(_WORD *)(v13 + 46) = *(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 28);
  ProcessCommand(a1, a1 + 952);
  WaitForCommandCompleteWithCustomTimeout(a1);
  if ( *(_BYTE *)(a1 + 955) == 1 )
  {
    ++*(_WORD *)(a1 + 888);
    v17 = 6LL * a6;
    *(_QWORD *)(v9 + 8 * v17 + 84) = *(_QWORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5);
    *(_QWORD *)(v9 + 8 * v17 + 92) = *(_QWORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 8);
    *(_QWORD *)(v9 + 8 * v17 + 100) = *(_QWORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 16);
    *(_WORD *)(v9 + 8 * v17 + 108) = *(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 24);
    *(_WORD *)(v9 + 8 * v17 + 110) = *(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 26);
    *(_WORD *)(v9 + 8 * v17 + 114) ^= (*(_WORD *)(v9 + 48LL * a6 + 114) ^ *(_WORD *)(*(_QWORD *)(a1 + 896)
                                                                                   + 48LL * a5
                                                                                   + 30)) & 1;
    *(_WORD *)(v9 + 8 * v17 + 112) = *(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 28);
    *(_WORD *)(v9 + 8 * v17 + 116) = *(_WORD *)(*(_QWORD *)(a1 + 896) + 48LL * a5 + 32);
    ++*(_WORD *)(v9 + 70);
  }
  else
  {
    return 9;
  }
  return v6;
}
