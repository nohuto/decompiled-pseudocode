/*
 * XREFs of ?LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z @ 0x1C0168CB0
 * Callers:
 *     HandleDeferredInput @ 0x1C0001240 (HandleDeferredInput.c)
 * Callees:
 *     ?GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z @ 0x1C0001A68 (-GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0047358 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0168734 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

void __fastcall KeyboardInputTelemetry::LogHanging(struct tagTHREADINFO *a1, __int64 a2)
{
  __int64 v3; // rax
  size_t *v4; // r8
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r11d
  __int64 v8; // rcx
  int v9; // [rsp+40h] [rbp-48h] BYREF
  int v10; // [rsp+44h] [rbp-44h] BYREF
  const WCHAR *v11; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int16 v12[16]; // [rsp+50h] [rbp-38h] BYREF

  if ( (unsigned int)KeyboardInputTelemetry::GetKeyboardInputLatency(a2) > 0x2710 )
  {
    v3 = *((_QWORD *)a1 + 53);
    v4 = (size_t *)(v3 + 992);
    if ( !v3 )
      v4 = (size_t *)L"Unknown";
    RtlStringCchCopyW(v12, 0x10uLL, v4);
    if ( (unsigned int)dword_1C028D6F0 > 5 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL) )
    {
      v8 = *((_QWORD *)a1 + 53);
      if ( v8 )
      {
        v9 = *(_DWORD *)(v8 + 56);
        v7 = *(_DWORD *)(v8 + 56);
      }
      else
      {
        v9 = v7;
      }
      v10 = v7;
      v11 = v12;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v8,
        byte_1C025BB50,
        v5,
        v6,
        &v11,
        (__int64)&v10,
        (__int64)&v9);
    }
  }
}
