/*
 * XREFs of rimOnPnpArrived @ 0x1C0076A78
 * Callers:
 *     RIMAddNonPnpDeviceOfType @ 0x1C0175C80 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01763A0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0176DF0 (RIMDirectStartStopDeviceRead.c)
 *     RIMDoOnPnpNotification @ 0x1C0199BF8 (RIMDoOnPnpNotification.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0005B28 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     RIMGetDeviceObjectPointer @ 0x1C006E118 (RIMGetDeviceObjectPointer.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0078960 (RawInputManagerDeviceObjectReference.c)
 *     RIMStartDeviceSpecificRead @ 0x1C00789D8 (RIMStartDeviceSpecificRead.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C0079F44 (RIMRegisterForDeviceChangeNotifications.c)
 *     RIMOpenDev @ 0x1C007A138 (RIMOpenDev.c)
 *     RIMCloseDev @ 0x1C007AB28 (RIMCloseDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C007ABD0 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     RIMQueryDev @ 0x1C00B9950 (RIMQueryDev.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C00BA71C (RIMDeliverDeviceResetRequest.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1C0170F70 (RIMFreeDev.c)
 *     RIMIsRawInputActive @ 0x1C0171108 (RIMIsRawInputActive.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0199A54 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C0199B24 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqqS @ 0x1C019A2AC (WPP_RECORDER_AND_TRACE_SF_dqqS.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqS @ 0x1C019A458 (WPP_RECORDER_AND_TRACE_SF_qqS.c)
 *     RIMIsTestSigningOn @ 0x1C01A35C4 (RIMIsTestSigningOn.c)
 */

