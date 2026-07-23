/*
 * XREFs of WdipSemMarkNextTimedOutInstanceForDeletion @ 0x140615560
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x1406154B0 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 */

__int64 *__fastcall WdipSemMarkNextTimedOutInstanceForDeletion(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v2; // rbx
  __int64 *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v9; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1C9D8, 0LL);
  if ( a1 )
  {
    v4 = *a1;
    while ( v4 != &WdipSemEnabledInstanceTable )
    {
      v9 = v4;
      v4 = (__int64 *)*v4;
      if ( ++*((_DWORD *)v9 + 10) >= 0xAu && *(_BYTE *)(v9[4] + 1176) && !*((_DWORD *)v9 + 11) )
      {
        *((_DWORD *)v9 + 11) = 1;
        v2 = v9;
        break;
      }
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140C1C9D8, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
  return v2;
}
