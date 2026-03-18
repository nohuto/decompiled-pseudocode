/*
 * XREFs of NtUserGetInputContainerId @ 0x1C0159470
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ValidateHbwnd @ 0x1C0144300 (ValidateHbwnd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqddq @ 0x1C0164C24 (WPP_RECORDER_AND_TRACE_SF_qqddq.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetInputContainerId(struct _GUID *a1, unsigned __int64 a2, __int64 a3, ULONG64 a4)
{
  char v7; // di
  struct tagTHREADINFO *v8; // rax
  struct tagTHREADINFO *v9; // rcx
  int v10; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  char v14; // al
  __int64 v15; // rcx
  struct tagKERNELHANDLETABLEENTRY *v16; // rsi
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  PDEVICE_OBJECT v21; // r10
  __int16 v22; // cx
  __int64 v23; // rcx
  _DWORD *v24; // rdx
  _UNKNOWN **v25; // rcx
  int v26; // eax
  PDEVICE_OBJECT v27; // r10
  __int16 v28; // cx
  __int64 v29; // r15
  __int64 v30; // rcx
  PVOID v31; // r14
  __int64 v32; // rax
  __int64 Pool2; // rsi
  __int64 v34; // rax
  _DWORD v36[10]; // [rsp+70h] [rbp-158h] BYREF
  ULONG64 v37; // [rsp+98h] [rbp-130h]
  __int64 v38; // [rsp+A0h] [rbp-128h]
  struct _GUID v39; // [rsp+C0h] [rbp-108h]
  PVOID BackTrace[20]; // [rsp+D0h] [rbp-F8h] BYREF
  struct _GUID v41; // [rsp+170h] [rbp-58h] BYREF

  v37 = a4;
  v7 = 1;
  v8 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v8;
  v10 = 0;
  if ( v8 )
  {
    *((_DWORD *)v8 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        v9 = gptiCurrent;
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
          || (v14 = 1, (*((_DWORD *)gptiCurrent + 314) & 0x80u) != 0) )
        {
          v14 = 0;
        }
        if ( v14 )
        {
          while ( 1 )
          {
            v16 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v16 + 2) = 0LL;
            v15 = *(_QWORD *)v16;
            if ( !*(_DWORD *)(*(_QWORD *)v16 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v12, v13);
              v15 = *(_QWORD *)v16;
            }
            HMUnlockObject(v15);
          }
        }
      }
    }
  }
  v41 = 0LL;
  v36[0] = 0;
  v17 = PsGetCurrentProcessWin32Process(v9);
  if ( isChildPartition() )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v7 = 0;
    }
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v22 = 82;
LABEL_21:
    LOBYTE(v18) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      v21->AttachedDevice,
      v18,
      v19,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      12,
      v22,
      (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
LABEL_22:
    v23 = 5LL;
LABEL_23:
    UserSetLastError(v23, v18, v19, v20);
    goto LABEL_111;
  }
  if ( &a1[1] < a1 || (unsigned __int64)&a1[1] > MmUserProbeAddress )
    a1 = (struct _GUID *)MmUserProbeAddress;
  v39 = *a1;
  v41 = v39;
  if ( gpfnIVResolveContainerId )
    v26 = gpfnIVResolveContainerId(&v41, (struct CONTAINER_ID *)v36);
  else
    v26 = -1073741637;
  if ( v26 < 0 )
  {
    v27 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v7 = 0;
    }
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_39;
    v28 = 84;
LABEL_38:
    LOBYTE(v18) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      v27->AttachedDevice,
      v18,
      v19,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      12,
      v28,
      (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
LABEL_39:
    v23 = 87LL;
    goto LABEL_23;
  }
  v29 = ValidateHbwnd(a2, v18, v19, v20);
  if ( !v29 )
  {
    v27 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v7 = 0;
    }
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_39;
    v28 = 85;
    goto LABEL_38;
  }
  if ( !a3 )
  {
    v27 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v7 = 0;
    }
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_39;
    v28 = 86;
    goto LABEL_38;
  }
  if ( (*(_WORD *)(v17 + 1088) || *(_WORD *)(v17 + 1090)) && *(_DWORD *)(v17 + 1088) != v36[0] )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v7 = 0;
    }
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v22 = 87;
    goto LABEL_21;
  }
  v30 = *(_QWORD *)(v29 + 136);
  if ( !v30 )
  {
    v36[6] = 1684236117;
    v38 = 260LL;
    v31 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x64636755) == 0x64636755
      && (v32 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v32) != 1684236117 )
      {
        if ( ++v32 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_64;
      }
      Pool2 = ExAllocatePool2(260LL, 36LL);
      if ( Pool2 )
      {
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v31,
                                  Pool2,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_65;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v31,
                                     Pool2,
                                     BackTrace) )
        {
          goto LABEL_65;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
      Pool2 = 0LL;
    }
    else
    {
LABEL_64:
      Pool2 = ExAllocatePool2(260LL, 20LL);
    }
LABEL_65:
    *(_QWORD *)(v29 + 136) = Pool2;
    if ( !Pool2 )
    {
      v23 = 8LL;
      goto LABEL_23;
    }
    *(_OWORD *)Pool2 = 0LL;
    v30 = *(_QWORD *)(v29 + 136);
  }
  v34 = *(_QWORD *)(v30 + 8);
  if ( v34 && v34 != a3 )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v7 = 0;
    }
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v22 = 88;
    goto LABEL_21;
  }
  if ( (*(_WORD *)v30 || *(_WORD *)(v30 + 2)) && *(_DWORD *)v30 != v36[0] )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v7 = 0;
    }
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v22 = 89;
    goto LABEL_21;
  }
  v24 = (_DWORD *)v37;
  if ( v37 >= MmUserProbeAddress )
    v24 = (_DWORD *)MmUserProbeAddress;
  *v24 = v36[0];
  **(_DWORD **)(v29 + 136) = v36[0];
  *(_QWORD *)(*(_QWORD *)(v29 + 136) + 8LL) = a3;
  *(_DWORD *)(v17 + 1088) = v36[0];
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || (LOBYTE(v24) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v24) = 0;
  }
  v25 = &WPP_RECORDER_INITIALIZED;
  LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qqddq(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)v24, v19, SHIWORD(v36[0]));
  v10 = 1;
LABEL_111:
  UserSessionSwitchLeaveCrit((__int64)v25, (__int64)v24, v19, v20);
  return v10;
}
