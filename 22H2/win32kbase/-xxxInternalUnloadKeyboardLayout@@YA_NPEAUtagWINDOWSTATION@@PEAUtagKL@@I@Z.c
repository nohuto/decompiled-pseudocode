/*
 * XREFs of ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0064AFC
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00673D0 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C014D840 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C0045EE0 (ThreadUnlock1.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     HMAssignmentUnlockWorker @ 0x1C0056D3C (HMAssignmentUnlockWorker.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C0064D08 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C0064D44 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0067D6C (ApiSetEditionNotifyShellLanguageHook.c)
 *     HKLtoPKL @ 0x1C006C150 (HKLtoPKL.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C006C200 (xxxInternalActivateKeyboardLayout.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C00C4464 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01DB464 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

char __fastcall xxxInternalUnloadKeyboardLayout(struct tagWINDOWSTATION *a1, struct tagKL *a2, __int64 a3, __int64 a4)
{
  struct tagTHREADINFO *v4; // rdi
  int v5; // r14d
  __int64 v8; // rdx
  const struct tagDomLock *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  struct tagKL *v13; // rax
  struct tagKL *v14; // rdx
  __int64 v16; // rax
  _QWORD v17[3]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v18[3]; // [rsp+48h] [rbp-18h] BYREF
  int v19; // [rsp+98h] [rbp+38h] BYREF
  int v20; // [rsp+A8h] [rbp+48h] BYREF

  v4 = gptiCurrent;
  v5 = a3;
  v17[2] = 0LL;
  if ( a2 == (struct tagKL *)gspklBaseLayout && (int)a3 >= 0 )
    return 0;
  v17[0] = *((_QWORD *)gptiCurrent + 52);
  *((_QWORD *)gptiCurrent + 52) = v17;
  v17[1] = a2;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 0x4000LL) )
  {
    v19 = *((_DWORD *)a2 + 28);
    v20 = *((_DWORD *)a2 + 10);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C0289810,
      (unsigned int)&unk_1C025DF89,
      a3,
      a4,
      (__int64)&v20,
      (__int64)&v19);
  }
  if ( a2 == *(struct tagKL **)(SGDGetUserSessionState(a1, a2, a3, a4) + 13912) )
  {
    v12 = SGDGetUserSessionState(v9, v8, v10, v11);
    HMAssignmentUnlockWorker((__int64 *)(v12 + 13912));
  }
  LockRefactorStagingAssertOwned(v9);
  HMMarkObjectDestroyWorker(a2);
  *((_DWORD *)a2 + 8) |= 0x20000000u;
  if ( v5 >= 0 && *((struct tagKL **)v4 + 55) == a2 )
  {
    v16 = HKLtoPKL(v4, 1LL);
    if ( v16 )
    {
      v18[0] = *((_QWORD *)v4 + 52);
      *((_QWORD *)v4 + 52) = v18;
      v18[2] = 0LL;
      v18[1] = v16;
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
      xxxInternalActivateKeyboardLayout(a1, v16, (unsigned int)v5, 0LL);
      ThreadUnlock1();
    }
  }
  if ( a1 )
    v13 = (struct tagKL *)*((_QWORD *)a1 + 9);
  else
    v13 = (struct tagKL *)gspklWinstaLessSessionLayouts;
  if ( v13 == a2 )
  {
    v14 = (struct tagKL *)*((_QWORD *)a2 + 2);
    if ( a2 != v14 && !LockKbdLayoutListHead(a1, v14) )
    {
      v19 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3158LL);
    }
  }
  ThreadUnlock1();
  if ( qword_1C0295598 )
    qword_1C0295598(0x80000000LL, 0LL, 0LL, 0LL, 0);
  ApiSetEditionNotifyShellLanguageHook(v4, 0LL, 0LL);
  return 1;
}
