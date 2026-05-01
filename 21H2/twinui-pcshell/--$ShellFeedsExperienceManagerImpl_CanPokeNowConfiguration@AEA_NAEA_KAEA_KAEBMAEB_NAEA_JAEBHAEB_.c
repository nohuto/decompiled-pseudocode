/*
 * XREFs of ??$ShellFeedsExperienceManagerImpl_CanPokeNowConfiguration@AEA_NAEA_KAEA_KAEBMAEB_NAEA_JAEBHAEB_N@ShellFeedsTelemetry@@SAXAEA_NAEA_K1AEBMAEB_NAEA_JAEBH3@Z @ 0x1800B0440
 * Callers:
 *     ?CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA?B_NXZ @ 0x1800B1DE4 (-CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA-B_NXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U1@U3@U3@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@35534@Z @ 0x1800013F0 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U1@U3@U3@.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B6984 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_CanPokeNowConfiguration<bool &,unsigned __int64 &,unsigned __int64 &,float const &,bool const &,__int64 &,int const &,bool const &>(
        _BYTE *a1,
        __int64 *a2,
        __int64 *a3,
        int *a4,
        char *a5,
        int *a6,
        int *a7,
        char *a8)
{
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r10d
  char v16; // dl
  char v17; // cl
  char v19; // [rsp+78h] [rbp+7h] BYREF
  char v20; // [rsp+79h] [rbp+8h] BYREF
  _BYTE v21[2]; // [rsp+7Ah] [rbp+9h] BYREF
  int v22; // [rsp+7Ch] [rbp+Bh] BYREF
  int v23; // [rsp+80h] [rbp+Fh] BYREF
  int v24; // [rsp+84h] [rbp+13h] BYREF
  __int64 v25; // [rsp+88h] [rbp+17h] BYREF
  __int64 v26; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 v27; // [rsp+98h] [rbp+27h] BYREF

  v12 = FeedsMicrosoftTelemetryProvider::Provider();
  if ( *(_DWORD *)v12 > 5u )
  {
    LOBYTE(v12) = tlgKeywordOn((__int64)v12, 0x400000000000LL);
    if ( (_BYTE)v12 )
    {
      v24 = *a4;
      v16 = *a8;
      v22 = *a7;
      v19 = v16;
      v25 = 0x1000000LL;
      v23 = *a6;
      v17 = *a5;
      v26 = *a3;
      v27 = *a2;
      v21[0] = *a1;
      v20 = v17;
      LOBYTE(v12) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                      v15,
                      (int)&unk_18057E1C3,
                      v13,
                      v14,
                      (__int64)v21,
                      (__int64)&v27,
                      (__int64)&v26,
                      (__int64)&v24,
                      (__int64)&v20,
                      (__int64)&v23,
                      (__int64)&v22,
                      (__int64)&v19,
                      (__int64)&v25);
    }
  }
  return (char)v12;
}
