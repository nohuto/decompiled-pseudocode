__int64 __fastcall RIMStartDeviceSpecificRead(HANDLE *a1, __int64 a2)
{
  HANDLE *v3; // r15
  __int64 v4; // rcx
  int v5; // edi
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v13; // ecx
  unsigned __int8 v14; // cl
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // edx
  int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v28; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+58h] BYREF

  v3 = a1;
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
  {
    LODWORD(v27) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
  }
  LOBYTE(a1) = *(_BYTE *)(a2 + 48);
  if ( (*(_DWORD *)(a2 + 184) & 0x80u) != 0 )
  {
    v5 = -1073740682;
    EtwTraceStartInputDeviceRead(a1, 3221226614LL);
    return (unsigned int)v5;
  }
  *(_DWORD *)(a2 + 256) = -1073741823;
  *(_QWORD *)(a2 + 264) = 0LL;
  *(_DWORD *)(a2 + 152) = 0;
  *(_QWORD *)(a2 + 160) = 0LL;
  if ( (_BYTE)a1 == 3 )
  {
    LODWORD(v27) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 75LL);
  }
  if ( !*(_QWORD *)(a2 + 224) )
    return 0LL;
  if ( *(_BYTE *)(a2 + 48) != 2 )
    goto LABEL_8;
  if ( !*(_QWORD *)(a2 + 464) )
  {
    LODWORD(v27) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 89LL);
  }
  if ( (unsigned int)rimIsHidInputDevice(a2, *(_QWORD *)(a2 + 456)) )
  {
LABEL_8:
    v4 = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 184) |= 0x80u;
    v5 = RawInputManagerDeviceObjectReference(v4);
    if ( v5 >= 0 )
    {
      v6 = RIMStartDeviceRead((PVOID)a2);
      LOBYTE(v7) = *(_BYTE *)(a2 + 48);
      v5 = v6;
      EtwTraceStartInputDeviceRead(v7, v6);
      if ( (unsigned int)dword_1C02CA7E0 > 5 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
      {
        v13 = *(unsigned __int8 *)(a2 + 48);
        LODWORD(v27) = v5;
        v28 = (__int64)InputTraceLogging::RimDevTypeToString(v13);
        v29 = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_1C02CA7E0,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27);
      }
      if ( v5 < 0 )
      {
        ObfDereferenceObject(*(PVOID *)(a2 + 32));
        if ( (v5 == -1073741670 || v5 == -1073741663 || v5 == -1073741801)
          && (v14 = *(_BYTE *)(a2 + 204), *(_BYTE *)(a2 + 204) = v14 + 1, v14 < 5u) )
        {
          DbgPrintGDI(
            ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum retryReads not reached\n",
            v3,
            (const void *)a2,
            v5);
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
              4,
              1,
              10,
              (__int64)&WPP_978b37271e493f0f4db770890ab25331_Traceguids,
              (char)v3,
              a2,
              v5);
          }
          if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
          {
            v17 = *(unsigned __int8 *)(a2 + 48);
            v28 = *(_QWORD *)(a2 + 216);
            LODWORD(v27) = v5;
            v29 = RimDeviceTypeToRimInputTypeString(a2, v17);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v18,
              (int)&unk_1C0297ECB,
              v19,
              v20,
              (const WCHAR **)&v29,
              (const WCHAR **)&v28,
              (__int64)&v27);
          }
          *(_DWORD *)(a2 + 184) &= ~0x80u;
          ZwSetEvent(v3[43], 0LL);
        }
        else
        {
          DbgPrintGDI(
            ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %X..not retrying read as maximum retryReads reached or encount"
            "ered non-memory error",
            v3,
            (const void *)a2,
            v5);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v21) = 0;
          }
          if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qqd(
              WPP_GLOBAL_Control->AttachedDevice,
              v21,
              v22,
              (_DWORD)gRimLog,
              4,
              1,
              11,
              (__int64)&WPP_978b37271e493f0f4db770890ab25331_Traceguids,
              (char)v3,
              a2,
              v5);
          }
          if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
          {
            v23 = *(unsigned __int8 *)(a2 + 48);
            v28 = *(_QWORD *)(a2 + 216);
            LODWORD(v27) = v5;
            v29 = RimDeviceTypeToRimInputTypeString(a2, v23);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v24,
              (int)&unk_1C0297F22,
              v25,
              v26,
              (const WCHAR **)&v29,
              (const WCHAR **)&v28,
              (__int64)&v27);
          }
        }
      }
      else if ( (*(_DWORD *)(a2 + 184) & 0x100) != 0 )
      {
        if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
        {
          v8 = *(unsigned __int8 *)(a2 + 48);
          v28 = *(_QWORD *)(a2 + 216);
          LODWORD(v27) = v5;
          v29 = RimDeviceTypeToRimInputTypeString(a2, v8);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
            v9,
            (int)&unk_1C0297E70,
            v10,
            v11,
            (const WCHAR **)&v29,
            (const WCHAR **)&v28,
            (__int64)&v27);
        }
        *(_DWORD *)(a2 + 184) &= ~0x100u;
      }
    }
    return (unsigned int)v5;
  }
  if ( (*(_DWORD *)(a2 + 184) & 0x10000) == 0 )
  {
    LODWORD(v27) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 96LL);
  }
  return 0LL;
}
