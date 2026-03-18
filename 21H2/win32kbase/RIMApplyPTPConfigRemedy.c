/*
 * XREFs of RIMApplyPTPConfigRemedy @ 0x1C00E75AE
 * Callers:
 *     rimInputApc @ 0x1C00C06F0 (rimInputApc.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C004763C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C0047C7C (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C004AB80 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C0055EE4 (RIMFindSiblingPointerDeviceForMouse.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     IsPTPInputEnabled @ 0x1C0148A78 (IsPTPInputEnabled.c)
 *     RIMConfigurePointerDevice @ 0x1C018A990 (RIMConfigurePointerDevice.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3@Z @ 0x1C01B7B74 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C020F954 (ApiSetSetUserPTPEnabledPreference.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMApplyPTPConfigRemedy(char a1, __int64 a2, __int64 a3)
{
  int v5; // edx
  __int64 v6; // r8
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned __int8 v9; // al
  _QWORD *v10; // rsi
  __int64 v11; // r14
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  void *v18; // rcx
  unsigned int v19; // ecx
  void *v20; // rdi
  _QWORD *v21; // r8
  int v22; // ecx
  int v23; // r9d
  __int64 v24; // [rsp+60h] [rbp-29h] BYREF
  _QWORD *v25; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v26[2]; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v27[8]; // [rsp+80h] [rbp-9h] BYREF
  _OWORD v28[2]; // [rsp+88h] [rbp-1h] BYREF
  int v29; // [rsp+A8h] [rbp+1Fh]

  if ( !*(_BYTE *)(a2 + 48) && (*(_DWORD *)(a2 + 184) & 0x8000000) != 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v27, 1LL, a3);
    if ( (unsigned int)IsPTPInputEnabled() && (*(_DWORD *)(a2 + 184) & 0x10000000) != 0 )
    {
      LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qqd(
          WPP_GLOBAL_Control->AttachedDevice,
          v5,
          v6,
          (_DWORD)gRimLog,
          4,
          1,
          12,
          (__int64)&WPP_26e1085b54653ae3afd03bd178f52632_Traceguids,
          a1,
          a2,
          *(_BYTE *)(a2 + 206));
      v7 = *(_DWORD *)(a2 + 2308);
      v8 = v7 / 0x19;
      if ( v7 % 0x19 == 1 && (v9 = *(_BYTE *)(a2 + 206), *(_BYTE *)(a2 + 206) = v9 + 1, v9 < 0x14u) )
      {
        LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_qqd(
            WPP_GLOBAL_Control->AttachedDevice,
            v8,
            v6,
            (_DWORD)gRimLog,
            4,
            1,
            13,
            (__int64)&WPP_26e1085b54653ae3afd03bd178f52632_Traceguids,
            a1,
            a2,
            v9 + 1);
        v24 = 0LL;
        RIMFindSiblingPointerDeviceForMouse(a2, &v24, v6);
        v10 = (_QWORD *)v24;
        if ( !v24 )
          goto LABEL_50;
        v11 = *(_QWORD *)(v24 + 424);
        RIMLockExclusive(v11 + 104);
        if ( *(_BYTE *)(a2 + 206) == 1
          && (unsigned int)dword_1C028D6F0 > 5
          && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x800000000000LL) )
        {
          v24 = (__int64)(v10 + 37);
          v25 = (_QWORD *)(a2 + 208);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>>(
            v12,
            (unsigned int)&unk_1C025FE41,
            v13,
            v14,
            (__int64)&v25,
            (__int64)&v24);
        }
        RIMConfigurePointerDevice(v11, v10 + 11, v10[68]);
        if ( !v10[70] )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
        ApiSetSetUserPTPEnabledPreference(v10 + 11, v10[68], v11);
        *(_QWORD *)(v11 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(v11 + 104, 0LL);
        KeLeaveCriticalRegion();
        v18 = v10;
      }
      else
      {
        if ( *(_BYTE *)(a2 + 206) < 0x14u )
          goto LABEL_50;
        v19 = dword_1C028D6F0;
        v20 = 0LL;
        v24 = 0LL;
        if ( dword_1C028D6F0 )
        {
          RIMFindSiblingPointerDeviceForMouse(a2, &v24, v6);
          v19 = dword_1C028D6F0;
          v20 = (void *)v24;
        }
        LODWORD(v21) = (_DWORD)v20 + 296;
        v29 = *(_DWORD *)L">";
        v26[1] = v28;
        v26[0] = 2359330LL;
        v28[0] = *(_OWORD *)L"<Unknown sibling>";
        v28[1] = *(_OWORD *)L" sibling>";
        if ( !v20 )
          v21 = v26;
        if ( v19 > 5 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x800000000000LL) )
        {
          v25 = v21;
          v24 = a2 + 208;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>>(
            v22,
            (unsigned int)&unk_1C025FE84,
            (_DWORD)v21,
            v23,
            (__int64)&v24,
            (__int64)&v25);
        }
        *(_DWORD *)(a2 + 184) &= ~0x10000000u;
        LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qqd(
            WPP_GLOBAL_Control->AttachedDevice,
            v8,
            (_DWORD)v21,
            (_DWORD)gRimLog,
            4,
            1,
            14,
            (__int64)&WPP_26e1085b54653ae3afd03bd178f52632_Traceguids,
            a1,
            a2,
            *(_BYTE *)(a2 + 206));
        }
        if ( !v20 )
          goto LABEL_50;
        v18 = v20;
      }
      ObfDereferenceObject(v18);
    }
LABEL_50:
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v27);
  }
}
