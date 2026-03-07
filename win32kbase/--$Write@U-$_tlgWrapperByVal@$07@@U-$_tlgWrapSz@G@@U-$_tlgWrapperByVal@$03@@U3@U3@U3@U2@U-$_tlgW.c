NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
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
        const WCHAR **a11,
        void **a12)
{
  __int64 v14; // rcx
  _BYTE *v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  int v18; // r8d
  const WCHAR *v19; // rdx
  __int64 v20; // rax
  int v21; // r9d
  const WCHAR *v22; // rdx
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+30h] [rbp-99h] BYREF
  __int64 v25; // [rsp+50h] [rbp-79h]
  __int64 v26; // [rsp+58h] [rbp-71h]
  const WCHAR *v27; // [rsp+60h] [rbp-69h]
  int v28; // [rsp+68h] [rbp-61h]
  int v29; // [rsp+6Ch] [rbp-5Dh]
  __int64 v30; // [rsp+70h] [rbp-59h]
  __int64 v31; // [rsp+78h] [rbp-51h]
  __int64 v32; // [rsp+80h] [rbp-49h]
  __int64 v33; // [rsp+88h] [rbp-41h]
  __int64 v34; // [rsp+90h] [rbp-39h]
  __int64 v35; // [rsp+98h] [rbp-31h]
  __int64 v36; // [rsp+A0h] [rbp-29h]
  __int64 v37; // [rsp+A8h] [rbp-21h]
  const WCHAR *v38; // [rsp+B0h] [rbp-19h]
  int v39; // [rsp+B8h] [rbp-11h]
  int v40; // [rsp+BCh] [rbp-Dh]
  _BYTE *v41; // [rsp+C0h] [rbp-9h]
  int v42; // [rsp+C8h] [rbp-1h]
  int v43; // [rsp+CCh] [rbp+3h]

  v14 = -1LL;
  v15 = *a12;
  if ( *a12 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v15 = &unk_1C02A2108;
    v17 = 1;
  }
  v42 = v17;
  v18 = 2;
  v41 = v15;
  v43 = 0;
  v19 = *a11;
  if ( *a11 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v19 = &word_1C02856D8;
    v21 = 2;
  }
  v36 = a10;
  v34 = a9;
  v32 = a8;
  v30 = a7;
  v38 = v19;
  v39 = v21;
  v40 = 0;
  v22 = *a6;
  v37 = 4LL;
  v35 = 4LL;
  v33 = 4LL;
  v31 = 4LL;
  if ( v22 )
  {
    do
      ++v14;
    while ( v22[v14] );
    v18 = 2 * v14 + 2;
  }
  else
  {
    v22 = &word_1C02856D8;
  }
  v25 = a5;
  v27 = v22;
  v28 = v18;
  v29 = 0;
  v26 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0xAu, &v24);
}
