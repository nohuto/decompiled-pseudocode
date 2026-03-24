/*
 * XREFs of KiSwitchQueue @ 0x1402F7798
 * Callers:
 *     KeRemoveQueueEx @ 0x140204790 (KeRemoveQueueEx.c)
 *     KiSwapToUmsThreadContinue @ 0x140526460 (KiSwapToUmsThreadContinue.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402F781C (KiActivateWaiterQueueWithNoLocks.c)
 */

__int64 __fastcall KiSwitchQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rdi
  __int64 result; // rax
  __int64 **v8; // rcx

  v4 = (__int64 *)(a1 + 520);
  if ( a3 )
    KiActivateWaiterQueueWithNoLocks(a1, a3, v4);
  *(_QWORD *)(a1 + 232) = a2;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 40));
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a2, a2, a3, a4);
  result = a2 + 48;
  v8 = *(__int64 ***)(a2 + 56);
  if ( *v8 != (__int64 *)(a2 + 48) )
    __fastfail(3u);
  *v4 = result;
  v4[1] = (__int64)v8;
  *v8 = v4;
  *(_QWORD *)(a2 + 56) = v4;
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  return result;
}
