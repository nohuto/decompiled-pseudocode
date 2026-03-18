/*
 * XREFs of PopFxInsertDevice @ 0x1403B9C64
 * Callers:
 *     PopFxRegisterDevice @ 0x1408236BC (PopFxRegisterDevice.c)
 *     PoFxRegisterCoreDevice @ 0x140823860 (PoFxRegisterCoreDevice.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall PopFxInsertDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  char v6; // bl
  struct _KTHREAD *v7; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v10; // edx
  int v11; // r9d

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v5 = (_QWORD *)qword_140C23B88;
  if ( *(ULONG_PTR **)qword_140C23B88 != &PopFxDeviceList )
    __fastfail(3u);
  *a3 = &PopFxDeviceList;
  a3[1] = v5;
  *v5 = a3;
  qword_140C23B88 = (__int64)a3;
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock(&PopFxDeviceListLock);
  v7 = KeGetCurrentThread();
  if ( (unsigned __int64)&PopFxDeviceListLock - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
  else
    SessionId = -1;
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
      goto LABEL_17;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( p_Process )
  {
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
LABEL_17:
  if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v7, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
  _enable();
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
