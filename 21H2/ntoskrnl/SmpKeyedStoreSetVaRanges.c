/*
 * XREFs of SmpKeyedStoreSetVaRanges @ 0x140260A44
 * Callers:
 *     SmStoreSetProcessVaRanges @ 0x1406EC47C (SmStoreSetProcessVaRanges.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     SmpKeyedStoreEntryGet @ 0x1402A1124 (SmpKeyedStoreEntryGet.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall SmpKeyedStoreSetVaRanges(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // ebp
  struct _KTHREAD *v4; // rdi
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  ULONG_PTR v7; // r8
  __int64 v8; // rdx
  int v9; // r8d

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v3 = SmpKeyedStoreEntryGet(BugCheckParameter2) != 0 ? 0xFFFFFE96 : 0;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  v4 = KeGetCurrentThread();
  if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx(v4->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (char *)&v4[1].Process;
  v7 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
  v8 = 0LL;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v7
       || !p_Process[18]
       || (*(_DWORD *)p_Process & 1) != 0
       || *((_DWORD *)p_Process + 2) != SessionId )
  {
    v8 = (unsigned int)(v8 + 1);
    p_Process += 96;
    if ( (unsigned int)v8 >= 6 )
      goto LABEL_17;
  }
  p_Process[18] = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process, v8, v7);
      _disable();
    }
    v9 = *((_DWORD *)p_Process + 22);
    *((_DWORD *)p_Process + 22) = 0;
    p_Process[17] = 0;
    *(_QWORD *)p_Process = 0LL;
    v4->AbEntrySummary |= 1 << p_Process[16];
    _enable();
    if ( v9 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v4, BugCheckParameter2, v9);
    goto LABEL_15;
  }
LABEL_17:
  if ( (*((_DWORD *)&v4->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v4, BugCheckParameter2, SessionId, 0LL);
  _enable();
LABEL_15:
  KeLeaveCriticalRegion();
  return v3 - 1073741275;
}
