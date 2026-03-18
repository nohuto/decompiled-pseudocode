/*
 * XREFs of RIMStartDeviceSpecificRead @ 0x1C004AF3C
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003B78 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMOnPnpNotification @ 0x1C0042B50 (RIMOnPnpNotification.c)
 *     rimStartDeviceReadIfAllowed @ 0x1C0048390 (rimStartDeviceReadIfAllowed.c)
 *     rimOnPnpArrived @ 0x1C004A09C (rimOnPnpArrived.c)
 *     rimInputApc @ 0x1C00C06F0 (rimInputApc.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C004AB80 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C004B348 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C004DC2C (RimDeviceTypeToRimInputTypeString.c)
 *     EtwTraceStartInputDeviceRead @ 0x1C004DC60 (EtwTraceStartInputDeviceRead.c)
 *     RIMStartDeviceRead @ 0x1C004DC80 (RIMStartDeviceRead.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C004DFA0 (RawInputManagerDeviceObjectReference.c)
 *     rimIsHidInputDevice @ 0x1C00E6476 (rimIsHidInputDevice.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0152794 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0167EA0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C017E618 (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMStartDeviceSpecificRead(HANDLE *a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  HANDLE *v5; // r15
  __int64 v6; // rcx
  int v7; // edi
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int8 v17; // cl
  int v18; // edx
  int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // [rsp+98h] [rbp+38h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+48h]

  v3 = *(_DWORD *)(a2 + 184);
  v5 = a1;
  if ( (v3 & 0x2000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v3 = *(_DWORD *)(a2 + 184);
  }
  LOBYTE(a1) = *(_BYTE *)(a2 + 48);
  if ( (v3 & 0x80u) != 0 )
  {
    v7 = -1073740682;
    EtwTraceStartInputDeviceRead(a1, 3221226614LL);
    return (unsigned int)v7;
  }
  *(_QWORD *)(a2 + 264) = 0LL;
  *(_DWORD *)(a2 + 152) = 0;
  *(_QWORD *)(a2 + 160) = 0LL;
  *(_DWORD *)(a2 + 256) = -1073741823;
  if ( (_BYTE)a1 == 3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    LOBYTE(a1) = *(_BYTE *)(a2 + 48);
  }
  if ( !*(_QWORD *)(a2 + 224) )
    return 0LL;
  if ( (_BYTE)a1 != 2 )
    goto LABEL_8;
  if ( !*(_QWORD *)(a2 + 464) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (unsigned int)rimIsHidInputDevice(a2, *(_QWORD *)(a2 + 456)) )
  {
LABEL_8:
    v6 = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 184) |= 0x80u;
    v7 = RawInputManagerDeviceObjectReference(v6);
    if ( v7 >= 0 )
    {
      v8 = RIMStartDeviceRead((PVOID)a2);
      LOBYTE(v9) = *(_BYTE *)(a2 + 48);
      v7 = v8;
      EtwTraceStartInputDeviceRead(v9, v8);
      if ( (unsigned int)dword_1C028EE70 > 5 && tlgKeywordOn((__int64)&dword_1C028EE70, 256LL) )
      {
        v26 = (__int64)InputTraceLogging::RimDevTypeToString(*(unsigned __int8 *)(a2 + 48));
        v27 = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
          (int)&dword_1C028EE70,
          (__int64)&v27,
          (__int64)&v26);
      }
      if ( v7 < 0 )
      {
        ObfDereferenceObject(*(PVOID *)(a2 + 32));
        if ( v7 == -1073741670 )
        {
          v17 = *(_BYTE *)(a2 + 204);
          *(_BYTE *)(a2 + 204) = v17 + 1;
          if ( v17 >= 5u )
          {
            DbgPrintGDI(
              ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %X..not retrying read as maximum retryReads reached",
              v5,
              (const void *)a2,
              -1073741670);
            LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_qqd(
                WPP_GLOBAL_Control->AttachedDevice,
                v22,
                v23,
                (_DWORD)gRimLog,
                4,
                1,
                11,
                (__int64)&WPP_fb4da5122c8637fa36fe5a9ef1cf41b2_Traceguids,
                (char)v5,
                a2,
                154);
            }
            if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
            {
              v24 = *(unsigned __int8 *)(a2 + 48);
              v27 = *(_QWORD *)(a2 + 216);
              LODWORD(v26) = -1073741670;
              v28 = RimDeviceTypeToRimInputTypeString(a2, v24);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                v25,
                &unk_1C025E7D6);
            }
          }
          else
          {
            DbgPrintGDI(
              ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum retryReads not reached\n",
              v5,
              (const void *)a2,
              -1073741670);
            LOBYTE(v18) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_qqd(
                WPP_GLOBAL_Control->AttachedDevice,
                v18,
                v19,
                (_DWORD)gRimLog,
                4,
                1,
                10,
                (__int64)&WPP_fb4da5122c8637fa36fe5a9ef1cf41b2_Traceguids,
                (char)v5,
                a2,
                154);
            }
            if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
            {
              v20 = *(unsigned __int8 *)(a2 + 48);
              v27 = *(_QWORD *)(a2 + 216);
              LODWORD(v26) = -1073741670;
              v28 = RimDeviceTypeToRimInputTypeString(a2, v20);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                v21,
                &unk_1C025E77F);
            }
            *(_DWORD *)(a2 + 184) &= ~0x80u;
            ZwSetEvent(v5[43], 0LL);
          }
        }
      }
      else
      {
        v10 = *(_DWORD *)(a2 + 184);
        if ( (v10 & 0x100) != 0 )
        {
          if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
          {
            v11 = *(unsigned __int8 *)(a2 + 48);
            v27 = *(_QWORD *)(a2 + 216);
            LODWORD(v26) = v7;
            v28 = RimDeviceTypeToRimInputTypeString(a2, v11);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v12,
              &unk_1C025E857);
            v10 = *(_DWORD *)(a2 + 184);
          }
          *(_DWORD *)(a2 + 184) = v10 & 0xFFFFFEFF;
        }
      }
    }
    return (unsigned int)v7;
  }
  if ( (*(_DWORD *)(a2 + 184) & 0x10000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
  return 0LL;
}
