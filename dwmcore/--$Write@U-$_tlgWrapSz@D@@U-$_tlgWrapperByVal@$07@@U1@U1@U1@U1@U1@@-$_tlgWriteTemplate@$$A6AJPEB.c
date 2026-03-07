ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const char **a5,
        __int64 a6,
        const char **a7,
        const char **a8,
        const char **a9,
        const char **a10,
        const char **a11)
{
  __int64 v12; // rdx
  const char *v13; // r8
  __int64 v14; // rax
  int v15; // eax
  const char *v16; // r8
  __int64 v17; // rax
  int v18; // eax
  const char *v19; // r8
  __int64 v20; // rax
  int v21; // eax
  const char *v22; // r8
  __int64 v23; // rax
  int v24; // eax
  const char *v25; // r8
  __int64 v26; // rax
  int v27; // eax
  const char *v28; // r8
  int v29; // edx
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+30h] [rbp-81h] BYREF
  const char *v32; // [rsp+50h] [rbp-61h]
  int v33; // [rsp+58h] [rbp-59h]
  int v34; // [rsp+5Ch] [rbp-55h]
  __int64 v35; // [rsp+60h] [rbp-51h]
  __int64 v36; // [rsp+68h] [rbp-49h]
  const char *v37; // [rsp+70h] [rbp-41h]
  int v38; // [rsp+78h] [rbp-39h]
  int v39; // [rsp+7Ch] [rbp-35h]
  const char *v40; // [rsp+80h] [rbp-31h]
  int v41; // [rsp+88h] [rbp-29h]
  int v42; // [rsp+8Ch] [rbp-25h]
  const char *v43; // [rsp+90h] [rbp-21h]
  int v44; // [rsp+98h] [rbp-19h]
  int v45; // [rsp+9Ch] [rbp-15h]
  const char *v46; // [rsp+A0h] [rbp-11h]
  int v47; // [rsp+A8h] [rbp-9h]
  int v48; // [rsp+ACh] [rbp-5h]
  const char *v49; // [rsp+B0h] [rbp-1h]
  int v50; // [rsp+B8h] [rbp+7h]
  int v51; // [rsp+BCh] [rbp+Bh]

  v12 = -1LL;
  v13 = *a11;
  if ( *a11 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = v14 + 1;
  }
  else
  {
    v13 = word_180338FC0;
    v15 = 1;
  }
  v50 = v15;
  v49 = v13;
  v51 = 0;
  v16 = *a10;
  if ( *a10 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v16 = word_180338FC0;
    v18 = 1;
  }
  v47 = v18;
  v46 = v16;
  v48 = 0;
  v19 = *a9;
  if ( *a9 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v21 = v20 + 1;
  }
  else
  {
    v19 = word_180338FC0;
    v21 = 1;
  }
  v44 = v21;
  v43 = v19;
  v45 = 0;
  v22 = *a8;
  if ( *a8 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v22 = word_180338FC0;
    v24 = 1;
  }
  v41 = v24;
  v40 = v22;
  v42 = 0;
  v25 = *a7;
  if ( *a7 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v25[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v25 = word_180338FC0;
    v27 = 1;
  }
  v38 = v27;
  v35 = a6;
  v37 = v25;
  v39 = 0;
  v36 = 8LL;
  v28 = *a5;
  if ( *a5 )
  {
    do
      ++v12;
    while ( v28[v12] );
    v29 = v12 + 1;
  }
  else
  {
    v28 = word_180338FC0;
    v29 = 1;
  }
  v32 = v28;
  v33 = v29;
  v34 = 0;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803E0760, a2, 0LL, 0LL, 9u, &v31);
}