__int64 __fastcall rimOnPnpArrived(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rbx
  __int64 v4; // rdi
  char v6; // si
  PDEVICE_OBJECT v7; // rcx
  int v8; // edx
  int v9; // r14d
  int v10; // ebx
  __int64 v11; // r8
  NTSTATUS v12; // r14d
  unsigned int v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // r8d
  int v18; // ebx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // r8
  PVOID v22; // r12
  PVOID *v23; // r14
  int v24; // eax
  int v25; // r8d
  int v26; // r9d
  int v27; // edx
  int v28; // edx
  void *v29; // rcx
  __int64 v30; // rax
  int v31; // ecx
  int v32; // edx
  int v33; // r8d
  int v34; // edx
  void *v35; // rcx
  NTSTATUS v36; // ebx
  void *v37; // rcx
  int v38; // edx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // [rsp+20h] [rbp-79h]
  PVOID *p_Object; // [rsp+20h] [rbp-79h]
  int v43; // [rsp+20h] [rbp-79h]
  int HandleInformation; // [rsp+28h] [rbp-71h]
  int HandleInformationa; // [rsp+28h] [rbp-71h]
  int v46; // [rsp+38h] [rbp-61h]
  PVOID v47; // [rsp+60h] [rbp-39h] BYREF
  PVOID Object; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v49[6]; // [rsp+70h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+7h] BYREF
  int v51; // [rsp+A8h] [rbp+Fh]

  v3 = (void *)a3;
  v4 = a2;
  v6 = 1;
  if ( (*(_DWORD *)(a2 + 184) & 1) == 0 )
  {
    LODWORD(v47) = 0x20000;
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
      (__int64)&WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids);
  *(_DWORD *)(v4 + 184) &= ~1u;
  if ( (*(_DWORD *)(v4 + 184) & 0x40) == 0 )
  {
    LOBYTE(v7) = *(_BYTE *)(v4 + 48);
    if ( (_BYTE)v7 != 3 )
    {
      v8 = 512;
      if ( v3 == (void *)-1LL )
      {
        v49[0] = 48LL;
        v49[2] = v4 + 208;
        v49[5] = &Handle;
        v9 = 1048577;
        v49[3] = 512LL;
        v10 = 2;
        v51 = 257;
        v49[1] = 0LL;
        v49[4] = 0LL;
        Handle = (HANDLE)0x20000000CLL;
        if ( (_BYTE)v7 == 2 )
        {
          v9 = 1048579;
          if ( (*(_DWORD *)(v4 + 200) & 0x200) != 0 )
          {
            v10 = (unsigned int)RIMIsTestSigningOn(v7, 512LL, a3) != 0 ? 3 : 0;
          }
          else
          {
            v30 = *(_QWORD *)(v4 + 472);
            if ( !v30 || *(_DWORD *)(v30 + 24) == 6 )
            {
              v10 = 3;
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
                LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_qqS(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v8,
                  a3,
                  22,
                  v41,
                  HandleInformation,
                  22,
                  v46,
                  a1,
                  v4,
                  *(_QWORD *)(v4 + 216));
              }
            }
          }
        }
        v12 = RIMOpenDev(v4, (unsigned int)v49, v9, v10, v41);
        if ( v12 < 0 )
          goto LABEL_102;
      }
      else
      {
        Handle = 0LL;
        v12 = ObReferenceObjectByHandle(v3, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Handle, 0LL);
        *(_QWORD *)(v4 + 232) = Handle;
        if ( v12 < 0 )
          goto LABEL_102;
        *(_DWORD *)(v4 + 184) |= 0x40000u;
        *(_QWORD *)(v4 + 224) = v3;
      }
      if ( *(_BYTE *)(v4 + 48) == 2 || (v12 = RIMQueryDev(a1, v4), v12 >= 0) )
      {
        if ( (*(_DWORD *)(v4 + 184) & 0x20) != 0 || *(_QWORD *)(v4 + 248) )
          goto LABEL_22;
        if ( !*(_QWORD *)(a1 + 120) )
        {
          LODWORD(v47) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 526LL);
        }
        LODWORD(p_Object) = v4 + 248;
        v12 = RIMRegisterForDeviceChangeNotifications(v4, *(_QWORD *)(a1 + 120), v11, v4);
        if ( v12 >= 0 )
        {
          v12 = RawInputManagerDeviceObjectReference(*(_QWORD *)(v4 + 32));
          if ( v12 >= 0 )
          {
LABEL_22:
            RIMDeliverDeviceResetRequest((PVOID)v4);
            v13 = *(_DWORD *)(v4 + 184) & 0xFFFFFBFF;
            *(_DWORD *)(v4 + 184) = v13;
            if ( *(_BYTE *)(v4 + 48) != 2
              || (v31 = *(_DWORD *)(v4 + 200), (v31 & 0x80u) != 0)
              || (v31 & 0x100) != 0
              || (v31 & 0x200) != 0
              || (v13 & 0x10000) != 0
              || (unsigned int)RIMIsRawInputActive(v4) )
            {
              RIMLockExclusive(a1 + 760);
              v14 = *(_DWORD *)(v4 + 80);
              if ( (v14 & 1) != 0 )
                *(_DWORD *)(v4 + 80) = v14 | 2;
              else
                RIMStartDeviceSpecificRead(a1, v4);
              *(_QWORD *)(a1 + 768) = 0LL;
              ExReleasePushLockExclusiveEx(a1 + 760, 0LL);
              KeLeaveCriticalRegion();
            }
            else
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v32) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                LOBYTE(v32) = 0;
              }
              if ( (_BYTE)v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_qqS(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v32,
                  v33,
                  23,
                  (_DWORD)p_Object,
                  HandleInformation,
                  23,
                  v46,
                  a1,
                  v4,
                  *(_QWORD *)(v4 + 216));
              }
              RIMCloseDev(v4);
              if ( *(_QWORD *)(v4 + 248)
                && (unsigned int)dword_1C02883D8 > 5
                && tlgKeywordOn((__int64)&dword_1C02883D8, 0x400000000000LL) )
              {
                v34 = *(unsigned __int8 *)(v4 + 48);
                Handle = *(HANDLE *)(v4 + 216);
                LODWORD(v47) = RimDeviceTypeToRimInputType(v4, v34);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                  (int)&dword_1C02883D8,
                  (int)&dword_1C0258AC5,
                  (__int64)&v47,
                  (__int64)&Handle);
              }
            }
