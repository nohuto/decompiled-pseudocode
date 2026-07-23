/*
 * XREFs of RtlFindDynamicEnforcedAddressInRanges @ 0x1405CFE78
 * Callers:
 *     KiCheckUserAddressCetCompat @ 0x1405CEF24 (KiCheckUserAddressCetCompat.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     RtlpDynamicEnforcedAddressRangesTreeCompare @ 0x1405CFFD4 (RtlpDynamicEnforcedAddressRangesTreeCompare.c)
 */

bool __fastcall RtlFindDynamicEnforcedAddressInRanges(_QWORD *a1, __int64 a2)
{
  _QWORD *i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v4; // rdi
  int v5; // eax
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  v9 = a2;
  v7 = 0LL;
  v8 = 0LL;
  v10 = 1LL;
  i = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = a1 + 1;
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
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegion();
  return i != 0LL;
}
