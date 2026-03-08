/*
 * XREFs of ?ShouldEscapeProximity@@YAEXZ @ 0x1C015A830
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@554@Z @ 0x1C0159BE0 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U2@@-$.c)
 */

char __fastcall ShouldEscapeProximity(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v38; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v39; // [rsp+58h] [rbp-8h] BYREF
  char v40; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int64 v41; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v42; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v43; // [rsp+A8h] [rbp+48h] BYREF

  v4 = 0;
  v5 = -1LL;
  v6 = MEMORY[0xFFFFF78000000008];
  v7 = SGDGetUserSessionState(a1, a2, a3, a4);
  ++*(_DWORD *)(v7 + 776);
  SGDGetUserSessionState(v9, v8, v10, v11);
  if ( *(_QWORD *)(SGDGetUserSessionState(v13, v12, v14, v15) + 760) != -1LL )
  {
    if ( v6 <= *(_QWORD *)(SGDGetUserSessionState(v17, v16, v18, v19) + 760) )
    {
      LODWORD(v41) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 789);
    }
    v5 = v6 - *(_QWORD *)(SGDGetUserSessionState(v21, v20, v22, v23) + 760);
    if ( v5 < 0x1C9C380 )
    {
      v4 = 1;
      v24 = SGDGetUserSessionState(v17, v16, v18, v19);
      ++*(_DWORD *)(v24 + 772);
      SGDGetUserSessionState(v26, v25, v27, v28);
    }
  }
  if ( (unsigned int)dword_1C02C4098 > 5 && tlgKeywordOn((__int64)&dword_1C02C4098, 0x400000000000LL) )
  {
    v41 = v6;
    v42 = *(_DWORD *)(SGDGetUserSessionState(v17, v16, v18, v19) + 772);
    v43 = *(_DWORD *)(SGDGetUserSessionState(v42, v29, v30, v31) + 768);
    v38 = *(_DWORD *)(SGDGetUserSessionState(v43, v32, v33, v34) + 776);
    v39 = v5;
    v40 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v38,
      byte_1C0294222,
      v35,
      v36,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41);
  }
  *(_QWORD *)(SGDGetUserSessionState(v17, v16, v18, v19) + 760) = v6;
  return v4;
}
