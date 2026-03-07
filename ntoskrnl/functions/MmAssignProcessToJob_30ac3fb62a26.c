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
