void __fastcall KiAbApplyWakeupBoost(char a1, __int64 a2, int a3)
{
  int v5; // r8d
  __int64 v6; // rax
  char v7; // r12
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // r14
  char v10; // si
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rax
  char v14; // cl
  int v15; // [rsp+98h] [rbp+10h] BYREF
  _QWORD *v16; // [rsp+A8h] [rbp+20h] BYREF

  v5 = 0;
  if ( (*(_BYTE *)(a2 + 19) & 1) == 0 || *(_QWORD *)(a2 + 64) )
  {
    v6 = *(unsigned __int8 *)(a2 + 16);
    v7 = 32;
    v16 = 0LL;
    v8 = a2 - 96 * v6 - 1696;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v13) = 4;
      if ( CurrentIrql != 2 )
        v13 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v13;
      v5 = 0;
    }
    v10 = a1;
    if ( a1 > 30 )
      v10 = 30;
    if ( *(char *)(v8 + 563) < v10 && (*(_DWORD *)(a2 + 88) & (1 << (v10 - 1)) & 0x3FFFFFFF) == 0 )
    {
      v7 = *(_BYTE *)(v8 + 195);
      v15 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 64), 0LL) )
      {
        do
        {
          KeYieldProcessorEx(&v15);
          v5 = 0;
        }
        while ( *(_QWORD *)(v8 + 64) );
      }
      v14 = *(_BYTE *)(v10 + v8 + 824);
      if ( v14 == -1 )
        KeBugCheckEx(0x157u, v8, v10, 1uLL, 0LL);
      *(_BYTE *)(v10 + v8 + 824) = v14 + 1;
      *(_DWORD *)(v8 + 856) |= 1 << v10;
      if ( *(char *)(v8 + 195) < v10 )
      {
        KiSetPriorityThread(v8, (unsigned __int64)&v16, v10);
        v5 = 0;
      }
      *(_QWORD *)(v8 + 64) = 0LL;
      *(_DWORD *)(a2 + 88) |= (1 << (v10 - 1)) & 0x3FFFFFFF;
    }
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 && v7 != 32 )
    {
      LOBYTE(v5) = v10;
      EtwTraceAutoBoostSetFloor(v8, *(_QWORD *)a2 & 0xFFFFFFFC, v5, 0, 0, v7, 0, 0, 1, 0);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( a3 )
      KiReadyDeferredReadyList((__int64)CurrentPrcb, &v16);
    else
      KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v16, CurrentIrql);
  }
}
