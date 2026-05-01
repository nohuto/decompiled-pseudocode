/*
 * XREFs of ?EditControlPositionChanged_@TouchKeyboardExperienceTelemetryLogger@@QEBAXPEBGAEAURect@Foundation@Windows@@11@Z @ 0x1803CBE84
 * Callers:
 *     ??$EditControlPositionChanged@PEAGAEAURect@Foundation@Windows@@AEAU123@AEAU123@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEAGAEAURect@Foundation@Windows@@11@Z @ 0x1803C7024 (--$EditControlPositionChanged@PEAGAEAURect@Foundation@Windows@@AEAU123@AEAU123@@TouchKeyboardExp.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1803C6530 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@55555555555@Z @ 0x1803C8114 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::EditControlPositionChanged_(
        TouchKeyboardExperienceTelemetryLogger *this,
        const unsigned __int16 *a2,
        struct Windows::Foundation::Rect *a3,
        struct Windows::Foundation::Rect *a4,
        struct Windows::Foundation::Rect *a5)
{
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  int v12; // [rsp+98h] [rbp+Fh] BYREF
  int v13; // [rsp+9Ch] [rbp+13h] BYREF
  int v14; // [rsp+A0h] [rbp+17h] BYREF
  int v15; // [rsp+A4h] [rbp+1Bh] BYREF
  int v16; // [rsp+A8h] [rbp+1Fh] BYREF
  int v17; // [rsp+ACh] [rbp+23h] BYREF
  int v18; // [rsp+B0h] [rbp+27h] BYREF
  int v19; // [rsp+B4h] [rbp+2Bh] BYREF
  int v20; // [rsp+B8h] [rbp+2Fh] BYREF
  int v21; // [rsp+BCh] [rbp+33h] BYREF
  int v22; // [rsp+C0h] [rbp+37h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+3Fh] BYREF
  __int64 v24; // [rsp+D0h] [rbp+47h] BYREF
  __int64 v25; // [rsp+E8h] [rbp+5Fh] BYREF

  v25 = (__int64)this;
  v8 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         (__int64)this,
         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v8[1] > 5u )
  {
    if ( tlgKeywordOn(v8[1], 0x400000000000LL) )
    {
      v23 = (__int64)a2;
      v24 = 0x1000000LL;
      LODWORD(v25) = *((_DWORD *)a5 + 3);
      v12 = *((_DWORD *)a5 + 2);
      v13 = *((_DWORD *)a5 + 1);
      v14 = *(_DWORD *)a5;
      v15 = *((_DWORD *)a4 + 3);
      v16 = *((_DWORD *)a4 + 2);
      v17 = *((_DWORD *)a4 + 1);
      v18 = *(_DWORD *)a4;
      v19 = *((_DWORD *)a3 + 3);
      v20 = *((_DWORD *)a3 + 2);
      v21 = *((_DWORD *)a3 + 1);
      v22 = *(_DWORD *)a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (unsigned __int8 *)dword_180593ECC,
        v9,
        v10,
        (__int64)&v24,
        (const WCHAR **)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v25);
    }
  }
}
