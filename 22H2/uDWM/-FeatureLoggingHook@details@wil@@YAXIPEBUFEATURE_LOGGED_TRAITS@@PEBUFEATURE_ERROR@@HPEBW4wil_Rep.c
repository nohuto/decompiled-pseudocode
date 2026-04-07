/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x180051C10
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x180051C88 (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@D@@U2@U3@U3@U3@U2@U3@U3@U3@U3@U1@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@D@@455545555353@Z @ 0x18007CEBC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@D@@U2@U3@U3@U3.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@35AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18007D19C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18007D274 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U-$.c)
 */

void __fastcall wil::details::FeatureLoggingHook(
        wil::details *this,
        unsigned __int16 *a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        const struct FEATURE_ERROR *a4,
        int *a5,
        const enum wil_ReportingKind *a6,
        const enum wil_VariantReportingKind *a7,
        __int64 a8)
{
  int v9; // r14d
  int v11; // r15d
  _DWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  int v17; // ecx
  __int16 v18; // dx
  int v19; // eax
  __int64 v20; // r9
  __int16 v21; // cx
  int v22; // edx
  int v23; // r8d
  __int64 v24; // r8
  int v25; // r10d
  int v26; // ecx
  int v27; // r9d
  int v28; // edx
  __int64 v29; // r8
  int v30; // ecx
  int v31; // r9d
  int v32; // edx
  __int16 v33; // [rsp+B8h] [rbp-80h] BYREF
  __int16 v34; // [rsp+BAh] [rbp-7Eh] BYREF
  int v35; // [rsp+BCh] [rbp-7Ch] BYREF
  int v36; // [rsp+C0h] [rbp-78h] BYREF
  int v37; // [rsp+C4h] [rbp-74h] BYREF
  int v38; // [rsp+C8h] [rbp-70h] BYREF
  int v39; // [rsp+CCh] [rbp-6Ch] BYREF
  __int64 v40; // [rsp+D0h] [rbp-68h] BYREF
  int v41; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v42; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v43; // [rsp+E8h] [rbp-50h] BYREF
  __int64 v44; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v45; // [rsp+F8h] [rbp-40h] BYREF
  __int64 v46; // [rsp+100h] [rbp-38h] BYREF
  __int64 v47; // [rsp+108h] [rbp-30h] BYREF
  __int64 v48; // [rsp+110h] [rbp-28h] BYREF
  __int64 v49; // [rsp+118h] [rbp-20h] BYREF
  __int64 v50; // [rsp+120h] [rbp-18h] BYREF

  v9 = (int)a4;
  v11 = (int)this;
  v12 = *(_DWORD **)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                       this,
                       _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                   + 8);
  if ( v12 && *v12 )
  {
    if ( a5 )
    {
      v15 = *(_QWORD *)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                          v13,
                          _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *(_DWORD *)v15 > 5u
        && (*(_BYTE *)(v15 + 16) & 2) != 0
        && (*(_QWORD *)(v15 + 24) & 2LL) == *(_QWORD *)(v15 + 24) )
      {
        v16 = *a5;
        v17 = -1;
        if ( a2 )
          v18 = *((unsigned __int8 *)a2 + 4);
        else
          v18 = -1;
        if ( a2 )
          v19 = a2[1];
        else
          v19 = -1;
        if ( a2 )
          v17 = *a2;
        v36 = v19;
        v34 = v18;
        v37 = v17;
        v40 = a8;
        v35 = v16;
        LOBYTE(v33) = v9 != 0;
        v38 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v15,
          (unsigned int)&unk_1800CFFB2,
          v15,
          v16,
          (__int64)&v38,
          (__int64)&v37,
          (__int64)&v36,
          (__int64)&v34,
          (__int64)&v33,
          (__int64)&v35,
          (__int64)&v40);
      }
      if ( *((_BYTE *)a2 + 4) == 1 )
      {
        if ( v9 )
        {
          v20 = *(_QWORD *)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                              v14,
                              _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                          + 8);
          if ( *(_DWORD *)v20 > 5u
            && (*(_BYTE *)(v20 + 16) & 0xA) != 0
            && (*(_QWORD *)(v20 + 24) & 0xALL) == *(_QWORD *)(v20 + 24) )
          {
            v21 = *((unsigned __int8 *)a2 + 4);
            v22 = a2[1];
            v23 = *a2;
            v38 = *a5;
            v34 = v21;
            v37 = v22;
            v40 = a8;
            LOBYTE(v33) = 1;
            v36 = v23;
            v35 = v11;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              v20,
              (unsigned int)&unk_1800CFCF1,
              v23,
              v20,
              (__int64)&v35,
              (__int64)&v36,
              (__int64)&v37,
              (__int64)&v34,
              (__int64)&v33,
              (__int64)&v38,
              (__int64)&v40);
          }
        }
      }
    }
    else if ( a6 )
    {
      v24 = *(_QWORD *)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                          v13,
                          _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *(_DWORD *)v24 > 5u
        && (*(_BYTE *)(v24 + 16) & 4) != 0
        && (*(_QWORD *)(v24 + 24) & 4LL) == *(_QWORD *)(v24 + 24) )
      {
        v25 = *(_DWORD *)a6;
        v26 = -1;
        if ( a2 )
          v27 = *((unsigned __int8 *)a2 + 4);
        else
          v27 = -1;
        if ( a2 )
          v28 = a2[1];
        else
          v28 = -1;
        if ( a2 )
          v26 = *a2;
        v40 = a8;
        LOBYTE(v33) = (_BYTE)a7;
        v37 = v28;
        v36 = v26;
        v38 = v25;
        LOBYTE(v34) = v9 != 0;
        LOWORD(v35) = v27;
        v39 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          v24,
          (unsigned int)&unk_1800D0023,
          v24,
          v27,
          (__int64)&v39,
          (__int64)&v36,
          (__int64)&v37,
          (__int64)&v35,
          (__int64)&v34,
          (__int64)&v38,
          (__int64)&v33,
          (__int64)&v40);
      }
    }
    else if ( a3 )
    {
      v29 = *(_QWORD *)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                          v13,
                          _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *(_DWORD *)v29 > 2u
        && (*(_BYTE *)(v29 + 16) & 1) != 0
        && (*(_QWORD *)(v29 + 24) & 1LL) == *(_QWORD *)(v29 + 24) )
      {
        v30 = -1;
        if ( a2 )
          v31 = *((unsigned __int8 *)a2 + 4);
        else
          v31 = -1;
        if ( a2 )
          v32 = a2[1];
        else
          v32 = -1;
        if ( a2 )
          v30 = *a2;
        v39 = *((_DWORD *)a3 + 20);
        v42 = *((_QWORD *)a3 + 11);
        v38 = *((_DWORD *)a3 + 8);
        v43 = *((_QWORD *)a3 + 5);
        v44 = *((_QWORD *)a3 + 6);
        v45 = *((_QWORD *)a3 + 12);
        v46 = *((_QWORD *)a3 + 9);
        LOWORD(v35) = *((_WORD *)a3 + 28);
        v47 = *((_QWORD *)a3 + 8);
        v48 = *((_QWORD *)a3 + 2);
        v49 = *((_QWORD *)a3 + 3);
        v34 = *((_WORD *)a3 + 2);
        v50 = *((_QWORD *)a3 + 1);
        v37 = *(_DWORD *)a3;
        v36 = v32;
        v41 = v30;
        v33 = v31;
        LODWORD(v40) = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          v29,
          (unsigned int)&unk_1800CFBD1,
          v29,
          v31,
          (__int64)&v40,
          (__int64)&v41,
          (__int64)&v36,
          (__int64)&v33,
          (__int64)&v37,
          (__int64)&v50,
          (__int64)&v34,
          (__int64)&v49,
          (__int64)&v48,
          (__int64)&v47,
          (__int64)&v35,
          (__int64)&v46,
          (__int64)&v45,
          (__int64)&v44,
          (__int64)&v43,
          (__int64)&v38,
          (__int64)&v42,
          (__int64)&v39);
      }
    }
  }
}
