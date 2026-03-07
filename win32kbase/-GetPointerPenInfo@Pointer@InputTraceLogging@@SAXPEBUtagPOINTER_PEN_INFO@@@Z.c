void __fastcall InputTraceLogging::Pointer::GetPointerPenInfo(const struct tagPOINTER_PEN_INFO *a1)
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
  int v10; // [rsp+100h] [rbp-80h] BYREF
  int v11; // [rsp+104h] [rbp-7Ch] BYREF
  int v12; // [rsp+108h] [rbp-78h] BYREF
  int v13; // [rsp+10Ch] [rbp-74h] BYREF
  int v14; // [rsp+110h] [rbp-70h] BYREF
  int v15; // [rsp+114h] [rbp-6Ch] BYREF
  int v16; // [rsp+118h] [rbp-68h] BYREF
  int v17; // [rsp+11Ch] [rbp-64h] BYREF
  int v18; // [rsp+120h] [rbp-60h] BYREF
  int v19; // [rsp+124h] [rbp-5Ch] BYREF
  int v20; // [rsp+128h] [rbp-58h] BYREF
  int v21; // [rsp+12Ch] [rbp-54h] BYREF
  int v22; // [rsp+130h] [rbp-50h] BYREF
  int v23; // [rsp+134h] [rbp-4Ch] BYREF
  int v24; // [rsp+138h] [rbp-48h] BYREF
  int v25; // [rsp+13Ch] [rbp-44h] BYREF
  int v26; // [rsp+140h] [rbp-40h] BYREF
  int v27; // [rsp+144h] [rbp-3Ch] BYREF
  __int64 v28; // [rsp+148h] [rbp-38h] BYREF
  __int64 v29; // [rsp+150h] [rbp-30h] BYREF
  __int64 v30; // [rsp+158h] [rbp-28h] BYREF
  __int64 v31; // [rsp+160h] [rbp-20h] BYREF
  __int64 v32; // [rsp+168h] [rbp-18h] BYREF
  __int64 v33; // [rsp+170h] [rbp-10h] BYREF
  __int64 v34; // [rsp+198h] [rbp+18h] BYREF
  __int64 v35; // [rsp+1A0h] [rbp+20h] BYREF
  __int64 v36; // [rsp+1A8h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 5 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
  {
    v2 = v1[22];
    LODWORD(v34) = v1[29];
    LODWORD(v35) = v1[28];
    LODWORD(v36) = v1[27];
    v10 = v1[26];
    v11 = v1[25];
    v12 = v1[24];
    v3 = InputTraceLogging::ButtonChangeTypeToString(v2);
    v5 = *(_QWORD *)(v4 + 80);
    v6 = *(_DWORD *)v4;
    v28 = (__int64)v3;
    v13 = *(_DWORD *)(v4 + 76);
    v14 = *(_DWORD *)(v4 + 68);
    v15 = *(_DWORD *)(v4 + 64);
    v30 = *(_QWORD *)(v4 + 24);
    v31 = *(_QWORD *)(v4 + 16);
    v16 = *(_DWORD *)(v4 + 72);
    v17 = *(_DWORD *)(v4 + 60);
    v18 = *(_DWORD *)(v4 + 56);
    v19 = *(_DWORD *)(v4 + 44);
    v20 = *(_DWORD *)(v4 + 40);
    v21 = *(_DWORD *)(v4 + 52);
    v22 = *(_DWORD *)(v4 + 48);
    v23 = *(_DWORD *)(v4 + 36);
    v24 = *(_DWORD *)(v4 + 32);
    v25 = *(_DWORD *)(v4 + 12);
    v29 = v5;
    v32 = (__int64)InputTraceLogging::PointerTypeToString(v6);
    v26 = *(_DWORD *)(v7 + 8);
    v27 = *(_DWORD *)(v7 + 4);
    v33 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      (unsigned __int8 *)dword_1C0299899,
      v7,
      v9,
      (__int64)&v33,
      (__int64)&v27,
      (__int64)&v26,
      (void **)&v32,
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
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v15,
      (__int64)&v29,
      (__int64)&v14,
      (__int64)&v13,
      (void **)&v28,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34);
  }
}
