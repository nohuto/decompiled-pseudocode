_BOOL8 __fastcall NtMITSynthesizeTouchInput(char *Src)
{
  __int64 v2; // rcx
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rax
  char v7; // al
  __int64 *v8; // rbx
  int v9; // ecx
  BOOL v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // al
  __int64 *v17[2]; // [rsp+38h] [rbp-B90h] BYREF
  _BYTE Srca[1464]; // [rsp+48h] [rbp-B80h] BYREF
  _BYTE v19[1456]; // [rsp+600h] [rbp-5C8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v17, "MITSynthesizeTouchInput", 0LL);
  LOBYTE(v2) = 1;
  v3 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(v2);
  gptiCurrent = v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    if ( CurrentProcessWin32Process )
    {
      v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v6 )
      {
        if ( (*(_DWORD *)(v6 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v7 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v7 = 0;
          }
          if ( v7 )
          {
            while ( 1 )
            {
              v8 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v8[2] = 0LL;
              if ( !*(_DWORD *)(*v8 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*v8);
            }
          }
        }
      }
    }
  }
  memset(v19, 0, sizeof(v19));
  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    v9 = 5;
LABEL_16:
    v10 = 0;
    UserSetLastError(v9);
    goto LABEL_22;
  }
  if ( Src + 1456 < Src || (unsigned __int64)(Src + 1456) > MmUserProbeAddress )
    Src = (char *)MmUserProbeAddress;
  memmove(Srca, Src, 0x5B0uLL);
  memmove(v19, Srca, 0x5B0uLL);
  v15 = SynthesizeMitTouchInput(v19);
  v10 = v15 != 0;
  if ( !v15 )
  {
    v9 = 5023;
    goto LABEL_16;
  }
LABEL_22:
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v17);
  return v10;
}
