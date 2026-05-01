/*
 * XREFs of ??$HandleInputPaneTryShow@AEAIAEAU?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@AEA_NAEA_NAEA_NAEA_NAEA_NAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAU?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@AEA_N2222AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800D22C4
 * Callers:
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1803D81F0 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@44444@Z @ 0x180001A40 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@U2@U2@U2@U2@U2@@-$_tlgWriteTemplat.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1803BEE90 (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::HandleInputPaneTryShow<unsigned int &,std::atomic<enum Windows::UI::Internal::Text::Core::CoreKeyboardModality> &,bool &,bool &,bool &,bool &,bool &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
        int *a1,
        int *a2,
        _BYTE *a3,
        char *a4,
        char *a5,
        char *a6,
        char *a7,
        char *a8)
{
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r10d
  char v16; // dl
  char v17; // cl
  int v18; // eax
  char v20; // [rsp+60h] [rbp-10h] BYREF
  char v21; // [rsp+61h] [rbp-Fh] BYREF
  char v22; // [rsp+62h] [rbp-Eh] BYREF
  char v23; // [rsp+63h] [rbp-Dh] BYREF
  char v24; // [rsp+64h] [rbp-Ch] BYREF
  _BYTE v25[3]; // [rsp+65h] [rbp-Bh] BYREF
  int v26; // [rsp+68h] [rbp-8h] BYREF
  int v27; // [rsp+6Ch] [rbp-4h] BYREF

  v12 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v12 > 5u )
  {
    LOBYTE(v12) = tlgKeywordOn((__int64)v12, 16LL);
    if ( (_BYTE)v12 )
    {
      v16 = *a8;
      v21 = *a7;
      v20 = v16;
      v22 = *a6;
      v17 = *a5;
      v24 = *a4;
      v25[0] = *a3;
      v18 = *a2;
      v23 = v17;
      v26 = v18;
      v27 = *a1;
      LOBYTE(v12) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
                      v15,
                      (int)&unk_180595DA3,
                      v13,
                      v14,
                      (__int64)&v27,
                      (__int64)&v26,
                      (__int64)v25,
                      (__int64)&v24,
                      (__int64)&v23,
                      (__int64)&v22,
                      (__int64)&v21,
                      (__int64)&v20);
    }
  }
  return (char)v12;
}
