/*
 * XREFs of rimOnPnpArrived @ 0x1C00889C0
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C00872A8 (RIMDoOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00C7510 (RIMDirectStartStopDeviceRead.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C01A3530 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01A3C50 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 * Callees:
 *     RIMCloseDev @ 0x1C00308E4 (RIMCloseDev.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0031148 (RIMGetDeviceObjectPointer.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0087454 (RIMStartDeviceSpecificRead.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0088EF0 (RawInputManagerDeviceObjectReference.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C0088F68 (RIMRegisterForDeviceChangeNotifications.c)
 *     RIMOpenDev @ 0x1C0089058 (RIMOpenDev.c)
 *     RIMQueryDev @ 0x1C0089258 (RIMQueryDev.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C00893E4 (RIMDeliverDeviceResetRequest.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C0089624 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00BC2F4 (RimDeviceTypeToRimInputType.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1C019DE20 (RIMFreeDev.c)
 *     RIMIsRawInputActive @ 0x1C019DFB8 (RIMIsRawInputActive.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01C7784 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01C7854 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqqS @ 0x1C01C7E6C (WPP_RECORDER_AND_TRACE_SF_dqqS.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqS @ 0x1C01C8018 (WPP_RECORDER_AND_TRACE_SF_qqS.c)
 *     RIMIsTestSigningOn @ 0x1C01D16B8 (RIMIsTestSigningOn.c)
 */

