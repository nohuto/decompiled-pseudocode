/*
 * XREFs of ?MPCSixDofProcessor_HomePressedEvent_@ISMTracing@@QEAAXK_NKMMMMMMMMMMMMMMMMMMK@Z @ 0x18018DA6C
 * Callers:
 *     ??$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEBI@ISMTracing@@SAX$$QEAKAEA_NAEAKAEBM33333AEAM44444444444AEBI@Z @ 0x18018A7E4 (--$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEA.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@33333333333333333333@Z @ 0x18018AAC8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomePressedEvent_(
        ISMTracing *this,
        int a2,
        char a3,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        float a17,
        float a18,
        float a19,
        float a20,
        float a21,
        float a22,
        unsigned int a23)
{
  LPVOID v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r10
  unsigned int v30; // [rsp+D8h] [rbp-80h] BYREF
  float v31; // [rsp+DCh] [rbp-7Ch] BYREF
  float v32; // [rsp+E0h] [rbp-78h] BYREF
  float v33; // [rsp+E4h] [rbp-74h] BYREF
  float v34; // [rsp+E8h] [rbp-70h] BYREF
  float v35; // [rsp+ECh] [rbp-6Ch] BYREF
  float v36; // [rsp+F0h] [rbp-68h] BYREF
  float v37; // [rsp+F4h] [rbp-64h] BYREF
  float v38; // [rsp+F8h] [rbp-60h] BYREF
  float v39; // [rsp+FCh] [rbp-5Ch] BYREF
  float v40; // [rsp+100h] [rbp-58h] BYREF
  float v41; // [rsp+104h] [rbp-54h] BYREF
  float v42; // [rsp+108h] [rbp-50h] BYREF
  float v43; // [rsp+10Ch] [rbp-4Ch] BYREF
  float v44; // [rsp+110h] [rbp-48h] BYREF
  float v45; // [rsp+114h] [rbp-44h] BYREF
  float v46; // [rsp+118h] [rbp-40h] BYREF
  float v47; // [rsp+11Ch] [rbp-3Ch] BYREF
  float v48; // [rsp+120h] [rbp-38h] BYREF
  int v49; // [rsp+124h] [rbp-34h] BYREF
  _DWORD v50[4]; // [rsp+128h] [rbp-30h] BYREF
  ISMTracing *v51; // [rsp+148h] [rbp-10h] BYREF

  v51 = this;
  v26 = wil::details::static_lazy<ISMTracing>::get(
          (__int64)this,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v26 + 1) > 5u && tlgKeywordOn(*((_QWORD *)v26 + 1), 1LL) )
  {
    v30 = a23;
    v31 = a22;
    v32 = a21;
    v33 = a20;
    v34 = a19;
    v35 = a18;
    v36 = a17;
    v37 = a16;
    v38 = a15;
    v39 = a14;
    v40 = a13;
    v41 = a12;
    v42 = a11;
    v43 = a10;
    v44 = a9;
    v45 = a8;
    v46 = a7;
    v47 = a6;
    v48 = a5;
    v49 = a4;
    LOBYTE(v51) = a3;
    v50[0] = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v29,
      byte_1801D2B8C,
      v27,
      v28,
      (__int64)v50,
      (__int64)&v51,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30);
  }
}
