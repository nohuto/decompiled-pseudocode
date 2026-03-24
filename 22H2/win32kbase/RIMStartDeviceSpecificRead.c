/*
 * XREFs of RIMStartDeviceSpecificRead @ 0x1C006AD98
 * Callers:
 *     rimStartDeviceReadIfAllowed @ 0x1C00056BC (rimStartDeviceReadIfAllowed.c)
 *     RIMOnPnpNotification @ 0x1C00549C0 (RIMOnPnpNotification.c)
 *     rimOnPnpArrived @ 0x1C0056904 (rimOnPnpArrived.c)
 *     rimInputApc @ 0x1C01745D0 (rimInputApc.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0175060 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     EtwTraceStartInputDeviceRead @ 0x1C006AF10 (EtwTraceStartInputDeviceRead.c)
 *     RIMStartDeviceRead @ 0x1C006AF30 (RIMStartDeviceRead.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C006B1E0 (RawInputManagerDeviceObjectReference.c)
 *     rimIsHidInputDevice @ 0x1C006BB38 (rimIsHidInputDevice.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C00AC264 (WPP_RECORDER_SF_qqd.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00ACB34 (RimDeviceTypeToRimInputTypeString.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C012840C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C013AA80 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C014ECD8 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0151478 (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

__int64 __fastcall RIMStartDeviceSpecificRead(HANDLE *a1, __int64 a2)
{
  int v2; // eax
  HANDLE *v4; // r15
  __int64 v5; // rcx
  int v6; // edi
  unsigned int v7; // eax
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 v13; // cl
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // [rsp+88h] [rbp+48h] BYREF
  __int64 v21; // [rsp+90h] [rbp+50h] BYREF
  __int64 v22; // [rsp+98h] [rbp+58h]

  v2 = *(_DWORD *)(a2 + 184);
  v4 = a1;
  if ( (v2 & 0x2000) != 0 )
  {
    LODWORD(v20) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
    v2 = *(_DWORD *)(a2 + 184);
  }
  LOBYTE(a1) = *(_BYTE *)(a2 + 48);
  if ( (v2 & 0x80u) != 0 )
  {
    v6 = -1073740682;
    EtwTraceStartInputDeviceRead(a1, 3221226614LL);
    return (unsigned int)v6;
  }
  *(_DWORD *)(a2 + 256) = -1073741823;
  *(_QWORD *)(a2 + 264) = 0LL;
  *(_DWORD *)(a2 + 152) = 0;
  *(_QWORD *)(a2 + 160) = 0LL;
  if ( (_BYTE)a1 == 3 )
  {
    LODWORD(v20) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 75LL);
    LOBYTE(a1) = *(_BYTE *)(a2 + 48);
  }
  if ( *(_QWORD *)(a2 + 224) )
  {
    if ( (_BYTE)a1 != 2 )
      goto LABEL_8;
    if ( !*(_QWORD *)(a2 + 472) )
    {
      LODWORD(v20) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 89LL);
    }
    if ( (unsigned int)rimIsHidInputDevice(a2, *(_QWORD *)(a2 + 464)) )
    {
LABEL_8:
      v5 = *(_QWORD *)(a2 + 32);
      *(_DWORD *)(a2 + 184) |= 0x80u;
      v6 = RawInputManagerDeviceObjectReference(v5);
      if ( v6 >= 0 )
      {
        v7 = RIMStartDeviceRead((PVOID)a2);
        LOBYTE(v8) = *(_BYTE *)(a2 + 48);
        v6 = v7;
        EtwTraceStartInputDeviceRead(v8, v7);
        if ( (unsigned int)dword_1C024AA90 > 5 && tlgKeywordOn((__int64)&dword_1C024AA90, 256LL) )
        {
          v20 = (__int64)InputTraceLogging::RimDevTypeToString(*(unsigned __int8 *)(a2 + 48));
          v21 = a2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
            (int)&dword_1C024AA90,
            (__int64)&v21,
            (__int64)&v20);
        }
        if ( v6 < 0 )
        {
          ObfDereferenceObject(*(PVOID *)(a2 + 32));
        }
        else
        {
          v9 = *(_DWORD *)(a2 + 184);
          if ( (v9 & 0x100) != 0 )
          {
            if ( (unsigned int)dword_1C0249170 > 5 && tlgKeywordOn((__int64)&dword_1C0249170, 0x400000000000LL) )
            {
              v11 = *(unsigned __int8 *)(a2 + 48);
              v21 = *(_QWORD *)(a2 + 216);
              LODWORD(v20) = v6;
              v22 = RimDeviceTypeToRimInputTypeString(a2, v11);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                v12,
                &unk_1C021BA57);
              v9 = *(_DWORD *)(a2 + 184);
            }
            *(_DWORD *)(a2 + 184) = v9 & 0xFFFFFEFF;
          }
        }
        if ( v6 == -1073741670 )
        {
          v13 = *(_BYTE *)(a2 + 204);
          *(_BYTE *)(a2 + 204) = v13 + 1;
          if ( v13 >= 5u )
          {
            DbgPrintGDI(
              ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %X..not retrying read as maximum retryReads reached",
              v4,
              (const void *)a2,
              -1073741670);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v17) = 4;
              WPP_RECORDER_SF_qqd(
                (_DWORD)gRimLog,
                v17,
                1,
                11,
                (__int64)&WPP_983e01fc9fa9381bba5b22f4de9fad94_Traceguids,
                (char)v4,
                a2,
                154);
            }
            if ( (unsigned int)dword_1C0249170 > 5 && tlgKeywordOn((__int64)&dword_1C0249170, 0x400000000000LL) )
            {
              v18 = *(unsigned __int8 *)(a2 + 48);
              v21 = *(_QWORD *)(a2 + 216);
              LODWORD(v20) = -1073741670;
              v22 = RimDeviceTypeToRimInputTypeString(a2, v18);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                v19,
                &unk_1C021B9B1);
            }
          }
          else
          {
            DbgPrintGDI(
              ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum retryReads not reached\n",
              v4,
              (const void *)a2,
              -1073741670);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v14) = 4;
              WPP_RECORDER_SF_qqd(
                (_DWORD)gRimLog,
                v14,
                1,
                10,
                (__int64)&WPP_983e01fc9fa9381bba5b22f4de9fad94_Traceguids,
                (char)v4,
                a2,
                154);
            }
            if ( (unsigned int)dword_1C0249170 > 5 && tlgKeywordOn((__int64)&dword_1C0249170, 0x400000000000LL) )
            {
              v15 = *(unsigned __int8 *)(a2 + 48);
              v21 = *(_QWORD *)(a2 + 216);
              LODWORD(v20) = -1073741670;
              v22 = RimDeviceTypeToRimInputTypeString(a2, v15);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                v16,
                &unk_1C021BA00);
            }
            *(_DWORD *)(a2 + 184) &= ~0x80u;
            ZwSetEvent(v4[48], 0LL);
          }
        }
      }
      return (unsigned int)v6;
    }
    if ( (*(_DWORD *)(a2 + 184) & 0x4000) == 0 )
    {
      LODWORD(v20) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 96LL);
    }
  }
  return 0LL;
}
