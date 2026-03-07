void __fastcall InputTraceLogging::RIM::RimDeviceFlags(const struct RIMDEV *a1)
{
  _DWORD *v1; // r8
  __int64 v2; // r9
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // [rsp+160h] [rbp-80h] BYREF
  int v7; // [rsp+164h] [rbp-7Ch] BYREF
  int v8; // [rsp+168h] [rbp-78h] BYREF
  int v9; // [rsp+16Ch] [rbp-74h] BYREF
  int v10; // [rsp+170h] [rbp-70h] BYREF
  int v11; // [rsp+174h] [rbp-6Ch] BYREF
  int v12; // [rsp+178h] [rbp-68h] BYREF
  int v13; // [rsp+17Ch] [rbp-64h] BYREF
  int v14; // [rsp+180h] [rbp-60h] BYREF
  int v15; // [rsp+184h] [rbp-5Ch] BYREF
  int v16; // [rsp+188h] [rbp-58h] BYREF
  int v17; // [rsp+18Ch] [rbp-54h] BYREF
  int v18; // [rsp+190h] [rbp-50h] BYREF
  int v19; // [rsp+194h] [rbp-4Ch] BYREF
  int v20; // [rsp+198h] [rbp-48h] BYREF
  int v21; // [rsp+19Ch] [rbp-44h] BYREF
  int v22; // [rsp+1A0h] [rbp-40h] BYREF
  int v23; // [rsp+1A4h] [rbp-3Ch] BYREF
  int v24; // [rsp+1A8h] [rbp-38h] BYREF
  int v25; // [rsp+1ACh] [rbp-34h] BYREF
  int v26; // [rsp+1B0h] [rbp-30h] BYREF
  int v27; // [rsp+1B4h] [rbp-2Ch] BYREF
  int v28; // [rsp+1B8h] [rbp-28h] BYREF
  int v29; // [rsp+1BCh] [rbp-24h] BYREF
  int v30; // [rsp+1C0h] [rbp-20h] BYREF
  int v31; // [rsp+1C4h] [rbp-1Ch] BYREF
  int v32; // [rsp+1C8h] [rbp-18h] BYREF
  int v33; // [rsp+1CCh] [rbp-14h] BYREF
  int v34; // [rsp+1D0h] [rbp-10h] BYREF
  int v35; // [rsp+1D4h] [rbp-Ch] BYREF
  int v36; // [rsp+1D8h] [rbp-8h] BYREF
  int v37; // [rsp+1DCh] [rbp-4h] BYREF
  int v38; // [rsp+1E0h] [rbp+0h] BYREF
  int v39; // [rsp+1E4h] [rbp+4h] BYREF
  int v40; // [rsp+1E8h] [rbp+8h] BYREF
  int v41; // [rsp+1ECh] [rbp+Ch] BYREF
  _DWORD *v42; // [rsp+1F0h] [rbp+10h] BYREF
  int v43; // [rsp+218h] [rbp+38h] BYREF
  int v44; // [rsp+220h] [rbp+40h] BYREF
  int v45; // [rsp+228h] [rbp+48h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
  {
    v3 = v1[50];
    v43 = -__CFSHR__(v3, 10);
    v44 = -__CFSHR__(v3, 9);
    v45 = -__CFSHR__(v3, 8);
    v6 = -__CFSHR__(v3, 7);
    v7 = -__CFSHR__(v3, 6);
    v8 = -__CFSHR__(v3, 5);
    v9 = -__CFSHR__(v3, 4);
    v10 = -__CFSHR__(v3, 3);
    v11 = -__CFSHR__(v3, 2);
    v12 = -(v3 & 1);
    v4 = v1[47];
    v13 = -__CFSHR__(v4, 5);
    v14 = -__CFSHR__(v4, 4);
    v5 = v1[46];
    v15 = (2 * v5) >> 31;
    v16 = (4 * v5) >> 31;
    v17 = (8 * v5) >> 31;
    v18 = -__CFSHR__(v5, 28);
    v19 = -__CFSHR__(v5, 27);
    v20 = -__CFSHR__(v5, 26);
    v21 = -__CFSHR__(v5, 25);
    v22 = -__CFSHR__(v5, 24);
    v23 = -__CFSHR__(v5, 23);
    v42 = v1;
    v24 = -__CFSHR__(v5, 22);
    v25 = -__CFSHR__(v5, 21);
    v26 = -__CFSHR__(v5, 20);
    v27 = -__CFSHR__(v5, 19);
    v28 = -__CFSHR__(v5, 17);
    v29 = -__CFSHR__(v5, 14);
    v30 = -__CFSHR__(v5, 13);
    v31 = -__CFSHR__(v5, 12);
    v32 = -__CFSHR__(v5, 11);
    v33 = -__CFSHR__(v5, 10);
    v34 = -__CFSHR__(v5, 9);
    v35 = -__CFSHR__(v5, 8);
    v36 = -__CFSHR__(v5, 6);
    v37 = -__CFSHR__(v5, 5);
    v38 = -__CFSHR__(v5, 4);
    v39 = -__CFSHR__(v5, 3);
    v40 = -__CFSHR__(v5, 2);
    v41 = -(v5 & 1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C02960A3,
      (__int64)v1,
      v2,
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
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43);
  }
}
