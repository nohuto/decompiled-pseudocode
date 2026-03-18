/*
 * XREFs of RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01763A0
 * Callers:
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00CBE90 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     rimDoRimDevChange @ 0x1C0003BFC (rimDoRimDevChange.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     DeviceTypeToRimInputType @ 0x1C00750D0 (DeviceTypeToRimInputType.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00751C0 (RawInputManagerObjectResolveHandle.c)
 *     rimOnPnpArrived @ 0x1C0076A78 (rimOnPnpArrived.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     RIMCreateDev @ 0x1C00C874C (RIMCreateDev.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC98 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD4C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E29C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E668 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     RIMFreeDev @ 0x1C0170F70 (RIMFreeDev.c)
 */

__int64 RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(char *a1, const UNICODE_STRING *a2, unsigned int a3, ...)
{
  __int64 v3; // r15
  const UNICODE_STRING *v4; // r14
  char v6; // dl
  int v8; // edi
  _DWORD *v9; // rsi
  int v10; // edx
  int v11; // r8d
  int v12; // r13d
  int v13; // ecx
  WCHAR *Buffer; // rax
  unsigned __int64 v15; // rdi
  ULONG64 v16; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v17; // rsi
  int v18; // eax
  __int64 Pool2; // rdi
  _QWORD *v20; // rax
  unsigned int v21; // edx
  __int64 v22; // r10
  char v23; // r15
  _QWORD *v24; // r8
  PDEVICE_OBJECT v25; // rcx
  __int16 v26; // ax
  char v27; // dl
  int v28; // [rsp+50h] [rbp-158h]
  int v29; // [rsp+54h] [rbp-154h]
  unsigned int v30; // [rsp+60h] [rbp-148h] BYREF
  PVOID Object; // [rsp+68h] [rbp-140h] BYREF
  __int64 v32; // [rsp+70h] [rbp-138h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp-130h] BYREF
  const UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp-128h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-120h] BYREF
  unsigned __int64 v36; // [rsp+98h] [rbp-110h] BYREF
  _QWORD *v37; // [rsp+A0h] [rbp-108h]
  UNICODE_STRING SourceString; // [rsp+A8h] [rbp-100h] BYREF
  _QWORD v39[4]; // [rsp+C0h] [rbp-E8h] BYREF
  PVOID BackTrace[20]; // [rsp+E0h] [rbp-C8h] BYREF
  unsigned int v41; // [rsp+1C0h] [rbp+18h]
  __int64 v42; // [rsp+1C8h] [rbp+20h] BYREF
  va_list va; // [rsp+1C8h] [rbp+20h]
  __int64 v44; // [rsp+1D0h] [rbp+28h]
  _QWORD *v45; // [rsp+1D8h] [rbp+30h]
  va_list va1; // [rsp+1E0h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v42 = va_arg(va1, _QWORD);
  v44 = va_arg(va1, _QWORD);
  v45 = va_arg(va1, _QWORD *);
  v41 = a3;
  v3 = v42;
  v4 = a2;
  Object = 0LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      35,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  }
  if ( !v3 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v6 = 0;
    }
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v6,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        4u,
        1u,
        0x24u,
        (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
        -1073741811);
    return 3221225485LL;
  }
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  v28 = v8;
  if ( v8 >= 0 )
  {
    v9 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v9 + 81) || *((_BYTE *)v9 + 82) )
    {
      v8 = -1073741637;
      v25 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v10) = 0;
      }
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_81;
      v26 = 38;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(v41) & v9[21]) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        DestinationString = 0LL;
        v12 = v44;
        if ( !(_DWORD)v44 )
        {
          p_DestinationString = v4;
LABEL_68:
          if ( v8 >= 0 )
          {
            v42 = 0LL;
            v8 = RIMCreateDev(v9, v41, p_DestinationString, 1, 0, 0LL, (struct _UNICODE_STRING **)va);
            if ( v8 >= 0 )
            {
              *(_DWORD *)(v42 + 184) |= 1u;
              v8 = rimOnPnpArrived((__int64)v9, v42, v3);
              if ( v8 >= 0 )
              {
                rimDoRimDevChange((__int64)v9, v42, 2u);
                v24 = v45;
                if ( v45 )
                {
                  if ( v12 )
                  {
                    if ( (unsigned __int64)v45 >= MmUserProbeAddress )
                      v24 = (_QWORD *)MmUserProbeAddress;
                    *v24 = *(_QWORD *)(v42 + 16);
                  }
                  else
                  {
                    *v45 = *(_QWORD *)(v42 + 16);
                  }
                }
              }
              if ( v8 < 0 )
                RIMFreeDev((__int64)v9, v42);
            }
          }
          if ( DestinationString.Buffer )
            NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)DestinationString.Buffer);
          goto LABEL_81;
        }
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (const UNICODE_STRING *)MmUserProbeAddress;
        v13 = *(_DWORD *)&v4->Length;
        v29 = *(_DWORD *)&v4->Length;
        *(_DWORD *)&SourceString.Length = *(_DWORD *)&v4->Length;
        Buffer = v4->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = (unsigned __int16)v13;
        v16 = (ULONG64)Buffer + (unsigned __int16)v13 + 2;
        if ( v16 <= (unsigned __int64)Buffer || v16 >= MmUserProbeAddress )
          ExRaiseAccessViolation();
        if ( (unsigned __int16)v13 > HIWORD(v29) )
        {
          if ( (v13 & 1) == 0 )
            goto LABEL_66;
        }
        else if ( (v13 & 1) == 0 )
        {
          DestinationString.MaximumLength = v13;
          DestinationString.Length = v13;
          v30 = 1886221394;
          v32 = 260LL;
          v17 = gpLeakTrackingAllocator;
          v39[2] = &v32;
          v39[3] = &v30;
          v36 = (unsigned __int16)v13;
          v18 = *(_DWORD *)gpLeakTrackingAllocator;
          if ( !*(_DWORD *)gpLeakTrackingAllocator )
          {
            Pool2 = ExAllocatePool2(260LL, (unsigned __int16)v13, 1886221394LL);
            if ( Pool2 )
              _InterlockedIncrement64((volatile signed __int64 *)v17 + 14);
            goto LABEL_60;
          }
          if ( v18 == 1 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7452u)
              && v15 + 16 >= v15 )
            {
              v20 = (_QWORD *)ExAllocatePool2(v32 & 0xFFFFFFFFFFFFFFFDuLL, v15 + 16, v30);
              Pool2 = (__int64)v20;
              if ( v20 )
                _InterlockedIncrement64((volatile signed __int64 *)v17 + 14);
              v37 = v20;
              if ( !v20 || (*v20 = 1886221394LL, Pool2 = (__int64)(v20 + 2), v37 = v20 + 2, v20 == (_QWORD *)-16LL) )
                NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                  *((NSInstrumentation::CPointerHashTable **)v17 + 1),
                  0x706D7452uLL);
              goto LABEL_60;
            }
          }
          else if ( v18 == 2 )
          {
            v33 = 0LL;
            if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886221394, &v33) )
            {
              v39[0] = &v32;
              v39[1] = &v30;
              Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                        (__int64)v17,
                        (__int64)v39,
                        &v36);
