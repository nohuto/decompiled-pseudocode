/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18002EAD0
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18002C690 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18002C8D8 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002CC08 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x18007D33C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18008DE74 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@.c)
 */

__int64 __fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // r9d
  int v16; // [rsp+A0h] [rbp-19h] BYREF
  int v17; // [rsp+A4h] [rbp-15h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v19; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v21; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+1Fh] BYREF
  __int64 v25; // [rsp+E0h] [rbp+27h] BYREF
  _QWORD v26[5]; // [rsp+E8h] [rbp+2Fh] BYREF
  int v27; // [rsp+120h] [rbp+67h] BYREF
  DWORD v28; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v29; // [rsp+130h] [rbp+77h] BYREF
  __int64 v30; // [rsp+138h] [rbp+7Fh] BYREF

  if ( a2 < 0 )
  {
    v5 = a1[6];
    v6 = *(_DWORD *)(v5 + 76);
    if ( v6 < 0 && v6 == *(_DWORD *)(v5 + 84) )
      v7 = v5 + 80;
    else
      v7 = 0LL;
    v8 = wil::details::static_lazy<WindowFrameLogging>::get(
           (__int64)a1,
           _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_);
    if ( v7 )
    {
      v9 = v8[1];
      if ( *(_DWORD *)v9 > 2u
        && (*(_QWORD *)(v9 + 16) & 0x200000000000LL) != 0
        && (*(_QWORD *)(v9 + 24) & 0x200000000000LL) == *(_QWORD *)(v9 + 24) )
      {
        v10 = a1[6];
        v19 = *(_QWORD *)(v7 + 112);
        v20 = *(_QWORD *)(v7 + 104);
        v28 = *(_DWORD *)(v7 + 96);
        v21 = *(_QWORD *)(v7 + 88);
        v22 = *(_QWORD *)(v7 + 80);
        v27 = *(_DWORD *)(v7 + 72);
        v23 = *(_QWORD *)(v7 + 64);
        LODWORD(v29) = *(_DWORD *)(v7 + 24);
        v24 = *(_QWORD *)(v7 + 16);
        LODWORD(v30) = *(_DWORD *)v7;
        v25 = *(_QWORD *)(v7 + 120);
        v16 = *(_DWORD *)(v7 + 56);
        v26[0] = *(_QWORD *)(v7 + 48);
        v17 = *(_DWORD *)(v7 + 4);
        v18 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v9,
          (unsigned int)&unk_1800D127A,
          v10 + 8,
          v9,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)v26,
          (__int64)&v16,
          (__int64)&v25,
          (__int64)&v30,
          (__int64)&v24,
          (__int64)&v29,
          (__int64)&v23,
          (__int64)&v27,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v28,
          (__int64)&v20,
          (__int64)&v19);
      }
    }
    else
    {
      v11 = v8[1];
      if ( *(_DWORD *)v11 > 2u
        && (*(_QWORD *)(v11 + 16) & 0x200000000000LL) != 0
        && (*(_QWORD *)(v11 + 24) & 0x200000000000LL) == *(_QWORD *)(v11 + 24) )
      {
        CurrentThreadId = GetCurrentThreadId();
        v13 = a1[6];
        v29 = *(_QWORD *)(v13 + 56);
        v14 = *(_QWORD *)(v13 + 48);
        v28 = CurrentThreadId;
        v30 = v14;
        v27 = a2;
        v18 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v11,
          (unsigned int)&unk_1800D1391,
          v13 + 8,
          v15,
          (__int64)&v18,
          (__int64)&v27,
          (__int64)&v28,
          (__int64)&v30,
          (__int64)&v29);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
