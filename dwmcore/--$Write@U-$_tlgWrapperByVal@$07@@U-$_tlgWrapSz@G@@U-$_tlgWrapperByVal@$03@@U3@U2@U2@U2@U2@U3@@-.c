ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        wchar_t **a6,
        __int64 a7,
        __int64 a8,
        wchar_t **a9,
        wchar_t **a10,
        wchar_t **a11,
        wchar_t **a12,
        __int64 a13)
{
  __int64 v14; // rcx
  int v15; // r8d
  wchar_t *v16; // rdx
  __int64 v17; // rax
  int v18; // r9d
  wchar_t *v19; // rdx
  __int64 v20; // rax
  int v21; // r9d
  wchar_t *v22; // rdx
  __int64 v23; // rax
  int v24; // r9d
  wchar_t *v25; // rdx
  __int64 v26; // rax
  int v27; // r9d
  wchar_t *v28; // rdx
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v31; // [rsp+50h] [rbp-91h]
  __int64 v32; // [rsp+58h] [rbp-89h]
  wchar_t *v33; // [rsp+60h] [rbp-81h]
  int v34; // [rsp+68h] [rbp-79h]
  int v35; // [rsp+6Ch] [rbp-75h]
  __int64 v36; // [rsp+70h] [rbp-71h]
  __int64 v37; // [rsp+78h] [rbp-69h]
  __int64 v38; // [rsp+80h] [rbp-61h]
  __int64 v39; // [rsp+88h] [rbp-59h]
  wchar_t *v40; // [rsp+90h] [rbp-51h]
  int v41; // [rsp+98h] [rbp-49h]
  int v42; // [rsp+9Ch] [rbp-45h]
  wchar_t *v43; // [rsp+A0h] [rbp-41h]
  int v44; // [rsp+A8h] [rbp-39h]
  int v45; // [rsp+ACh] [rbp-35h]
  wchar_t *v46; // [rsp+B0h] [rbp-31h]
  int v47; // [rsp+B8h] [rbp-29h]
  int v48; // [rsp+BCh] [rbp-25h]
  wchar_t *v49; // [rsp+C0h] [rbp-21h]
  int v50; // [rsp+C8h] [rbp-19h]
  int v51; // [rsp+CCh] [rbp-15h]
  __int64 v52; // [rsp+D0h] [rbp-11h]
  __int64 v53; // [rsp+D8h] [rbp-9h]

  v52 = a13;
  v14 = -1LL;
  v53 = 4LL;
  v15 = 2;
  v16 = *a12;
  if ( *a12 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v16 = word_1803392B0;
    v18 = 2;
  }
  v49 = v16;
  v50 = v18;
  v51 = 0;
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
    v19 = word_1803392B0;
    v21 = 2;
  }
  v46 = v19;
  v47 = v21;
  v48 = 0;
  v22 = *a10;
  if ( *a10 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v22 = word_1803392B0;
    v24 = 2;
  }
  v43 = v22;
  v44 = v24;
  v45 = 0;
  v25 = *a9;
  if ( *a9 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v25[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v25 = word_1803392B0;
    v27 = 2;
  }
  v38 = a8;
  v36 = a7;
  v40 = v25;
  v41 = v27;
  v42 = 0;
  v28 = *a6;
  v39 = 4LL;
  v37 = 4LL;
  if ( v28 )
  {
    do
      ++v14;
    while ( v28[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v28 = word_1803392B0;
  }
  v31 = a5;
  v33 = v28;
  v34 = v15;
  v35 = 0;
  v32 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803E07D0, a2, 0LL, 0LL, 0xBu, &v30);
}
