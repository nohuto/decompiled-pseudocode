/*
 * XREFs of NVMeReservedSubmissionQueueCreate @ 0x1C0023F2C
 * Callers:
 *     IoctlCreateReservedQueuePair @ 0x1C001AFEC (IoctlCreateReservedQueuePair.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
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
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rcx
  void *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // ecx
  __int64 v18; // r8

  v6 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v9 = *(_QWORD *)(a2 + 64);
  else
    v9 = *(_QWORD *)(a2 + 24);
  v10 = v9 + *(unsigned int *)(v9 + 36);
  v11 = 6LL * a5;
  *(_WORD *)(*(_QWORD *)(a1 + 816) + 8 * v11 + 24) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 816) + 8 * v11 + 16) = 2 * (unsigned int)a3 * *(_DWORD *)(a1 + 200)
                                                    + *(_QWORD *)(a1 + 176)
                                                    + 4096LL;
  v12 = *(_QWORD *)(v9 + 16 * (a6 + 3LL) + 28);
  if ( v12 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 816) + 48LL * a5) = v12;
  }
  else
  {
    v16 = *(unsigned __int16 *)(v9 + 16LL * a6 + 86);
    if ( (_WORD)v16 && (*(_DWORD *)(a1 + 136) & 1) != 0 )
    {
      NVMeAllocateDmaBuffer(a1, v16 << 6);
      return 8LL;
    }
  }
  *(_WORD *)(*(_QWORD *)(a1 + 816) + 48LL * a5 + 26) = *(_WORD *)(v9 + 16LL * a6 + 86);
  *(_WORD *)(*(_QWORD *)(a1 + 816) + 48LL * a5 + 30) ^= (*(_WORD *)(*(_QWORD *)(a1 + 816) + 48LL * a5 + 30) ^ *(_WORD *)(v9 + 16LL * a6 + 88)) & 1;
  *(_WORD *)(*(_QWORD *)(a1 + 816) + 48LL * a5 + 28) = a4;
  *(_WORD *)(*(_QWORD *)(a1 + 816) + 48LL * a5 + 32) = *(unsigned __int8 *)(v9 + 16LL * a6 + 84);
  v13 = *(void **)(a1 + 952);
  *(_BYTE *)(a1 + 867) = 0;
  memset(v13, 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
  v14 = *(_QWORD *)(a1 + 952);
  *(_QWORD *)(a1 + 920) = v14;
  *(_DWORD *)(a1 + 856) = 1;
  *(_BYTE *)(v14 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
  v15 = *(_QWORD *)(a1 + 952) + 4096LL;
  *(_BYTE *)v15 = 1;
  *(_QWORD *)(v15 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 816) + 48LL * a5);
  *(_WORD *)(v15 + 40) = a3;
  *(_WORD *)(v15 + 42) = *(_WORD *)(*(_QWORD *)(a1 + 816) + 48LL * a5 + 26) - 1;
  *(_DWORD *)(v15 + 44) ^= (*(_DWORD *)(v15 + 44) ^ *(unsigned __int16 *)(*(_QWORD *)(a1 + 816) + 48LL * a5 + 30)) & 1;
  *(_DWORD *)(v15 + 44) ^= ((unsigned __int8)*(_DWORD *)(v15 + 44) ^ (unsigned __int8)(2
                                                                                     * *(_WORD *)(*(_QWORD *)(a1 + 816)
                                                                                                + 48LL * a5
                                                                                                + 32))) & 6;
  *(_WORD *)(v15 + 46) = *(_WORD *)(*(_QWORD *)(a1 + 816) + 48LL * a5 + 28);
  ProcessCommand(a1, a1 + 864);
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 864, 1, 10000000);
  if ( *(_BYTE *)(a1 + 867) == 1 )
  {
    ++*(_WORD *)(a1 + 808);
    v18 = 6LL * a6;
    *(_QWORD *)(v10 + 8 * v18 + 84) = *(_QWORD *)(*(_QWORD *)(a1 + 816) + 48LL * a5);
    *(_QWORD *)(v10 + 8 * v18 + 92) = *(_QWORD *)(*(_QWORD *)(a1 + 816) + 48LL * a5 + 8);
    *(_QWORD *)(v10 + 8 * v18 + 100) = *(_QWORD *)(*(_QWORD *)(a1 + 816) + 48LL * a5 + 16);
    *(_WORD *)(v10 + 8 * v18 + 108) = *(_WORD *)(*(_QWORD *)(a1 + 816) + 48LL * a5 + 24);
    *(_WORD *)(v10 + 8 * v18 + 110) = *(_WORD *)(*(_QWORD *)(a1 + 816) + 48LL * a5 + 26);
    *(_WORD *)(v10 + 8 * v18 + 114) ^= (*(_WORD *)(v10 + 48LL * a6 + 114) ^ *(_WORD *)(*(_QWORD *)(a1 + 816)
                                                                                     + 48LL * a5
                                                                                     + 30)) & 1;
    *(_WORD *)(v10 + 8 * v18 + 112) = *(_WORD *)(*(_QWORD *)(a1 + 816) + 48LL * a5 + 28);
    *(_WORD *)(v10 + 8 * v18 + 116) = *(_WORD *)(*(_QWORD *)(a1 + 816) + 48LL * a5 + 32);
    ++*(_WORD *)(v10 + 70);
  }
  else
  {
    return 9;
  }
  return v6;
}
