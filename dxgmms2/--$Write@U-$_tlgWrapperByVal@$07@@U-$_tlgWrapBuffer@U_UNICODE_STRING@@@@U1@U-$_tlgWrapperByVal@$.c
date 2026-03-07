NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned __int16 *v10; // rax
  int v11; // ecx
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-79h] BYREF
  __int64 v14; // [rsp+50h] [rbp-59h]
  __int64 v15; // [rsp+58h] [rbp-51h]
  _DWORD *v16; // [rsp+60h] [rbp-49h]
  __int64 v17; // [rsp+68h] [rbp-41h]
  __int64 v18; // [rsp+70h] [rbp-39h]
  _DWORD v19[2]; // [rsp+78h] [rbp-31h] BYREF
  __int64 v20; // [rsp+80h] [rbp-29h]
  __int64 v21; // [rsp+88h] [rbp-21h]
  __int64 v22; // [rsp+90h] [rbp-19h]
  __int64 v23; // [rsp+98h] [rbp-11h]
  __int64 v24; // [rsp+A0h] [rbp-9h]
  __int64 v25; // [rsp+A8h] [rbp-1h]
  __int64 v26; // [rsp+B0h] [rbp+7h]
  __int64 v27; // [rsp+B8h] [rbp+Fh]

  v26 = a10;
  v24 = a9;
  v22 = a8;
  v20 = a7;
  v16 = v19;
  v27 = 4LL;
  v25 = 4LL;
  v23 = 4LL;
  v10 = *a6;
  v21 = 8LL;
  v17 = 2LL;
  v11 = *v10;
  v18 = *((_QWORD *)v10 + 1);
  v14 = a5;
  v19[0] = v11;
  v19[1] = 0;
  v15 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0076048, a2, 0LL, 0LL, 9u, &v13);
}
