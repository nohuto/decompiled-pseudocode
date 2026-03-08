/*
 * XREFs of RIMAddInjectionDeviceOfType @ 0x1C0004D20
 * Callers:
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0004878 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C01C2E38 (RIMIDECreatePseudoHIDDevice.c)
 * Callees:
 *     RIMCreateDev @ 0x1C0036CBC (RIMCreateDev.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     DeviceTypeToRimInputType @ 0x1C0039CC0 (DeviceTypeToRimInputType.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0039E60 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0085FBC (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0089B08 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     RIMFreeDev @ 0x1C019DE20 (RIMFreeDev.c)
 */

__int64 __fastcall RIMAddInjectionDeviceOfType(__int64 a1, ULONG64 a2, unsigned int a3, _OWORD *a4, int a5, _QWORD *a6)
{
  int v9; // edx
  int v10; // r8d
  int v11; // edx
  int v12; // edi
  int v13; // r8d
  char *v14; // r14
  char *v15; // r13
  int v16; // edx
  _QWORD *v17; // r12
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  int v22; // ecx
  WCHAR *v23; // rax
  unsigned __int64 v24; // rdi
  ULONG64 v25; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v26; // r14
  int v27; // edx
  __int64 Pool2; // rax
  WCHAR *v29; // rdi
  WCHAR *v30; // rax
  __int64 v31; // r10
  char v32; // r15
  PDEVICE_OBJECT v33; // rcx
  _UNKNOWN **v34; // r8
  __int16 v35; // ax
  _UNKNOWN **v36; // r8
  _UNKNOWN **v37; // r8
  _BYTE v38[4]; // [rsp+50h] [rbp-238h] BYREF
  unsigned int v39; // [rsp+54h] [rbp-234h]
  int v40; // [rsp+58h] [rbp-230h]
  __int64 v41; // [rsp+60h] [rbp-228h] BYREF
  WCHAR *v42; // [rsp+68h] [rbp-220h]
  unsigned int v43; // [rsp+70h] [rbp-218h] BYREF
  PVOID Object; // [rsp+78h] [rbp-210h] BYREF
  int v45; // [rsp+80h] [rbp-208h]
  __int64 v46; // [rsp+88h] [rbp-200h] BYREF
  unsigned __int64 v47; // [rsp+90h] [rbp-1F8h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+98h] [rbp-1F0h]
  struct _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-1E8h] BYREF
  unsigned __int64 v50; // [rsp+B0h] [rbp-1D8h] BYREF
  __int64 v51; // [rsp+B8h] [rbp-1D0h]
  _QWORD *v52; // [rsp+C0h] [rbp-1C8h]
  WCHAR *v53; // [rsp+C8h] [rbp-1C0h]
  __int64 v54; // [rsp+D0h] [rbp-1B8h]
  __int64 v55; // [rsp+D8h] [rbp-1B0h]
  UNICODE_STRING SourceString; // [rsp+E0h] [rbp-1A8h] BYREF
  _QWORD v57[4]; // [rsp+F0h] [rbp-198h] BYREF
  PVOID BackTrace[20]; // [rsp+110h] [rbp-178h] BYREF
  _OWORD v59[9]; // [rsp+1B0h] [rbp-D8h] BYREF

  v39 = a3;
  LODWORD(v41) = a3;
  v51 = (__int64)a6;
  v55 = (__int64)a6;
  v52 = a6;
  v54 = (__int64)a6;
  Object = 0LL;
  memset(v59, 0, sizeof(v59));
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v10,
      (_DWORD)gRimLog,
      4,
      1,
      40,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  }
  if ( a4 )
  {
    v12 = RawInputManagerObjectResolveHandle(a1, 3LL, 0LL, &Object);
    v40 = v12;
    if ( v12 < 0 )
    {
      v12 = -1073741816;
LABEL_26:
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v11) = 0;
      }
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v13,
          (_DWORD)gRimLog,
          4,
          1,
          46,
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
          v12);
      }
      return (unsigned int)v12;
    }
    v14 = (char *)Object;
    v15 = (char *)Object + 104;
    RIMLockExclusive((char *)Object + 104);
    if ( v14[81] )
    {
      if ( !v14[82] )
      {
        v12 = -1073741637;
        v33 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v16) = 0;
        }
        v34 = &WPP_RECORDER_INITIALIZED;
        LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_25;
        v35 = 45;
        goto LABEL_99;
      }
    }
    else if ( !v14[82] )
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(v39) & *((_DWORD *)v14 + 21)) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        DestinationString = 0LL;
        if ( !a5 )
        {
          p_DestinationString = (struct _UNICODE_STRING *)a2;
          v59[0] = *a4;
          v59[1] = a4[1];
          v59[2] = a4[2];
          v59[3] = a4[3];
          v59[4] = a4[4];
          v59[5] = a4[5];
          v59[6] = a4[6];
          v59[7] = a4[7];
          v59[8] = a4[8];
          v17 = (_QWORD *)v51;
          v18 = v39;
LABEL_14:
          if ( v12 >= 0 )
          {
            v41 = 0LL;
            v12 = RIMCreateDev(v14, v18, p_DestinationString, 0LL, 1, v59, &v41);
            v40 = v12;
            if ( v12 >= 0 )
            {
              if ( a5 )
              {
                if ( (unsigned __int64)v17 >= MmUserProbeAddress )
                  v17 = (_QWORD *)MmUserProbeAddress;
                *v17 = *(_QWORD *)(v41 + 16);
                v19 = v41;
              }
              else
              {
                v19 = v41;
                if ( (BYTE12(v59[0]) & 4) != 0 )
                  v20 = *(_QWORD *)(v41 + 24);
                else
                  v20 = *(_QWORD *)(v41 + 16);
                *v52 = v20;
              }
              if ( *((_QWORD *)v14 + 104) || *((_DWORD *)v14 + 264) )
                *(_DWORD *)(v19 + 184) |= 0x80000u;
            }
          }
          if ( DestinationString.Buffer )
            NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, DestinationString.Buffer);
          goto LABEL_25;
        }
        if ( a2 >= MmUserProbeAddress )
          a2 = MmUserProbeAddress;
        v22 = *(_DWORD *)a2;
        v45 = v22;
        *(_DWORD *)&SourceString.Length = v22;
        v23 = *(WCHAR **)(a2 + 8);
        SourceString.Buffer = v23;
        if ( ((unsigned __int8)v23 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v24 = (unsigned __int16)v22;
        v25 = (ULONG64)v23 + (unsigned __int16)v22 + 2;
        if ( v25 <= (unsigned __int64)v23 || v25 >= MmUserProbeAddress )
          ExRaiseAccessViolation();
        if ( (unsigned __int16)v22 > HIWORD(v45) )
        {
          if ( (v22 & 1) == 0 )
            goto LABEL_85;
        }
        else if ( (v22 & 1) == 0 )
        {
          DestinationString.MaximumLength = v22;
          DestinationString.Length = v22;
          v43 = 1886221394;
          v46 = 260LL;
          v26 = gpLeakTrackingAllocator;
          v57[2] = &v46;
          v57[3] = &v43;
          v50 = (unsigned __int16)v22;
          v27 = *(_DWORD *)gpLeakTrackingAllocator;
          if ( !*(_DWORD *)gpLeakTrackingAllocator )
          {
            Pool2 = ExAllocatePool2(260LL, (unsigned __int16)v22, 1886221394LL);
            v29 = (WCHAR *)Pool2;
            if ( Pool2 )
              _InterlockedIncrement64((volatile signed __int64 *)v26 + 14);
            goto LABEL_56;
          }
          if ( v27 == 1 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7452u)
              && v24 + 16 >= v24 )
            {
              v30 = (WCHAR *)ExAllocatePool2(v46 & 0xFFFFFFFFFFFFFFFDuLL, v24 + 16, v43);
              v29 = v30;
              if ( v30 )
                _InterlockedIncrement64((volatile signed __int64 *)v26 + 14);
              v53 = v30;
              if ( !v30 || (*(_QWORD *)v30 = 1886221394LL, v29 = v30 + 8, v53 = v30 + 8, v30 == (WCHAR *)-16LL) )
                NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                  *((NSInstrumentation::CPointerHashTable **)v26 + 1),
                  (const void *)0x706D7452);
              goto LABEL_65;
            }
LABEL_78:
            v42 = 0LL;
            v29 = 0LL;
            goto LABEL_79;
          }
          if ( v27 != 2 )
            goto LABEL_78;
          v47 = 0LL;
          if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x706D7452u, &v47) )
          {
            v57[0] = &v46;
            v57[1] = &v43;
            Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                      v26,
                      v57,
                      &v50);
            v29 = (WCHAR *)Pool2;
