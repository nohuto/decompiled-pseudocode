NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7,
        const WCHAR **a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        const WCHAR **a13,
        void **a14)
{
  __int64 v16; // rcx
  _BYTE *v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  int v20; // r8d
  const WCHAR *v21; // rdx
  __int64 v22; // rax
  int v23; // r9d
  const WCHAR *v24; // rdx
  __int64 v25; // rax
  _BYTE *v26; // rdx
  int v27; // ecx
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+30h] [rbp-C9h] BYREF
  __int64 v30; // [rsp+50h] [rbp-A9h]
  __int64 v31; // [rsp+58h] [rbp-A1h]
  __int64 v32; // [rsp+60h] [rbp-99h]
  __int64 v33; // [rsp+68h] [rbp-91h]
  _BYTE *v34; // [rsp+70h] [rbp-89h]
  int v35; // [rsp+78h] [rbp-81h]
  int v36; // [rsp+7Ch] [rbp-7Dh]
  const WCHAR *v37; // [rsp+80h] [rbp-79h]
  int v38; // [rsp+88h] [rbp-71h]
  int v39; // [rsp+8Ch] [rbp-6Dh]
  __int64 v40; // [rsp+90h] [rbp-69h]
  __int64 v41; // [rsp+98h] [rbp-61h]
  __int64 v42; // [rsp+A0h] [rbp-59h]
  __int64 v43; // [rsp+A8h] [rbp-51h]
  __int64 v44; // [rsp+B0h] [rbp-49h]
  __int64 v45; // [rsp+B8h] [rbp-41h]
  __int64 v46; // [rsp+C0h] [rbp-39h]
  __int64 v47; // [rsp+C8h] [rbp-31h]
  const WCHAR *v48; // [rsp+D0h] [rbp-29h]
  int v49; // [rsp+D8h] [rbp-21h]
  int v50; // [rsp+DCh] [rbp-1Dh]
  _BYTE *v51; // [rsp+E0h] [rbp-19h]
  int v52; // [rsp+E8h] [rbp-11h]
  int v53; // [rsp+ECh] [rbp-Dh]

  v16 = -1LL;
  v17 = *a14;
  if ( *a14 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = v18 + 1;
  }
  else
  {
    v17 = &unk_1C02A2108;
    v19 = 1;
  }
  v52 = v19;
  v20 = 2;
  v51 = v17;
  v53 = 0;
  v21 = *a13;
  if ( *a13 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v21 = &word_1C02856D8;
    v23 = 2;
  }
  v46 = a12;
  v44 = a11;
  v42 = a10;
  v40 = a9;
  v48 = v21;
  v49 = v23;
  v50 = 0;
  v24 = *a8;
  v47 = 4LL;
  v45 = 4LL;
  v43 = 4LL;
  v41 = 4LL;
  if ( v24 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v24[v25] );
    v20 = 2 * v25 + 2;
  }
  else
  {
    v24 = &word_1C02856D8;
  }
  v37 = v24;
  v38 = v20;
  v39 = 0;
  v26 = *a7;
  if ( *a7 )
  {
    do
      ++v16;
    while ( v26[v16] );
    v27 = v16 + 1;
  }
  else
  {
    v26 = &unk_1C02A2108;
    v27 = 1;
  }
  v32 = a6;
  v30 = a5;
  v34 = v26;
  v35 = v27;
  v36 = 0;
  v33 = 4LL;
  v31 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0xCu, &v29);
}
