/*
 * XREFs of PspUnlockProcessListExclusive @ 0x140203428
 * Callers:
 *     PspInsertProcess @ 0x14066D0AC (PspInsertProcess.c)
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall PspUnlockProcessListExclusive(__int64 a1)
{
  char v2; // al
  struct _KTHREAD *CurrentThread; // rdi
  __int64 SessionId; // rcx
  char *p_Process; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  unsigned int v8; // r9d
  __int64 result; // rax

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspActiveProcessLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(&PspActiveProcessLock);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int64)&PspActiveProcessLock - qword_140C50630 < 0x8000000000LL )
    SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  _disable();
  p_Process = (char *)&CurrentThread[1].Process;
  v6 = (unsigned __int64)&PspActiveProcessLock & 0x7FFFFFFFFFFFFFFCLL;
  v7 = 0LL;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v6
       || !p_Process[18]
       || (*(_DWORD *)p_Process & 1) != 0
       || *((_DWORD *)p_Process + 2) != (_DWORD)SessionId )
  {
    v7 = (unsigned int)(v7 + 1);
    p_Process += 96;
    if ( (unsigned int)v7 >= 6 )
      goto LABEL_18;
  }
  p_Process[18] = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process, v7, v6);
      _disable();
    }
    v8 = *((_DWORD *)p_Process + 22);
    *((_DWORD *)p_Process + 22) = 0;
    p_Process[17] = 0;
    *(_QWORD *)p_Process = 0LL;
    result = (unsigned __int8)p_Process[16];
    CurrentThread->AbEntrySummary |= 1 << result;
    _enable();
    v6 = v8;
    if ( v8 )
      result = KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread);
    goto LABEL_14;
  }
LABEL_18:
  result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&PspActiveProcessLock, (unsigned int)SessionId, 0LL);
  _enable();
LABEL_14:
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = a1 + 152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery(SessionId, v7, v6);
  }
  return result;
}
