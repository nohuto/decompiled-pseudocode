/*
 * XREFs of ??$FailedToShowInSpecifiedTime@K@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX$$QEAK@Z @ 0x1800BA4AC
 * Callers:
 *     ?OnMessage@MeetNowExperienceManager@@UEAAJI_K_J@Z @ 0x1800BC8C0 (-OnMessage@MeetNowExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18001E264 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Provider@MeetNowTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800BD564 (-Provider@MeetNowTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall MeetNowTelemetry::ShowFlyoutActivity::FailedToShowInSpecifiedTime<unsigned long>(__int64 a1, int *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  const GUID *v6; // r8
  int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = MeetNowTelemetryLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v4, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v6 = (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL);
      v8 = *a2;
      v9 = 50331648LL;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v5,
                     byte_18057E7D6,
                     v6,
                     v5,
                     (__int64)&v8,
                     (__int64)&v9);
    }
  }
  return (char)v4;
}
