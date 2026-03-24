/*
 * XREFs of RIMApplyPTPConfigRemedy @ 0x1C018195C
 * Callers:
 *     rimInputApc @ 0x1C01746A0 (rimInputApc.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0053D5C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0054218 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C00ABD64 (WPP_RECORDER_SF_qqd.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C00B4500 (RIMFindSiblingPointerDeviceForMouse.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     IsPTPInputEnabled @ 0x1C011BFD8 (IsPTPInputEnabled.c)
 *     RIMConfigurePointerDevice @ 0x1C0161334 (RIMConfigurePointerDevice.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3@Z @ 0x1C01818AC (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C01D0FB4 (ApiSetSetUserPTPEnabledPreference.c)
 */

void __fastcall RIMApplyPTPConfigRemedy(char a1, __int64 a2)
{
  int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // edx
  unsigned __int8 v7; // al
  unsigned __int16 *v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int16 *v13; // rcx
  unsigned int v14; // ecx
  unsigned __int16 *v15; // rdi
  __int64 v16; // rcx
  unsigned __int16 *v17; // r8
  __int64 v18; // r9
  unsigned __int16 *v19; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int16 *v20[3]; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v21[8]; // [rsp+60h] [rbp-19h] BYREF
  _OWORD v22[2]; // [rsp+68h] [rbp-11h] BYREF
  int v23; // [rsp+88h] [rbp+Fh]

  if ( !*(_BYTE *)(a2 + 48) && (*(_DWORD *)(a2 + 184) & 0x2000000) != 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v21, 1, 0);
    if ( (unsigned int)IsPTPInputEnabled() && (*(_DWORD *)(a2 + 184) & 0x4000000) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        WPP_RECORDER_SF_qqd(
          (_DWORD)gRimLog,
          v4,
          1,
          12,
          (__int64)&WPP_09f3a69173bf3f521b10e986f86340e6_Traceguids,
          a1,
          a2,
          *(_BYTE *)(a2 + 206));
      }
      v5 = *(_DWORD *)(a2 + 2300);
      v6 = v5 / 0x19;
      if ( v5 % 0x19 == 1 && (v7 = *(_BYTE *)(a2 + 206), *(_BYTE *)(a2 + 206) = v7 + 1, v7 < 0x14u) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 4;
          WPP_RECORDER_SF_qqd(
            (_DWORD)gRimLog,
            v6,
            1,
            13,
            (__int64)&WPP_09f3a69173bf3f521b10e986f86340e6_Traceguids,
            a1,
            a2,
            v7 + 1);
        }
        v19 = 0LL;
        RIMFindSiblingPointerDeviceForMouse(a2, &v19);
        v8 = v19;
        if ( !v19 )
          goto LABEL_30;
        v9 = *((_QWORD *)v19 + 53);
        RIMLockExclusive(v9 + 104);
        if ( *(_BYTE *)(a2 + 206) == 1
          && (unsigned int)dword_1C024A250 > 5
          && tlgKeywordOn((__int64)&dword_1C024A250, 0x800000000000LL) )
        {
          v19 = v8 + 148;
          v20[0] = (unsigned __int16 *)(a2 + 208);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>>(
            v10,
            byte_1C021DC98,
            v11,
            v12,
            v20,
            &v19);
        }
        RIMConfigurePointerDevice(v9, (__int64)(v8 + 44), *((_QWORD *)v8 + 69));
        if ( !*((_QWORD *)v8 + 71) )
        {
          LODWORD(v19) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 164);
        }
        ApiSetSetUserPTPEnabledPreference(v8 + 44, *((_QWORD *)v8 + 69), v9);
        *(_QWORD *)(v9 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(v9 + 104, 0LL);
        KeLeaveCriticalRegion();
        v13 = v8;
      }
      else
      {
        if ( *(_BYTE *)(a2 + 206) < 0x14u )
          goto LABEL_30;
        v14 = dword_1C024A250;
        v15 = 0LL;
        v19 = 0LL;
        if ( dword_1C024A250 )
        {
          RIMFindSiblingPointerDeviceForMouse(a2, &v19);
          v14 = dword_1C024A250;
          v15 = v19;
        }
        v23 = *(_DWORD *)L">";
        v20[2] = (unsigned __int16 *)v22;
        v20[1] = (unsigned __int16 *)2359330;
        v22[0] = *(_OWORD *)L"<Unknown sibling>";
        v22[1] = *(_OWORD *)L" sibling>";
        if ( v14 > 5 && tlgKeywordOn((__int64)&dword_1C024A250, 0x800000000000LL) )
        {
          v20[0] = v17;
          v19 = (unsigned __int16 *)(a2 + 208);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>>(
            v16,
            byte_1C021DC4C,
            (__int64)v17,
            v18,
            &v19,
            v20);
        }
        *(_DWORD *)(a2 + 184) &= ~0x4000000u;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 4;
          WPP_RECORDER_SF_qqd(
            (_DWORD)gRimLog,
            v6,
            1,
            14,
            (__int64)&WPP_09f3a69173bf3f521b10e986f86340e6_Traceguids,
            a1,
            a2,
            *(_BYTE *)(a2 + 206));
        }
        if ( !v15 )
          goto LABEL_30;
        v13 = v15;
      }
      ObfDereferenceObject(v13);
    }
LABEL_30:
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v21);
  }
}
