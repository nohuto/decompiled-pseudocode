/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1803E9DA4
 * Callers:
 *     ?Destroy@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803E9600 (-Destroy@-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 *     ?Stop@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803EA12C (-Stop@-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x1801A8798 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_1801A8798.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@_W@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@_W@@@Z @ 0x1801B4F4C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@_W@.c)
 *     ?get@?$static_lazy@VTrayNotificationAreaLogging@@@details@wil@@QEAAPEAVTrayNotificationAreaLogging@@P6AXXZ@Z @ 0x1803EA438 (-get@-$static_lazy@VTrayNotificationAreaLogging@@@details@wil@@QEAAPEAVTrayNotificationAreaLoggi.c)
 */

__int64 __fastcall wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rax
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  _DWORD *v12; // rdi
  __int64 v13; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // [rsp+A0h] [rbp-19h] BYREF
  int v19; // [rsp+A4h] [rbp-15h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v25; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+1Fh] BYREF
  __int64 v27; // [rsp+E0h] [rbp+27h] BYREF
  __int64 v28; // [rsp+E8h] [rbp+2Fh] BYREF
  __int64 v29; // [rsp+120h] [rbp+67h] BYREF
  __int64 v30; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v31; // [rsp+130h] [rbp+77h] BYREF
  __int64 v32; // [rsp+138h] [rbp+7Fh] BYREF

  if ( a2 < 0 )
  {
    v4 = a1[6];
    v5 = *(_DWORD *)(v4 + 76);
    if ( v5 < 0 && v5 == *(_DWORD *)(v4 + 84) )
      v6 = v4 + 80;
    else
      v6 = 0LL;
    v7 = wil::details::static_lazy<TrayNotificationAreaLogging>::get(
           a1,
           _lambda_0975fe2f1555e85eda3261a2a36018a8_::_lambda_invoker_cdecl_);
    if ( v6 )
    {
      v8 = *(_DWORD **)(v7 + 8);
      if ( *v8 > 2u && tlgKeywordOn((__int64)v8, 0x200000000000LL) )
      {
        v11 = a1[6];
        v21 = *(_QWORD *)(v6 + 112);
        v22 = *(_QWORD *)(v6 + 104);
        LODWORD(v30) = *(_DWORD *)(v6 + 96);
        v23 = *(_QWORD *)(v6 + 88);
        v24 = *(_QWORD *)(v6 + 80);
        LODWORD(v29) = *(_DWORD *)(v6 + 72);
        v25 = *(_QWORD *)(v6 + 64);
        LODWORD(v31) = *(_DWORD *)(v6 + 24);
        v26 = *(_QWORD *)(v6 + 16);
        LODWORD(v32) = *(_DWORD *)v6;
        v27 = *(_QWORD *)(v6 + 120);
        v18 = *(_DWORD *)(v6 + 56);
        v28 = *(_QWORD *)(v6 + 48);
        v19 = *(_DWORD *)(v6 + 4);
        v20 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          v9,
          (unsigned __int8 *)dword_180574B83,
          (const GUID *)(v11 + 8),
          v10,
          (__int64)&v20,
          (__int64)&v19,
          (const wchar_t **)&v28,
          (__int64)&v18,
          (const wchar_t **)&v27,
          (__int64)&v32,
          (const WCHAR **)&v26,
          (__int64)&v31,
          (const wchar_t **)&v25,
          (__int64)&v29,
          (const wchar_t **)&v24,
          (const WCHAR **)&v23,
          (__int64)&v30,
          (const wchar_t **)&v22,
          (const WCHAR **)&v21);
      }
    }
    else
    {
      v12 = *(_DWORD **)(v7 + 8);
      if ( *v12 > 2u && tlgKeywordOn(*(_QWORD *)(v7 + 8), 0x200000000000LL) )
      {
        v13 = a1[6];
        v31 = *(_QWORD *)(v13 + 56);
        v32 = *(_QWORD *)(v13 + 48);
        CurrentThreadId = GetCurrentThreadId();
        v15 = a1[6];
        LODWORD(v30) = CurrentThreadId;
        LODWORD(v29) = a2;
        v20 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          (__int64)v12,
          (unsigned __int8 *)dword_180574B08,
          (const GUID *)(v15 + 8),
          v16,
          (__int64)&v20,
          (__int64)&v29,
          (__int64)&v30,
          (const wchar_t **)&v32,
          (const WCHAR **)&v31);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
