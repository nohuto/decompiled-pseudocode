/*
 * XREFs of WdipSemMarkNextTimedOutInstanceForDeletion @ 0x14078C080
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x14078BFD0 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

__int64 *__fastcall WdipSemMarkNextTimedOutInstanceForDeletion(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rbx
  __int64 *v4; // rdx
  __int64 *v6; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C32458, 0LL);
  if ( a1 )
  {
    v4 = *a1;
    while ( v4 != &WdipSemEnabledInstanceTable )
    {
      v6 = v4;
      v4 = (__int64 *)*v4;
      if ( ++*((_DWORD *)v6 + 10) >= 0xAu && *(_BYTE *)(v6[4] + 1176) && !*((_DWORD *)v6 + 11) )
      {
        *((_DWORD *)v6 + 11) = 1;
        v3 = v6;
        break;
      }
    }
  }
  ExReleasePushLockEx((__int64 *)&qword_140C32458, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
