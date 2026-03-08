/*
 * XREFs of RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01A3C50
 * Callers:
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00D8260 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     RIMCreateDev @ 0x1C0036CBC (RIMCreateDev.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     DeviceTypeToRimInputType @ 0x1C0039CC0 (DeviceTypeToRimInputType.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0039E60 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     rimOnPnpArrived @ 0x1C00889C0 (rimOnPnpArrived.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     rimDoRimDevChange @ 0x1C00BC1AC (rimDoRimDevChange.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     RIMFreeDev @ 0x1C019DE20 (RIMFreeDev.c)
 */

__int64 RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(char *a1, struct _UNICODE_STRING *a2, unsigned int a3, ...)
{
  __int64 v3; // r15
  struct _UNICODE_STRING *v4; // r14
  int v7; // edx
  int v8; // edi
  int v9; // r8d
  _DWORD *v10; // rsi
  int v11; // edx
  int v12; // r8d
  int v13; // r13d
  int v14; // ecx
  WCHAR *Buffer; // rax
  unsigned __int64 v16; // rdi
  ULONG64 v17; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v18; // rsi
  int v19; // eax
  __int64 Pool2; // rdi
  _QWORD *v21; // rax
  unsigned int v22; // edx
  __int64 v23; // r10
  char v24; // r15
  _QWORD *v25; // r8
  PDEVICE_OBJECT v26; // rcx
  __int16 v27; // ax
  int v28; // [rsp+50h] [rbp-158h]
  int v29; // [rsp+54h] [rbp-154h]
  unsigned int v30; // [rsp+60h] [rbp-148h] BYREF
  PVOID Object; // [rsp+68h] [rbp-140h] BYREF
  __int64 v32; // [rsp+70h] [rbp-138h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp-130h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp-128h]
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
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  }
  if ( !v3 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        a3,
        (_DWORD)gRimLog,
        4,
        1,
        36,
        (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
        13);
    }
    return 3221225485LL;
  }
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  v28 = v8;
  if ( v8 >= 0 )
  {
    v10 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v10 + 81) || *((_BYTE *)v10 + 82) )
    {
      v8 = -1073741637;
      v26 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v11) = 0;
      }
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_81;
      v27 = 38;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(v41) & v10[21]) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        DestinationString = 0LL;
        v13 = v44;
        if ( !(_DWORD)v44 )
        {
          p_DestinationString = v4;
LABEL_68:
          if ( v8 >= 0 )
          {
            v42 = 0LL;
            v8 = RIMCreateDev((__int64)v10, v41, (__int64)p_DestinationString, 1, 0, 0LL, (__int64 *)va);
            if ( v8 >= 0 )
            {
              *(_DWORD *)(v42 + 184) |= 1u;
              v8 = rimOnPnpArrived((__int64)v10, v42, v3);
              if ( v8 >= 0 )
              {
                rimDoRimDevChange((__int64)v10, v42, 2u);
                v25 = v45;
                if ( v45 )
                {
                  if ( v13 )
                  {
                    if ( (unsigned __int64)v45 >= MmUserProbeAddress )
                      v25 = (_QWORD *)MmUserProbeAddress;
                    *v25 = *(_QWORD *)(v42 + 16);
                  }
                  else
                  {
                    *v45 = *(_QWORD *)(v42 + 16);
                  }
                }
              }
              if ( v8 < 0 )
                RIMFreeDev((__int64)v10, v42);
            }
          }
          if ( DestinationString.Buffer )
            NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)DestinationString.Buffer);
          goto LABEL_81;
        }
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (struct _UNICODE_STRING *)MmUserProbeAddress;
        v14 = *(_DWORD *)&v4->Length;
        v29 = *(_DWORD *)&v4->Length;
        *(_DWORD *)&SourceString.Length = *(_DWORD *)&v4->Length;
        Buffer = v4->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (unsigned __int16)v14;
        v17 = (ULONG64)Buffer + (unsigned __int16)v14 + 2;
        if ( v17 <= (unsigned __int64)Buffer || v17 >= MmUserProbeAddress )
          ExRaiseAccessViolation();
        if ( (unsigned __int16)v14 > HIWORD(v29) )
        {
          if ( (v14 & 1) == 0 )
            goto LABEL_66;
        }
        else if ( (v14 & 1) == 0 )
        {
          DestinationString.MaximumLength = v14;
          DestinationString.Length = v14;
          v30 = 1886221394;
          v32 = 260LL;
          v18 = gpLeakTrackingAllocator;
          v39[2] = &v32;
          v39[3] = &v30;
          v36 = (unsigned __int16)v14;
          v19 = *(_DWORD *)gpLeakTrackingAllocator;
          if ( !*(_DWORD *)gpLeakTrackingAllocator )
          {
            Pool2 = ExAllocatePool2(260LL, (unsigned __int16)v14, 1886221394LL);
            if ( Pool2 )
              _InterlockedIncrement64((volatile signed __int64 *)v18 + 14);
            goto LABEL_60;
          }
          if ( v19 == 1 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7452u)
              && v16 + 16 >= v16 )
            {
              v21 = (_QWORD *)ExAllocatePool2(v32 & 0xFFFFFFFFFFFFFFFDuLL, v16 + 16, v30);
              Pool2 = (__int64)v21;
              if ( v21 )
                _InterlockedIncrement64((volatile signed __int64 *)v18 + 14);
              v37 = v21;
              if ( !v21 || (*v21 = 1886221394LL, Pool2 = (__int64)(v21 + 2), v37 = v21 + 2, v21 == (_QWORD *)-16LL) )
                NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                  *((NSInstrumentation::CPointerHashTable **)v18 + 1),
                  0x706D7452uLL);
              goto LABEL_60;
            }
          }
          else if ( v19 == 2 )
          {
            v33 = 0LL;
            if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886221394, &v33) )
            {
              v39[0] = &v32;
              v39[1] = &v30;
              Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                        (__int64)v18,
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
              v10 = Object;
              v3 = v42;
              goto LABEL_68;
            }
            v24 = 0;
            if ( v16 < 0x1000 || (v16 & 0xFFF) != 0 )
            {
              v24 = 1;
              v16 += 16LL;
              v36 = v16;
            }
            Pool2 = ExAllocatePool2(v23, v16, v22);
            if ( Pool2 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)v18 + 16);
              NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
              if ( v24 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
              {
                if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                       (__int64)v18,
                       (const void *)Pool2,
                       v33,
                       (struct NSInstrumentation::CBackTrace *)BackTrace) )
                {
                  Pool2 += 16LL;
                  goto LABEL_60;
                }
              }
              else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                          (__int64)v18,
                          Pool2,
                          v33,
                          (struct NSInstrumentation::CBackTrace *)BackTrace) )
              {
                goto LABEL_60;
              }
              _InterlockedIncrement64((volatile signed __int64 *)v18 + 17);
              _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
            }
          }
          Pool2 = 0LL;
          goto LABEL_60;
        }
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1081);
LABEL_66:
        ExRaiseAccessViolation();
      }
      v8 = -1073741637;
      v26 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v11) = 0;
      }
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_81;
      v27 = 37;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v26->AttachedDevice,
      v11,
      v12,
      (_DWORD)gRimLog,
      3,
      1,
      v27,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
LABEL_81:
    *((_QWORD *)v10 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v10 + 26, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v10);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      v9,
      (_DWORD)gRimLog,
      4,
      1,
      39,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
      v8);
  }
  return (unsigned int)v8;
}
