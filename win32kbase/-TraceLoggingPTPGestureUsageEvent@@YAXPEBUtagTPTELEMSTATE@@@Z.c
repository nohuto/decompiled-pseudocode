void __fastcall TraceLoggingPTPGestureUsageEvent(const struct tagTPTELEMSTATE *a1)
{
  __int64 v1; // rcx
  int *v2; // r8
  __int64 v3; // r9
  int v4; // [rsp+E0h] [rbp-80h] BYREF
  int v5; // [rsp+E4h] [rbp-7Ch] BYREF
  int v6; // [rsp+E8h] [rbp-78h] BYREF
  int v7; // [rsp+ECh] [rbp-74h] BYREF
  int v8; // [rsp+F0h] [rbp-70h] BYREF
  int v9; // [rsp+F4h] [rbp-6Ch] BYREF
  int v10; // [rsp+F8h] [rbp-68h] BYREF
  int v11; // [rsp+FCh] [rbp-64h] BYREF
  int v12; // [rsp+100h] [rbp-60h] BYREF
  int v13; // [rsp+104h] [rbp-5Ch] BYREF
  int v14; // [rsp+108h] [rbp-58h] BYREF
  int v15; // [rsp+10Ch] [rbp-54h] BYREF
  int v16; // [rsp+110h] [rbp-50h] BYREF
  int v17; // [rsp+114h] [rbp-4Ch] BYREF
  int v18; // [rsp+118h] [rbp-48h] BYREF
  int v19; // [rsp+11Ch] [rbp-44h] BYREF
  int v20; // [rsp+120h] [rbp-40h] BYREF
  int v21; // [rsp+124h] [rbp-3Ch] BYREF
  int v22; // [rsp+128h] [rbp-38h] BYREF
  int v23; // [rsp+12Ch] [rbp-34h] BYREF
  __int64 v24; // [rsp+130h] [rbp-30h] BYREF
  int v25; // [rsp+158h] [rbp-8h] BYREF
  int v26; // [rsp+160h] [rbp+0h] BYREF
  int v27; // [rsp+168h] [rbp+8h] BYREF

  if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
  {
    v25 = v2[22];
    v26 = v2[21];
    v27 = v2[20];
    v4 = v2[19];
    v5 = v2[18];
    v6 = v2[17];
    v7 = v2[16];
    v8 = v2[15];
    v9 = v2[14];
    v10 = v2[13];
    v11 = v2[12];
    v12 = v2[11];
    v13 = v2[10];
    v14 = v2[9];
    v15 = v2[8];
    v16 = v2[7];
    v17 = v2[6];
    v18 = v2[5];
    v19 = v2[4];
    v20 = v2[3];
    v21 = v2[2];
    v22 = v2[1];
    v23 = *v2;
    v24 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v1,
      byte_1C029BAE1,
      (__int64)v2,
      v3,
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
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24);
  }
}
