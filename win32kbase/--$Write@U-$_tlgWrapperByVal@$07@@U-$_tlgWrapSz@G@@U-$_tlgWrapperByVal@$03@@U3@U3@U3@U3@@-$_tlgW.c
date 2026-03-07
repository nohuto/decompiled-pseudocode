NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const WCHAR **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  const WCHAR *v13; // rcx
  __int64 v14; // rax
  int v15; // edx
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-81h] BYREF
  __int64 v18; // [rsp+50h] [rbp-61h]
  __int64 v19; // [rsp+58h] [rbp-59h]
  const WCHAR *v20; // [rsp+60h] [rbp-51h]
  int v21; // [rsp+68h] [rbp-49h]
  int v22; // [rsp+6Ch] [rbp-45h]
  __int64 v23; // [rsp+70h] [rbp-41h]
  __int64 v24; // [rsp+78h] [rbp-39h]
  __int64 v25; // [rsp+80h] [rbp-31h]
  __int64 v26; // [rsp+88h] [rbp-29h]
  __int64 v27; // [rsp+90h] [rbp-21h]
  __int64 v28; // [rsp+98h] [rbp-19h]
  __int64 v29; // [rsp+A0h] [rbp-11h]
  __int64 v30; // [rsp+A8h] [rbp-9h]
  __int64 v31; // [rsp+B0h] [rbp-1h]
  __int64 v32; // [rsp+B8h] [rbp+7h]

  v31 = a11;
  v29 = a10;
  v27 = a9;
  v25 = a8;
  v23 = a7;
  v32 = 4LL;
  v30 = 4LL;
  v28 = 4LL;
  v13 = *a6;
  v26 = 4LL;
  v24 = 4LL;
  if ( v13 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v13 = &word_1C02856D8;
    v15 = 2;
  }
  v18 = a5;
  v20 = v13;
  v21 = v15;
  v22 = 0;
  v19 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 9u, &v17);
}
