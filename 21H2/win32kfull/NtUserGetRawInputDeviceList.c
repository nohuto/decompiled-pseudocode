/*
 * XREFs of NtUserGetRawInputDeviceList @ 0x1C00043A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceList(volatile void *Address, unsigned int *a2, int a3)
{
  unsigned int v6; // r15d
  unsigned int v7; // edi
  CInpPushLock *Lock; // rbx
  struct DEVICEINFO *i; // rax
  unsigned int v10; // r14d
  unsigned int *v11; // rax
  struct DEVICEINFO *j; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v16; // [rsp+B0h] [rbp+18h] BYREF
  int v17; // [rsp+B8h] [rbp+20h]

  v6 = 0;
  v7 = -1;
  v17 = -1;
  EnterSharedCrit();
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v16);
  if ( a3 == 16 )
  {
    Lock = CBaseInput::TmpGetLock(gpHidInput);
    CInpPushLock::LockShared(Lock);
    for ( i = CBaseInput::TmpGetDeviceList(gpHidInput); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      ++v6;
    if ( Address )
    {
      v10 = 0;
      v11 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v11 = (unsigned int *)MmUserProbeAddress;
      if ( *v11 < v6 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (unsigned int *)MmUserProbeAddress;
        *a2 = v6;
        UserSetLastError(122LL);
      }
      else
      {
        ProbeForWrite(Address, 16LL * v6, 8u);
        for ( j = CBaseInput::TmpGetDeviceList(gpHidInput); j; j = (struct DEVICEINFO *)*((_QWORD *)j + 7) )
        {
          v13 = 2LL * v10;
          *((_QWORD *)Address + v13) = *(_QWORD *)j;
          *((_DWORD *)Address + 2 * v13 + 2) = *((unsigned __int8 *)j + 48);
          if ( ++v10 >= v6 )
            break;
        }
        v7 = v10;
      }
    }
    else
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (unsigned int *)MmUserProbeAddress;
      *a2 = v6;
      v7 = 0;
    }
    CInpPushLock::UnLockShared(Lock);
  }
  else
  {
    UserSetLastError(87LL);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v16);
  UserSessionSwitchLeaveCrit(v14);
  return v7;
}
