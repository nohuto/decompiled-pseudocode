/*
 * XREFs of rimOnPnpArrived @ 0x1C0056904
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C0054E80 (RIMDirectStartStopDeviceRead.c)
 *     RIMDoOnPnpNotification @ 0x1C00B3D38 (RIMDoOnPnpNotification.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0154E40 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01551B0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 * Callees:
 *     RIMQueryDev @ 0x1C0005BF0 (RIMQueryDev.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     RIMHidTLCActive @ 0x1C00567C4 (RIMHidTLCActive.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0056804 (RimDeviceTypeToRimInputType.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00581B0 (RIMGetDeviceObjectPointer.c)
 *     RIMStartDeviceSpecificRead @ 0x1C006AD98 (RIMStartDeviceSpecificRead.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C006B1E0 (RawInputManagerDeviceObjectReference.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C00AC264 (WPP_RECORDER_SF_qqd.c)
 *     RIMCloseDev @ 0x1C00AC34C (RIMCloseDev.c)
 *     RIMOpenDev @ 0x1C00AD520 (RIMOpenDev.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C00AE82C (RIMDeliverDeviceResetRequest.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C00B4778 (RIMRegisterForDeviceChangeNotifications.c)
 *     WPP_RECORDER_SF_qqS @ 0x1C00B53E0 (WPP_RECORDER_SF_qqS.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1C014FBF0 (RIMFreeDev.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C016C080 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C016C25C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     WPP_RECORDER_SF_dqqS @ 0x1C016D6E0 (WPP_RECORDER_SF_dqqS.c)
 *     RIMIsTestSigningOn @ 0x1C018137C (RIMIsTestSigningOn.c)
 */

__int64 __fastcall rimOnPnpArrived(_QWORD *a1, __int64 a2, void *a3)
{
  __int64 v4; // rdi
  const union _LARGE_INTEGER *v6; // rcx
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  __int64 v9; // r8
  int v10; // r14d
  __int64 v11; // rdx
  int v12; // edx
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 v16; // rax
  int v17; // ecx
  int v18; // ecx
  int v19; // r8d
  int v20; // edx
  int v21; // ecx
  NTSTATUS v22; // ebx
  int v23; // r8d
  __int64 v24; // r8
  PVOID v25; // r14
  __int64 v26; // rdx
  NTSTATUS v27; // eax
  int v28; // r9d
  void *v29; // rcx
  void *v30; // rcx
  int v31; // edx
  void *v32; // rcx
  int v33; // ebx
  void *v34; // rcx
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // [rsp+20h] [rbp-69h]
  int v38; // [rsp+20h] [rbp-69h]
  PVOID v39; // [rsp+50h] [rbp-39h] BYREF
  PVOID Object; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v41[6]; // [rsp+60h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+7h] BYREF
  int v43; // [rsp+98h] [rbp+Fh]

  v4 = a2;
  if ( (*(_DWORD *)(a2 + 184) & 1) == 0 )
  {
    LODWORD(v39) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 184LL);
  }
  v6 = &WPP_a75f261dfb463415346bb11edf387329_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 16, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
    v6 = &WPP_a75f261dfb463415346bb11edf387329_Traceguids;
  }
  *(_DWORD *)(v4 + 184) &= ~1u;
  if ( (*(_DWORD *)(v4 + 184) & 0x40) == 0 )
  {
    LOBYTE(v6) = *(_BYTE *)(v4 + 48);
    if ( (_BYTE)v6 != 3 )
    {
      if ( a3 == (void *)-1LL )
      {
        v41[0] = 48LL;
        v41[2] = v4 + 208;
        v41[5] = &Handle;
        v7 = 1048577;
        v41[3] = 512LL;
        v8 = 2;
        v43 = 257;
        v41[1] = 0LL;
        v41[4] = 0LL;
        Handle = (HANDLE)0x20000000CLL;
        if ( (_BYTE)v6 == 2 )
        {
          v7 = 1048579;
          if ( (*(_DWORD *)(v4 + 200) & 0x200) != 0 )
          {
            v8 = (unsigned int)RIMIsTestSigningOn(v6, 512LL) != 0 ? 3 : 0;
          }
          else
          {
            v16 = *(_QWORD *)(v4 + 480);
            if ( !v16 || *(_DWORD *)(v16 + 24) == 6 )
            {
              v8 = 3;
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_qqS((_DWORD)v6, 512, (_DWORD)a3, 20, v37, (char)a1, v4, *(_QWORD *)(v4 + 216));
            }
          }
        }
        v10 = RIMOpenDev(v4, v41, v7, v8);
      }
      else
      {
        Handle = 0LL;
        v10 = ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Handle, 0LL);
        *(_QWORD *)(v4 + 232) = Handle;
        if ( v10 < 0 )
          goto LABEL_67;
        *(_DWORD *)(v4 + 184) |= 0x10000u;
        *(_QWORD *)(v4 + 224) = a3;
      }
      if ( v10 < 0 )
        goto LABEL_67;
      if ( *(_BYTE *)(v4 + 48) != 2 )
        v10 = RIMQueryDev((__int64)a1, v4);
      if ( v10 < 0 )
        goto LABEL_67;
      if ( (*(_DWORD *)(v4 + 184) & 0x20) == 0 && !*(_QWORD *)(v4 + 248) )
      {
        v11 = a1[15];
        if ( !v11 )
        {
          LODWORD(v39) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 373LL);
          v11 = a1[15];
        }
        v37 = v4 + 248;
        v10 = RIMRegisterForDeviceChangeNotifications(v4, v11, v9, v4);
        if ( v10 < 0 )
          goto LABEL_67;
        v10 = RawInputManagerDeviceObjectReference(*(_QWORD *)(v4 + 32));
      }
      if ( v10 >= 0 )
      {
        RIMDeliverDeviceResetRequest((PVOID)v4);
        v13 = *(_DWORD *)(v4 + 184) & 0xFFFFFBFF;
        *(_DWORD *)(v4 + 184) = v13;
        if ( *(_BYTE *)(v4 + 48) != 2
          || (v17 = *(_DWORD *)(v4 + 200), (v17 & 0x80u) != 0)
          || (v17 & 0x100) != 0
          || (v17 & 0x200) != 0
          || (v13 & 0x4000) != 0
          || (unsigned int)RIMHidTLCActive(*(_DWORD **)(v4 + 472)) )
        {
          if ( !a1[80] )
          {
            RIMLockExclusive((__int64)(a1 + 71));
            RIMStartDeviceSpecificRead(a1, v4, v14);
            a1[72] = 0LL;
            ExReleasePushLockExclusiveEx(a1 + 71, 0LL);
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqS(v18, v12, v19, 21, v37, (char)a1, v4, *(_QWORD *)(v4 + 216));
          RIMCloseDev(v4);
          if ( (unsigned int)dword_1C0249250 > 5
            && *(_QWORD *)(v4 + 248)
            && tlgKeywordOn((__int64)&dword_1C0249250, 0x400000000000LL) )
          {
            v31 = *(unsigned __int8 *)(v4 + 48);
            Handle = *(HANDLE *)(v4 + 216);
            LODWORD(v39) = RimDeviceTypeToRimInputType(v4, v31);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
              (int)&dword_1C0249250,
              (int)&dword_1C021AF61,
              (__int64)&v39,
              (__int64)&Handle);
          }
        }
LABEL_24:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 4;
          WPP_RECORDER_SF_qqd(
            (_DWORD)gRimLog,
            v12,
            1,
            22,
            (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
            (char)a1,
            v4,
            v10);
        }
        return (unsigned int)v10;
      }
