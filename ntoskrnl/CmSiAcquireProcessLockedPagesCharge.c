/*
 * XREFs of CmSiAcquireProcessLockedPagesCharge @ 0x1402B2CD4
 * Callers:
 *     HvpViewMapAcquireChargesAndLockViewPages @ 0x1407310B8 (HvpViewMapAcquireChargesAndLockViewPages.c)
 * Callees:
 *     MmAdjustWorkingSetSizeEx @ 0x14020C61C (MmAdjustWorkingSetSizeEx.c)
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmSiRWLockReleaseExclusive @ 0x1406A3848 (CmSiRWLockReleaseExclusive.c)
 *     CmSiRWLockAcquireExclusive @ 0x1406A419C (CmSiRWLockAcquireExclusive.c)
 */

__int64 __fastcall CmSiAcquireProcessLockedPagesCharge(_QWORD *a1, __int64 a2)
{
  struct _KPROCESS *v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  int v7; // edi
  _BYTE v9[8]; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-50h] BYREF

  v4 = (struct _KPROCESS *)a1[1];
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v4, &ApcState);
  CmSiRWLockAcquireExclusive(a1 + 2);
  v5 = a1[5];
  v6 = a2 + a1[4];
  v9[0] = 0;
  v7 = MmAdjustWorkingSetSizeEx(v6, v5, 0LL, 1, 0, v9);
  if ( v7 >= 0 )
  {
    a1[3] += a2;
    v7 = 0;
    a1[4] = v6;
  }
  CmSiRWLockReleaseExclusive((ULONG_PTR)(a1 + 2));
  KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  return (unsigned int)v7;
}