LABEL_56:
            v42 = (WCHAR *)Pool2;
LABEL_79:
            DestinationString.Buffer = v29;
            if ( v29 )
            {
              RtlCopyUnicodeString(&DestinationString, &SourceString);
              p_DestinationString = &DestinationString;
              v12 = v40;
            }
            else
            {
              v12 = -1073741801;
              v40 = -1073741801;
            }
            v14 = (char *)Object;
            v17 = (_QWORD *)v51;
            v18 = v39;
            goto LABEL_14;
          }
          v32 = 0;
          if ( v24 < 0x1000 || (v24 & 0xFFF) != 0 )
          {
            v32 = 1;
            v24 += 16LL;
            v50 = v24;
          }
          v29 = (WCHAR *)ExAllocatePool2(v31, v24, 1886221394LL);
          if ( !v29 )
            goto LABEL_78;
          _InterlockedIncrement64((volatile signed __int64 *)v26 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( v32 && (unsigned __int64)((unsigned __int16)v29 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v26,
                                    v29,
                                    v47,
                                    BackTrace) )
            {
              v29 += 8;
LABEL_65:
              v42 = v29;
              goto LABEL_79;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v26,
                                       v29,
                                       v47,
                                       BackTrace) )
          {
            goto LABEL_65;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v26 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(v29);
          goto LABEL_78;
        }
        v39 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1251LL);
