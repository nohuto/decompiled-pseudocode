/*
 * XREFs of RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0182000
 * Callers:
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00D22D0 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     DeviceTypeToRimInputType @ 0x1C0044E70 (DeviceTypeToRimInputType.c)
 *     RIMCreateDev @ 0x1C0045A34 (RIMCreateDev.c)
 *     rimOnPnpArrived @ 0x1C004A09C (rimOnPnpArrived.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     rimDoRimDevChange @ 0x1C00A1F28 (rimDoRimDevChange.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00B736C (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     RIMFreeDev @ 0x1C017C8C0 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
        char *a1,
        struct _UNICODE_STRING *a2,
        unsigned int a3,
        void *a4,
        int a5,
        _QWORD *a6)
{
  struct _UNICODE_STRING *v7; // r14
  int v10; // edx
  int v11; // edi
  int v12; // r8d
  CDeviceIdentity **v13; // rsi
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rcx
  WCHAR *Buffer; // rdx
  ULONG64 v18; // r8
  _BYTE **v19; // rax
  __int64 Length; // rdx
  PVOID v21; // rsi
  unsigned __int64 i; // rcx
  char v23; // r14
  __int64 Pool2; // rdi
  _QWORD *v25; // r8
  PDEVICE_OBJECT v26; // rcx
  __int16 v27; // ax
  int v28; // [rsp+50h] [rbp-168h]
  __int64 v29; // [rsp+58h] [rbp-160h] BYREF
  PVOID Object; // [rsp+60h] [rbp-158h] BYREF
  __int64 v31; // [rsp+68h] [rbp-150h]
  int v32; // [rsp+70h] [rbp-148h]
  int v33; // [rsp+78h] [rbp-140h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp-138h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-130h] BYREF
  __int128 v36; // [rsp+A0h] [rbp-118h]
  UNICODE_STRING SourceString; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-F8h] BYREF
  __int64 v39; // [rsp+C8h] [rbp-F0h]
  unsigned __int64 v40; // [rsp+D0h] [rbp-E8h]
  __int128 v41; // [rsp+E0h] [rbp-D8h]
  PVOID BackTrace[25]; // [rsp+F0h] [rbp-C8h] BYREF
  unsigned int v43; // [rsp+1D0h] [rbp+18h]

  v43 = a3;
  v7 = a2;
  Object = 0LL;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
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
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  }
  if ( !a4 )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        a3,
        (_DWORD)gRimLog,
        4,
        1,
        36,
        (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
        13);
    }
    return 3221225485LL;
  }
  v11 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  v28 = v11;
  if ( v11 >= 0 )
  {
    v13 = (CDeviceIdentity **)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( bRimDispositionNormal((struct RawInputManagerObject *)v13) )
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(v43) & *((_DWORD *)v13 + 21)) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        DestinationString = 0LL;
        if ( !a5 )
        {
          p_DestinationString = v7;
LABEL_57:
          if ( v11 >= 0 )
          {
            v29 = 0LL;
            v11 = RIMCreateDev(v13, v43, (__int64)p_DestinationString, 1LL, 0, 0LL, (struct _UNICODE_STRING **)&v29);
            if ( v11 >= 0 )
            {
              *(_DWORD *)(v29 + 184) |= 1u;
              v11 = rimOnPnpArrived((__int64)v13, v29, a4);
              if ( v11 >= 0 )
              {
                rimDoRimDevChange((__int64)v13, v29, 2LL);
                v25 = a6;
                if ( a6 )
                {
                  if ( a5 )
                  {
                    if ( (unsigned __int64)a6 >= MmUserProbeAddress )
                      v25 = (_QWORD *)MmUserProbeAddress;
                    *v25 = *(_QWORD *)(v29 + 16);
                  }
                  else
                  {
                    *a6 = *(_QWORD *)(v29 + 16);
                  }
                }
              }
              if ( v11 < 0 )
                RIMFreeDev((__int64)v13, v29);
            }
          }
          if ( DestinationString.Buffer )
            NSInstrumentation::CLeakTrackingAllocator::Free(
              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
              (char *)DestinationString.Buffer);
          goto LABEL_87;
        }
        if ( (unsigned __int64)v7 >= MmUserProbeAddress )
          v7 = (struct _UNICODE_STRING *)MmUserProbeAddress;
        v16 = *(unsigned int *)&v7->Length;
        v32 = v16;
        *(_DWORD *)&SourceString.Length = v16;
        Buffer = v7->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v18 = (ULONG64)Buffer + (unsigned __int16)v16 + 2;
        v19 = (_BYTE **)MmUserProbeAddress;
        if ( v18 < MmUserProbeAddress && (unsigned __int16)v16 <= HIWORD(v32) )
        {
          if ( (v16 & 1) != 0 )
            goto LABEL_33;
          if ( v18 > (unsigned __int64)Buffer )
            goto LABEL_35;
        }
        if ( (v16 & 1) == 0 )
        {
LABEL_34:
          **v19 = 0;
LABEL_35:
          DestinationString.MaximumLength = SourceString.Length;
          DestinationString.Length = SourceString.Length;
          Length = SourceString.Length;
          v33 = 1886221394;
          v38 = 260LL;
          v21 = gpLeakTrackingAllocator;
          *(_QWORD *)&v41 = &v38;
          *((_QWORD *)&v41 + 1) = &v33;
          v36 = v41;
          v39 = SourceString.Length;
          if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x706D7452) != 0x706D7452 )
          {
LABEL_52:
            Pool2 = ExAllocatePool2(*(_QWORD *)v36 & 0xFFFFFFFFFFFFFFFDuLL, SourceString.Length);
            v31 = Pool2;
LABEL_53:
            DestinationString.Buffer = (PWSTR)Pool2;
            if ( Pool2 )
            {
              RtlCopyUnicodeString(&DestinationString, &SourceString);
              p_DestinationString = &DestinationString;
              v11 = v28;
            }
            else
            {
              v11 = -1073741801;
            }
            v13 = (CDeviceIdentity **)Object;
            goto LABEL_57;
          }
          for ( i = 0LL; ; ++i )
          {
            v40 = i;
            if ( i >= *((unsigned int *)gpLeakTrackingAllocator + 11) )
              goto LABEL_52;
            if ( *((_DWORD *)gpLeakTrackingAllocator + i) == 1886221394 )
              break;
          }
          v23 = 0;
          if ( SourceString.Length < 0x1000uLL || (SourceString.Length & 0xFFF) != 0 )
          {
            v23 = 1;
            Length = SourceString.Length + 16LL;
            v39 = Length;
          }
          Pool2 = ExAllocatePool2(*(_QWORD *)v36 & 0xFFFFFFFFFFFFFFFDuLL, Length);
          if ( Pool2 )
          {
            memset(BackTrace, 0, 0xA0uLL);
            RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
            if ( v23 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
            {
              if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                     (__int64)v21,
                     (const void *)Pool2,
                     (struct NSInstrumentation::CBackTrace *)BackTrace) )
              {
                Pool2 += 16LL;
                goto LABEL_44;
              }
            }
            else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                        (__int64)v21,
                        Pool2,
                        (struct NSInstrumentation::CBackTrace *)BackTrace) )
            {
              goto LABEL_44;
            }
            ExFreePoolWithTag((PVOID)Pool2, 0);
          }
          Pool2 = 0LL;
LABEL_44:
          v31 = Pool2;
          goto LABEL_53;
        }
LABEL_33:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, Buffer, v18);
        v19 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_34;
      }
      v11 = -1073741637;
      v26 = WPP_GLOBAL_Control;
      LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_87:
        v13[14] = 0LL;
        ExReleasePushLockExclusiveEx(v13 + 13, 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v13);
        goto LABEL_88;
      }
      v27 = 37;
    }
    else
    {
      v11 = -1073741637;
      v26 = WPP_GLOBAL_Control;
      LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_87;
      v27 = 38;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v26->AttachedDevice,
      v14,
      v15,
      (_DWORD)gRimLog,
      3,
      1,
      v27,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
    goto LABEL_87;
  }
LABEL_88:
  LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v12,
      (_DWORD)gRimLog,
      4,
      1,
      39,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      v11);
  }
  return (unsigned int)v11;
}
