void __fastcall InputTraceLogging::Pointer::GetPointerTouchInfo(const struct tagPOINTER_TOUCH_INFO *a1)
{
  _DWORD *v1; // r8
  int v2; // ecx
  const char *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // [rsp+130h] [rbp-80h] BYREF
  int v11; // [rsp+134h] [rbp-7Ch] BYREF
  int v12; // [rsp+138h] [rbp-78h] BYREF
  int v13; // [rsp+13Ch] [rbp-74h] BYREF
  int v14; // [rsp+140h] [rbp-70h] BYREF
  int v15; // [rsp+144h] [rbp-6Ch] BYREF
  int v16; // [rsp+148h] [rbp-68h] BYREF
  int v17; // [rsp+14Ch] [rbp-64h] BYREF
  int v18; // [rsp+150h] [rbp-60h] BYREF
  int v19; // [rsp+154h] [rbp-5Ch] BYREF
  int v20; // [rsp+158h] [rbp-58h] BYREF
  int v21; // [rsp+15Ch] [rbp-54h] BYREF
  int v22; // [rsp+160h] [rbp-50h] BYREF
  int v23; // [rsp+164h] [rbp-4Ch] BYREF
  int v24; // [rsp+168h] [rbp-48h] BYREF
  int v25; // [rsp+16Ch] [rbp-44h] BYREF
  int v26; // [rsp+170h] [rbp-40h] BYREF
  int v27; // [rsp+174h] [rbp-3Ch] BYREF
  int v28; // [rsp+178h] [rbp-38h] BYREF
  int v29; // [rsp+17Ch] [rbp-34h] BYREF
  int v30; // [rsp+180h] [rbp-30h] BYREF
  int v31; // [rsp+184h] [rbp-2Ch] BYREF
  int v32; // [rsp+188h] [rbp-28h] BYREF
  int v33; // [rsp+18Ch] [rbp-24h] BYREF
  __int64 v34; // [rsp+190h] [rbp-20h] BYREF
  __int64 v35; // [rsp+198h] [rbp-18h] BYREF
  __int64 v36; // [rsp+1A0h] [rbp-10h] BYREF
  __int64 v37; // [rsp+1A8h] [rbp-8h] BYREF
  __int64 v38; // [rsp+1B0h] [rbp+0h] BYREF
  __int64 v39; // [rsp+1B8h] [rbp+8h] BYREF
  __int64 v40; // [rsp+1D8h] [rbp+28h] BYREF
  __int64 v41; // [rsp+1E0h] [rbp+30h] BYREF
  __int64 v42; // [rsp+1E8h] [rbp+38h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 5 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
  {
    v2 = v1[22];
    LODWORD(v40) = v1[35];
    LODWORD(v41) = v1[34];
    LODWORD(v42) = v1[33];
    v10 = v1[32];
    v11 = v1[31];
    v12 = v1[30];
    v13 = v1[29];
    v14 = v1[28];
    v15 = v1[27];
    v16 = v1[26];
    v17 = v1[25];
    v18 = v1[24];
    v3 = InputTraceLogging::ButtonChangeTypeToString(v2);
    v5 = *(_QWORD *)(v4 + 80);
    v6 = *(_DWORD *)v4;
    v34 = (__int64)v3;
    v19 = *(_DWORD *)(v4 + 76);
    v20 = *(_DWORD *)(v4 + 68);
    v21 = *(_DWORD *)(v4 + 64);
    v36 = *(_QWORD *)(v4 + 24);
    v37 = *(_QWORD *)(v4 + 16);
    v22 = *(_DWORD *)(v4 + 72);
    v23 = *(_DWORD *)(v4 + 60);
    v24 = *(_DWORD *)(v4 + 56);
    v25 = *(_DWORD *)(v4 + 44);
    v26 = *(_DWORD *)(v4 + 40);
    v27 = *(_DWORD *)(v4 + 52);
    v28 = *(_DWORD *)(v4 + 48);
    v29 = *(_DWORD *)(v4 + 36);
    v30 = *(_DWORD *)(v4 + 32);
    v31 = *(_DWORD *)(v4 + 12);
    v35 = v5;
    v38 = (__int64)InputTraceLogging::PointerTypeToString(v6);
    v32 = *(_DWORD *)(v7 + 8);
    v33 = *(_DWORD *)(v7 + 4);
    v39 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      (unsigned __int8 *)dword_1C02999FD,
      v7,
      v9,
      (__int64)&v39,
      (__int64)&v33,
      (__int64)&v32,
      (void **)&v38,
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
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v21,
      (__int64)&v35,
      (__int64)&v20,
      (__int64)&v19,
      (void **)&v34,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40);
  }
}
