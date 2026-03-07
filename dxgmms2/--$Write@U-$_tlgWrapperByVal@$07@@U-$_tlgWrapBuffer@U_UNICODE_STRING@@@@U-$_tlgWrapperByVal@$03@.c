NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int16 *v9; // rax
  int v10; // ecx
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-61h] BYREF
  __int64 v13; // [rsp+50h] [rbp-41h]
  __int64 v14; // [rsp+58h] [rbp-39h]
  _DWORD *v15; // [rsp+60h] [rbp-31h]
  __int64 v16; // [rsp+68h] [rbp-29h]
  __int64 v17; // [rsp+70h] [rbp-21h]
  _DWORD v18[2]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v19; // [rsp+80h] [rbp-11h]
  __int64 v20; // [rsp+88h] [rbp-9h]
  __int64 v21; // [rsp+90h] [rbp-1h]
  __int64 v22; // [rsp+98h] [rbp+7h]
  __int64 v23; // [rsp+A0h] [rbp+Fh]
  __int64 v24; // [rsp+A8h] [rbp+17h]

  v23 = a9;
  v21 = a8;
  v19 = a7;
  v15 = v18;
  v22 = 8LL;
  v24 = 4LL;
  v20 = 4LL;
  v9 = *a6;
  v16 = 2LL;
  v10 = *v9;
  v17 = *((_QWORD *)v9 + 1);
  v13 = a5;
  v18[0] = v10;
  v14 = 8LL;
  v18[1] = 0;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0076048, a2, 0LL, 0LL, 8u, &v12);
}
