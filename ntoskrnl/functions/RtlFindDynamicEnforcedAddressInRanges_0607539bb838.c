bool __fastcall RtlFindDynamicEnforcedAddressInRanges(_QWORD *a1, __int64 a2)
{
  signed __int64 *v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *i; // rbx
  int v5; // eax
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  v9 = a2;
  v2 = a1 + 1;
  v10 = 1LL;
  v7 = 0LL;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  i = a1;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 1), 0LL);
LABEL_2:
  for ( i = (_QWORD *)*i; i; i = (_QWORD *)i[1] )
  {
    v5 = RtlpDynamicEnforcedAddressRangesTreeCompare(&v7, i);
    if ( v5 < 0 )
      goto LABEL_2;
    if ( v5 <= 0 )
      break;
  }
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return i != 0LL;
}
