/*
 * XREFs of NtMITSynthesizeTouchInput @ 0x1C0155E60
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0038050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     SynthesizeMitTouchInput @ 0x1C01F2134 (SynthesizeMitTouchInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITSynthesizeTouchInput(char *Src)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  char v8; // al
  __int64 v9; // rcx
  struct tagKERNELHANDLETABLEENTRY *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 *v17[2]; // [rsp+30h] [rbp-B88h] BYREF
  _BYTE Srca[1456]; // [rsp+40h] [rbp-B78h] BYREF
  _BYTE v19[1456]; // [rsp+5F0h] [rbp-5C8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v17, "MITSynthesizeTouchInput", 0LL);
  v2 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v2;
  v4 = 0;
  if ( v2 )
  {
    *((_DWORD *)v2 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
          || (v8 = 1, (*((_DWORD *)gptiCurrent + 314) & 0x80u) != 0) )
        {
          v8 = 0;
        }
        if ( v8 )
        {
          while ( 1 )
          {
            v10 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v10 + 2) = 0LL;
            v9 = *(_QWORD *)v10;
            if ( !*(_DWORD *)(*(_QWORD *)v10 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v6, v7);
              v9 = *(_QWORD *)v10;
            }
            HMUnlockObject(v9);
          }
        }
      }
    }
  }
  memset(v19, 0, sizeof(v19));
  if ( CInputThreadBase::IsInputThread(gpInputThread) )
  {
    if ( Src + 1456 < Src || (unsigned __int64)(Src + 1456) > MmUserProbeAddress )
      Src = (char *)MmUserProbeAddress;
    memmove(Srca, Src, 0x5B0uLL);
    memmove(v19, Srca, 0x5B0uLL);
    if ( (unsigned __int8)SynthesizeMitTouchInput(v19) )
    {
      v4 = 1;
      goto LABEL_22;
    }
    v14 = 5023LL;
  }
  else
  {
    v14 = 5LL;
  }
  UserSetLastError(v14, v11, v12, v13);
LABEL_22:
  UserSessionSwitchLeaveCrit(v15, v11, v12, v13);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v17);
  return v4;
}
