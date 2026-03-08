/*
 * XREFs of KiSwitchQueue @ 0x1403555E0
 * Callers:
 *     KeRemoveQueueEx @ 0x140315D50 (KeRemoveQueueEx.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1403548F8 (KiActivateWaiterQueueWithNoLocks.c)
 */

__int64 __fastcall KiSwitchQueue(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 result; // rax
  _QWORD *v7; // rcx

  v3 = (_QWORD *)(a1 + 520);
  if ( a3 )
    KiActivateWaiterQueueWithNoLocks(a1, a3, v3);
  *(_QWORD *)(a1 + 232) = a2;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 40));
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a2);
  result = a2 + 48;
  v7 = *(_QWORD **)(a2 + 56);
  if ( *v7 != a2 + 48 )
    __fastfail(3u);
  *v3 = result;
  v3[1] = v7;
  *v7 = v3;
  *(_QWORD *)(a2 + 56) = v3;
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  return result;
}
