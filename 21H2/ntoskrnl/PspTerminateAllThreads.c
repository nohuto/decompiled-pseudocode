/*
 * XREFs of PspTerminateAllThreads @ 0x1407E6274
 * Callers:
 *     NtTerminateProcess @ 0x1407D7CA0 (NtTerminateProcess.c)
 *     PspTerminateProcess @ 0x1407D7E94 (PspTerminateProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeFlushProcessWriteBuffers @ 0x1402F374C (KeFlushProcessWriteBuffers.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     PspRundownSingleProcess @ 0x140683990 (PspRundownSingleProcess.c)
 *     DbgkClearProcessDebugObject @ 0x1406E9FB0 (DbgkClearProcessDebugObject.c)
 *     PspTerminateThreadByPointer @ 0x14079F130 (PspTerminateThreadByPointer.c)
 *     PspGetPreviousProcessThread @ 0x1407E64AC (PspGetPreviousProcessThread.c)
 *     PsGetNextProcessThread @ 0x1407E7750 (PsGetNextProcessThread.c)
 *     PspCatchCriticalBreak @ 0x1409B1558 (PspCatchCriticalBreak.c)
 */

__int64 __fastcall PspTerminateAllThreads(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // r13
  __int64 PreviousProcessThread; // rbp
  unsigned int v10; // ebx
  unsigned int v11; // esi
  int v12; // r12d
  __int64 i; // rax
  PVOID v14; // rbp
  void *v15; // rax
  ULONG v16; // edx
  PVOID Object; // [rsp+70h] [rbp+8h]

  if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(BugCheckParameter1);
    PspCatchCriticalBreak(
      "Terminating critical process 0x%p (%s)\n",
      (const void *)BugCheckParameter1,
      (const char *)(BugCheckParameter1 + 1448));
  }
  v8 = *(_QWORD *)(a2 + 184);
  PreviousProcessThread = PspGetPreviousProcessThread(BugCheckParameter1, 0LL);
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
      Object = (PVOID)PreviousProcessThread;
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
          else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(PreviousProcessThread + 1352)) )
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
        PreviousProcessThread = PspGetPreviousProcessThread(BugCheckParameter1, PreviousProcessThread);
      }
      while ( PreviousProcessThread );
      if ( v12 && BugCheckParameter1 == v8 )
        KeFlushProcessWriteBuffers(0);
      for ( i = PsGetNextProcessThread(BugCheckParameter1, 0LL); ; i = PsGetNextProcessThread(BugCheckParameter1, v14) )
      {
        v14 = (PVOID)i;
        if ( i != a2 && (v10 & 4) == 0 && (*(_DWORD *)(i + 1376) & 0x8000) == 0 )
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(i + 1352));
        if ( v14 == Object )
          break;
      }
      ObfDereferenceObjectWithTag(v14, 0x6E457350u);
      v15 = Object;
      v16 = 1700033360;
    }
    ObfDereferenceObjectWithTag(v15, v16);
    if ( (v10 & 2) != 0 && *(_QWORD *)(a2 + 544) == BugCheckParameter1 )
      PspTerminateThreadByPointer(a2, a3, 0);
  }
  if ( BugCheckParameter1 != v8 && a3 == 1073807364 )
    DbgkClearProcessDebugObject(BugCheckParameter1, 0LL);
  if ( (v11 == 290 || *(_QWORD *)(BugCheckParameter1 + 1400) && BugCheckParameter1 != v8)
    && !PspRundownSingleProcess(BugCheckParameter1, 0)
    && v11 == 290 )
  {
    return (unsigned int)-1073741558;
  }
  return v11;
}
