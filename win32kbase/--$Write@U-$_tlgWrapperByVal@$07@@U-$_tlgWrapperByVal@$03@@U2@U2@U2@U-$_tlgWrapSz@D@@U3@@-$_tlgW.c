NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void **a10,
        void **a11)
{
  __int64 v13; // rcx
  _BYTE *v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  _BYTE *v17; // rdx
  int v18; // ecx
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+30h] [rbp-81h] BYREF
  __int64 v21; // [rsp+50h] [rbp-61h]
  __int64 v22; // [rsp+58h] [rbp-59h]
  __int64 v23; // [rsp+60h] [rbp-51h]
  __int64 v24; // [rsp+68h] [rbp-49h]
  __int64 v25; // [rsp+70h] [rbp-41h]
  __int64 v26; // [rsp+78h] [rbp-39h]
  __int64 v27; // [rsp+80h] [rbp-31h]
  __int64 v28; // [rsp+88h] [rbp-29h]
  __int64 v29; // [rsp+90h] [rbp-21h]
  __int64 v30; // [rsp+98h] [rbp-19h]
  _BYTE *v31; // [rsp+A0h] [rbp-11h]
  int v32; // [rsp+A8h] [rbp-9h]
  int v33; // [rsp+ACh] [rbp-5h]
  _BYTE *v34; // [rsp+B0h] [rbp-1h]
  int v35; // [rsp+B8h] [rbp+7h]
  int v36; // [rsp+BCh] [rbp+Bh]

  v13 = -1LL;
  v14 = *a11;
  if ( *a11 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = v15 + 1;
  }
  else
  {
    v14 = &unk_1C02A2108;
    v16 = 1;
  }
  v35 = v16;
  v34 = v14;
  v36 = 0;
  v17 = *a10;
  if ( *a10 )
  {
    do
      ++v13;
    while ( v17[v13] );
    v18 = v13 + 1;
  }
  else
  {
    v17 = &unk_1C02A2108;
    v18 = 1;
  }
  v29 = a9;
  v27 = a8;
  v25 = a7;
  v23 = a6;
  v21 = a5;
  v31 = v17;
  v32 = v18;
  v33 = 0;
  v30 = 4LL;
  v28 = 4LL;
  v26 = 4LL;
  v24 = 4LL;
  v22 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 9u, &v20);
}
