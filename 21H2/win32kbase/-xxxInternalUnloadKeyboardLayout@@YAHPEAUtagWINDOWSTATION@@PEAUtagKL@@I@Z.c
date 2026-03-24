/*
 * XREFs of ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0007C2C
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0008658 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxUnloadKeyboardLayout @ 0x1C01AB1C0 (xxxUnloadKeyboardLayout.c)
 * Callees:
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C0008348 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0008B08 (ApiSetEditionNotifyShellLanguageHook.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0009480 (xxxInternalActivateKeyboardLayout.c)
 *     HKLtoPKL @ 0x1C000A070 (HKLtoPKL.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C000A864 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     ThreadUnlock1 @ 0x1C002E4A0 (ThreadUnlock1.c)
 *     HMAssignmentUnlock @ 0x1C0030630 (HMAssignmentUnlock.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0031C90 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxInternalUnloadKeyboardLayout(struct tagWINDOWSTATION *a1, struct tagKL *a2, int a3)
{
  struct tagTHREADINFO *v3; // rdi
  struct tagKL *v7; // rax
  struct tagKL *v8; // rdx
  __int64 v10; // rbp
  _BYTE v11[16]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v12[16]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v13[16]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v14[3]; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v15[3]; // [rsp+78h] [rbp-30h] BYREF

  v3 = gptiCurrent;
  v14[2] = 0LL;
  if ( a2 == (struct tagKL *)gspklBaseLayout && a3 >= 0 )
    return 0LL;
  v14[0] = *((_QWORD *)gptiCurrent + 52);
  *((_QWORD *)gptiCurrent + 52) = v14;
  v14[1] = a2;
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v11);
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  if ( a2 == (struct tagKL *)gspklGlobalActive )
    HMAssignmentUnlock(&gspklGlobalActive);
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v12);
  HMMarkObjectDestroyWorker(a2);
  *((_DWORD *)a2 + 8) |= 0x20000000u;
  if ( a3 >= 0 && *((struct tagKL **)v3 + 55) == a2 )
  {
    v10 = HKLtoPKL(v3, 1LL);
    if ( v10 )
    {
      v15[0] = *((_QWORD *)v3 + 52);
      *((_QWORD *)v3 + 52) = v15;
      v15[2] = 0LL;
      v15[1] = v10;
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v13);
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      xxxInternalActivateKeyboardLayout(a1, v10, (unsigned int)a3, 0LL);
      ThreadUnlock1();
    }
  }
  if ( a1 )
    v7 = (struct tagKL *)*((_QWORD *)a1 + 9);
  else
    v7 = (struct tagKL *)gspklWinstaLessSessionLayouts;
  if ( v7 == a2 )
  {
    v8 = (struct tagKL *)*((_QWORD *)a2 + 2);
    if ( a2 != v8 && !LockKbdLayoutListHead(a1, v8) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3047LL);
  }
  ThreadUnlock1();
  if ( qword_1C0257128 )
    qword_1C0257128(0x80000000LL, 0LL, 0LL, 0LL, 0);
  ApiSetEditionNotifyShellLanguageHook(v3, 0LL, 0LL);
  return 1LL;
}
