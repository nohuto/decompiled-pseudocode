/*
 * XREFs of PspTerminateAllThreads @ 0x1407DB73C
 * Callers:
 *     PspTerminateProcess @ 0x1407DC198 (PspTerminateProcess.c)
 *     NtTerminateProcess @ 0x1407DC2F0 (NtTerminateProcess.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x1402373CC (KeFlushProcessWriteBuffers.c)
 *     PsGetProcessServerSilo @ 0x1402637E0 (PsGetProcessServerSilo.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     DbgkClearProcessDebugObject @ 0x14067F39C (DbgkClearProcessDebugObject.c)
 *     PsGetNextProcessThread @ 0x1406A8E30 (PsGetNextProcessThread.c)
 *     PspRundownSingleProcess @ 0x1406F8160 (PspRundownSingleProcess.c)
 *     PspTerminateThreadByPointer @ 0x1407DA8F0 (PspTerminateThreadByPointer.c)
 *     PspGetPreviousProcessThread @ 0x1407DB974 (PspGetPreviousProcessThread.c)
 *     PspCatchCriticalBreak @ 0x1409B0A80 (PspCatchCriticalBreak.c)
 */

__int64 __fastcall PspTerminateAllThreads(PRKPROCESS PROCESS, __int64 a2, unsigned int a3, unsigned int a4)
{
  struct _KPROCESS *v8; // r13
  __int64 PreviousProcessThread; // rbp
  unsigned int v10; // ebx
  unsigned int v11; // esi
  int v12; // r12d
  struct _EX_RUNDOWN_REF *i; // rax
  struct _EX_RUNDOWN_REF *v14; // rbp
  void *v15; // rax
  ULONG v16; // edx
  struct _EX_RUNDOWN_REF *Object; // [rsp+70h] [rbp+8h]

  if ( (PROCESS[1].DirectoryTableBase & 0x200000000000LL) != 0 )
  {
    PsGetProcessServerSilo((__int64)PROCESS);
    PspCatchCriticalBreak(
      "Terminating critical process 0x%p (%s)\n",
      PROCESS,
      (const char *)&PROCESS[1].ActiveProcessors);
  }
  v8 = *(struct _KPROCESS **)(a2 + 184);
  PreviousProcessThread = PspGetPreviousProcessThread(PROCESS, 0LL);
  v10 = a4 & 4 | (2 * (a4 & 1)) | (a4 >> 1) & 1;
  v11 = 290;
  if ( PreviousProcessThread )
  {
    if ( (v10 & 1) != 0 )
    {
      v11 = -1073741558;
      v16 = 1850045264;
      v15 = (void *)PreviousProcessThread;
    }
    else
    {
      Object = (struct _EX_RUNDOWN_REF *)PreviousProcessThread;
      v11 = 0;
      ObfReferenceObjectWithTag((PVOID)PreviousProcessThread, 0x65547350u);
      v12 = 0;
      do
      {
        if ( PreviousProcessThread != a2 )
        {
          if ( (v10 & 4) != 0 )
          {
            v10 ^= ((unsigned __int8)v10 ^ (unsigned __int8)(*(_DWORD *)(PreviousProcessThread + 1380) >> 3)) & 8;
          }
          else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(PreviousProcessThread + 1352)) )
          {
            v10 |= 8u;
          }
          else
          {
            v10 = (((unsigned __int8)v10 ^ (unsigned __int8)(16
                                                           * _interlockedbittestandset(
                                                               (volatile signed __int32 *)(PreviousProcessThread + 1376),
                                                               0xFu))) & 0x10 ^ v10) & 0xFFFFFFF7;
          }
          if ( (v10 & 8) != 0 )
          {
            ++v12;
            PspTerminateThreadByPointer(PreviousProcessThread, a3, 0);
          }
        }
        PreviousProcessThread = PspGetPreviousProcessThread(PROCESS, PreviousProcessThread);
      }
      while ( PreviousProcessThread );
      if ( v12 && PROCESS == v8 )
        KeFlushProcessWriteBuffers(0);
      for ( i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread((__int64)PROCESS, 0LL);
            ;
            i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread((__int64)PROCESS, v14) )
      {
        v14 = i;
        if ( i != (struct _EX_RUNDOWN_REF *)a2 && (v10 & 4) == 0 && (i[172].Count & 0x8000) == 0 )
          ExReleaseRundownProtection_0(i + 169);
        if ( v14 == Object )
          break;
      }
      ObfDereferenceObjectWithTag(v14, 0x6E457350u);
      v15 = Object;
      v16 = 1700033360;
    }
    ObfDereferenceObjectWithTag(v15, v16);
    if ( (v10 & 2) != 0 && *(PRKPROCESS *)(a2 + 544) == PROCESS )
      PspTerminateThreadByPointer(a2, a3, 0);
  }
  if ( PROCESS != v8 && a3 == 1073807364 )
    DbgkClearProcessDebugObject(PROCESS, 0LL);
  if ( (v11 == 290 || PROCESS[1].Affinity.StaticBitmap[29] && PROCESS != v8)
    && !PspRundownSingleProcess(PROCESS, 0)
    && v11 == 290 )
  {
    return (unsigned int)-1073741558;
  }
  return v11;
}
