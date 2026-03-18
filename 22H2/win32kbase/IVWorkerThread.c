/*
 * XREFs of IVWorkerThread @ 0x1C01EEA6C
 * Callers:
 *     xxxCreateSystemThreads @ 0x1C00B27C0 (xxxCreateSystemThreads.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     SetThreadBasePriority @ 0x1C0084B80 (SetThreadBasePriority.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x1C01F38F0 (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1C01F3B70 (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 */

void __fastcall IVWorkerThread(struct _KEVENT **a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rax
  __int64 *v9; // rbx
  struct _KEVENT *v10; // rsi
  struct _KEVENT *v11; // rdi
  __int64 v12; // rdx
  struct tagTHREADINFO *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct tagTHREADINFO *v19; // rax
  __int64 v20; // rax
  __int64 *i; // rbx
  __int64 v22; // rax
  struct tagTHREADINFO *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // [rsp+30h] [rbp-58h] BYREF
  int v33; // [rsp+38h] [rbp-50h]
  void *v34; // [rsp+40h] [rbp-48h]
  char (__fastcall *v35)(const void *, __int64, int, struct tagRECT *); // [rsp+48h] [rbp-40h]
  __int64 v36; // [rsp+50h] [rbp-38h]
  int v37; // [rsp+58h] [rbp-30h]
  char v38; // [rsp+5Ch] [rbp-2Ch]

  v5 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, a2, a3, a4);
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
          v9 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v8 = *v9;
          v9[2] = 0LL;
          if ( !*(_DWORD *)(v8 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
          HMUnlockObject(*v9);
        }
      }
    }
  }
  *((_DWORD *)gptiCurrent + 319) |= 0x10u;
  v10 = *a1;
  v11 = a1[1];
  gpIVThread = KeGetCurrentThread();
  SetThreadBasePriority(gpIVThread, 16);
  gpkeIVThreadShutdown = v11;
  KeSetEvent(v10, 1, 0);
  v32 = 0LL;
  v34 = &ivOnChildPartitionConnected;
  v33 = 3;
  v35 = ivOnNonInputPacketReceived;
  qword_1C0297600 = (__int64)&v32;
  v36 = 0LL;
  v37 = 0;
  v38 = 0;
  CIVChannel::Initialize((CIVChannel *)&v32);
  while ( 1 )
  {
    UserSessionSwitchLeaveCrit((__int64)v13, v12, v14, v15);
    if ( !KeWaitForSingleObject(v11, Executive, 0, 0, 0LL) )
      break;
    v19 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v16, v17, v18);
    gptiCurrent = v19;
    if ( v19 )
    {
      *((_DWORD *)v19 + 387) = 1;
      v20 = PsGetCurrentProcessWin32Process(v13);
      if ( v20 )
      {
        if ( *(_QWORD *)v20 )
        {
          if ( (*(_DWORD *)(v20 + 12) & 0x8000) != 0 )
          {
            v13 = gptiCurrent;
            if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
            {
              for ( i = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                    gpSharedUserCritDeferredUnlockListHead;
                    i = (__int64 *)gpSharedUserCritDeferredUnlockListHead )
              {
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
                v22 = *i;
                i[2] = 0LL;
                if ( !*(_DWORD *)(v22 + 8) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
                HMUnlockObject(*i);
              }
            }
          }
        }
      }
    }
  }
  v23 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v16, v17, v18);
  gptiCurrent = v23;
  if ( v23 )
  {
    *((_DWORD *)v23 + 387) = 1;
    v25 = PsGetCurrentProcessWin32Process(v24);
    if ( v25 )
    {
      if ( *(_QWORD *)v25
        && (*(_DWORD *)(v25 + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v27 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v26 = *v27;
          v27[2] = 0LL;
          if ( !*(_DWORD *)(v26 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
          HMUnlockObject(*v27);
        }
      }
    }
  }
  CIVChannel::Uninitialize((CIVChannel *)&v32);
  gpkeIVThreadShutdown = 0LL;
  gpIVThread = 0LL;
  if ( v10 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v10);
  if ( v11 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v11);
  UserSessionSwitchLeaveCrit(v29, v28, v30, v31);
}
