__int64 __fastcall RIMAddNonPnpDeviceOfType(char *a1, struct _UNICODE_STRING *a2, unsigned int a3, int a4, _QWORD *a5)
{
  unsigned int v6; // r12d
  struct _UNICODE_STRING *v7; // r14
  int v9; // edx
  int v10; // edi
  int v11; // r8d
  _DWORD *v12; // rsi
  int v13; // edx
  int v14; // ecx
  WCHAR *Buffer; // rax
  unsigned __int64 v16; // rdi
  ULONG64 v17; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v18; // rsi
  int v19; // edx
  __int64 Pool2; // rdi
  _QWORD *v21; // rax
  unsigned int v22; // edx
  __int64 v23; // r10
  char v24; // r14
  _QWORD *v25; // rdx
  PDEVICE_OBJECT v26; // rcx
  _UNKNOWN **v27; // r8
  __int16 v28; // ax
  int v30; // [rsp+50h] [rbp-158h]
  int v31; // [rsp+54h] [rbp-154h]
  unsigned int v32; // [rsp+60h] [rbp-148h] BYREF
  __int64 v33; // [rsp+68h] [rbp-140h] BYREF
  PVOID Object; // [rsp+70h] [rbp-138h] BYREF
  __int64 v35; // [rsp+78h] [rbp-130h] BYREF
  unsigned __int64 v36; // [rsp+80h] [rbp-128h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+88h] [rbp-120h]
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-118h] BYREF
  unsigned __int64 v39; // [rsp+A0h] [rbp-108h] BYREF
  _QWORD *v40; // [rsp+A8h] [rbp-100h]
  UNICODE_STRING SourceString; // [rsp+B0h] [rbp-F8h] BYREF
  _QWORD v42[4]; // [rsp+C0h] [rbp-E8h] BYREF
  PVOID BackTrace[20]; // [rsp+E0h] [rbp-C8h] BYREF

  v6 = a3;
  v7 = a2;
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
      31,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  }
  v10 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  v30 = v10;
  if ( v10 >= 0 )
  {
    v12 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v12 + 81) || *((_BYTE *)v12 + 82) )
    {
      v10 = -1073741637;
      v26 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v13) = 0;
      }
      v27 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v13 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_69;
      v28 = 33;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(v6) & v12[21]) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        DestinationString = 0LL;
        if ( !a4 )
        {
          p_DestinationString = v7;
LABEL_57:
          if ( v10 >= 0 )
          {
            v33 = 0LL;
            v10 = RIMCreateDev((__int64)v12, v6, (__int64)p_DestinationString, 1, 0, 0LL, &v33);
            if ( v10 >= 0 )
            {
              *(_DWORD *)(v33 + 184) |= 1u;
              v10 = rimOnPnpArrived((__int64)v12, v33, -1LL);
              if ( v10 >= 0 )
              {
                if ( a4 )
                {
                  v25 = a5;
                  if ( (unsigned __int64)a5 >= MmUserProbeAddress )
                    v25 = (_QWORD *)MmUserProbeAddress;
                  *v25 = *(_QWORD *)(v33 + 16);
                }
                else
                {
                  *a5 = *(_QWORD *)(v33 + 16);
                }
              }
              if ( v10 < 0 )
                RIMFreeDev((__int64)v12, v33);
            }
          }
          if ( DestinationString.Buffer )
            NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)DestinationString.Buffer);
          goto LABEL_69;
        }
        if ( (unsigned __int64)v7 >= MmUserProbeAddress )
          v7 = (struct _UNICODE_STRING *)MmUserProbeAddress;
        v14 = *(_DWORD *)&v7->Length;
        v31 = *(_DWORD *)&v7->Length;
        *(_DWORD *)&SourceString.Length = *(_DWORD *)&v7->Length;
        Buffer = v7->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (unsigned __int16)v14;
        v17 = (ULONG64)Buffer + (unsigned __int16)v14 + 2;
        if ( v17 <= (unsigned __int64)Buffer || v17 >= MmUserProbeAddress )
          ExRaiseAccessViolation();
        if ( (unsigned __int16)v14 > HIWORD(v31) )
        {
          if ( (v14 & 1) == 0 )
            goto LABEL_55;
        }
        else if ( (v14 & 1) == 0 )
        {
          DestinationString.MaximumLength = v14;
          DestinationString.Length = v14;
          v32 = 1886221394;
          v35 = 260LL;
          v18 = gpLeakTrackingAllocator;
          v42[2] = &v35;
          v42[3] = &v32;
          v39 = (unsigned __int16)v14;
          v19 = *(_DWORD *)gpLeakTrackingAllocator;
          if ( !*(_DWORD *)gpLeakTrackingAllocator )
          {
            Pool2 = ExAllocatePool2(260LL, (unsigned __int16)v14, 1886221394LL);
            if ( Pool2 )
              _InterlockedIncrement64((volatile signed __int64 *)v18 + 14);
            goto LABEL_49;
          }
          if ( v19 == 1 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7452u)
              && v16 + 16 >= v16 )
            {
              v21 = (_QWORD *)ExAllocatePool2(v35 & 0xFFFFFFFFFFFFFFFDuLL, v16 + 16, v32);
              Pool2 = (__int64)v21;
              if ( v21 )
                _InterlockedIncrement64((volatile signed __int64 *)v18 + 14);
              v40 = v21;
              if ( !v21 || (*v21 = 1886221394LL, Pool2 = (__int64)(v21 + 2), v40 = v21 + 2, v21 == (_QWORD *)-16LL) )
                NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                  *((NSInstrumentation::CPointerHashTable **)v18 + 1),
                  0x706D7452uLL);
              goto LABEL_49;
            }
            goto LABEL_48;
          }
          if ( v19 == 2 )
          {
            v36 = 0LL;
            if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886221394, &v36) )
            {
              v42[0] = &v35;
              v42[1] = &v32;
              Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                        (__int64)v18,
                        (__int64)v42,
                        &v39);
LABEL_49:
              DestinationString.Buffer = (PWSTR)Pool2;
              if ( Pool2 )
              {
                RtlCopyUnicodeString(&DestinationString, &SourceString);
                p_DestinationString = &DestinationString;
                v10 = v30;
              }
              else
              {
                v10 = -1073741801;
              }
              v12 = Object;
              goto LABEL_57;
            }
            v24 = 0;
            if ( v16 < 0x1000 || (v16 & 0xFFF) != 0 )
            {
              v24 = 1;
              v16 += 16LL;
              v39 = v16;
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
                       v36,
                       (struct NSInstrumentation::CBackTrace *)BackTrace) )
                {
                  Pool2 += 16LL;
                  goto LABEL_49;
                }
              }
              else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                          (__int64)v18,
                          Pool2,
                          v36,
                          (struct NSInstrumentation::CBackTrace *)BackTrace) )
              {
                goto LABEL_49;
              }
              _InterlockedIncrement64((volatile signed __int64 *)v18 + 17);
              _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
            }
          }
LABEL_48:
          Pool2 = 0LL;
          goto LABEL_49;
        }
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 923);
LABEL_55:
        ExRaiseAccessViolation();
      }
      v10 = -1073741637;
      v26 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v13) = 0;
      }
      v27 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v13 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_69;
      v28 = 32;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v26->AttachedDevice,
      v13,
      (_DWORD)v27,
      (_DWORD)gRimLog,
      3,
      1,
      v28,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
LABEL_69:
    *((_QWORD *)v12 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v12 + 26, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v12);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v11,
      (_DWORD)gRimLog,
      4,
      1,
      34,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
      v10);
  }
  return (unsigned int)v10;
}