__int64 __fastcall rimOnPnpArrived(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rbx
  __int64 v4; // rdi
  char v6; // si
  PDEVICE_OBJECT v7; // rcx
  int v8; // r8d
  int v9; // edx
  int v10; // r14d
  int v11; // ebx
  __int64 v12; // r8
  NTSTATUS v13; // r14d
  unsigned int v14; // eax
  bool v15; // zf
  int v16; // eax
  int v17; // edx
  int v18; // r8d
  int v20; // ebx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // r8
  PVOID v24; // r12
  PVOID *v25; // r14
  int v26; // eax
  int v27; // r8d
  int v28; // r9d
  int v29; // edx
  int v30; // edx
  void *v31; // rcx
  __int64 v32; // rax
  int v33; // ecx
  int v34; // edx
  int v35; // r8d
  __int64 v36; // rdx
  void *v37; // rcx
  NTSTATUS v38; // ebx
  void *v39; // rcx
  __int64 v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rcx
  int v43; // [rsp+20h] [rbp-79h]
  int v44; // [rsp+20h] [rbp-79h]
  int v45; // [rsp+20h] [rbp-79h]
  int HandleInformation; // [rsp+28h] [rbp-71h]
  int HandleInformationa; // [rsp+28h] [rbp-71h]
  int v48; // [rsp+38h] [rbp-61h]
  PVOID v49; // [rsp+60h] [rbp-39h] BYREF
  PVOID Object; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v51[6]; // [rsp+70h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+7h] BYREF
  int v53; // [rsp+A8h] [rbp+Fh]

  v3 = (void *)a3;
  v4 = a2;
  v6 = 1;
  if ( (*(_DWORD *)(a2 + 184) & 1) == 0 )
  {
    LODWORD(v49) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 337LL);
  }
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
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      18,
      (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids);
  *(_DWORD *)(v4 + 184) &= ~1u;
  if ( (*(_DWORD *)(v4 + 184) & 0x40) == 0 )
  {
    LOBYTE(v7) = *(_BYTE *)(v4 + 48);
    if ( (_BYTE)v7 != 3 )
    {
      v8 = 512;
      if ( v3 == (void *)-1LL )
      {
        v9 = 2;
        v51[0] = 48LL;
        v51[3] = 512LL;
        v51[2] = v4 + 208;
        v51[5] = &Handle;
        v10 = 1048577;
        v53 = 257;
        v11 = 2;
        v51[1] = 0LL;
        v51[4] = 0LL;
        Handle = (HANDLE)0x20000000CLL;
        if ( (_BYTE)v7 == 2 )
        {
          v10 = 1048579;
          if ( (*(_DWORD *)(v4 + 200) & 0x200) != 0 )
          {
            v11 = (unsigned int)RIMIsTestSigningOn(v7, 2LL, 512LL) != 0 ? 3 : 0;
          }
          else
          {
            v32 = *(_QWORD *)(v4 + 472);
            if ( !v32 || *(_DWORD *)(v32 + 24) == 6 )
            {
              v11 = 3;
            }
            else
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                LOBYTE(v9) = 0;
              }
              if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_qqS(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v9,
                  v8,
                  22,
                  v43,
                  HandleInformation,
                  22,
                  v48,
                  a1,
                  v4,
                  *(_QWORD *)(v4 + 216));
              }
            }
          }
        }
        v13 = RIMOpenDev(v4, (unsigned int)v51, v10, v11, v43);
        if ( v13 < 0 )
          goto LABEL_102;
      }
      else
      {
        Handle = 0LL;
        v13 = ObReferenceObjectByHandle(v3, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Handle, 0LL);
        *(_QWORD *)(v4 + 232) = Handle;
        if ( v13 < 0 )
          goto LABEL_102;
        *(_DWORD *)(v4 + 184) |= 0x40000u;
        *(_QWORD *)(v4 + 224) = v3;
      }
      if ( *(_BYTE *)(v4 + 48) == 2 || (v13 = RIMQueryDev(a1, v4), v13 >= 0) )
      {
        if ( (*(_DWORD *)(v4 + 184) & 0x20) != 0 || *(_QWORD *)(v4 + 248) )
          goto LABEL_22;
        if ( !*(_QWORD *)(a1 + 120) )
        {
          LODWORD(v49) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 526LL);
        }
        v44 = v4 + 248;
        v13 = RIMRegisterForDeviceChangeNotifications(v4, *(_QWORD *)(a1 + 120), v12, v4);
        if ( v13 >= 0 )
        {
          v13 = RawInputManagerDeviceObjectReference(*(_QWORD *)(v4 + 32));
          if ( v13 >= 0 )
          {
LABEL_22:
            RIMDeliverDeviceResetRequest((PVOID)v4);
            v14 = *(_DWORD *)(v4 + 184) & 0xFFFFFBFF;
            v15 = *(_BYTE *)(v4 + 48) == 2;
            *(_DWORD *)(v4 + 184) = v14;
            if ( !v15
              || (v33 = *(_DWORD *)(v4 + 200), (v33 & 0x80u) != 0)
              || (v33 & 0x100) != 0
              || (v33 & 0x200) != 0
              || (v14 & 0x10000) != 0
              || (unsigned int)RIMIsRawInputActive(v4) )
            {
              RIMLockExclusive(a1 + 760);
              v16 = *(_DWORD *)(v4 + 80);
              if ( (v16 & 1) != 0 )
                *(_DWORD *)(v4 + 80) = v16 | 2;
              else
                RIMStartDeviceSpecificRead((HANDLE *)a1, v4);
              *(_QWORD *)(a1 + 768) = 0LL;
              ExReleasePushLockExclusiveEx(a1 + 760, 0LL);
              KeLeaveCriticalRegion();
            }
            else
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                LOBYTE(v34) = 0;
              }
              if ( (_BYTE)v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v35) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_qqS(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v34,
                  v35,
                  23,
                  v44,
                  HandleInformation,
                  23,
                  v48,
                  a1,
                  v4,
                  *(_QWORD *)(v4 + 216));
              }
              RIMCloseDev(v4);
              if ( *(_QWORD *)(v4 + 248)
                && (unsigned int)dword_1C02C93D8 > 5
                && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL) )
              {
                v36 = *(unsigned __int8 *)(v4 + 48);
                Handle = *(HANDLE *)(v4 + 216);
                LODWORD(v49) = RimDeviceTypeToRimInputType(v4, v36);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                  (int)&dword_1C02C93D8,
                  (int)&dword_1C02971CB,
                  (__int64)&v49,
                  (__int64)&Handle);
              }
            }
