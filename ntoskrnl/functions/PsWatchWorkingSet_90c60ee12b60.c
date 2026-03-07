char __fastcall PsWatchWorkingSet(int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 Process; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // rdi
  signed __int32 v9; // ecx
  unsigned __int8 CurrentIrql; // si
  signed __int32 v11; // eax
  int v12; // ecx
  signed __int32 v13; // ett
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  signed __int32 v18; // eax
  signed __int64 v19; // rdx
  bool v20; // zf

  CurrentThread = KeGetCurrentThread();
  Process = (signed __int64)CurrentThread->ApcState.Process;
  v7 = *(_QWORD *)(Process + 1328);
  if ( v7 )
  {
    v8 = 0x4000000000000000LL;
    LOBYTE(Process) = 0;
    if ( a1 >= 276 )
      v8 = 0x8000000000000000uLL;
    _m_prefetchw((const void *)v7);
    v9 = *(_DWORD *)v7;
    CurrentIrql = KeGetCurrentIrql();
    if ( !CurrentIrql )
      --CurrentThread->KernelApcDisable;
    if ( (v9 & 1) != 0 )
      goto LABEL_19;
    do
    {
      LODWORD(Process) = v9 & 0xFFFE;
      if ( (unsigned int)Process >= 0x800 )
        break;
      v11 = v9;
      v12 = ((unsigned __int16)v9 ^ (unsigned __int16)(v9 + 2)) & 0xFFFE ^ v9;
      v13 = v11;
      LODWORD(Process) = _InterlockedCompareExchange(
                           (volatile signed __int32 *)v7,
                           (v12 ^ (v12 + 0x10000)) & 0x7FFF0000 ^ v12,
                           v11);
      v9 = Process;
      if ( v13 == (_DWORD)Process )
        break;
    }
    while ( (Process & 1) == 0 );
    if ( (v9 & 1) != 0 || (LODWORD(Process) = v9 & 0xFFFE, (unsigned int)Process >= 0x800) )
    {
LABEL_19:
      _m_prefetchw((const void *)(v7 + 8));
      v19 = *(_QWORD *)(v7 + 8);
      if ( v19 != -1 )
      {
        do
        {
          Process = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 8), v19 + 1, v19);
          v20 = v19 == Process;
          v19 = Process;
        }
        while ( !v20 && Process != -1 );
      }
    }
    else
    {
      v14 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      v15 = (unsigned __int16)v9 >> 1;
      v16 = a3 | 1;
      if ( a1 >= 276 )
        v16 = v14;
      v17 = 3 * v15;
      *(_QWORD *)(v7 + 8 * v17 + 40) = a2;
      *(_QWORD *)(v7 + 24 * v15 + 48) = v16;
      *(_QWORD *)(v7 + 8 * v17 + 56) = *(_QWORD *)&CurrentThread[1].CurrentRunTime;
      v18 = _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFF0000);
      if ( (v18 & 1) != 0 && (v18 & 0x7FFF0000) == 0x10000 )
        KeSignalGate(v7 + 16, 0);
      Process = (signed __int64)CurrentThread->WaitBlock[0].SparePtr;
      if ( Process )
        _InterlockedOr64((volatile signed __int64 *)Process, v8);
    }
    if ( !CurrentIrql )
      LOBYTE(Process) = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return Process;
}
