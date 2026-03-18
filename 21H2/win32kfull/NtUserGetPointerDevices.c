/*
 * XREFs of NtUserGetPointerDevices @ 0x1C00FDEB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C01E9950 (_GetPointerDeviceInfoProperties.c)
 */

__int64 __fastcall NtUserGetPointerDevices(unsigned int *a1, char *a2, __int64 a3)
{
  unsigned int *v4; // rsi
  int v5; // edi
  unsigned int v6; // r15d
  __int64 v7; // rdx
  CInpPushLock *Lock; // rbx
  __int64 v9; // rdx
  struct DEVICEINFO *i; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int *v15; // rax
  unsigned int v16; // eax
  int v17; // r12d
  struct DEVICEINFO *j; // r14
  char v19; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+C0h] [rbp+18h]
  int v21; // [rsp+C8h] [rbp+20h]

  v4 = a1;
  v5 = 0;
  v6 = 0;
  v21 = 0;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v19);
  if ( v4 )
  {
    Lock = CBaseInput::TmpGetLock(gpHidInput);
    CInpPushLock::LockShared(Lock);
    for ( i = CBaseInput::TmpGetDeviceList(gpHidInput); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
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
      v20 = v16;
      if ( v16 < v6 )
      {
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (unsigned int *)MmUserProbeAddress;
        *v4 = v6;
        UserSetLastError(122LL, v9);
      }
      else if ( v16 && v6 )
      {
        ProbeForWrite(a2, 1080LL * v6, 8u);
        v17 = v6 - 1;
        for ( j = CBaseInput::TmpGetDeviceList(gpHidInput); j && v17 >= 0; j = (struct DEVICEINFO *)*((_QWORD *)j + 7) )
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
        UserSetLastError(15299LL, v9);
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
    UserSetLastError(87LL, v7);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v19, v11, v12);
  UserSessionSwitchLeaveCrit(v13);
  return v5;
}
