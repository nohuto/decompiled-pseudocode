/*
 * XREFs of RtlpHpSegMgrVaCtxInsert @ 0x18010F264
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x180006584 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpQueryVA @ 0x180003794 (RtlpHpQueryVA.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpHpSegMgrVaCtxInsert(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  __int16 *v6; // r14
  unsigned __int64 v7; // rdi
  __int16 *v9; // [rsp+30h] [rbp+8h] BYREF

  RtlpHpQueryVA(a2, a2, &v9, 0LL);
  v6 = v9;
  if ( *v9 < 0 )
  {
    *v9 ^= (*v9 ^ (*v9 + 1)) & 0x7FF;
    v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), 1uLL);
    v6 = v9;
  }
  v7 = (unsigned __int64)(unsigned __int16)*v6 >> 15;
  RtlAcquireSRWLockExclusive(a1 + 112, v3, v4, v5);
  *((_QWORD *)v6 + 1) = *(_QWORD *)(a1 + 8 * v7 + 120);
  *(_QWORD *)(a1 + 8 * v7 + 120) = v6 + 4;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 112));
}