LABEL_26:
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v15) = 0;
            }
            if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_qqd(
                WPP_GLOBAL_Control->AttachedDevice,
                v15,
                v16,
                (_DWORD)gRimLog,
                (_DWORD)p_Object,
                1,
                24,
                (__int64)&WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids,
                a1,
                v4,
                v12);
            }
            return (unsigned int)v12;
          }
        }
      }
LABEL_102:
      v35 = *(void **)(v4 + 248);
      v36 = v12;
      if ( v35 )
      {
        v12 = IoUnregisterPlugPlayNotification(v35);
        if ( v12 < 0 )
        {
          LODWORD(v47) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 631LL);
        }
        v37 = *(void **)(v4 + 32);
        *(_QWORD *)(v4 + 248) = 0LL;
        ObfDereferenceObject(v37);
      }
      if ( (unsigned int)dword_1C02883D8 > 5 && tlgKeywordOn((__int64)&dword_1C02883D8, 0x400000000000LL) )
      {
        v38 = *(unsigned __int8 *)(v4 + 48);
        LODWORD(v47) = v36;
        v39 = RimDeviceTypeToRimInputType(v4, v38);
        Object = *(PVOID *)(v4 + 216);
        p_Object = &Object;
        Handle = (HANDLE)v39;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v40,
          &unk_1C0258A74);
      }
      RIMCloseDev(v4);
      RIMFreeDev(a1, v4);
      LOBYTE(v4) = 0;
      goto LABEL_26;
    }
    v47 = 0LL;
    Object = 0LL;
    Handle = 0LL;
    v18 = RIMGetDeviceObjectPointer(
            (struct _UNICODE_STRING *)(v4 + 208),
            a2,
            a3,
            &Handle,
            &v47,
            (PDEVICE_OBJECT *)&Object);
    if ( v18 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v6 = 0;
      }
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = 21;
        LOBYTE(v28) = v6;
        LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dqqS(
          WPP_GLOBAL_Control->AttachedDevice,
          v28,
          v19,
          v20,
          v43,
          HandleInformationa,
          21,
          v46,
          v18,
          a1,
          v4,
          *(_QWORD *)(v4 + 216));
      }
      v23 = (PVOID *)(v4 + 248);
    }
    else
    {
      ObfReferenceObject(Object);
      v22 = v47;
      *(_QWORD *)(v4 + 232) = v47;
      if ( !*(_QWORD *)(a1 + 120) )
      {
        LODWORD(v47) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 376LL);
      }
      v23 = (PVOID *)(v4 + 248);
      v24 = RIMRegisterForDeviceChangeNotifications(v4, *(_QWORD *)(a1 + 120), v21, v4);
      *(_QWORD *)(v4 + 232) = 0LL;
      v18 = v24;
      ObfDereferenceObject(v22);
      ObfDereferenceObject(Object);
      ZwClose(Handle);
      if ( v18 < 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v6 = 0;
        }
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v27 = 20;
          LOBYTE(v27) = v6;
          LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_dqqS(
            WPP_GLOBAL_Control->AttachedDevice,
            v27,
            v25,
            v26,
            v4 + 248,
            HandleInformationa,
            20,
            v46,
            v18,
            a1,
            v4,
            *(_QWORD *)(v4 + 216));
        }
      }
      else
      {
        v18 = RawInputManagerDeviceObjectReference(*(_QWORD *)(v4 + 32));
      }
      if ( v18 >= 0 )
        return (unsigned int)v18;
    }
    if ( *v23 )
    {
      v18 = IoUnregisterPlugPlayNotification(*v23);
      if ( v18 < 0 )
      {
        LODWORD(v47) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 421LL);
      }
      v29 = *(void **)(v4 + 32);
      *v23 = 0LL;
      ObfDereferenceObject(v29);
    }
    RIMCloseDev(v4);
    RIMFreeDev(a1, v4);
    return (unsigned int)v18;
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
      v41,
      1,
      19,
      (__int64)&WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids,
      a1,
      v4,
      0);
  }
  return 0LL;
}
