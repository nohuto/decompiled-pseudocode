__int64 __fastcall NtUserGetRawInputDeviceList(volatile void *Address, unsigned int *a2, __int64 a3)
{
  int v3; // ebx
  unsigned int *v4; // rsi
  unsigned int v6; // r15d
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  CInpPushLock *Lock; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  struct DEVICEINFO *i; // rax
  unsigned int v14; // r14d
  unsigned int *v15; // rax
  __int64 v16; // rcx
  struct DEVICEINFO *j; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  CBaseInput *v21; // [rsp+60h] [rbp-38h]
  char v22; // [rsp+B0h] [rbp+18h] BYREF
  int v23; // [rsp+B8h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v6 = 0;
  v7 = -1;
  v23 = -1;
  EnterSharedCrit(Address, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v22);
  if ( v3 == 16 )
  {
    v9 = SGDGetUserSessionState(v8);
    Lock = CBaseInput::TmpGetLock(*(CBaseInput **)(v9 + 16840));
    CInpPushLock::LockShared(Lock);
    v12 = SGDGetUserSessionState(v11);
    for ( i = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v12 + 16840)); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      ++v6;
    if ( Address )
    {
      v14 = 0;
      v15 = v4;
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v15 = (unsigned int *)MmUserProbeAddress;
      if ( *v15 >= v6 )
      {
        ProbeForWrite(Address, 16LL * v6, 8u);
        v21 = *(CBaseInput **)(SGDGetUserSessionState(v16) + 16840);
        for ( j = CBaseInput::TmpGetDeviceList(v21); j; j = (struct DEVICEINFO *)*((_QWORD *)j + 7) )
        {
          v18 = 2LL * v14;
          *((_QWORD *)Address + v18) = *(_QWORD *)j;
          *((_DWORD *)Address + 2 * v18 + 2) = *((unsigned __int8 *)j + 48);
          if ( ++v14 >= v6 )
            break;
        }
        v7 = v14;
      }
      else
      {
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (unsigned int *)MmUserProbeAddress;
        *v4 = v6;
        UserSetLastError(122);
      }
    }
    else
    {
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (unsigned int *)MmUserProbeAddress;
      *v4 = v6;
      v7 = 0;
    }
    CInpPushLock::UnLockShared(Lock);
  }
  else
  {
    UserSetLastError(87);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v22);
  UserSessionSwitchLeaveCrit(v19);
  return v7;
}
