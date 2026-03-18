/*
 * XREFs of GetHmodTableIndex @ 0x1C0025248
 * Callers:
 *     zzzSetWindowsHookEx @ 0x1C00249B8 (zzzSetWindowsHookEx.c)
 *     _RegisterDManipHook @ 0x1C00E5110 (_RegisterDManipHook.c)
 *     _RegisterUserApiHook @ 0x1C00E52F4 (_RegisterUserApiHook.c)
 *     _SetWinEventHook @ 0x1C00E5D30 (_SetWinEventHook.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C0159E2C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_CLIENTLIB@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C015D164 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_CLIENTLIB@@@-$DomainShared@$$V@@QEAA@XZ.c)
 */

__int64 __fastcall GetHmodTableIndex(__int64 a1)
{
  unsigned __int16 v2; // ax
  int v3; // ebx
  unsigned __int16 near **v4; // rcx
  unsigned __int16 near **v6; // rcx
  _BYTE v7[48]; // [rsp+30h] [rbp-48h] BYREF

  DomainShared<>::DomainExclusive<DLT_CLIENTLIB>::ObjectLock<>::ObjectLock<>(v7);
  v2 = UserAddAtomToAtomTableEx(UserLibmgmtAtomTableHandle, a1, 0LL, 2LL);
  if ( v2 )
  {
    v3 = 0;
    if ( catomSysTableEntries > 0 )
    {
      v4 = &aatomSysLoaded;
      do
      {
        if ( *(_WORD *)v4 == v2 )
          break;
        ++v3;
        v4 = (unsigned __int16 near **)((char *)v4 + 2);
      }
      while ( v3 < catomSysTableEntries );
    }
    if ( v3 != catomSysTableEntries )
    {
      UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v2, &aatomSysLoaded, 0LL, v2);
LABEL_8:
      DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(v7);
      return (unsigned int)v3;
    }
    v3 = 0;
    if ( catomSysTableEntries > 0 )
    {
      v6 = &aatomSysLoaded;
      do
      {
        if ( !*(_WORD *)v6 )
          break;
        ++v3;
        v6 = (unsigned __int16 near **)((char *)v6 + 2);
      }
      while ( v3 < catomSysTableEntries );
    }
    if ( v3 != catomSysTableEntries )
    {
LABEL_14:
      *((_WORD *)&aatomSysLoaded + v3) = v2;
      *((_DWORD *)&acatomSysUse + v3) = 0;
      *((_DWORD *)&acatomSysDepends + v3) = 0;
      goto LABEL_8;
    }
    if ( v3 != 32 )
    {
      ++catomSysTableEntries;
      goto LABEL_14;
    }
    UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v2, &aatomSysLoaded, 0LL, v2);
    UserSetLastError(8LL);
  }
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(v7);
  return 0xFFFFFFFFLL;
}
