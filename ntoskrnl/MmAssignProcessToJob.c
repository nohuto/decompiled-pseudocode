/*
 * XREFs of MmAssignProcessToJob @ 0x1407000C4
 * Callers:
 *     PspAssignProcessToJob @ 0x1406FFA20 (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x140797010 (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14034CCF4 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14034CD5C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406DBAB0 (PspChangeJobMemoryUsageByProcess.c)
 *     MiUnlockVadRange @ 0x1407D73E8 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1407D74B8 (MiLockVadRange.c)
 */

__int64 __fastcall MmAssignProcessToJob(__int64 a1, __int64 a2, char a3)
{
  int v3; // esi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // rbp
  __int64 v9; // rdx
  unsigned __int8 v10; // di
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-68h] BYREF

  v3 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)a1 )
  {
    v3 = 1;
    KeStackAttachProcess((PRKPROCESS)a1, &ApcState);
  }
  v8 = MiLockVadRange(a1, -1LL, -1LL, 0LL);
  if ( v8 || (*(_DWORD *)(a1 + 2172) & 1) != 0 )
  {
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1);
    v9 = *(_QWORD *)(a1 + 1608);
    *(_QWORD *)(a1 + 1256) = *(_QWORD *)(a1 + 1296);
    v10 = PspChangeJobMemoryUsageByProcess(a3 | 3, v9, a1, a2);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1120), 0x10u);
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1);
  }
  else
  {
    v10 = 0;
  }
  MiUnlockVadRange(a1, -1LL, v8, 0LL);
  if ( v3 )
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  return v10;
}