LABEL_85:
        ExRaiseAccessViolation();
      }
      v12 = -1073741637;
      v33 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v16) = 0;
      }
      v34 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_25;
      v35 = 42;
LABEL_99:
      WPP_RECORDER_AND_TRACE_SF_(
        v33->AttachedDevice,
        v16,
        (_DWORD)v34,
        (_DWORD)gRimLog,
        3,
        1,
        v35,
        (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
LABEL_25:
      *((_QWORD *)v14 + 14) = 0LL;
      ExReleasePushLockExclusiveEx(v14 + 104, 0LL);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v14);
      goto LABEL_26;
    }
    v14 = (char *)Object;
    if ( KeGetCurrentThread() == *((struct _KTHREAD **)Object + 5) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v16) = 0;
      }
      v36 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v36) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          (_DWORD)v36,
          (_DWORD)gRimLog,
          3,
          1,
          43,
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
      }
      v12 = -1073741637;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v16) = 0;
      }
      v37 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v37) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          (_DWORD)v37,
          (_DWORD)gRimLog,
          3,
          1,
          44,
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
      }
      ++*((_DWORD *)v14 + 276);
      *((_QWORD *)v15 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v15, 0LL);
      KeLeaveCriticalRegion();
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v38);
      KeWaitForSingleObject(*((PVOID *)v14 + 137), UserRequest, 0, 0, 0LL);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v38);
      RIMLockExclusive(v15);
      v12 = -2147483631;
    }
    goto LABEL_25;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v10,
      (_DWORD)gRimLog,
      3,
      1,
      41,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  }
  return 3221225485LL;
}
