NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 *a12,
        __int64 a13)
{
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-C1h] BYREF
  __int64 v15; // [rsp+50h] [rbp-A1h]
  __int64 v16; // [rsp+58h] [rbp-99h]
  __int64 v17; // [rsp+60h] [rbp-91h]
  __int64 v18; // [rsp+68h] [rbp-89h]
  __int64 v19; // [rsp+70h] [rbp-81h]
  __int64 v20; // [rsp+78h] [rbp-79h]
  __int64 v21; // [rsp+80h] [rbp-71h]
  __int64 v22; // [rsp+88h] [rbp-69h]
  __int64 v23; // [rsp+90h] [rbp-61h]
  __int64 v24; // [rsp+98h] [rbp-59h]
  __int64 v25; // [rsp+A0h] [rbp-51h]
  __int64 v26; // [rsp+A8h] [rbp-49h]
  __int64 v27; // [rsp+B0h] [rbp-41h]
  __int64 v28; // [rsp+B8h] [rbp-39h]
  _DWORD *v29; // [rsp+C0h] [rbp-31h]
  __int64 v30; // [rsp+C8h] [rbp-29h]
  __int64 v31; // [rsp+D0h] [rbp-21h]
  _DWORD v32[2]; // [rsp+D8h] [rbp-19h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-11h]
  __int64 v34; // [rsp+E8h] [rbp-9h]

  v33 = a13;
  v29 = v32;
  v31 = *a12;
  v32[0] = *((unsigned __int16 *)a12 + 4);
  v27 = a11;
  v25 = a10;
  v23 = a9;
  v21 = a8;
  v19 = a7;
  v17 = a6;
  v15 = a5;
  v34 = 4LL;
  v30 = 2LL;
  v32[1] = 0;
  v28 = 4LL;
  v26 = 4LL;
  v24 = 4LL;
  v22 = 4LL;
  v20 = 2LL;
  v18 = 4LL;
  v16 = 2LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C4098, a2, a3, 0LL, 0xCu, &v14);
}
