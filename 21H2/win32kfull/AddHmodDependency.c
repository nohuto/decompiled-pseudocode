/*
 * XREFs of AddHmodDependency @ 0x1C0020448
 * Callers:
 *     zzzSetWindowsHookEx @ 0x1C001FCE8 (zzzSetWindowsHookEx.c)
 *     _SetWinEventHook @ 0x1C0022664 (_SetWinEventHook.c)
 *     _RegisterUserApiHook @ 0x1C011CFD8 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C011D2E4 (_RegisterDManipHook.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C0020968 (--0-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 */

void __fastcall AddHmodDependency(int a1)
{
  __int64 v1; // rbx
  tagDomLock *v2; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v2);
  if ( (int)v1 < catomSysTableEntries )
    ++*((_DWORD *)&acatomSysDepends + v1);
  tagDomLock::UnLockExclusive(v2);
}
