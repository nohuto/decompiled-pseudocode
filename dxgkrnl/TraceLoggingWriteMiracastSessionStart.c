void TraceLoggingWriteMiracastSessionStart()
{
  __int64 v0; // r9
  unsigned int v1; // [rsp+F0h] [rbp-80h] BYREF
  int v2; // [rsp+F4h] [rbp-7Ch] BYREF
  int v3; // [rsp+F8h] [rbp-78h] BYREF
  int v4; // [rsp+FCh] [rbp-74h] BYREF
  int v5; // [rsp+100h] [rbp-70h] BYREF
  int v6; // [rsp+104h] [rbp-6Ch] BYREF
  int v7; // [rsp+108h] [rbp-68h] BYREF
  int v8; // [rsp+10Ch] [rbp-64h] BYREF
  int v9; // [rsp+110h] [rbp-60h] BYREF
  int v10; // [rsp+114h] [rbp-5Ch] BYREF
  int v11; // [rsp+118h] [rbp-58h] BYREF
  int v12; // [rsp+11Ch] [rbp-54h] BYREF
  int v13; // [rsp+120h] [rbp-50h] BYREF
  int v14; // [rsp+124h] [rbp-4Ch] BYREF
  void *v15; // [rsp+128h] [rbp-48h] BYREF
  void *v16; // [rsp+130h] [rbp-40h] BYREF
  void *v17; // [rsp+138h] [rbp-38h] BYREF
  void *v18; // [rsp+140h] [rbp-30h] BYREF
  void *v19; // [rsp+148h] [rbp-28h] BYREF
  void *v20; // [rsp+150h] [rbp-20h] BYREF
  void *v21; // [rsp+158h] [rbp-18h] BYREF
  void *v22; // [rsp+160h] [rbp-10h] BYREF
  __int64 v23; // [rsp+168h] [rbp-8h] BYREF
  int v24; // [rsp+188h] [rbp+18h] BYREF
  int v25; // [rsp+190h] [rbp+20h] BYREF
  int v26; // [rsp+198h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C013A918 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x800000000002LL) )
    {
      v1 = *(_DWORD *)(v0 + 600);
      v18 = &unk_1C0093660;
      v24 = (v1 >> 2) & 1;
      v22 = &unk_1C0093660;
      v25 = (v1 >> 1) & 1;
      v23 = v0 + 112;
      v26 = v1 & 1;
      v2 = *(_QWORD *)(v0 + 624) >> 16;
      v3 = *(_QWORD *)(v0 + 616) >> 16;
      v4 = *(_QWORD *)(v0 + 608) >> 16;
      v5 = *(_DWORD *)(v0 + 776);
      v15 = (void *)(v0 + 708);
      v16 = *(void **)(v0 + 384);
      v17 = *(void **)(v0 + 376);
      v6 = *(_DWORD *)(v0 + 196);
      v7 = *(_DWORD *)(v0 + 192);
      v19 = *(void **)(v0 + 360);
      v20 = *(void **)(v0 + 344);
      v21 = *(void **)(v0 + 336);
      v8 = *(_DWORD *)(v0 + 780);
      v9 = *(_DWORD *)(v0 + 700);
      v10 = *(_DWORD *)(v0 + 784);
      v11 = *(_DWORD *)(v0 + 416);
      v12 = *(_DWORD *)(v0 + 704);
      v13 = *(_DWORD *)(v0 + 652);
      v14 = *(_DWORD *)(v0 + 788);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&unk_1C0093660,
        byte_1C00A09A0,
        (const GUID *)(v0 + 112),
        v0,
        &v23,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        &v22,
        &v21,
        &v20,
        &v19,
        &v18,
        (__int64)&v7,
        (__int64)&v6,
        &v17,
        &v16,
        &v15,
        (__int64)&v5,
        (__int64)&v4,
        (__int64)&v3,
        (__int64)&v2,
        (__int64)&v1,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24);
    }
  }
}
