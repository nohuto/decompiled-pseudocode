__int64 __fastcall NtMITActivateInputProcessing(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r14
  __int64 v4; // rbx
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rax
  char v9; // al
  __int64 *v10; // rdi
  unsigned int v11; // edi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  v4 = 0LL;
  v15 = 0LL;
  LOBYTE(a1) = 1;
  v5 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v8 )
      {
        if ( (*(_DWORD *)(v8 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v9 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v9 = 0;
          }
          if ( v9 )
          {
            while ( 1 )
            {
              v10 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v10[2] = 0LL;
              if ( !*(_DWORD *)(*v10 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              HMUnlockObject(*v10);
            }
          }
        }
      }
    }
  }
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    v11 = UserActivateMITInputProcessing(v3, &v15);
    v4 = v15;
  }
  else
  {
    v11 = 0;
    UserSetLastError(5);
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_QWORD *)MmUserProbeAddress;
  *a2 = v4;
  UserSessionSwitchLeaveCrit(MmUserProbeAddress, MmUserProbeAddress, v12, v13);
  return v11;
}
