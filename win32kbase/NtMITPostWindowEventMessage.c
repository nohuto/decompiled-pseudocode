/*
 * XREFs of NtMITPostWindowEventMessage @ 0x1C016BB10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C004FB50 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004FE50 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     PostEvent @ 0x1C02181A8 (PostEvent.c)
 */

__int64 __fastcall NtMITPostWindowEventMessage(__int64 a1, __int64 *a2, int a3, int a4, unsigned int a5)
{
  int v8; // r15d
  int v9; // edi
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rax
  char v14; // al
  __int64 *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  _DWORD *v21; // rax
  __int64 v22; // rcx
  struct tagTHREADINFO *v23; // rbx

  v8 = a1;
  v9 = 0;
  LOBYTE(a1) = 1;
  v10 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    if ( CurrentProcessWin32Process )
    {
      v13 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v13 )
      {
        if ( (*(_DWORD *)(v13 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v14 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v14 = 0;
          }
          if ( v14 )
          {
            while ( 1 )
            {
              v15 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v15[2] = 0LL;
              if ( !*(_DWORD *)(*v15 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*v15);
            }
          }
        }
      }
    }
  }
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    LODWORD(v20) = 0;
    if ( a2 )
    {
      if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
        a2 = (__int64 *)MmUserProbeAddress;
      v20 = *a2;
    }
    v21 = (_DWORD *)HMValidateHandleNoSecure(v8, 255);
    if ( v21 )
    {
      v22 = (unsigned __int16)*v21;
      v23 = (struct tagTHREADINFO *)*((_QWORD *)gpKernelHandleTable + 3 * v22 + 1);
      if ( v23 == PtiCurrentShared(v22, v16, 3 * v22, v19) )
        v9 = (unsigned __int8)PostEvent(v8, v20, a3, a4, a5);
    }
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v9;
}