LABEL_26:
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v17) = 0;
            }
            if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_qqd(
                WPP_GLOBAL_Control->AttachedDevice,
                v17,
                v18,
                (_DWORD)gRimLog,
                4,
                1,
                24,
                (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids,
                a1,
                v4,
                v13);
            }
            return (unsigned int)v13;
          }
        }
      }
LABEL_102:
      v37 = *(void **)(v4 + 248);
      v38 = v13;
      if ( v37 )
      {
        v13 = IoUnregisterPlugPlayNotification(v37);
        if ( v13 < 0 )
        {
          LODWORD(v49) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 633LL);
        }
        v39 = *(void **)(v4 + 32);
        *(_QWORD *)(v4 + 248) = 0LL;
        ObfDereferenceObject(v39);
      }
      if ( (unsigned int)dword_1C02C93D8 > 5 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL) )
      {
        v40 = *(unsigned __int8 *)(v4 + 48);
        LODWORD(v49) = v38;
        v41 = RimDeviceTypeToRimInputType(v4, v40);
        Object = *(PVOID *)(v4 + 216);
        Handle = (HANDLE)v41;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v42,
          &unk_1C029717A);
      }
      RIMCloseDev(v4);
      RIMFreeDev(a1, v4);
      LOBYTE(v4) = 0;
      goto LABEL_26;
    }
    v49 = 0LL;
    Object = 0LL;
    Handle = 0LL;
    v20 = RIMGetDeviceObjectPointer(
            (struct _UNICODE_STRING *)(v4 + 208),
            a2,
            a3,
            &Handle,
            &v49,
            (PDEVICE_OBJECT *)&Object);
    if ( v20 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v6 = 0;
      }
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v30 = 21;
        LOBYTE(v30) = v6;
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dqqS(
          WPP_GLOBAL_Control->AttachedDevice,
          v30,
          v21,
          v22,
          v45,
          HandleInformationa,
          21,
          v48,
          v20,
          a1,
          v4,
          *(_QWORD *)(v4 + 216));
      }
      v25 = (PVOID *)(v4 + 248);
    }
    else
    {
      ObfReferenceObject(Object);
      v24 = v49;
      *(_QWORD *)(v4 + 232) = v49;
      if ( !*(_QWORD *)(a1 + 120) )
      {
        LODWORD(v49) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 376LL);
      }
      v25 = (PVOID *)(v4 + 248);
      v26 = RIMRegisterForDeviceChangeNotifications(v4, *(_QWORD *)(a1 + 120), v23, v4);
      *(_QWORD *)(v4 + 232) = 0LL;
      v20 = v26;
      ObfDereferenceObject(v24);
      ObfDereferenceObject(Object);
      ZwClose(Handle);
      if ( v20 < 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v6 = 0;
        }
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v29 = 20;
          LOBYTE(v29) = v6;
          LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_dqqS(
            WPP_GLOBAL_Control->AttachedDevice,
            v29,
            v27,
            v28,
            v4 + 248,
            HandleInformationa,
            20,
            v48,
            v20,
            a1,
            v4,
            *(_QWORD *)(v4 + 216));
        }
      }
      else
      {
        v20 = RawInputManagerDeviceObjectReference(*(_QWORD *)(v4 + 32));
      }
      if ( v20 >= 0 )
        return (unsigned int)v20;
    }
    if ( *v25 )
    {
      v20 = IoUnregisterPlugPlayNotification(*v25);
      if ( v20 < 0 )
      {
        LODWORD(v49) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 421LL);
      }
      v31 = *(void **)(v4 + 32);
      *v25 = 0LL;
      ObfDereferenceObject(v31);
    }
    RIMCloseDev(v4);
    RIMFreeDev(a1, v4);
    return (unsigned int)v20;
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
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      19,
      (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids,
      a1,
      v4,
      0);
  }
  return 0LL;
}
