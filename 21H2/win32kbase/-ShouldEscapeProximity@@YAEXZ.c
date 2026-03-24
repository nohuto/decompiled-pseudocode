/*
 * XREFs of ?ShouldEscapeProximity@@YAEXZ @ 0x1C0118EC0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0076B30 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@554@Z @ 0x1C0117FF0 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U2@@-$.c)
 */

char ShouldEscapeProximity(void)
{
  char v0; // di
  unsigned __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 v6; // [rsp+50h] [rbp-18h] BYREF
  __int64 v7; // [rsp+58h] [rbp-10h] BYREF
  int v8; // [rsp+90h] [rbp+28h] BYREF
  unsigned int v9; // [rsp+98h] [rbp+30h] BYREF
  unsigned int v10; // [rsp+A0h] [rbp+38h] BYREF
  unsigned int v11; // [rsp+A8h] [rbp+40h] BYREF

  v0 = 0;
  v1 = MEMORY[0xFFFFF78000000008];
  ++gProximityPowerPressCount;
  if ( gProximityLastPowerPressTime != -1LL )
  {
    if ( MEMORY[0xFFFFF78000000008] <= gProximityLastPowerPressTime )
    {
      v8 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 861);
    }
    if ( v1 - gProximityLastPowerPressTime < 0x1C9C380 )
    {
      ++gProximityEscapeCount;
      v0 = 1;
    }
  }
  if ( (unsigned int)dword_1C0246378 > 5 && tlgKeywordOn((__int64)&dword_1C0246378, 0x400000000000LL) )
  {
    v9 = gProximityEscapeCount;
    v10 = gProximityScenarioCount;
    v11 = gProximityPowerPressCount;
    v6 = v1;
    v7 = v3;
    LOBYTE(v8) = v0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v2,
      byte_1C0219463,
      v3,
      v4,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v6);
  }
  gProximityLastPowerPressTime = v1;
  return v0;
}
