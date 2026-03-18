/*
 * XREFs of ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C004E28C
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C004EC08 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxUnloadKeyboardLayout @ 0x1C01E4660 (xxxUnloadKeyboardLayout.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C002DC3C (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ThreadUnlock1 @ 0x1C0030C00 (ThreadUnlock1.c)
 *     HMAssignmentUnlockWorker @ 0x1C0038F7C (HMAssignmentUnlockWorker.c)
 *     HKLtoPKL @ 0x1C003FF30 (HKLtoPKL.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C004E6D0 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C004F120 (ApiSetEditionNotifyShellLanguageHook.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C004FB30 (xxxInternalActivateKeyboardLayout.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C0050938 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxInternalUnloadKeyboardLayout(struct tagKL **a1, struct tagKL *a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  struct tagTHREADINFO *v6; // rdi
  struct tagKL *v8; // rax
  struct tagKL *v9; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD v16[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v17[3]; // [rsp+48h] [rbp-20h] BYREF

  v16[2] = 0LL;
  v4 = a3;
  v6 = gptiCurrent;
  if ( a2 == (struct tagKL *)gspklBaseLayout && (int)a3 >= 0 )
    return 0LL;
  v16[0] = *((_QWORD *)gptiCurrent + 52);
  *((_QWORD *)gptiCurrent + 52) = v16;
  v16[1] = a2;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  if ( a2 == (struct tagKL *)gspklGlobalActive )
    HMAssignmentUnlockWorker(&gspklGlobalActive, (__int64)a2, a3, a4);
  LockRefactorStagingAssertOwned((const struct tagDomLock *)a1);
  HMMarkObjectDestroyWorker(a2);
  *((_DWORD *)a2 + 8) |= 0x20000000u;
  if ( v4 >= 0 && *((struct tagKL **)v6 + 55) == a2 )
  {
    v11 = HKLtoPKL((__int64)v6, 1LL);
    if ( v11 )
    {
      v12 = *((_QWORD *)v6 + 52);
      v17[2] = 0LL;
      v17[0] = v12;
      *((_QWORD *)v6 + 52) = v17;
      v17[1] = v11;
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      xxxInternalActivateKeyboardLayout(a1, v11, (unsigned int)v4, 0LL);
      ThreadUnlock1();
    }
  }
  if ( a1 )
    v8 = a1[9];
  else
    v8 = (struct tagKL *)gspklWinstaLessSessionLayouts;
  if ( v8 == a2 )
  {
    v9 = (struct tagKL *)*((_QWORD *)a2 + 2);
    if ( a2 != v9 && !LockKbdLayoutListHead((struct tagWINDOWSTATION *)a1, v9) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  }
  ThreadUnlock1();
  if ( qword_1C029BE68 )
    qword_1C029BE68(0x80000000LL, 0LL, 0LL, 0LL, 0);
  ApiSetEditionNotifyShellLanguageHook(v6, 0LL, 0LL);
  return 1LL;
}
