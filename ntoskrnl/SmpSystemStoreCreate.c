/*
 * XREFs of SmpSystemStoreCreate @ 0x140858420
 * Callers:
 *     SmProcessConfigRequest @ 0x1408582AC (SmProcessConfigRequest.c)
 *     SmInitSystem @ 0x140B427B4 (SmInitSystem.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     SmpDirtyStoreCreate @ 0x1407DD540 (SmpDirtyStoreCreate.c)
 */

__int64 __fastcall SmpSystemStoreCreate(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v4; // ebp
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v1 = (volatile signed __int64 *)(a1 + 2120);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 2120, 0LL);
  if ( *(_DWORD *)(a1 + 2112) == -1 )
  {
    v4 = SmpDirtyStoreCreate(a1, (unsigned int)(*(_QWORD *)(*(_QWORD *)qword_140C67048 + 17040LL) >> 8) >> 1, 0, &v6);
    if ( v4 >= 0 )
      *(_DWORD *)(a1 + 2112) = v6;
  }
  else
  {
    v4 = -1073740008;
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
