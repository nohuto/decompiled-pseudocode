void __fastcall InputTraceLogging::InputSink::MapVisualRelativePoint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int *v6; // r8
  int *v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11
  int v10; // [rsp+150h] [rbp-80h] BYREF
  int v11; // [rsp+154h] [rbp-7Ch] BYREF
  int v12; // [rsp+158h] [rbp-78h] BYREF
  int v13; // [rsp+15Ch] [rbp-74h] BYREF
  int v14; // [rsp+160h] [rbp-70h] BYREF
  int v15; // [rsp+164h] [rbp-6Ch] BYREF
  int v16; // [rsp+168h] [rbp-68h] BYREF
  int v17; // [rsp+16Ch] [rbp-64h] BYREF
  int v18; // [rsp+170h] [rbp-60h] BYREF
  int v19; // [rsp+174h] [rbp-5Ch] BYREF
  int v20; // [rsp+178h] [rbp-58h] BYREF
  int v21; // [rsp+17Ch] [rbp-54h] BYREF
  int v22; // [rsp+180h] [rbp-50h] BYREF
  int v23; // [rsp+184h] [rbp-4Ch] BYREF
  int v24; // [rsp+188h] [rbp-48h] BYREF
  int v25; // [rsp+18Ch] [rbp-44h] BYREF
  int v26; // [rsp+190h] [rbp-40h] BYREF
  int v27; // [rsp+194h] [rbp-3Ch] BYREF
  int v28; // [rsp+198h] [rbp-38h] BYREF
  int v29; // [rsp+19Ch] [rbp-34h] BYREF
  int v30; // [rsp+1A0h] [rbp-30h] BYREF
  int v31; // [rsp+1A4h] [rbp-2Ch] BYREF
  int v32; // [rsp+1A8h] [rbp-28h] BYREF
  int v33; // [rsp+1ACh] [rbp-24h] BYREF
  int v34; // [rsp+1B0h] [rbp-20h] BYREF
  int v35; // [rsp+1B4h] [rbp-1Ch] BYREF
  int v36; // [rsp+1B8h] [rbp-18h] BYREF
  int v37; // [rsp+1BCh] [rbp-14h] BYREF
  int v38; // [rsp+1C0h] [rbp-10h] BYREF
  int v39; // [rsp+1C4h] [rbp-Ch] BYREF
  int v40; // [rsp+1C8h] [rbp-8h] BYREF
  int v41; // [rsp+1CCh] [rbp-4h] BYREF
  int v42; // [rsp+1D0h] [rbp+0h] BYREF
  int v43; // [rsp+1D4h] [rbp+4h] BYREF
  int v44; // [rsp+1D8h] [rbp+8h] BYREF
  int v45; // [rsp+1DCh] [rbp+Ch] BYREF
  __int64 v46; // [rsp+1E0h] [rbp+10h] BYREF
  __int64 v47; // [rsp+1E8h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 5 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 4LL) )
  {
    v10 = v7[15];
    v11 = v7[14];
    v12 = v7[13];
    v13 = v7[12];
    v14 = v7[11];
    v15 = v7[10];
    v16 = v7[9];
    v17 = v7[8];
    v18 = v7[7];
    v19 = v7[6];
    v20 = v7[5];
    v21 = v7[4];
    v22 = v7[3];
    v23 = v7[2];
    v24 = v7[1];
    v25 = *v7;
    v26 = v6[15];
    v27 = v6[14];
    v28 = v6[13];
    v29 = v6[12];
    v30 = v6[11];
    v31 = v6[10];
    v32 = v6[9];
    v33 = v6[8];
    v34 = v6[7];
    v35 = v6[6];
    v36 = v6[5];
    v37 = v6[4];
    v38 = v6[3];
    v39 = v6[2];
    v40 = v6[1];
    v41 = *v6;
    v42 = HIDWORD(a6);
    v43 = a6;
    v44 = HIDWORD(a5);
    v45 = a5;
    v46 = v8;
    v47 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C0293E97,
      (__int64)v6,
      (__int64)v7,
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
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
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
      (__int64)&v11,
      (__int64)&v10);
  }
}
