void __fastcall TraceLoggingPTPSettingsConfigEvent(
        struct tagTPSETTINGS *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        int a6,
        int a7,
        struct tagRECT *a8,
        struct tagRECT *a9)
{
  __int64 v9; // r8
  const WCHAR *v10; // r9
  int *v11; // r10
  int v12; // r11d
  LONG right; // [rsp+F0h] [rbp-80h] BYREF
  LONG bottom; // [rsp+F4h] [rbp-7Ch] BYREF
  LONG v15; // [rsp+F8h] [rbp-78h] BYREF
  LONG v16; // [rsp+FCh] [rbp-74h] BYREF
  int v17; // [rsp+100h] [rbp-70h] BYREF
  int v18; // [rsp+104h] [rbp-6Ch] BYREF
  int v19; // [rsp+108h] [rbp-68h] BYREF
  int v20; // [rsp+10Ch] [rbp-64h] BYREF
  int v21; // [rsp+110h] [rbp-60h] BYREF
  int v22; // [rsp+114h] [rbp-5Ch] BYREF
  int v23; // [rsp+118h] [rbp-58h] BYREF
  int v24; // [rsp+11Ch] [rbp-54h] BYREF
  int v25; // [rsp+120h] [rbp-50h] BYREF
  int v26; // [rsp+124h] [rbp-4Ch] BYREF
  int v27; // [rsp+128h] [rbp-48h] BYREF
  int v28; // [rsp+12Ch] [rbp-44h] BYREF
  int v29; // [rsp+130h] [rbp-40h] BYREF
  int v30; // [rsp+134h] [rbp-3Ch] BYREF
  int v31; // [rsp+138h] [rbp-38h] BYREF
  int v32; // [rsp+13Ch] [rbp-34h] BYREF
  int v33; // [rsp+140h] [rbp-30h] BYREF
  int v34; // [rsp+144h] [rbp-2Ch] BYREF
  __int64 v35; // [rsp+148h] [rbp-28h] BYREF
  const WCHAR *v36; // [rsp+150h] [rbp-20h] BYREF
  const WCHAR *v37; // [rsp+158h] [rbp-18h] BYREF

  if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x800000000000LL) )
  {
    v35 = 2048LL;
    v37 = v10;
    v19 = v9;
    right = a9->right;
    bottom = a9->bottom;
    v20 = v12;
    v15 = a8->right;
    v16 = a8->bottom;
    v17 = a7;
    v18 = a6;
    v36 = a5;
    v21 = v11[14];
    v22 = v11[13];
    v23 = v11[12];
    v24 = v11[11];
    v25 = v11[10];
    v26 = v11[9];
    v27 = v11[8];
    v28 = v11[7];
    v29 = v11[3];
    v30 = v11[6];
    v31 = v11[5];
    v32 = v11[4];
    v33 = v11[2];
    v34 = *v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)a8,
      byte_1C029B886,
      v9,
      (__int64)v10,
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
      &v37,
      &v36,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&bottom,
      (__int64)&right,
      (__int64)&v35);
  }
}
