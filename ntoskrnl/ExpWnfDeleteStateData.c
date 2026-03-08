/*
 * XREFs of ExpWnfDeleteStateData @ 0x14077968C
 * Callers:
 *     ExpWnfDeleteNameInstance @ 0x1407792F0 (ExpWnfDeleteNameInstance.c)
 *     ExpNtDeleteWnfStateData @ 0x14085860C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWnfDeleteStateData(__int64 a1)
{
  unsigned __int64 *v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  void *v5; // rdi

  v1 = (unsigned __int64 *)(a1 + 80);
  v3 = KeAbPreAcquire(a1 + 80, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (__int64)v1);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  v5 = *(void **)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  KeAbPostRelease((ULONG_PTR)v1);
  if ( (unsigned __int64)v5 >= 2 )
    ExFreePoolWithTag(v5, 0x20666E57u);
}