LABEL_60:
              DestinationString.Buffer = (PWSTR)Pool2;
              if ( Pool2 )
              {
                RtlCopyUnicodeString(&DestinationString, &SourceString);
                p_DestinationString = &DestinationString;
                v8 = v28;
              }
              else
              {
                v8 = -1073741801;
              }
              v9 = Object;
              v3 = v42;
              goto LABEL_68;
            }
            v23 = 0;
            if ( v15 < 0x1000 || (v15 & 0xFFF) != 0 )
            {
              v23 = 1;
              v15 += 16LL;
              v36 = v15;
            }
            Pool2 = ExAllocatePool2(v22, v15, v21);
            if ( Pool2 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)v17 + 16);
              NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
              if ( v23 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
              {
                if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                       (__int64)v17,
                       (const void *)Pool2,
                       v33,
                       (struct NSInstrumentation::CBackTrace *)BackTrace) )
                {
                  Pool2 += 16LL;
                  goto LABEL_60;
                }
              }
              else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                          (__int64)v17,
                          Pool2,
                          v33,
                          (struct NSInstrumentation::CBackTrace *)BackTrace) )
              {
                goto LABEL_60;
              }
              _InterlockedIncrement64((volatile signed __int64 *)v17 + 17);
              _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
            }
          }
          Pool2 = 0LL;
          goto LABEL_60;
        }
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1080);
LABEL_66:
        ExRaiseAccessViolation();
      }
      v8 = -1073741637;
      v25 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v10) = 0;
      }
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_81;
      v26 = 37;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v25->AttachedDevice,
      v10,
      v11,
      (_DWORD)gRimLog,
      3,
      1,
      v26,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
LABEL_81:
    *((_QWORD *)v9 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v9 + 26, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v9);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v27 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v27 = 0;
  }
  if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v27,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x27u,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
      v8);
  return (unsigned int)v8;
}
