/*
 * XREFs of PspExpandLimit @ 0x1405E0320
 * Callers:
 *     PspInitializeQuotaBlock @ 0x14085DE38 (PspInitializeQuotaBlock.c)
 * Callees:
 *     PspUnlockQuotaExpansion @ 0x140243794 (PspUnlockQuotaExpansion.c)
 *     PspLockQuotaExpansion @ 0x14024393C (PspLockQuotaExpansion.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

char __fastcall PspExpandLimit(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int *v7; // rbp
  KIRQL v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  v7 = &PspQuotaExpansionDescriptors[14 * a1];
  PspLockQuotaExpansion((__int64)v7, &v9);
  LOBYTE(a4) = (*((__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))v7 + 3))(a1, 0LL, a3, a4);
  PspUnlockQuotaExpansion((__int64)v7, v9);
  return a4;
}
