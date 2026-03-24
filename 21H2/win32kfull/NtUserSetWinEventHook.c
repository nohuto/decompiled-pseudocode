/*
 * XREFs of NtUserSetWinEventHook @ 0x1C0022540
 * Callers:
 *     <none>
 * Callees:
 *     _SetWinEventHook @ 0x1C0022664 (_SetWinEventHook.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00C0EFC (--0-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00C10D4 (--0-$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C00C1128 (--1-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserSetWinEventHook(
        unsigned int a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  __int64 *v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rcx
  tagDomLock *v16; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v17[24]; // [rsp+48h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a8 & 0xFFFFFFF0) != 0 )
  {
    UserSetLastError(1004LL);
    v13 = 0LL;
  }
  else
  {
    CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(
      v17,
      gptiCurrent + 392LL);
    CLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v16);
    v12 = (__int64 *)SetWinEventHook(a1, a2, a3, a4, a5, (int)a6, a7, a8);
    tagDomLock::UnLockExclusive(v16);
    CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::~CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(v17);
    v13 = 0LL;
    if ( v12 )
      v13 = *v12;
    EtwTraceAuditApiSetWinEventHook(a1, a2, a6, a7, a8, v13);
  }
  UserSessionSwitchLeaveCrit(v14);
  return v13;
}
