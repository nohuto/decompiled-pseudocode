/*
 * XREFs of ?DequeueFrame@GestureTargeting@InputTraceLogging@@SAXPEAVCManipulationFrame@@@Z @ 0x18022483C
 * Callers:
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x1802254F4 (-OnInput@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x18004EBFC (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18004EC34 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180223F30 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444@Z @ 0x18022426C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::DequeueFrame(struct CManipulationFrame *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v7; // xmm2
  __int64 v8; // rsi
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h] BYREF
  __int128 v17; // [rsp+80h] [rbp-80h]
  __int128 v18; // [rsp+A0h] [rbp-60h]
  __int128 v19; // [rsp+D0h] [rbp-30h]
  int v20; // [rsp+148h] [rbp+48h] BYREF
  int v21; // [rsp+150h] [rbp+50h] BYREF
  __int64 v22; // [rsp+158h] [rbp+58h] BYREF

  v3 = 0;
  if ( InputTraceLogging::Enabled(0LL) )
  {
    v4 = wil::details::static_lazy<InputTraceLogging>::get(
           v2,
           _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v4 > 4u
      && (*(_DWORD *)(v4 + 16) & 0x800LL) != 0
      && (*(_QWORD *)(v4 + 24) & 0x800LL) == *(_QWORD *)(v4 + 24) )
    {
      v7 = *((_OWORD *)a1 + 2);
      v20 = *((_DWORD *)a1 + 4);
      v21 = *((_DWORD *)a1 + 6);
      v15 = *((_QWORD *)a1 + 30);
      v22 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v4,
        byte_1802EB1B0,
        v5,
        v6,
        (__int64)&v15,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20);
    }
    if ( *((_DWORD *)a1 + 4) )
    {
      do
      {
        v8 = 248LL * v3;
        v9 = *(_OWORD *)((char *)a1 + v8 + 240);
        v17 = *(_OWORD *)((char *)a1 + v8 + 160);
        v10 = *(_OWORD *)((char *)a1 + v8 + 192);
        v19 = v9;
        v18 = v10;
        v4 = wil::details::static_lazy<InputTraceLogging>::get(
               v4,
               _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v4 > 4u
          && (*(_DWORD *)(v4 + 16) & 0x800LL) != 0
          && (*(_QWORD *)(v4 + 24) & 0x800LL) == *(_QWORD *)(v4 + 24) )
        {
          v20 = *(_DWORD *)((char *)a1 + v8 + 392);
          v21 = *(_DWORD *)((char *)a1 + v8 + 352);
          LODWORD(v22) = DWORD1(v18);
          v13 = v18;
          v14 = HIDWORD(v17);
          LODWORD(v15) = DWORD1(v17);
          v16 = v19;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v4,
            byte_1802EB120,
            v11,
            v12,
            (__int64)&v16,
            (__int64)&v15,
            (__int64)&v14,
            (__int64)&v13,
            (__int64)&v22,
            (__int64)&v21,
            (__int64)&v20);
        }
        ++v3;
      }
      while ( v3 != *((_DWORD *)a1 + 4) );
    }
  }
}
