/*
 * XREFs of NtUserSetPrecisionTouchPadConfiguration @ 0x1C014BA50
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     EtwTraceUIPISystemError @ 0x1C0074670 (EtwTraceUIPISystemError.c)
 *     CheckAccessEx @ 0x1C0091E70 (CheckAccessEx.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastStatus @ 0x1C00CDAF4 (UserSetLastStatus.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0134DF4 (_SetPrecisionTouchPadConfiguration.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01E003C (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 */

__int64 __fastcall NtUserSetPrecisionTouchPadConfiguration(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rax
  char v12; // al
  __int64 *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // ebx
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _BYTE v28[4]; // [rsp+20h] [rbp-58h] BYREF
  int v29; // [rsp+24h] [rbp-54h]
  int v30; // [rsp+28h] [rbp-50h]
  unsigned int v31[6]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v32; // [rsp+50h] [rbp-28h] BYREF
  __int64 v33; // [rsp+60h] [rbp-18h]

  v4 = a1;
  v32 = 0LL;
  v33 = 0LL;
  v31[0] = 0x2000;
  v31[1] = -1;
  LOBYTE(a1) = 1;
  v5 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1, a2, a3, a4);
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
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v28, v6, v8, v9);
  if ( CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 53) + 888LL), v31, 0LL) )
  {
    if ( ((PsGetCurrentProcessWow64Process(v15, v14, v16) == 0 ? 3 : 0) & (unsigned __int8)v4) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = v4 + 4;
    if ( v4 + 4 > MmUserProbeAddress || v19 < v4 )
      *(_BYTE *)MmUserProbeAddress = 0;
    if ( *(_DWORD *)v4 )
    {
      v17 = 0;
      v30 = 0;
      UserSetLastStatus(-1073741822);
    }
    else
    {
      if ( ((PsGetCurrentProcessWow64Process(MmUserProbeAddress, v19, v18) == 0 ? 3 : 0) & (unsigned __int8)v4) != 0 )
        ExRaiseDatatypeMisalignment();
      v22 = v4 + 24;
      if ( v4 + 24 > MmUserProbeAddress || v22 < v4 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v32 = *(_OWORD *)v4;
      v33 = *(_QWORD *)(v4 + 16);
      LODWORD(v32) = 0;
      v17 = SetPrecisionTouchPadConfiguration((__int64)&v32, v22, v20, v21);
      v30 = v17;
      if ( v17 )
        PTPTelemetry::PTPConfigUpdateEx(0LL);
    }
  }
  else
  {
    EtwTraceUIPISystemError(*((struct tagPROCESSINFO **)gptiCurrent + 53), 0LL);
    v17 = 0;
    UserSetLastError(5);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v28);
  UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
  return v17;
}
