/*
 * XREFs of ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0086700
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0085310 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C0179DB0 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C003B460 (ThreadUnlock1.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     HMAssignmentUnlockWorker @ 0x1C007294C (HMAssignmentUnlockWorker.c)
 *     HKLtoPKL @ 0x1C0081F10 (HKLtoPKL.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0082990 (xxxInternalActivateKeyboardLayout.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0085BA4 (ApiSetEditionNotifyShellLanguageHook.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C0086908 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C0086944 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C00D3A04 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C020A244 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
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
  struct tagKL *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct tagKL *v17; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD v24[3]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v25[3]; // [rsp+48h] [rbp-18h] BYREF
  int v26; // [rsp+98h] [rbp+38h] BYREF
  int v27; // [rsp+A8h] [rbp+48h] BYREF

  v4 = gptiCurrent;
  v5 = a3;
  v24[2] = 0LL;
  if ( a2 == (struct tagKL *)gspklBaseLayout && (int)a3 >= 0 )
    return 0;
  v24[0] = *((_QWORD *)gptiCurrent + 52);
  *((_QWORD *)gptiCurrent + 52) = v24;
  v24[1] = a2;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 0x4000LL) )
  {
    v26 = *((_DWORD *)a2 + 28);
    v27 = *((_DWORD *)a2 + 10);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C02CA7E0,
      (unsigned int)&unk_1C029C74F,
      a3,
      a4,
      (__int64)&v27,
      (__int64)&v26);
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
    v19 = HKLtoPKL((__int64)v4, 1LL);
    if ( v19 )
    {
      v25[0] = *((_QWORD *)v4 + 52);
      *((_QWORD *)v4 + 52) = v25;
      v25[2] = 0LL;
      v25[1] = v19;
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
      xxxInternalActivateKeyboardLayout((__int64)a1, v19, (unsigned int)v5, 0LL);
      ThreadUnlock1(v21, v20, v22, v23);
    }
  }
  if ( a1 )
    v17 = (struct tagKL *)*((_QWORD *)a1 + 9);
  else
    v17 = (struct tagKL *)gspklWinstaLessSessionLayouts;
  if ( v17 == a2 )
  {
    v13 = (struct tagKL *)*((_QWORD *)a2 + 2);
    if ( a2 != v13 && !LockKbdLayoutListHead(a1, v13) )
    {
      v26 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3158LL);
    }
  }
  ThreadUnlock1(v14, (__int64)v13, v15, v16);
  if ( qword_1C02D6710 )
    qword_1C02D6710(0x80000000LL, 0LL, 0LL, 0LL, 0);
  ApiSetEditionNotifyShellLanguageHook((__int64)v4, 0LL, 0LL);
  return 1;
}
