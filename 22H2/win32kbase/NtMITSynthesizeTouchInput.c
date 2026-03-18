/*
 * XREFs of NtMITSynthesizeTouchInput @ 0x1C01424C0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0052D0C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0052D50 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0057EC8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 *     SynthesizeMitTouchInput @ 0x1C01EFCB4 (SynthesizeMitTouchInput.c)
 */

_BOOL8 __fastcall NtMITSynthesizeTouchInput(char *Src)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rax
  char v10; // al
  __int64 *v11; // rbx
  int v12; // ecx
  BOOL v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // al
  __int64 *v20[2]; // [rsp+38h] [rbp-B90h] BYREF
  _BYTE Srca[1464]; // [rsp+48h] [rbp-B80h] BYREF
  _BYTE v22[1456]; // [rsp+600h] [rbp-5C8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v20, "MITSynthesizeTouchInput", 0LL);
  LOBYTE(v2) = 1;
  v6 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(v2, v3, v4, v5);
  gptiCurrent = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process )
    {
      v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v9 )
      {
        if ( (*(_DWORD *)(v9 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v10 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v10 = 0;
          }
          if ( v10 )
          {
            while ( 1 )
            {
              v11 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v11[2] = 0LL;
              if ( !*(_DWORD *)(*v11 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*v11);
            }
          }
        }
      }
    }
  }
  memset(v22, 0, sizeof(v22));
  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    v12 = 5;
LABEL_16:
    v13 = 0;
    UserSetLastError(v12);
    goto LABEL_22;
  }
  if ( Src + 1456 < Src || (unsigned __int64)(Src + 1456) > MmUserProbeAddress )
    Src = (char *)MmUserProbeAddress;
  memmove(Srca, Src, 0x5B0uLL);
  memmove(v22, Srca, 0x5B0uLL);
  v18 = SynthesizeMitTouchInput(v22);
  v13 = v18 != 0;
  if ( !v18 )
  {
    v12 = 5023;
    goto LABEL_16;
  }
LABEL_22:
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v20);
  return v13;
}
