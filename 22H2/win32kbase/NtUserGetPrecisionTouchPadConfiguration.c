/*
 * XREFs of NtUserGetPrecisionTouchPadConfiguration @ 0x1C0145720
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C00958C0 (_GetPrecisionTouchPadConfiguration.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastStatus @ 0x1C00CDAF4 (UserSetLastStatus.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserGetPrecisionTouchPadConfiguration(__int64 Address, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rax
  char v12; // al
  __int64 *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  int PrecisionTouchPadConfiguration; // ebx
  __int64 v20; // r8
  __int64 CurrentProcessWow64Process; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int128 v27; // [rsp+40h] [rbp-28h] BYREF
  __int64 v28; // [rsp+50h] [rbp-18h]
  int v29; // [rsp+78h] [rbp+10h] BYREF

  v4 = (_QWORD *)Address;
  v27 = 0LL;
  v28 = 0LL;
  LOBYTE(Address) = 1;
  v5 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(Address, a2, a3, a4);
  gptiCurrent = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process )
    {
      v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v11 = v6 & CurrentProcessWin32Process;
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v12 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v12 = 0;
          }
          if ( v12 )
          {
            while ( 1 )
            {
              v13 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v13[2] = 0LL;
              if ( !*(_DWORD *)(*v13 + 8) )
              {
                v29 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              }
              HMUnlockObject(*v13);
            }
          }
        }
      }
    }
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v29, v6, v8, v9);
  if ( ((PsGetCurrentProcessWow64Process(v15, v14, v16) == 0 ? 3 : 0) & (unsigned __int8)v4) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)v4 + 4 > MmUserProbeAddress || (_QWORD *)((char *)v4 + 4) < v4 )
    *(_BYTE *)MmUserProbeAddress = 0;
  LODWORD(v27) = *(_DWORD *)v4;
  if ( (_DWORD)v27 )
  {
    PrecisionTouchPadConfiguration = 0;
    UserSetLastStatus(-1073741822);
  }
  else
  {
    PrecisionTouchPadConfiguration = GetPrecisionTouchPadConfiguration((__int64)&v27);
    if ( PrecisionTouchPadConfiguration )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v18, v17, v20);
      ProbeForWrite(v4, 0x18uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      *(_OWORD *)v4 = v27;
      v4[2] = v28;
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v29);
  UserSessionSwitchLeaveCrit(v23, v22, v24, v25);
  return PrecisionTouchPadConfiguration;
}
