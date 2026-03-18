/*
 * XREFs of PopFxRemoveDevice @ 0x1403BA838
 * Callers:
 *     PopFxUnregisterDevice @ 0x14082310C (PopFxUnregisterDevice.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall PopFxRemoveDevice(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  struct _KTHREAD *v6; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v9; // edx
  int v10; // r9d

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v4 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v5 = (_QWORD *)a2[1], (_QWORD *)*v5 != a2) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopFxDeviceListLock);
  v6 = KeGetCurrentThread();
  if ( (unsigned __int64)&PopFxDeviceListLock - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
  _disable();
  p_Process = (__int64)&v6[1].Process;
  v9 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v9;
    p_Process += 96LL;
    if ( v9 >= 6 )
      goto LABEL_13;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_13:
    if ( (*((_DWORD *)&v6->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v6, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
    _enable();
    goto LABEL_15;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v10 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v6->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v10 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v6, (__int64)&PopFxDeviceListLock, v10);
LABEL_15:
  KeLeaveCriticalRegion();
}
