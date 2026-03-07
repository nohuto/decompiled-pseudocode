void __fastcall TraceLogDpiInfo(
        struct _DPI_INFORMATION *a1,
        const unsigned __int16 *a2,
        const struct _LUID *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ecx
  __int64 v10; // rcx
  int v11; // [rsp+E0h] [rbp-80h] BYREF
  int v12; // [rsp+E4h] [rbp-7Ch] BYREF
  int v13; // [rsp+E8h] [rbp-78h] BYREF
  int v14; // [rsp+ECh] [rbp-74h] BYREF
  int v15; // [rsp+F0h] [rbp-70h] BYREF
  int v16; // [rsp+F4h] [rbp-6Ch] BYREF
  int v17; // [rsp+F8h] [rbp-68h] BYREF
  int v18; // [rsp+FCh] [rbp-64h] BYREF
  int v19; // [rsp+100h] [rbp-60h] BYREF
  int v20; // [rsp+104h] [rbp-5Ch] BYREF
  int v21; // [rsp+108h] [rbp-58h] BYREF
  int v22; // [rsp+10Ch] [rbp-54h] BYREF
  int v23; // [rsp+110h] [rbp-50h] BYREF
  int v24; // [rsp+114h] [rbp-4Ch] BYREF
  int v25; // [rsp+118h] [rbp-48h] BYREF
  int v26; // [rsp+11Ch] [rbp-44h] BYREF
  int v27; // [rsp+120h] [rbp-40h] BYREF
  int v28; // [rsp+124h] [rbp-3Ch] BYREF
  int v29; // [rsp+128h] [rbp-38h] BYREF
  int v30; // [rsp+12Ch] [rbp-34h] BYREF
  int v31; // [rsp+130h] [rbp-30h] BYREF
  int v32; // [rsp+134h] [rbp-2Ch] BYREF
  int v33; // [rsp+138h] [rbp-28h] BYREF
  void *v34; // [rsp+140h] [rbp-20h] BYREF

  DisplayScenarioJournalDPIInfo(a3, a4, a1, a5);
  if ( (unsigned int)dword_1C013A918 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x200000000001LL) )
    {
      v9 = *((_DWORD *)a1 + 23);
      v34 = (void *)a2;
      v11 = (v9 >> 10) & 1;
      v12 = (v9 >> 9) & 1;
      v13 = (v9 >> 8) & 1;
      v14 = (v9 >> 7) & 1;
      v15 = (v9 >> 6) & 1;
      v16 = (v9 >> 5) & 1;
      v17 = (v9 >> 4) & 1;
      v18 = (v9 >> 3) & 1;
      v19 = (v9 >> 2) & 1;
      v20 = (v9 >> 1) & 1;
      v10 = v9 & 1;
      v22 = *((_DWORD *)a1 + 22);
      v23 = *((_DWORD *)a1 + 20);
      v24 = *((_DWORD *)a1 + 16);
      v25 = *((_DWORD *)a1 + 15);
      v26 = *((_DWORD *)a1 + 14);
      v27 = *((_DWORD *)a1 + 11);
      v28 = *((_DWORD *)a1 + 10);
      v29 = *((_DWORD *)a1 + 9);
      v30 = *((_DWORD *)a1 + 8);
      v31 = *((_DWORD *)a1 + 7);
      v32 = *((_DWORD *)a1 + 6);
      v33 = *((_DWORD *)a1 + 2);
      v21 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v10,
        byte_1C009E2BB,
        v7,
        v8,
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
        &v34);
    }
  }
}
