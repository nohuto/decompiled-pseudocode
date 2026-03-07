__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const WCHAR **a8,
        const WCHAR **a9,
        const WCHAR **a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v14; // rcx
  int v15; // r9d
  const WCHAR *v16; // rdx
  __int64 v17; // rax
  int v18; // r8d
  const WCHAR *v19; // rdx
  __int64 v20; // rax
  int v21; // r8d
  const WCHAR *v22; // rdx
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v25; // [rsp+50h] [rbp-91h]
  __int64 v26; // [rsp+58h] [rbp-89h]
  __int64 v27; // [rsp+60h] [rbp-81h]
  __int64 v28; // [rsp+68h] [rbp-79h]
  __int64 v29; // [rsp+70h] [rbp-71h]
  __int64 v30; // [rsp+78h] [rbp-69h]
  const WCHAR *v31; // [rsp+80h] [rbp-61h]
  int v32; // [rsp+88h] [rbp-59h]
  int v33; // [rsp+8Ch] [rbp-55h]
  const WCHAR *v34; // [rsp+90h] [rbp-51h]
  int v35; // [rsp+98h] [rbp-49h]
  int v36; // [rsp+9Ch] [rbp-45h]
  const WCHAR *v37; // [rsp+A0h] [rbp-41h]
  int v38; // [rsp+A8h] [rbp-39h]
  int v39; // [rsp+ACh] [rbp-35h]
  __int64 v40; // [rsp+B0h] [rbp-31h]
  __int64 v41; // [rsp+B8h] [rbp-29h]
  __int64 v42; // [rsp+C0h] [rbp-21h]
  __int64 v43; // [rsp+C8h] [rbp-19h]
  __int64 v44; // [rsp+D0h] [rbp-11h]
  __int64 v45; // [rsp+D8h] [rbp-9h]

  v44 = a13;
  v14 = -1LL;
  v42 = a12;
  v15 = 2;
  v40 = a11;
  v45 = 4LL;
  v43 = 8LL;
  v41 = 4LL;
  v16 = *a10;
  if ( *a10 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v16 = &word_1C02856D8;
    v18 = 2;
  }
  v37 = v16;
  v38 = v18;
  v39 = 0;
  v19 = *a9;
  if ( *a9 )
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
  v34 = v19;
  v35 = v21;
  v36 = 0;
  v22 = *a8;
  if ( *a8 )
  {
    do
      ++v14;
    while ( v22[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v22 = &word_1C02856D8;
  }
  v29 = a7;
  v27 = a6;
  v25 = a5;
  v31 = v22;
  v32 = v15;
  v33 = 0;
  v30 = 4LL;
  v28 = 4LL;
  v26 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C02C93D8, a2, 0, 0, 0xBu, &v24);
}
