/*
 * XREFs of rimOnPnpArrived @ 0x1C004A09C
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C0047820 (RIMDirectStartStopDeviceRead.c)
 *     RIMDoOnPnpNotification @ 0x1C00A1E80 (RIMDoOnPnpNotification.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0181990 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0182000 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C004AB80 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     RIMOpenDev @ 0x1C004AC3C (RIMOpenDev.c)
 *     RIMStartDeviceSpecificRead @ 0x1C004AF3C (RIMStartDeviceSpecificRead.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C004DFA0 (RawInputManagerDeviceObjectReference.c)
 *     RIMCloseDev @ 0x1C004E108 (RIMCloseDev.c)
 *     RIMQueryDev @ 0x1C009EDA4 (RIMQueryDev.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00A1D50 (RIMGetDeviceObjectPointer.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A2040 (RimDeviceTypeToRimInputType.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C00BEAB0 (RIMDeliverDeviceResetRequest.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C00C33C0 (RIMRegisterForDeviceChangeNotifications.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     RIMIsRawInputActive @ 0x1C00DBE44 (RIMIsRawInputActive.c)
 *     RIMFreeDev @ 0x1C017C8C0 (RIMFreeDev.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01A0A9C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01A0C78 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqqS @ 0x1C01A15BC (WPP_RECORDER_AND_TRACE_SF_dqqS.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqS @ 0x1C01A1768 (WPP_RECORDER_AND_TRACE_SF_qqS.c)
 *     RIMIsTestSigningOn @ 0x1C01A82A8 (RIMIsTestSigningOn.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpArrived(__int64 a1, __int64 a2, void *a3)
{
  char v3; // si
  void *v4; // rbx
  __int64 v5; // rdi
  PDEVICE_OBJECT v7; // rcx
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // r14d
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  NTSTATUS v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // ecx
  bool v19; // zf
  int v20; // edx
  __int64 v21; // r8
  NTSTATUS v23; // ebx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rcx
  __int64 v27; // r8
  PVOID v28; // r14
  __int64 v29; // rdx
  NTSTATUS v30; // eax
  int v31; // r8d
  int v32; // r9d
  int v33; // edx
  int v34; // edx
  void *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  void *v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  int v42; // edx
  int v43; // r8d
  __int64 v44; // rdx
  void *v45; // rcx
  NTSTATUS v46; // ebx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  void *v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // rcx
  int v55; // [rsp+20h] [rbp-79h]
  int v56; // [rsp+20h] [rbp-79h]
  int HandleInformation; // [rsp+28h] [rbp-71h]
  int HandleInformationa; // [rsp+28h] [rbp-71h]
  int v59; // [rsp+38h] [rbp-61h]
  PVOID Object; // [rsp+60h] [rbp-39h] BYREF
  PVOID v61; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v62[6]; // [rsp+70h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+7h] BYREF
  int v64; // [rsp+A8h] [rbp+Fh]

  v3 = 1;
  v4 = a3;
  v5 = a2;
  if ( (*(_DWORD *)(a2 + 184) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      (_DWORD)gRimLog,
      4,
      1,
      16,
      (__int64)&WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids);
  *(_DWORD *)(v5 + 184) &= ~1u;
  if ( (*(_DWORD *)(v5 + 184) & 0x40) == 0 )
  {
    LOBYTE(v7) = *(_BYTE *)(v5 + 48);
    if ( (_BYTE)v7 != 3 )
    {
      v8 = 2;
      v9 = 512;
      if ( v4 == (void *)-1LL )
      {
        v62[0] = 48LL;
        v62[2] = v5 + 208;
        v62[5] = &Handle;
        v10 = 1048577;
        v62[3] = 512LL;
        v11 = 2;
        v64 = 257;
        v62[1] = 0LL;
        v62[4] = 0LL;
        Handle = (HANDLE)0x20000000CLL;
        if ( (_BYTE)v7 == 2 )
        {
          v10 = 1048579;
          if ( (*(_DWORD *)(v5 + 200) & 0x200) != 0 )
          {
            v11 = (unsigned int)RIMIsTestSigningOn(v7, 2LL, 512LL) != 0 ? 3 : 0;
          }
          else
          {
            v40 = *(_QWORD *)(v5 + 472);
            if ( !v40 || *(_DWORD *)(v40 + 24) == 6 )
            {
              v11 = 3;
            }
            else
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                LOBYTE(v8) = 0;
              }
              if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_qqS(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v8,
                  v9,
                  20,
                  v55,
                  HandleInformation,
                  20,
                  v59,
                  a1,
                  v5,
                  *(_QWORD *)(v5 + 216));
              }
            }
          }
        }
        v14 = RIMOpenDev(v5, v62, v10, v11);
        if ( v14 < 0 )
          goto LABEL_98;
      }
      else
      {
        Handle = 0LL;
        v14 = ObReferenceObjectByHandle(v4, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Handle, 0LL);
        *(_QWORD *)(v5 + 232) = Handle;
        if ( v14 < 0 )
          goto LABEL_98;
        *(_DWORD *)(v5 + 184) |= 0x40000u;
        *(_QWORD *)(v5 + 224) = v4;
      }
      if ( *(_BYTE *)(v5 + 48) == 2 || (v14 = RIMQueryDev(a1, v5), v14 >= 0) )
      {
        if ( (*(_DWORD *)(v5 + 184) & 0x20) != 0 || *(_QWORD *)(v5 + 248) )
          goto LABEL_22;
        v15 = *(_QWORD *)(a1 + 120);
        if ( !v15 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, 0LL, v13);
          v15 = *(_QWORD *)(a1 + 120);
        }
        v55 = v5 + 248;
        v14 = RIMRegisterForDeviceChangeNotifications(v5, v15, v13, v5);
        if ( v14 >= 0 )
        {
          v14 = RawInputManagerDeviceObjectReference(*(_QWORD *)(v5 + 32));
          if ( v14 >= 0 )
          {
LABEL_22:
            RIMDeliverDeviceResetRequest((PVOID)v5);
            v18 = *(_DWORD *)(v5 + 184) & 0xFFFFFBFF;
            v19 = *(_BYTE *)(v5 + 48) == 2;
            *(_DWORD *)(v5 + 184) = v18;
            if ( !v19
              || (v41 = *(_DWORD *)(v5 + 200), (v41 & 0x80u) != 0)
              || (v41 & 0x100) != 0
              || (v41 & 0x200) != 0
              || (v18 & 0x10000) != 0
              || (unsigned int)RIMIsRawInputActive(v5, v16, v17) )
            {
              RIMLockExclusive(a1 + 792);
              RIMStartDeviceSpecificRead(a1, v5);
              *(_QWORD *)(a1 + 800) = 0LL;
              ExReleasePushLockExclusiveEx(a1 + 792, 0LL);
              KeLeaveCriticalRegion();
            }
            else
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v42) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                LOBYTE(v42) = 0;
              }
              if ( (_BYTE)v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v43) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_qqS(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v42,
                  v43,
                  21,
                  v55,
                  HandleInformation,
                  21,
                  v59,
                  a1,
                  v5,
                  *(_QWORD *)(v5 + 216));
              }
              RIMCloseDev(v5);
              if ( *(_QWORD *)(v5 + 248)
                && (unsigned int)dword_1C028D6F0 > 5
                && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL) )
              {
                v44 = *(unsigned __int8 *)(v5 + 48);
                Handle = *(HANDLE *)(v5 + 216);
                LODWORD(Object) = RimDeviceTypeToRimInputType(v5, v44, v21);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                  (int)&dword_1C028D6F0,
                  (int)&dword_1C025DC97,
                  (__int64)&Object,
                  (__int64)&Handle);
              }
            }
LABEL_24:
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v20) = 0;
            }
            if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_qqd(
                WPP_GLOBAL_Control->AttachedDevice,
                v20,
                v21,
                (_DWORD)gRimLog,
                4,
                1,
                22,
                (__int64)&WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids,
                a1,
                v5,
                v14);
            }
            return (unsigned int)v14;
          }
        }
      }
LABEL_98:
      v45 = *(void **)(v5 + 248);
      v46 = v14;
      if ( v45 )
      {
        v14 = IoUnregisterPlugPlayNotification(v45);
        if ( v14 < 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v48, v47, v49);
        v50 = *(void **)(v5 + 32);
        *(_QWORD *)(v5 + 248) = 0LL;
        ObfDereferenceObject(v50);
      }
      if ( (unsigned int)dword_1C028D6F0 > 5 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL) )
      {
        v52 = *(unsigned __int8 *)(v5 + 48);
        LODWORD(Object) = v46;
        v53 = RimDeviceTypeToRimInputType(v5, v52, v51);
        v61 = *(PVOID *)(v5 + 216);
        Handle = (HANDLE)v53;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v54,
          &unk_1C025DCE3);
      }
      RIMCloseDev(v5);
      RIMFreeDev(a1, v5);
      LOBYTE(v5) = 0;
      goto LABEL_24;
    }
    v61 = 0LL;
    Object = 0LL;
    Handle = 0LL;
    v23 = RIMGetDeviceObjectPointer(
            (int)v5 + 208,
            a2,
            (_DWORD)a3,
            (unsigned int)&Handle,
            (__int64)&v61,
            (__int64)&Object);
    if ( v23 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v3 = 0;
      }
      if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v34 = 19;
        LOBYTE(v34) = v3;
        LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dqqS(
          WPP_GLOBAL_Control->AttachedDevice,
          v34,
          v24,
          v25,
          v56,
          HandleInformationa,
          19,
          v59,
          v23,
          a1,
          v5,
          *(_QWORD *)(v5 + 216));
      }
    }
    else
    {
      ObfReferenceObject(Object);
      v28 = v61;
      *(_QWORD *)(v5 + 232) = v61;
      v29 = *(_QWORD *)(a1 + 120);
      if ( !v29 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, 0LL, v27);
        v29 = *(_QWORD *)(a1 + 120);
      }
      v30 = RIMRegisterForDeviceChangeNotifications(v5, v29, v27, v5);
      *(_QWORD *)(v5 + 232) = 0LL;
      v23 = v30;
      ObfDereferenceObject(v28);
      ObfDereferenceObject(Object);
      ZwClose(Handle);
      if ( v23 < 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v3 = 0;
        }
        if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v33 = 18;
          LOBYTE(v33) = v3;
          LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_dqqS(
            WPP_GLOBAL_Control->AttachedDevice,
            v33,
            v31,
            v32,
            v5 + 248,
            HandleInformationa,
            18,
            v59,
            v23,
            a1,
            v5,
            *(_QWORD *)(v5 + 216));
        }
      }
      else
      {
        v23 = RawInputManagerDeviceObjectReference(*(_QWORD *)(v5 + 32));
      }
      if ( v23 >= 0 )
        return (unsigned int)v23;
    }
    v35 = *(void **)(v5 + 248);
    if ( v35 )
    {
      v23 = IoUnregisterPlugPlayNotification(v35);
      if ( v23 < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v38);
      v39 = *(void **)(v5 + 32);
      *(_QWORD *)(v5 + 248) = 0LL;
      ObfDereferenceObject(v39);
    }
    RIMCloseDev(v5);
    RIMFreeDev(a1, v5);
    return (unsigned int)v23;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qqd(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      (_DWORD)gRimLog,
      4,
      1,
      17,
      (__int64)&WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids,
      a1,
      v5,
      0);
  }
  return 0LL;
}
