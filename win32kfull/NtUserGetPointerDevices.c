/*
 * XREFs of NtUserGetPointerDevices @ 0x1C00E3A50
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C0146180 (_GetPointerDeviceInfoProperties.c)
 */

__int64 __fastcall NtUserGetPointerDevices(unsigned int *a1, char *a2, __int64 a3)
{
  unsigned int *v4; // rsi
  int v5; // edi
  unsigned int v6; // r15d
  __int64 v7; // rcx
  __int64 v8; // rax
  CInpPushLock *Lock; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct DEVICEINFO *i; // r14
  __int64 v13; // rcx
  unsigned int *v15; // rax
  unsigned int v16; // eax
  int v17; // r12d
  __int64 v18; // rcx
  struct DEVICEINFO *j; // r14
  CBaseInput *v20; // [rsp+60h] [rbp-48h]
  char v21; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v22; // [rsp+C0h] [rbp+18h]
  int v23; // [rsp+C8h] [rbp+20h]

  v4 = a1;
  v5 = 0;
  v6 = 0;
  v23 = 0;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v21);
  if ( v4 )
  {
    v8 = SGDGetUserSessionState(v7);
    Lock = CBaseInput::TmpGetLock(*(CBaseInput **)(v8 + 16840));
    CInpPushLock::LockShared(Lock);
    v11 = SGDGetUserSessionState(v10);
    for ( i = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v11 + 16840)); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( (*((_DWORD *)i + 50) & 0x80u) != 0 )
      {
        if ( (unsigned int)IsPointerDeviceAccessible(*((_QWORD *)i + 59)) )
          ++v6;
      }
    }
    if ( a2 )
    {
      v15 = v4;
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v15 = (unsigned int *)MmUserProbeAddress;
      v16 = *v15;
      v22 = v16;
      if ( v16 < v6 )
      {
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (unsigned int *)MmUserProbeAddress;
        *v4 = v6;
        UserSetLastError(122);
      }
      else if ( v16 && v6 )
      {
        ProbeForWrite(a2, 1080LL * v6, 8u);
        v17 = v6 - 1;
        v20 = *(CBaseInput **)(SGDGetUserSessionState(v18) + 16840);
        for ( j = CBaseInput::TmpGetDeviceList(v20); j && v17 >= 0; j = (struct DEVICEINFO *)*((_QWORD *)j + 7) )
        {
          if ( (*((_DWORD *)j + 50) & 0x80u) != 0 && (unsigned int)IsPointerDeviceAccessible(*((_QWORD *)j + 59)) )
            GetPointerDeviceInfoProperties(&a2[1080 * v17--], *((_QWORD *)j + 59));
        }
        v5 = 1;
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (unsigned int *)MmUserProbeAddress;
        *v4 = v6;
      }
      else
      {
        UserSetLastError(15299);
      }
    }
    else
    {
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (unsigned int *)MmUserProbeAddress;
      *v4 = v6;
      v5 = 1;
    }
    CInpPushLock::UnLockShared(Lock);
  }
  else
  {
    UserSetLastError(87);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v21);
  UserSessionSwitchLeaveCrit(v13);
  return v5;
}
