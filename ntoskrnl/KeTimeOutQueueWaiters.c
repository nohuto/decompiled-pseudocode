__int64 __fastcall KeTimeOutQueueWaiters(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebp
  int v6; // r13d
  volatile CCHAR v7; // cl
  unsigned __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v13; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // rax

  v4 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  v7 = KeNumberProcessorsGroup0[1];
  v8 = (unsigned __int64)((a2 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v15) = 4;
    if ( CurrentIrql != 2 )
      v15 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v15;
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  v10 = *(_QWORD **)(a1 + 16);
  while ( v10 != (_QWORD *)(a1 + 8) && v4 < a3 )
  {
    v11 = (__int64)v10;
    v10 = (_QWORD *)v10[1];
    if ( *(_BYTE *)(v11 + 16) == 3 )
    {
      if ( v6 - *(_DWORD *)(*(_QWORD *)(v11 + 24) + 436LL) < (unsigned int)v8 )
        break;
      v13 = *(_QWORD *)v11;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 || *v10 != v11 )
        __fastfail(3u);
      *v10 = v13;
      *(_QWORD *)(v13 + 8) = v10;
      if ( (unsigned __int8)KiTryUnwaitThread((__int64)KeGetCurrentPrcb(), v11, 258LL, 0LL) )
        ++v4;
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0, (struct _PROCESSOR_NUMBER)1, 0, CurrentIrql);
  return v4;
}
