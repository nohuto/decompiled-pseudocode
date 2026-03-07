ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9,
        const char **a10,
        __int64 *a11,
        __int64 *a12,
        __int64 *a13,
        const char **a14,
        const char **a15)
{
  __int64 v16; // rdx
  const char *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  const char *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  const char *v23; // rcx
  int v24; // edx
  __int64 v25; // rcx
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h]
  __int64 v29; // [rsp+58h] [rbp-A8h]
  __int64 v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h]
  __int64 v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h]
  __int64 v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  __int64 v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  const char *v38; // [rsp+A0h] [rbp-60h]
  int v39; // [rsp+A8h] [rbp-58h]
  int v40; // [rsp+ACh] [rbp-54h]
  __int64 v41; // [rsp+B0h] [rbp-50h]
  int v42; // [rsp+B8h] [rbp-48h]
  int v43; // [rsp+BCh] [rbp-44h]
  __int64 v44; // [rsp+C0h] [rbp-40h]
  int v45; // [rsp+C8h] [rbp-38h]
  int v46; // [rsp+CCh] [rbp-34h]
  __int64 v47; // [rsp+D0h] [rbp-30h]
  int v48; // [rsp+D8h] [rbp-28h]
  int v49; // [rsp+DCh] [rbp-24h]
  const char *v50; // [rsp+E0h] [rbp-20h]
  int v51; // [rsp+E8h] [rbp-18h]
  int v52; // [rsp+ECh] [rbp-14h]
  const char *v53; // [rsp+F0h] [rbp-10h]
  int v54; // [rsp+F8h] [rbp-8h]
  int v55; // [rsp+FCh] [rbp-4h]

  v16 = -1LL;
  v17 = *a15;
  if ( *a15 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = v18 + 1;
  }
  else
  {
    v17 = word_180338FC0;
    v19 = 1;
  }
  v54 = v19;
  v53 = v17;
  v55 = 0;
  v20 = *a14;
  if ( *a14 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v20[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v20 = word_180338FC0;
    v22 = 1;
  }
  v51 = v22;
  v50 = v20;
  v52 = 0;
  v49 = 0;
  v46 = 0;
  v47 = *a13;
  v48 = *((_DWORD *)a13 + 2);
  v43 = 0;
  v44 = *a12;
  v45 = *((_DWORD *)a12 + 2);
  v41 = *a11;
  v42 = *((_DWORD *)a11 + 2);
  v23 = *a10;
  if ( *a10 )
  {
    do
      ++v16;
    while ( v23[v16] );
    v24 = v16 + 1;
  }
  else
  {
    v23 = word_180338FC0;
    v24 = 1;
  }
  v36 = a9;
  v38 = v23;
  v39 = v24;
  v40 = 0;
  v25 = *a8;
  v32 = a7;
  v30 = a6;
  v28 = a5;
  v34 = v25;
  v37 = 8LL;
  v35 = 16LL;
  v33 = 4LL;
  v31 = 8LL;
  v29 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803E0B40, a2, 0LL, 0LL, 0xDu, &v27);
}
