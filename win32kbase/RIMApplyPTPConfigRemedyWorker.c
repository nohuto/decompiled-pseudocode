/*
 * XREFs of RIMApplyPTPConfigRemedyWorker @ 0x1C01E1F68
 * Callers:
 *     rimInputApc @ 0x1C00CB830 (rimInputApc.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C0089624 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     IsPTPInputEnabled @ 0x1C00EDB2C (IsPTPInputEnabled.c)
 *     RIMConfigurePointerDevice @ 0x1C01AD4A0 (RIMConfigurePointerDevice.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C01ADF44 (RIMFindSiblingPointerDeviceForMouse.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1C01C0898 (RIMApiSetSetUserPTPEnabledPreference.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3@Z @ 0x1C01E1EB8 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@.c)
 */

char __fastcall RIMApplyPTPConfigRemedyWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  _UNKNOWN **v6; // rax
  int v7; // edx
  __int64 v8; // r8
  _UNKNOWN **v9; // r9
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned __int16 *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r9
  unsigned __int16 *v18; // rcx
  unsigned int v19; // ecx
  unsigned __int16 *v20; // rdi
  unsigned __int16 *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r9
  unsigned __int16 *v25; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int16 *v26; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v27[2]; // [rsp+70h] [rbp-19h] BYREF
  _OWORD v28[2]; // [rsp+80h] [rbp-9h] BYREF
  int v29; // [rsp+A0h] [rbp+17h]

  v5 = a1;
  LODWORD(v6) = IsPTPInputEnabled(a1, a2, a3, a4);
  if ( (_DWORD)v6 && (*(_DWORD *)(a2 + 184) & 0x10000000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v7) = 0;
    }
    v9 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_AND_TRACE_SF_qqd(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        (_DWORD)gRimLog,
        4,
        1,
        12,
        (__int64)&WPP_7feda21c293d34506eb30305bf17985f_Traceguids,
        v5,
        a2,
        *(_BYTE *)(a2 + 206));
      v9 = &WPP_RECORDER_INITIALIZED;
    }
    v10 = *(_DWORD *)(a2 + 2308);
    v11 = v10 / 0x19;
    LODWORD(v6) = 25 * (v10 / 0x19);
    if ( v10 % 0x19 == 1
      && (LOBYTE(v6) = *(_BYTE *)(a2 + 206),
          v8 = (unsigned int)((_DWORD)v6 + 1),
          *(_BYTE *)(a2 + 206) = (_BYTE)v6 + 1,
          (unsigned __int8)v6 < 0x14u) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v11) = 0;
      }
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qqd(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (_DWORD)gRimLog,
          4,
          1,
          13,
          (__int64)&WPP_7feda21c293d34506eb30305bf17985f_Traceguids,
          v5,
          a2,
          (_BYTE)v6 + 1);
      v25 = 0LL;
      LOBYTE(v6) = RIMFindSiblingPointerDeviceForMouse(a2, &v25, v8, (__int64)v9);
      v12 = v25;
      if ( v25 )
      {
        v13 = *((_QWORD *)v25 + 51);
        RIMLockExclusive(v13 + 104);
        if ( *(_BYTE *)(a2 + 206) == 1
          && (unsigned int)dword_1C02C93D8 > 5
          && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x800000000000LL) )
        {
          v25 = v12 + 140;
          v26 = (unsigned __int16 *)(a2 + 208);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>>(
            v14,
            byte_1C0299451,
            v15,
            v16,
            &v26,
            &v25);
        }
        RIMConfigurePointerDevice(v13, (__int64)(v12 + 36), *((_QWORD *)v12 + 66));
        if ( !*((_QWORD *)v12 + 68) )
        {
          LODWORD(v25) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 162);
        }
        RIMApiSetSetUserPTPEnabledPreference((__int64)(v12 + 36), *((_QWORD *)v12 + 66), v13, v17);
        *(_QWORD *)(v13 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(v13 + 104, 0LL);
        KeLeaveCriticalRegion();
        v18 = v12;
        goto LABEL_44;
      }
    }
    else if ( *(_BYTE *)(a2 + 206) >= 0x14u )
    {
      v19 = dword_1C02C93D8;
      v20 = 0LL;
      v25 = 0LL;
      if ( dword_1C02C93D8 )
      {
        RIMFindSiblingPointerDeviceForMouse(a2, &v25, v8, (__int64)&WPP_RECORDER_INITIALIZED);
        v19 = dword_1C02C93D8;
        v20 = v25;
      }
      LODWORD(v21) = (_DWORD)v20 + 280;
      v29 = *(_DWORD *)L">";
      v27[1] = v28;
      v27[0] = 2359330LL;
      v28[0] = *(_OWORD *)L"<Unknown sibling>";
      v28[1] = *(_OWORD *)L" sibling>";
      if ( !v20 )
        v21 = (unsigned __int16 *)v27;
      if ( v19 > 5 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x800000000000LL) )
      {
        v26 = v21;
        v25 = (unsigned __int16 *)(a2 + 208);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>>(
          v22,
          byte_1C0299494,
          (__int64)v21,
          v23,
          &v25,
          &v26);
      }
      *(_DWORD *)(a2 + 184) &= ~0x10000000u;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v11) = 0;
      }
      v6 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        LOBYTE(v6) = WPP_RECORDER_AND_TRACE_SF_qqd(
                       WPP_GLOBAL_Control->AttachedDevice,
                       v11,
                       (_DWORD)v21,
                       (_DWORD)gRimLog,
                       4,
                       1,
                       14,
                       (__int64)&WPP_7feda21c293d34506eb30305bf17985f_Traceguids,
                       v5,
                       a2,
                       *(_BYTE *)(a2 + 206));
      }
      if ( v20 )
      {
        v18 = v20;
LABEL_44:
        LOBYTE(v6) = ObfDereferenceObject(v18);
      }
    }
  }
  return (char)v6;
}
