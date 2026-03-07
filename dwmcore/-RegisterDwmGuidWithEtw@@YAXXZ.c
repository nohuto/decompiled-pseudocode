void __fastcall RegisterDwmGuidWithEtw(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  DWORD CurrentProcessId; // eax
  __int64 v4; // rcx
  DWORD pdwType; // [rsp+20h] [rbp-E0h]
  DWORD pSessionId; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE *v8; // [rsp+48h] [rbp-B8h]
  GUID *v9; // [rsp+50h] [rbp-B0h]
  WCHAR Value[40]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE pvData[80]; // [rsp+B0h] [rbp-50h] BYREF

  McGenEventRegister_EventRegister(
    &Microsoft_Windows_Dwm_Core_Provider,
    a2,
    &Microsoft_Windows_Dwm_Core_Provider_Context,
    &Microsoft_Windows_Dwm_Core_Provider_Context);
  McGenEventRegister_EventRegister(
    &Microsoft_Windows_Dwm_Compositor,
    v2,
    &Microsoft_Windows_Dwm_Compositor_Context,
    &Microsoft_Windows_Dwm_Compositor_Context);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1803E07D0);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1803E0728);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1803E0B40);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1803E0798);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1803E0760);
  EventActivityIdControl(3u, &gDwmCoreTelemetryActivityId);
  pSessionId = 0;
  CurrentProcessId = GetCurrentProcessId();
  if ( ProcessIdToSessionId(CurrentProcessId, &pSessionId) )
  {
    memset_0(Value, 0, 0x44uLL);
    pdwType = pSessionId;
    if ( StringCchPrintfW(Value, 0x22uLL, L"%s_%08X", L"DwmInitSessionActivityId", pdwType) >= 0 )
    {
      memset_0(pvData, 0, 0x4AuLL);
      pcbData = 74;
      if ( !RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\Dwm", Value, 2u, 0LL, pvData, &pcbData)
        && (unsigned int)dword_1803E0B40 > 5 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1803E0B40, 0x400000000000LL) )
        {
          v9 = &gDwmCoreTelemetryActivityId;
          v8 = pvData;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
            v4,
            &unk_18037EE45);
        }
      }
    }
  }
}
