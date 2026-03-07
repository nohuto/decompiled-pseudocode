NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        const WCHAR **a7,
        const WCHAR **a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v13; // rcx
  int v14; // r9d
  const WCHAR *v15; // rdx
  __int64 v16; // rax
  int v17; // r8d
  const WCHAR *v18; // rdx
  __int64 v19; // rax
  _BYTE *v20; // rdx
  int v21; // ecx
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+30h] [rbp-81h] BYREF
  __int64 v24; // [rsp+50h] [rbp-61h]
  __int64 v25; // [rsp+58h] [rbp-59h]
  _BYTE *v26; // [rsp+60h] [rbp-51h]
  int v27; // [rsp+68h] [rbp-49h]
  int v28; // [rsp+6Ch] [rbp-45h]
  const WCHAR *v29; // [rsp+70h] [rbp-41h]
  int v30; // [rsp+78h] [rbp-39h]
  int v31; // [rsp+7Ch] [rbp-35h]
  const WCHAR *v32; // [rsp+80h] [rbp-31h]
  int v33; // [rsp+88h] [rbp-29h]
  int v34; // [rsp+8Ch] [rbp-25h]
  __int64 v35; // [rsp+90h] [rbp-21h]
  __int64 v36; // [rsp+98h] [rbp-19h]
  __int64 v37; // [rsp+A0h] [rbp-11h]
  __int64 v38; // [rsp+A8h] [rbp-9h]
  __int64 v39; // [rsp+B0h] [rbp-1h]
  __int64 v40; // [rsp+B8h] [rbp+7h]

  v39 = a11;
  v37 = a10;
  v13 = -1LL;
  v14 = 2;
  v35 = a9;
  v40 = 4LL;
  v38 = 4LL;
  v36 = 8LL;
  v15 = *a8;
  if ( *a8 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v15 = &word_1C02856D8;
    v17 = 2;
  }
  v32 = v15;
  v33 = v17;
  v34 = 0;
  v18 = *a7;
  if ( *a7 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v14 = 2 * v19 + 2;
  }
  else
  {
    v18 = &word_1C02856D8;
  }
  v29 = v18;
  v30 = v14;
  v31 = 0;
  v20 = *a6;
  if ( *a6 )
  {
    do
      ++v13;
    while ( v20[v13] );
    v21 = v13 + 1;
  }
  else
  {
    v20 = &unk_1C02A2108;
    v21 = 1;
  }
  v24 = a5;
  v26 = v20;
  v27 = v21;
  v28 = 0;
  v25 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 9u, &v23);
}
