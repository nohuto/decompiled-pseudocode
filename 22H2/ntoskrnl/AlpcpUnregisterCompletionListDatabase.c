/*
 * XREFs of AlpcpUnregisterCompletionListDatabase @ 0x14097A060
 * Callers:
 *     AlpcpFreeCompletionList @ 0x140979774 (AlpcpFreeCompletionList.c)
 *     AlpcpInitializeCompletionList @ 0x1409797D0 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 */

signed __int32 __fastcall AlpcpUnregisterCompletionListDatabase(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpCompletionListDatabase, 0LL);
  v2 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (_QWORD *)a1[1], (_QWORD *)*v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  --dword_140C40748;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpCompletionListDatabase, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpCompletionListDatabase);
  return KeAbPostRelease((ULONG_PTR)&AlpcpCompletionListDatabase);
}
