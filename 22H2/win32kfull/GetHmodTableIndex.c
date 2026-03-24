/*
 * XREFs of GetHmodTableIndex @ 0x1C00203EC
 * Callers:
 *     zzzSetWindowsHookEx @ 0x1C001FC48 (zzzSetWindowsHookEx.c)
 *     _SetWinEventHook @ 0x1C00225C4 (_SetWinEventHook.c)
 *     _RegisterUserApiHook @ 0x1C011CC58 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C011CF64 (_RegisterDManipHook.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00208C8 (--0-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall GetHmodTableIndex(ULONG64 a1)
{
  int v2; // ecx
  ULONG64 v3; // rbx
  ULONG64 v4; // rdx
  _BYTE **v5; // rax
  unsigned __int16 v6; // ax
  int v8; // ebx
  unsigned __int16 near **v9; // rcx
  unsigned __int16 near **v10; // rcx
  int v11; // [rsp+58h] [rbp+10h]
  tagDomLock *v12; // [rsp+60h] [rbp+18h] BYREF

  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v12);
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v2 = *(_DWORD *)a1;
  v11 = *(_DWORD *)a1;
  v3 = *(_QWORD *)(a1 + 8);
  if ( (v3 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v4 = (unsigned __int16)v2 + v3 + 2;
  v5 = (_BYTE **)MmUserProbeAddress;
  if ( v4 < MmUserProbeAddress && (unsigned __int16)v2 <= HIWORD(v11) )
  {
    if ( (v2 & 1) != 0 )
    {
LABEL_10:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 68LL);
      v5 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_11;
    }
    if ( v4 > v3 )
      goto LABEL_12;
  }
  if ( (v2 & 1) != 0 )
    goto LABEL_10;
LABEL_11:
  **v5 = 0;
LABEL_12:
  v6 = UserAddAtomToAtomTableEx(UserLibmgmtAtomTableHandle, v3, 0LL, 2LL);
  if ( !v6 )
  {
LABEL_13:
    tagDomLock::UnLockExclusive(v12);
    return 0xFFFFFFFFLL;
  }
  v8 = 0;
  if ( catomSysTableEntries > 0 )
  {
    v9 = &aatomSysLoaded;
    do
    {
      if ( *(_WORD *)v9 == v6 )
        break;
      ++v8;
      v9 = (unsigned __int16 near **)((char *)v9 + 2);
    }
    while ( v8 < catomSysTableEntries );
  }
  if ( v8 == catomSysTableEntries )
  {
    v8 = 0;
    if ( catomSysTableEntries > 0 )
    {
      v10 = &aatomSysLoaded;
      do
      {
        if ( !*(_WORD *)v10 )
          break;
        ++v8;
        v10 = (unsigned __int16 near **)((char *)v10 + 2);
      }
      while ( v8 < catomSysTableEntries );
    }
    if ( v8 == catomSysTableEntries )
    {
      if ( v8 == 32 )
      {
        UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v6, &aatomSysLoaded);
        UserSetLastError(8LL);
        goto LABEL_13;
      }
      ++catomSysTableEntries;
    }
    *((_WORD *)&aatomSysLoaded + v8) = v6;
    *((_DWORD *)&acatomSysUse + v8) = 0;
    *((_DWORD *)&acatomSysDepends + v8) = 0;
  }
  else
  {
    UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v6, &aatomSysLoaded);
  }
  tagDomLock::UnLockExclusive(v12);
  return (unsigned int)v8;
}
