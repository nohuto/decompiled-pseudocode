/*
 * XREFs of PspExpandQuota @ 0x140295420
 * Callers:
 *     PsChargeProcessPoolQuota @ 0x1402951F0 (PsChargeProcessPoolQuota.c)
 *     PspChargeQuota @ 0x140312850 (PspChargeQuota.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 * Callees:
 *     PspLockQuotaExpansion @ 0x1402954EC (PspLockQuotaExpansion.c)
 *     PspUnlockQuotaExpansion @ 0x140295534 (PspUnlockQuotaExpansion.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PspReleaseReturnedQuota @ 0x1405A17D4 (PspReleaseReturnedQuota.c)
 */

char __fastcall PspExpandQuota(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  int *v7; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rax
  signed __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  char v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v18 = 0LL;
  v17 = 0;
  v7 = &PspQuotaExpansionDescriptors[14 * a1];
  PspLockQuotaExpansion(v7, &v17);
  v11 = *(_QWORD *)(a2 + 64);
  if ( a3 + a4 <= v11 )
  {
    LOBYTE(v10) = v17;
    PspUnlockQuotaExpansion(v7, v10);
    *a5 = v11;
    return 1;
  }
  if ( (*((unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))v7 + 3))(
         a1,
         *(_QWORD *)(a2 + 64),
         0LL,
         &v18)
    || PspReleaseReturnedQuota(a1, v7)
    && (*((unsigned __int8 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, __int64 *))v7 + 3))(a1, v11, 0LL, &v18) )
  {
    v13 = v18 - v11;
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), v18 - v11);
    LOBYTE(v12) = v17;
    v15 = v13 + v14;
    PspUnlockQuotaExpansion(v7, v12);
    *a5 = v15;
    return 1;
  }
  LOBYTE(v12) = v17;
  PspUnlockQuotaExpansion(v7, v12);
  *a5 = v11;
  return 0;
}
