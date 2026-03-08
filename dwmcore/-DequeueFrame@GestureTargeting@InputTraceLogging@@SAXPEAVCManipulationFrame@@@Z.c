/*
 * XREFs of ?DequeueFrame@GestureTargeting@InputTraceLogging@@SAXPEAVCManipulationFrame@@@Z @ 0x18019AB04
 * Callers:
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x18019B88C (-OnInput@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x180032918 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180032950 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180199A00 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444@Z @ 0x180199D64 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::DequeueFrame(struct CManipulationFrame *a1)
{
  __int64 v2; // rcx
  _DWORD *v3; // rcx
  __int64 v4; // r9
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  int v7; // eax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  unsigned int v14; // edi
  __int64 v15; // rsi
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // [rsp+60h] [rbp-A0h] BYREF
  int v21; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  __int128 v24; // [rsp+80h] [rbp-80h]
  __int128 v25; // [rsp+90h] [rbp-70h]
  __int128 v26; // [rsp+A0h] [rbp-60h]
  __int128 v27; // [rsp+B0h] [rbp-50h]
  __int128 v28; // [rsp+C0h] [rbp-40h]
  __int128 v29; // [rsp+D0h] [rbp-30h]
  __int128 v30; // [rsp+E0h] [rbp-20h]
  __int128 v31; // [rsp+F0h] [rbp-10h]
  __int128 v32; // [rsp+100h] [rbp+0h]
  int v33; // [rsp+138h] [rbp+38h] BYREF
  int v34; // [rsp+140h] [rbp+40h] BYREF
  __int64 v35; // [rsp+148h] [rbp+48h] BYREF

  if ( InputTraceLogging::Enabled(0LL) )
  {
    v3 = (_DWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     v2,
                     (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
    if ( *v3 > 4u && tlgKeywordOn((__int64)v3, 2048LL) )
    {
      v5 = *((_OWORD *)a1 + 2);
      v33 = *((_DWORD *)a1 + 4);
      v6 = *((_OWORD *)a1 + 3);
      v7 = *((_DWORD *)a1 + 6);
      v24 = v5;
      v34 = v7;
      v8 = *((_OWORD *)a1 + 4);
      v25 = v6;
      v9 = *((_OWORD *)a1 + 5);
      v26 = v8;
      v10 = *((_OWORD *)a1 + 6);
      v27 = v9;
      v11 = *((_OWORD *)a1 + 7);
      v28 = v10;
      v12 = *((_OWORD *)a1 + 8);
      v29 = v11;
      v13 = *((_OWORD *)a1 + 10);
      v30 = v12;
      v31 = *((_OWORD *)a1 + 9);
      v32 = v13;
      v35 = v24;
      v22 = *((_QWORD *)a1 + 56);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v3,
        byte_18037A532,
        128LL,
        v4,
        (__int64)&v22,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33);
    }
    v14 = 0;
    if ( *((_DWORD *)a1 + 4) )
    {
      do
      {
        v15 = 248LL * v14;
        v16 = *(_OWORD *)((char *)a1 + v15 + 448);
        v24 = *(_OWORD *)((char *)a1 + v15 + 368);
        v17 = *(_OWORD *)((char *)a1 + v15 + 400);
        v29 = v16;
        v26 = v17;
        v3 = (_DWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                         (__int64)v3,
                         (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
        if ( *v3 > 4u )
        {
          if ( tlgKeywordOn((__int64)v3, 2048LL) )
          {
            v33 = *(_DWORD *)((char *)a1 + v15 + 600);
            v34 = *(_DWORD *)((char *)a1 + v15 + 560);
            LODWORD(v35) = DWORD1(v26);
            v20 = v26;
            v21 = HIDWORD(v24);
            LODWORD(v22) = DWORD1(v24);
            v23 = v29;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (__int64)v3,
              byte_18037A4A2,
              v18,
              v19,
              (__int64)&v23,
              (__int64)&v22,
              (__int64)&v21,
              (__int64)&v20,
              (__int64)&v35,
              (__int64)&v34,
              (__int64)&v33);
          }
        }
        ++v14;
      }
      while ( v14 != *((_DWORD *)a1 + 4) );
    }
  }
}
