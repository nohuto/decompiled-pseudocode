/*
 * XREFs of VideoPortCallout @ 0x1C00CD3B0
 * Callers:
 *     Win32kBaseVideoPortCallout @ 0x1C00CD350 (Win32kBaseVideoPortCallout.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     CreateKernelEvent @ 0x1C00AEA20 (CreateKernelEvent.c)
 *     ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x1C00CD504 (-SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     CSTRemove @ 0x1C0135090 (CSTRemove.c)
 */

void __fastcall VideoPortCallout(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rax
  __int64 *v17; // rbx
  struct tagTHREADINFO *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h]
  PVOID v29[2]; // [rsp+50h] [rbp-10h] BYREF
  int v30; // [rsp+98h] [rbp+38h] BYREF

  v27 = a1;
  v30 = 0;
  Object = (PVOID)CreateKernelEvent(SynchronizationEvent, 0);
  if ( Object )
  {
    if ( *(_BYTE *)(v27 + 31) && (!gbVideoInitialized || !CsrApiPort) )
    {
      v29[0] = gpevtVideoInitialized;
      v29[1] = gpevtQueueReadyForCallout;
      KeWaitForMultipleObjects(2u, v29, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
    }
    if ( gbVideoInitialized )
    {
      if ( CsrApiPort )
      {
        v5 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v2, v3, v4);
        gptiCurrent = v5;
        if ( v5 )
        {
          *((_DWORD *)v5 + 387) = 1;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
          if ( CurrentProcessWin32Process )
          {
            if ( *(_QWORD *)CurrentProcessWin32Process
              && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
              && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
              && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v17 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                             + 2);
                v16 = *v17;
                v17[2] = 0LL;
                if ( !*(_DWORD *)(v16 + 8) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                HMUnlockObject(*v17);
              }
            }
          }
        }
        v7 = SendVideoPortCalloutRequest((struct _POWER_INIT *)&v27, &v30);
        UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
        if ( v7 < 0 )
        {
          if ( v30 )
          {
            v18 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v12, v13, v14);
            gptiCurrent = v18;
            if ( v18 )
            {
              *((_DWORD *)v18 + 387) = 1;
              v20 = PsGetCurrentProcessWin32Process(v19);
              if ( v20 )
              {
                if ( *(_QWORD *)v20
                  && (*(_DWORD *)(v20 + 12) & 0x8000) != 0
                  && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                  && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                {
                  while ( 1 )
                  {
                    v22 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                    if ( !gpSharedUserCritDeferredUnlockListHead )
                      break;
                    gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                                 + 2);
                    v21 = *v22;
                    v22[2] = 0LL;
                    if ( !*(_DWORD *)(v21 + 8) )
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                    HMUnlockObject(*v22);
                  }
                }
              }
            }
            CSTRemove(4LL, &v27);
            UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
          }
        }
        else
        {
          KeWaitForSingleObject(Object, WrUserRequest, 0, 0, 0LL);
          v7 = *(_DWORD *)(a1 + 24);
        }
      }
      else
      {
        v7 = -1073741816;
      }
    }
    else
    {
      v7 = -2143420409;
    }
    if ( Object )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Object);
    *(_DWORD *)(a1 + 24) = v7;
  }
  else
  {
    *(_DWORD *)(a1 + 24) = -1073741801;
  }
}
