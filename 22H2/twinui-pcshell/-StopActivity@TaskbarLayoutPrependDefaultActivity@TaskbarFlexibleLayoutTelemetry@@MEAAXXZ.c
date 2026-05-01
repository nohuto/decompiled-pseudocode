/*
 * XREFs of ?StopActivity@TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ @ 0x18015C9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18001DE3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?zInternalStop@?$ActivityBase@VTaskbarLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18014658C (-zInternalStop@-$ActivityBase@VTaskbarLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x1801B47AC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1801B47AC.c)
 *     ?Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18020E540 (-Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::StopActivity(
        TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity *this)
{
  __int64 v1; // rdi
  int v3; // eax
  __int64 v4; // rdi
  const struct _tlgProvider_t *v5; // rax
  int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v11; // r8
  int v12; // [rsp+A0h] [rbp-19h] BYREF
  int v13; // [rsp+A4h] [rbp-15h] BYREF
  __int64 v14; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v15; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v16; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v18; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v19; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v20; // [rsp+D8h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+E0h] [rbp+27h] BYREF
  __int64 v22; // [rsp+E8h] [rbp+2Fh] BYREF
  __int64 v23[4]; // [rsp+F0h] [rbp+37h] BYREF
  __int64 v24; // [rsp+120h] [rbp+67h] BYREF
  __int64 v25; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v26; // [rsp+130h] [rbp+77h] BYREF
  __int64 v27; // [rsp+138h] [rbp+7Fh] BYREF

  v1 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v1 + 76);
  if ( v3 < 0 && v3 == *(_DWORD *)(v1 + 84) )
    v4 = v1 + 80;
  else
    v4 = 0LL;
  wil::ActivityBase<TaskbarLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v5 = TaskbarLogging::Provider();
  if ( v4 )
  {
    if ( *(_DWORD *)v5 > 5u && tlgKeywordOn((__int64)v5, 0x400000000000LL) )
    {
      v7 = *(_QWORD *)(v4 + 112);
      v8 = *((_QWORD *)this + 6);
      v15 = *(_QWORD *)(v4 + 104);
      LODWORD(v24) = *(_DWORD *)(v4 + 96);
      v16 = *(_QWORD *)(v4 + 88);
      v17 = *(_QWORD *)(v4 + 80);
      LODWORD(v25) = *(_DWORD *)(v4 + 72);
      v18 = *(_QWORD *)(v4 + 64);
      LODWORD(v26) = *(_DWORD *)(v4 + 24);
      v19 = *(_QWORD *)(v4 + 16);
      LODWORD(v27) = *(_DWORD *)v4;
      v20 = *(_QWORD *)(v4 + 120);
      v12 = *(_DWORD *)(v4 + 56);
      v21 = *(_QWORD *)(v4 + 48);
      v13 = *(_DWORD *)(v4 + 4);
      v22 = 0x1000000LL;
      v23[0] = 0x1000000LL;
      v14 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v6,
        (int)&dword_1805A4561,
        v8 + 8,
        (__int64)v23,
        (__int64)&v22,
        (__int64)&v13,
        (__int64)&v21,
        (__int64)&v12,
        (__int64)&v20,
        (__int64)&v27,
        (__int64)&v19,
        (__int64)&v26,
        (__int64)&v18,
        (__int64)&v25,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v24,
        (__int64)&v15,
        (__int64)&v14);
    }
  }
  else
  {
    v9 = (__int64)v5;
    if ( *(_DWORD *)v5 > 5u && tlgKeywordOn((__int64)v5, 0x400000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v11 = *((_QWORD *)this + 6);
      LODWORD(v24) = CurrentThreadId;
      LODWORD(v25) = *(_DWORD *)(v11 + 76);
      v26 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v9,
        byte_1805A46F7,
        (const GUID *)(v11 + 8),
        0LL,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity *)((char *)this + 8));
}
