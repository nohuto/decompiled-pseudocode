/*
 * XREFs of PopFxInsertAcpiDevice @ 0x1405CC520
 * Callers:
 *     PopFxAcpiRegisterDevice @ 0x1405DDFFC (PopFxAcpiRegisterDevice.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall PopFxInsertAcpiDevice(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  struct _KTHREAD *v7; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v10; // edx
  int v11; // r9d

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v5 = (_QWORD *)qword_140C23BA8;
  v6 = (_QWORD *)(a3 + 200);
  if ( *(__int64 **)qword_140C23BA8 != &PopFxAcpiDeviceList )
    __fastfail(3u);
  *v6 = &PopFxAcpiDeviceList;
  v6[1] = v5;
  *v5 = v6;
  qword_140C23BA8 = (__int64)v6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopFxDeviceListLock);
  v7 = KeGetCurrentThread();
  if ( (unsigned __int64)&PopFxDeviceListLock - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
  _disable();
  p_Process = (__int64)&v7[1].Process;
  v10 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v10;
    p_Process += 96LL;
    if ( v10 >= 6 )
      goto LABEL_14;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_14:
    if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
    _enable();
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v11 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v7->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v11 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v7, (__int64)&PopFxDeviceListLock, v11);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
