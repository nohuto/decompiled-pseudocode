NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperArray<8>,_tlgWrapperArray<8>,_tlgWrapperArray<8>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 *a7,
        __int64 *a8,
        __int64 a9)
{
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-81h] BYREF
  __int64 v11; // [rsp+50h] [rbp-61h]
  __int64 v12; // [rsp+58h] [rbp-59h]
  __int64 *v13; // [rsp+60h] [rbp-51h]
  __int64 v14; // [rsp+68h] [rbp-49h]
  __int64 v15; // [rsp+70h] [rbp-41h]
  int v16; // [rsp+78h] [rbp-39h]
  int v17; // [rsp+7Ch] [rbp-35h]
  __int64 *v18; // [rsp+80h] [rbp-31h]
  __int64 v19; // [rsp+88h] [rbp-29h]
  __int64 v20; // [rsp+90h] [rbp-21h]
  int v21; // [rsp+98h] [rbp-19h]
  int v22; // [rsp+9Ch] [rbp-15h]
  __int64 *v23; // [rsp+A0h] [rbp-11h]
  __int64 v24; // [rsp+A8h] [rbp-9h]
  __int64 v25; // [rsp+B0h] [rbp-1h]
  int v26; // [rsp+B8h] [rbp+7h]
  int v27; // [rsp+BCh] [rbp+Bh]
  __int64 v28; // [rsp+C0h] [rbp+Fh]
  __int64 v29; // [rsp+C8h] [rbp+17h]

  v28 = a9;
  v29 = 4LL;
  v24 = 2LL;
  v27 = 0;
  v19 = 2LL;
  v25 = *a8;
  v26 = 8 * *((unsigned __int16 *)a8 + 4);
  v23 = a8 + 1;
  v22 = 0;
  v14 = 2LL;
  v17 = 0;
  v20 = *a7;
  v21 = 8 * *((unsigned __int16 *)a7 + 4);
  v18 = a7 + 1;
  v12 = 8LL;
  v15 = *a6;
  v16 = 8 * *((unsigned __int16 *)a6 + 4);
  v11 = a5;
  v13 = a6 + 1;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C93D8, a2, 0LL, 0LL, 0xAu, &v10);
}
