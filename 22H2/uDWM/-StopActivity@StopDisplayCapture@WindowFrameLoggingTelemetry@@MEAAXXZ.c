/*
 * XREFs of ?StopActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180090200
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800056C8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002CC08 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D998 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x18008D74C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgW.c)
 *     ?zInternalStop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180092EA8 (-zInternalStop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall WindowFrameLoggingTelemetry::StopDisplayCapture::StopActivity(
        WindowFrameLoggingTelemetry::StopDisplayCapture *this)
{
  int *v1; // rdi
  int v3; // eax
  int *v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // r9
  wchar_t *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // r9
  int v15; // [rsp+A0h] [rbp-19h] BYREF
  int v16; // [rsp+A4h] [rbp-15h] BYREF
  wchar_t *v17; // [rsp+A8h] [rbp-11h] BYREF
  const unsigned __int16 *v18; // [rsp+B0h] [rbp-9h] BYREF
  wchar_t *v19; // [rsp+B8h] [rbp-1h] BYREF
  const unsigned __int16 *v20; // [rsp+C0h] [rbp+7h] BYREF
  const unsigned __int16 *v21; // [rsp+C8h] [rbp+Fh] BYREF
  wchar_t *v22; // [rsp+D0h] [rbp+17h] BYREF
  const unsigned __int16 *v23; // [rsp+D8h] [rbp+1Fh] BYREF
  const unsigned __int16 *v24; // [rsp+E0h] [rbp+27h] BYREF
  __int64 v25; // [rsp+E8h] [rbp+2Fh] BYREF
  _QWORD v26[4]; // [rsp+F0h] [rbp+37h] BYREF
  DWORD v27; // [rsp+120h] [rbp+67h] BYREF
  int v28; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v29; // [rsp+130h] [rbp+77h] BYREF
  int v30; // [rsp+138h] [rbp+7Fh] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
  v6 = wil::details::static_lazy<WindowFrameLogging>::get(
         v5,
         _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_);
  if ( v4 )
  {
    v7 = v6[1];
    if ( *(_DWORD *)v7 > 5u
      && (*(_QWORD *)(v7 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v7 + 24) & 0x200000000000LL) == *(_QWORD *)(v7 + 24) )
    {
      v8 = (wchar_t *)*((_QWORD *)v4 + 14);
      v9 = *((_QWORD *)this + 6);
      v26[0] = 0LL;
      v17 = v8;
      v18 = (const unsigned __int16 *)*((_QWORD *)v4 + 13);
      v27 = v4[24];
      v19 = (wchar_t *)*((_QWORD *)v4 + 11);
      v20 = (const unsigned __int16 *)*((_QWORD *)v4 + 10);
      v28 = v4[18];
      v21 = (const unsigned __int16 *)*((_QWORD *)v4 + 8);
      LODWORD(v29) = v4[6];
      v22 = (wchar_t *)*((_QWORD *)v4 + 2);
      v30 = *v4;
      v23 = (const unsigned __int16 *)*((_QWORD *)v4 + 15);
      v15 = v4[14];
      v24 = (const unsigned __int16 *)*((_QWORD *)v4 + 6);
      v16 = v4[1];
      v25 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v7,
        byte_1800D03EA,
        v9 + 8,
        v7,
        (__int64)v26,
        (__int64)&v25,
        (__int64)&v16,
        &v24,
        (__int64)&v15,
        &v23,
        (__int64)&v30,
        &v22,
        (__int64)&v29,
        &v21,
        (__int64)&v28,
        &v20,
        &v19,
        (__int64)&v27,
        &v18,
        &v17);
    }
  }
  else
  {
    v10 = v6[1];
    if ( *(_DWORD *)v10 > 5u
      && (*(_QWORD *)(v10 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v10 + 24) & 0x200000000000LL) == *(_QWORD *)(v10 + 24) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v12 = *((_QWORD *)this + 6);
      v13 = *(_DWORD *)(v12 + 76);
      v29 = 0LL;
      v27 = CurrentThreadId;
      v28 = v13;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        (int)&unk_1800D0514,
        v12 + 8,
        v14,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((WindowFrameLoggingTelemetry::StopDisplayCapture *)((char *)this + 8));
}
