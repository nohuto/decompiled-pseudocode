/*
 * XREFs of RIMAddInjectionDeviceOfType @ 0x1C0004880
 * Callers:
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00046D4 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C019C4FC (RIMIDECreatePseudoHIDDevice.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     DeviceTypeToRimInputType @ 0x1C0044E70 (DeviceTypeToRimInputType.c)
 *     RIMCreateDev @ 0x1C0045A34 (RIMCreateDev.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C005A46C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C005A64C (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00B736C (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     RIMFreeDev @ 0x1C017C8C0 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddInjectionDeviceOfType(
        __int64 a1,
        struct _UNICODE_STRING *a2,
        unsigned int a3,
        _OWORD *a4,
        int a5,
        _QWORD *a6)
{
  int v9; // edx
  int v10; // r8d
  int v11; // edx
  int v12; // edi
  int v13; // r8d
  PVOID *v14; // rsi
  char *v15; // r15
  int v16; // edx
  _QWORD *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v21; // rcx
  WCHAR *Buffer; // rdx
  ULONG64 v23; // r8
  _BYTE **v24; // rax
  __int64 Length; // rdx
  PVOID v26; // rsi
  unsigned __int64 i; // rcx
  char v28; // r14
  __int64 Pool2; // rdi
  PDEVICE_OBJECT v30; // rcx
  _UNKNOWN **v31; // r8
  __int16 v32; // ax
  _UNKNOWN **v33; // r8
  _UNKNOWN **v34; // r8
  _BYTE v35[4]; // [rsp+50h] [rbp-228h] BYREF
  int v36; // [rsp+54h] [rbp-224h]
  __int64 v37; // [rsp+58h] [rbp-220h] BYREF
  unsigned int v38; // [rsp+60h] [rbp-218h]
  PVOID Object; // [rsp+68h] [rbp-210h] BYREF
  __int64 v40; // [rsp+70h] [rbp-208h]
  int v41; // [rsp+78h] [rbp-200h]
  int v42; // [rsp+80h] [rbp-1F8h] BYREF
  __int64 v43; // [rsp+88h] [rbp-1F0h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+90h] [rbp-1E8h]
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-1E0h] BYREF
  _QWORD *v46; // [rsp+A8h] [rbp-1D0h]
  __int128 v47; // [rsp+B0h] [rbp-1C8h]
  UNICODE_STRING SourceString; // [rsp+C0h] [rbp-1B8h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-1A8h] BYREF
  __int64 v50; // [rsp+D8h] [rbp-1A0h]
  unsigned __int64 v51; // [rsp+E0h] [rbp-198h]
  __int128 v52; // [rsp+F0h] [rbp-188h]
  PVOID BackTrace[20]; // [rsp+100h] [rbp-178h] BYREF
  __int64 v54[18]; // [rsp+1A0h] [rbp-D8h] BYREF

  v38 = a3;
  v46 = a6;
  LODWORD(v37) = a3;
  v43 = (__int64)a6;
  Object = 0LL;
  memset(v54, 0, sizeof(v54));
  LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
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
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  }
  if ( a4 )
  {
    v12 = RawInputManagerObjectResolveHandle(a1, 3LL, 0LL, &Object);
    v36 = v12;
    if ( v12 < 0 )
    {
      v12 = -1073741816;
LABEL_25:
      LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v13,
          (_DWORD)gRimLog,
          4,
          1,
          46,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
          v12);
      }
      return (unsigned int)v12;
    }
    v14 = (PVOID *)Object;
    v15 = (char *)Object + 104;
    RIMLockExclusive((char *)Object + 104);
    if ( bRimDispositionNormal((struct RawInputManagerObject *)v14) )
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(v38) & *((_DWORD *)v14 + 21)) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        DestinationString = 0LL;
        if ( !a5 )
        {
          p_DestinationString = a2;
          *(_OWORD *)v54 = *a4;
          *(_OWORD *)&v54[2] = a4[1];
          *(_OWORD *)&v54[4] = a4[2];
          *(_OWORD *)&v54[6] = a4[3];
          *(_OWORD *)&v54[8] = a4[4];
          *(_OWORD *)&v54[10] = a4[5];
          *(_OWORD *)&v54[12] = a4[6];
          *(_OWORD *)&v54[14] = a4[7];
          *(_OWORD *)&v54[16] = a4[8];
          v17 = (_QWORD *)v43;
LABEL_13:
          if ( v12 >= 0 )
          {
            v37 = 0LL;
            v12 = RIMCreateDev(v14, 1, (__int64)v54, (__int64)&v37);
            v36 = v12;
            if ( v12 >= 0 )
            {
              if ( a5 )
              {
                if ( (unsigned __int64)v17 >= MmUserProbeAddress )
                  v17 = (_QWORD *)MmUserProbeAddress;
                *v17 = *(_QWORD *)(v37 + 16);
                v18 = v37;
              }
              else
              {
                v18 = v37;
                if ( (v54[1] & 0x400000000LL) != 0 )
                  v19 = *(_QWORD *)(v37 + 24);
                else
                  v19 = *(_QWORD *)(v37 + 16);
                *v46 = v19;
              }
              if ( v14[108] || *((_DWORD *)v14 + 272) )
                *(_DWORD *)(v18 + 184) |= 0x80000u;
            }
          }
          if ( DestinationString.Buffer )
            NSInstrumentation::CLeakTrackingAllocator::Free(
              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
              DestinationString.Buffer);
          goto LABEL_24;
        }
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (struct _UNICODE_STRING *)MmUserProbeAddress;
        v21 = *(unsigned int *)&a2->Length;
        v41 = v21;
        *(_DWORD *)&SourceString.Length = v21;
        Buffer = a2->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v23 = (ULONG64)Buffer + (unsigned __int16)v21 + 2;
        v24 = (_BYTE **)MmUserProbeAddress;
        if ( v23 < MmUserProbeAddress && (unsigned __int16)v21 <= HIWORD(v41) )
        {
          if ( (v21 & 1) != 0 )
            goto LABEL_53;
          if ( v23 > (unsigned __int64)Buffer )
            goto LABEL_55;
        }
        if ( (v21 & 1) == 0 )
        {
LABEL_54:
          **v24 = 0;
LABEL_55:
          DestinationString.MaximumLength = SourceString.Length;
          DestinationString.Length = SourceString.Length;
          Length = SourceString.Length;
          v42 = 1886221394;
          v49 = 260LL;
          v26 = gpLeakTrackingAllocator;
          *(_QWORD *)&v52 = &v49;
          *((_QWORD *)&v52 + 1) = &v42;
          v47 = v52;
          v50 = SourceString.Length;
          if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x706D7452) != 0x706D7452 )
          {
LABEL_73:
            Pool2 = ExAllocatePool2(*(_QWORD *)v47 & 0xFFFFFFFFFFFFFFFDuLL, SourceString.Length);
            v40 = Pool2;
LABEL_74:
            DestinationString.Buffer = (PWSTR)Pool2;
            if ( Pool2 )
            {
              RtlCopyUnicodeString(&DestinationString, &SourceString);
              p_DestinationString = &DestinationString;
              v12 = v36;
            }
            else
            {
              v12 = -1073741801;
              v36 = -1073741801;
            }
            v14 = (PVOID *)Object;
            v17 = (_QWORD *)v43;
            goto LABEL_13;
          }
          for ( i = 0LL; ; ++i )
          {
            v51 = i;
            if ( i >= *((unsigned int *)gpLeakTrackingAllocator + 11) )
              goto LABEL_73;
            if ( *((_DWORD *)gpLeakTrackingAllocator + i) == 1886221394 )
              break;
          }
          v28 = 0;
          if ( SourceString.Length < 0x1000uLL || (SourceString.Length & 0xFFF) != 0 )
          {
            v28 = 1;
            Length = SourceString.Length + 16LL;
            v50 = Length;
          }
          Pool2 = ExAllocatePool2(*(_QWORD *)v47 & 0xFFFFFFFFFFFFFFFDuLL, Length);
          if ( Pool2 )
          {
            memset(BackTrace, 0, sizeof(BackTrace));
            RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
            if ( v28 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
            {
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v26,
                                      Pool2,
                                      BackTrace) )
              {
                Pool2 += 16LL;
LABEL_69:
                v40 = Pool2;
                goto LABEL_74;
              }
            }
            else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                         v26,
                                         Pool2,
                                         BackTrace) )
            {
              goto LABEL_69;
            }
            ExFreePoolWithTag((PVOID)Pool2, 0);
          }
          Pool2 = 0LL;
          goto LABEL_69;
        }
LABEL_53:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, Buffer, v23);
        v24 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_54;
      }
      v12 = -1073741637;
      v30 = WPP_GLOBAL_Control;
      LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v31 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v32 = 42;
LABEL_91:
        WPP_RECORDER_AND_TRACE_SF_(
          v30->AttachedDevice,
          v16,
          (_DWORD)v31,
          (_DWORD)gRimLog,
          3,
          1,
          v32,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
      }
    }
    else
    {
      if ( *((_BYTE *)v14 + 82) )
      {
        v14 = (PVOID *)Object;
        if ( KeGetCurrentThread() == *((struct _KTHREAD **)Object + 5) )
        {
          LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          v33 = &WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v16,
              (_DWORD)v33,
              (_DWORD)gRimLog,
              3,
              1,
              43,
              (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
          }
          v12 = -1073741637;
        }
        else
        {
          LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          v34 = &WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v16,
              (_DWORD)v34,
              (_DWORD)gRimLog,
              3,
              1,
              44,
              (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
          }
          ++*((_DWORD *)v14 + 284);
          *((_QWORD *)v15 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v15, 0LL);
          KeLeaveCriticalRegion();
          LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v35);
          KeWaitForSingleObject(v14[141], UserRequest, 0, 0, 0LL);
          LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v35);
          RIMLockExclusive(v15);
          v12 = -2147483631;
        }
        goto LABEL_24;
      }
      v12 = -1073741637;
      v30 = WPP_GLOBAL_Control;
      LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v31 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v32 = 45;
        goto LABEL_91;
      }
    }
LABEL_24:
    v14[14] = 0LL;
    ExReleasePushLockExclusiveEx(v14 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v14);
    goto LABEL_25;
  }
  LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
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
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  }
  return 3221225485LL;
}