LABEL_67:
      v32 = *(void **)(v4 + 248);
      v33 = v10;
      if ( v32 )
      {
        v10 = IoUnregisterPlugPlayNotification(v32);
        if ( v10 < 0 )
        {
          LODWORD(v39) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 474LL);
        }
        v34 = *(void **)(v4 + 32);
        *(_QWORD *)(v4 + 248) = 0LL;
        ObfDereferenceObject(v34);
      }
      if ( (unsigned int)dword_1C0249250 > 5 && tlgKeywordOn((__int64)&dword_1C0249250, 0x400000000000LL) )
      {
        v35 = RimDeviceTypeToRimInputType(v4, *(unsigned __int8 *)(v4 + 48));
        Object = *(PVOID *)(v4 + 216);
        LODWORD(v39) = v33;
        Handle = (HANDLE)v35;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v36,
          &unk_1C021AF10);
      }
      RIMCloseDev(v4);
      RIMFreeDev(a1, v4);
      LOBYTE(v4) = 0;
      goto LABEL_24;
    }
    v39 = 0LL;
    Object = 0LL;
    Handle = 0LL;
    v22 = RIMGetDeviceObjectPointer(
            (int)v4 + 208,
            a2,
            (_DWORD)a3,
            (unsigned int)&Handle,
            (__int64)&v39,
            (__int64)&Object);
    if ( v22 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_54;
      v28 = 19;
    }
    else
    {
      ObfReferenceObject(Object);
      v25 = v39;
      *(_QWORD *)(v4 + 232) = v39;
      v26 = a1[15];
      if ( !v26 )
      {
        LODWORD(v39) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 223LL);
        v26 = a1[15];
      }
      v38 = v4 + 248;
      v27 = RIMRegisterForDeviceChangeNotifications(v4, v26, v24, v4);
      *(_QWORD *)(v4 + 232) = 0LL;
      v22 = v27;
      ObfDereferenceObject(v25);
      ObfDereferenceObject(Object);
      ZwClose(Handle);
      if ( v22 >= 0 )
      {
        v22 = RawInputManagerDeviceObjectReference(*(_QWORD *)(v4 + 32));
LABEL_54:
        if ( v22 < 0 )
        {
          v29 = *(void **)(v4 + 248);
          if ( v29 )
          {
            v22 = IoUnregisterPlugPlayNotification(v29);
            if ( v22 < 0 )
            {
              LODWORD(v39) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 268LL);
            }
            v30 = *(void **)(v4 + 32);
            *(_QWORD *)(v4 + 248) = 0LL;
            ObfDereferenceObject(v30);
          }
          RIMCloseDev(v4);
          RIMFreeDev(a1, v4);
        }
        return (unsigned int)v22;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_54;
      v28 = 18;
    }
    WPP_RECORDER_SF_dqqS(v21, v20, v23, v28, v38, v22, (char)a1, v4, *(_QWORD *)(v4 + 216));
    goto LABEL_54;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqd(
      (_DWORD)gRimLog,
      a2,
      1,
      17,
      (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
      (char)a1,
      v4,
      0);
  }
  return 0LL;
}
