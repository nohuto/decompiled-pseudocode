void __fastcall InputTraceLogging::Pointer::BindToInputSpace(
        const struct RIMDEV *a1,
        const struct tagHID_POINTER_DEVICE_INFO *a2,
        const struct INPUT_SPACE *a3,
        const struct INPUT_SPACE_REGION *a4)
{
  __int64 *v4; // r8
  int *v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // r11
  int v9; // [rsp+A0h] [rbp-80h] BYREF
  int v10; // [rsp+A4h] [rbp-7Ch] BYREF
  int v11; // [rsp+A8h] [rbp-78h] BYREF
  int v12; // [rsp+ACh] [rbp-74h] BYREF
  int v13; // [rsp+B0h] [rbp-70h] BYREF
  int v14; // [rsp+B4h] [rbp-6Ch] BYREF
  int v15; // [rsp+B8h] [rbp-68h] BYREF
  int v16; // [rsp+BCh] [rbp-64h] BYREF
  int v17; // [rsp+C0h] [rbp-60h] BYREF
  int v18; // [rsp+C4h] [rbp-5Ch] BYREF
  int v19; // [rsp+C8h] [rbp-58h] BYREF
  int v20; // [rsp+CCh] [rbp-54h] BYREF
  __int64 v21; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v22; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v24; // [rsp+E8h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+F0h] [rbp-30h] BYREF
  __int64 *v26; // [rsp+110h] [rbp-10h]
  int v27; // [rsp+118h] [rbp-8h]
  int v28; // [rsp+11Ch] [rbp-4h]

  if ( a3 && a4 )
  {
    if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
    {
      v9 = v5[3];
      v10 = v5[2];
      v11 = v5[1];
      v12 = *v5;
      v22 = *v4;
      v13 = *(_DWORD *)(v6 + 264);
      v14 = *(_DWORD *)(v6 + 260);
      v15 = *(_DWORD *)(v6 + 256);
      v16 = *(_DWORD *)(v6 + 252);
      v23 = *(_QWORD *)(v6 + 240);
      v17 = *(_DWORD *)(v6 + 172);
      v18 = *(_DWORD *)(v6 + 168);
      v19 = *(_DWORD *)(v6 + 164);
      v20 = *(_DWORD *)(v6 + 160);
      v24 = *(_QWORD *)(v6 + 228);
      v21 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C02CA7E0,
        byte_1C0296D99,
        (__int64)v4,
        (__int64)v5,
        (__int64)&v21,
        (__int64)&v24,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v23,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v22,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9);
    }
  }
  else if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
  {
    v28 = 0;
    v26 = &v21;
    v21 = v8;
    v27 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02CA7E0, (unsigned __int8 *)dword_1C0296D61, 0LL, 0LL, 3u, &v25);
  }
}
