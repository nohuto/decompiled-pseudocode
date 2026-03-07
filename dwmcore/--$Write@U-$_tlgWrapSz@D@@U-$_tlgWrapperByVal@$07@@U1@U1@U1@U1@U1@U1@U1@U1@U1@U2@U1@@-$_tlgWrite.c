ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
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
        const char **a11,
        const char **a12,
        const char **a13,
        const char **a14,
        const char **a15,
        __int64 a16,
        const char **a17)
{
  __int64 v18; // r8
  const char *v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  const char *v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  const char *v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  const char *v28; // rdx
  __int64 v29; // rax
  int v30; // eax
  const char *v31; // rdx
  __int64 v32; // rax
  int v33; // eax
  const char *v34; // rdx
  __int64 v35; // rax
  int v36; // eax
  const char *v37; // rdx
  __int64 v38; // rax
  int v39; // eax
  const char *v40; // rdx
  __int64 v41; // rax
  int v42; // eax
  const char *v43; // rdx
  __int64 v44; // rax
  int v45; // eax
  const char *v46; // rdx
  __int64 v47; // rax
  int v48; // eax
  const char *v49; // rdx
  int v50; // r8d
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+30h] [rbp-D0h] BYREF
  const char *v53; // [rsp+50h] [rbp-B0h]
  int v54; // [rsp+58h] [rbp-A8h]
  int v55; // [rsp+5Ch] [rbp-A4h]
  __int64 v56; // [rsp+60h] [rbp-A0h]
  __int64 v57; // [rsp+68h] [rbp-98h]
  const char *v58; // [rsp+70h] [rbp-90h]
  int v59; // [rsp+78h] [rbp-88h]
  int v60; // [rsp+7Ch] [rbp-84h]
  const char *v61; // [rsp+80h] [rbp-80h]
  int v62; // [rsp+88h] [rbp-78h]
  int v63; // [rsp+8Ch] [rbp-74h]
  const char *v64; // [rsp+90h] [rbp-70h]
  int v65; // [rsp+98h] [rbp-68h]
  int v66; // [rsp+9Ch] [rbp-64h]
  const char *v67; // [rsp+A0h] [rbp-60h]
  int v68; // [rsp+A8h] [rbp-58h]
  int v69; // [rsp+ACh] [rbp-54h]
  const char *v70; // [rsp+B0h] [rbp-50h]
  int v71; // [rsp+B8h] [rbp-48h]
  int v72; // [rsp+BCh] [rbp-44h]
  const char *v73; // [rsp+C0h] [rbp-40h]
  int v74; // [rsp+C8h] [rbp-38h]
  int v75; // [rsp+CCh] [rbp-34h]
  const char *v76; // [rsp+D0h] [rbp-30h]
  int v77; // [rsp+D8h] [rbp-28h]
  int v78; // [rsp+DCh] [rbp-24h]
  const char *v79; // [rsp+E0h] [rbp-20h]
  int v80; // [rsp+E8h] [rbp-18h]
  int v81; // [rsp+ECh] [rbp-14h]
  const char *v82; // [rsp+F0h] [rbp-10h]
  int v83; // [rsp+F8h] [rbp-8h]
  int v84; // [rsp+FCh] [rbp-4h]
  __int64 v85; // [rsp+100h] [rbp+0h]
  __int64 v86; // [rsp+108h] [rbp+8h]
  const char *v87; // [rsp+110h] [rbp+10h]
  int v88; // [rsp+118h] [rbp+18h]
  int v89; // [rsp+11Ch] [rbp+1Ch]

  v18 = -1LL;
  v19 = *a17;
  if ( *a17 )
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
  v88 = v21;
  v85 = a16;
  v87 = v19;
  v89 = 0;
  v86 = 8LL;
  v22 = *a15;
  if ( *a15 )
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
  v83 = v24;
  v82 = v22;
  v84 = 0;
  v25 = *a14;
  if ( *a14 )
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
  v80 = v27;
  v79 = v25;
  v81 = 0;
  v28 = *a13;
  if ( *a13 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v28 = word_180338FC0;
    v30 = 1;
  }
  v77 = v30;
  v76 = v28;
  v78 = 0;
  v31 = *a12;
  if ( *a12 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( v31[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v31 = word_180338FC0;
    v33 = 1;
  }
  v74 = v33;
  v73 = v31;
  v75 = 0;
  v34 = *a11;
  if ( *a11 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( v34[v35] );
    v36 = v35 + 1;
  }
  else
  {
    v34 = word_180338FC0;
    v36 = 1;
  }
  v71 = v36;
  v70 = v34;
  v72 = 0;
  v37 = *a10;
  if ( *a10 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( v37[v38] );
    v39 = v38 + 1;
  }
  else
  {
    v37 = word_180338FC0;
    v39 = 1;
  }
  v68 = v39;
  v67 = v37;
  v69 = 0;
  v40 = *a9;
  if ( *a9 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( v40[v41] );
    v42 = v41 + 1;
  }
  else
  {
    v40 = word_180338FC0;
    v42 = 1;
  }
  v65 = v42;
  v64 = v40;
  v66 = 0;
  v43 = *a8;
  if ( *a8 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( v43[v44] );
    v45 = v44 + 1;
  }
  else
  {
    v43 = word_180338FC0;
    v45 = 1;
  }
  v62 = v45;
  v61 = v43;
  v63 = 0;
  v46 = *a7;
  if ( *a7 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( v46[v47] );
    v48 = v47 + 1;
  }
  else
  {
    v46 = word_180338FC0;
    v48 = 1;
  }
  v59 = v48;
  v56 = a6;
  v58 = v46;
  v60 = 0;
  v57 = 8LL;
  v49 = *a5;
  if ( *a5 )
  {
    do
      ++v18;
    while ( v49[v18] );
    v50 = v18 + 1;
  }
  else
  {
    v49 = word_180338FC0;
    v50 = 1;
  }
  v53 = v49;
  v54 = v50;
  v55 = 0;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803E0760, a2, 0LL, 0LL, 0xFu, &v52);
}
