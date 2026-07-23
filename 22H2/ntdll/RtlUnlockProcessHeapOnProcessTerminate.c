/*
 * XREFs of RtlUnlockProcessHeapOnProcessTerminate @ 0x18005F5A0
 * Callers:
 *     RtlExitUserProcess @ 0x18005EED0 (RtlExitUserProcess.c)
 * Callees:
 *     RtlUnlockHeap @ 0x18005FA00 (RtlUnlockHeap.c)
 */

char RtlUnlockProcessHeapOnProcessTerminate()
{
  struct _PEB *v0; // rax
  _QWORD *ProcessHeap; // r8
  __int64 v2; // rdx
  void *UniqueThread; // rcx

  v0 = NtCurrentPeb();
  ProcessHeap = v0->ProcessHeap;
  if ( *((_DWORD *)ProcessHeap + 4) == -571548178 )
  {
    LOBYTE(v0) = RtlpHpHeapUnlock(v0->ProcessHeap, 1LL);
  }
  else if ( (*((_DWORD *)ProcessHeap + 29) & 0x1000000) == 0 )
  {
    v2 = ProcessHeap[44];
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_QWORD *)(v2 + 16) = UniqueThread;
    *(_DWORD *)(v2 + 8) = -2;
    *(_DWORD *)(v2 + 12) = 1;
    LOBYTE(v0) = RtlUnlockHeap(ProcessHeap);
  }
  return (char)v0;
}
