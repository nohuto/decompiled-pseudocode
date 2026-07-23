/*
 * XREFs of RtlpHpSegMgrVaCtxInsert @ 0x18010F264
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x180006584 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpQueryVA @ 0x180003794 (RtlpHpQueryVA.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpHpSegMgrVaCtxInsert(__int64 a1, __int64 a2)
{
  __int16 *v3; // r14
  unsigned __int64 v4; // rdi
  __int16 *v5; // [rsp+30h] [rbp+8h] BYREF

  RtlpHpQueryVA(a2, a2, &v5, 0LL);
  v3 = v5;
  if ( *v5 < 0 )
  {
    *v5 ^= (*v5 ^ (*v5 + 1)) & 0x7FF;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), 1uLL);
    v3 = v5;
  }
  v4 = (unsigned __int64)(unsigned __int16)*v3 >> 15;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 112));
  *((_QWORD *)v3 + 1) = *(_QWORD *)(a1 + 8 * v4 + 120);
  *(_QWORD *)(a1 + 8 * v4 + 120) = v3 + 4;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 112));
}
