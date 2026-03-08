/*
 * XREFs of KiAbSetMinimumThreadPriority @ 0x140357EB4
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140239A40 (KiAbProcessThreadLocks.c)
 *     KiDispatchInterrupt @ 0x140255DA0 (KiDispatchInterrupt.c)
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 *     KiAbIoBoostOwners @ 0x140357CB0 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x140357DB4 (KiAbCpuBoostOwners.c)
 * Callees:
 *     KiSetPriorityThread @ 0x1402273F0 (KiSetPriorityThread.c)
 *     PsGetBaseIoPriorityThread @ 0x14027F460 (PsGetBaseIoPriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1402832C0 (PsGetIoPriorityThread.c)
 *     KiAbThreadInsertList @ 0x1402F45E0 (KiAbThreadInsertList.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiAbThreadGetIoQoSPriority @ 0x14035812C (KiAbThreadGetIoQoSPriority.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14035822C (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbThreadBoostIoPriority @ 0x140358384 (KiAbThreadBoostIoPriority.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostSetFloor @ 0x14045EB78 (EtwTraceAutoBoostSetFloor.c)
 */

__int64 __fastcall KiAbSetMinimumThreadPriority(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        __int64 a5,
        _DWORD *a6)
{
  __int64 v7; // rdi
  int IoPriorityThread; // eax
  unsigned int v9; // ebx
  char v10; // r12
  char v11; // r13
  int v12; // ebp
  char CpuPriorityKey; // al
  _BYTE *v14; // r9
  ULONG_PTR v15; // r15
  char v16; // si
  int BaseIoPriorityThread; // eax
  int v18; // r8d
  __int64 v19; // r9
  __int64 v20; // r10
  int v22; // edx
  char v23; // cl
  int v24; // [rsp+50h] [rbp-58h]
  int v25; // [rsp+54h] [rbp-54h] BYREF
  int IoQoSPriority; // [rsp+58h] [rbp-50h]
  char v27; // [rsp+B0h] [rbp+8h]

  v7 = a1 - 96LL * *(unsigned __int8 *)(a1 + 16) - 1696;
  v27 = *(_BYTE *)(v7 + 195);
  IoPriorityThread = PsGetIoPriorityThread(v7);
  v9 = 0;
  v10 = IoPriorityThread;
  v11 = 2;
  if ( IoPriorityThread < 2 && *(_DWORD *)(v7 + 1440) )
    v10 = 2;
  IoQoSPriority = KiAbThreadGetIoQoSPriority(v7);
  v12 = 0;
  v24 = 0;
  *a6 = 0;
  CpuPriorityKey = KiAbEntryGetCpuPriorityKey(a1);
  v15 = (char)*v14;
  v16 = 1;
  if ( CpuPriorityKey < (char)v15 )
  {
    v22 = *(_DWORD *)(a1 + 88);
    LOBYTE(v24) = *v14;
    v25 = 0;
    *(_DWORD *)(a1 + 88) = v22 ^ (v22 ^ (v22 | (1 << (v15 - 1)))) & 0x3FFFFFFF;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v25);
      while ( *(_QWORD *)(v7 + 64) );
    }
    v23 = *(_BYTE *)(v15 + v7 + 824);
    if ( v23 == -1 )
      KeBugCheckEx(0x157u, v7, v15, 1uLL, 0LL);
    *(_BYTE *)(v15 + v7 + 824) = v23 + 1;
    *(_DWORD *)(v7 + 856) |= 1 << v15;
    if ( *(char *)(v7 + 195) < (char)v15 )
    {
      KiSetPriorityThread(v7, a3, v15);
      v12 = 1;
    }
    *(_QWORD *)(v7 + 64) = 0LL;
  }
  else
  {
    LOBYTE(v15) = 0;
  }
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(v7);
  if ( BaseIoPriorityThread >= *(char *)(v19 + 1)
    || (*(_DWORD *)(a1 + 88) & 0x40000000) != 0
    || !(unsigned int)KiAbThreadBoostIoPriority(v7, a5, 0LL, v20) )
  {
    v11 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 88) |= 0x40000000u;
    v12 = 1;
    BYTE1(v24) = 2;
  }
  if ( (*(_DWORD *)(v7 + 1448) == 0) < *(char *)(a2 + 2)
    && *(int *)(a1 + 88) >= 0
    && (unsigned int)KiAbThreadBoostIoPriority(v7, a5, 1LL, a6) )
  {
    *(_DWORD *)(a1 + 88) |= 0x80000000;
    v12 = 1;
    BYTE2(v24) = 1;
  }
  else
  {
    v16 = 0;
  }
  if ( a4 && v12 && *(_BYTE *)(v7 + 793) )
    KiAbThreadInsertList(v7, a4, (_QWORD *)(v7 + 808));
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 && v24 )
  {
    LOBYTE(v19) = v11;
    LOBYTE(v18) = v15;
    EtwTraceAutoBoostSetFloor(v7, *(_DWORD *)a1 & 0xFFFFFFFC, v18, v19, v16, v27, v10, IoQoSPriority, 0, *a6);
  }
  LOBYTE(v9) = (_BYTE)v15 != 0;
  return v9;
}
