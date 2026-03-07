NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperBinary>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 *a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-41h] BYREF
  __int64 v9; // [rsp+50h] [rbp-21h]
  __int64 v10; // [rsp+58h] [rbp-19h]
  _DWORD *v11; // [rsp+60h] [rbp-11h]
  __int64 v12; // [rsp+68h] [rbp-9h]
  __int64 v13; // [rsp+70h] [rbp-1h]
  _DWORD v14[2]; // [rsp+78h] [rbp+7h] BYREF
  _DWORD *v15; // [rsp+80h] [rbp+Fh]
  __int64 v16; // [rsp+88h] [rbp+17h]
  __int64 v17; // [rsp+90h] [rbp+1Fh]
  _DWORD v18[2]; // [rsp+98h] [rbp+27h] BYREF

  v15 = v18;
  v16 = 2LL;
  v18[1] = 0;
  v17 = *a7;
  v18[0] = *((unsigned __int16 *)a7 + 4);
  v11 = v14;
  v12 = 2LL;
  v13 = *a6;
  v14[0] = *((unsigned __int16 *)a6 + 4);
  v9 = a5;
  v14[1] = 0;
  v10 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C013A8E0, a2, 0LL, 0LL, 7u, &v8);
}
