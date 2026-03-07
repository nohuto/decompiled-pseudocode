ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const char **a5,
        const char **a6,
        const char **a7,
        const char **a8,
        const char **a9,
        const char **a10,
        const char **a11,
        const char **a12,
        const char **a13,
        const char **a14,
        const char **a15,
        const char **a16,
        const char **a17,
        const char **a18,
        __int64 a19,
        __int64 a20)
{
  __int64 v21; // rdx
  const char *v22; // r8
  __int64 v23; // rax
  int v24; // eax
  const char *v25; // r8
  __int64 v26; // rax
  int v27; // eax
  const char *v28; // r8
  __int64 v29; // rax
  int v30; // eax
  const char *v31; // r8
  __int64 v32; // rax
  int v33; // eax
  const char *v34; // r8
  __int64 v35; // rax
  int v36; // eax
  const char *v37; // r8
  __int64 v38; // rax
  int v39; // eax
  const char *v40; // r8
  __int64 v41; // rax
  int v42; // eax
  const char *v43; // r8
  __int64 v44; // rax
  int v45; // eax
  const char *v46; // r8
  __int64 v47; // rax
  int v48; // eax
  const char *v49; // r8
  __int64 v50; // rax
  int v51; // eax
  const char *v52; // r8
  __int64 v53; // rax
  int v54; // eax
  const char *v55; // r8
  __int64 v56; // rax
  int v57; // eax
  const char *v58; // r8
  __int64 v59; // rax
  int v60; // eax
  const char *v61; // r8
  int v62; // edx
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+30h] [rbp-D0h] BYREF
  const char *v65; // [rsp+50h] [rbp-B0h]
  int v66; // [rsp+58h] [rbp-A8h]
  int v67; // [rsp+5Ch] [rbp-A4h]
  const char *v68; // [rsp+60h] [rbp-A0h]
  int v69; // [rsp+68h] [rbp-98h]
  int v70; // [rsp+6Ch] [rbp-94h]
  const char *v71; // [rsp+70h] [rbp-90h]
  int v72; // [rsp+78h] [rbp-88h]
  int v73; // [rsp+7Ch] [rbp-84h]
  const char *v74; // [rsp+80h] [rbp-80h]
  int v75; // [rsp+88h] [rbp-78h]
  int v76; // [rsp+8Ch] [rbp-74h]
  const char *v77; // [rsp+90h] [rbp-70h]
  int v78; // [rsp+98h] [rbp-68h]
  int v79; // [rsp+9Ch] [rbp-64h]
  const char *v80; // [rsp+A0h] [rbp-60h]
  int v81; // [rsp+A8h] [rbp-58h]
  int v82; // [rsp+ACh] [rbp-54h]
  const char *v83; // [rsp+B0h] [rbp-50h]
  int v84; // [rsp+B8h] [rbp-48h]
  int v85; // [rsp+BCh] [rbp-44h]
  const char *v86; // [rsp+C0h] [rbp-40h]
  int v87; // [rsp+C8h] [rbp-38h]
  int v88; // [rsp+CCh] [rbp-34h]
  const char *v89; // [rsp+D0h] [rbp-30h]
  int v90; // [rsp+D8h] [rbp-28h]
  int v91; // [rsp+DCh] [rbp-24h]
  const char *v92; // [rsp+E0h] [rbp-20h]
  int v93; // [rsp+E8h] [rbp-18h]
  int v94; // [rsp+ECh] [rbp-14h]
  const char *v95; // [rsp+F0h] [rbp-10h]
  int v96; // [rsp+F8h] [rbp-8h]
  int v97; // [rsp+FCh] [rbp-4h]
  const char *v98; // [rsp+100h] [rbp+0h]
  int v99; // [rsp+108h] [rbp+8h]
  int v100; // [rsp+10Ch] [rbp+Ch]
  const char *v101; // [rsp+110h] [rbp+10h]
  int v102; // [rsp+118h] [rbp+18h]
  int v103; // [rsp+11Ch] [rbp+1Ch]
  const char *v104; // [rsp+120h] [rbp+20h]
  int v105; // [rsp+128h] [rbp+28h]
  int v106; // [rsp+12Ch] [rbp+2Ch]
  __int64 v107; // [rsp+130h] [rbp+30h]
  __int64 v108; // [rsp+138h] [rbp+38h]
  __int64 v109; // [rsp+140h] [rbp+40h]
  __int64 v110; // [rsp+148h] [rbp+48h]

  v109 = a20;
  v107 = a19;
  v21 = -1LL;
  v110 = 4LL;
  v108 = 4LL;
  v22 = *a18;
  if ( *a18 )
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
  v105 = v24;
  v104 = v22;
  v106 = 0;
  v25 = *a17;
  if ( *a17 )
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
  v102 = v27;
  v101 = v25;
  v103 = 0;
  v28 = *a16;
  if ( *a16 )
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
  v99 = v30;
  v98 = v28;
  v100 = 0;
  v31 = *a15;
  if ( *a15 )
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
  v96 = v33;
  v95 = v31;
  v97 = 0;
  v34 = *a14;
  if ( *a14 )
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
  v93 = v36;
  v92 = v34;
  v94 = 0;
  v37 = *a13;
  if ( *a13 )
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
  v90 = v39;
  v89 = v37;
  v91 = 0;
  v40 = *a12;
  if ( *a12 )
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
  v87 = v42;
  v86 = v40;
  v88 = 0;
  v43 = *a11;
  if ( *a11 )
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
  v84 = v45;
  v83 = v43;
  v85 = 0;
  v46 = *a10;
  if ( *a10 )
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
  v81 = v48;
  v80 = v46;
  v82 = 0;
  v49 = *a9;
  if ( *a9 )
  {
    v50 = -1LL;
    do
      ++v50;
    while ( v49[v50] );
    v51 = v50 + 1;
  }
  else
  {
    v49 = word_180338FC0;
    v51 = 1;
  }
  v78 = v51;
  v77 = v49;
  v79 = 0;
  v52 = *a8;
  if ( *a8 )
  {
    v53 = -1LL;
    do
      ++v53;
    while ( v52[v53] );
    v54 = v53 + 1;
  }
  else
  {
    v52 = word_180338FC0;
    v54 = 1;
  }
  v75 = v54;
  v74 = v52;
  v76 = 0;
  v55 = *a7;
  if ( *a7 )
  {
    v56 = -1LL;
    do
      ++v56;
    while ( v55[v56] );
    v57 = v56 + 1;
  }
  else
  {
    v55 = word_180338FC0;
    v57 = 1;
  }
  v72 = v57;
  v71 = v55;
  v73 = 0;
  v58 = *a6;
  if ( *a6 )
  {
    v59 = -1LL;
    do
      ++v59;
    while ( v58[v59] );
    v60 = v59 + 1;
  }
  else
  {
    v58 = word_180338FC0;
    v60 = 1;
  }
  v69 = v60;
  v68 = v58;
  v70 = 0;
  v61 = *a5;
  if ( *a5 )
  {
    do
      ++v21;
    while ( v61[v21] );
    v62 = v21 + 1;
  }
  else
  {
    v61 = word_180338FC0;
    v62 = 1;
  }
  v65 = v61;
  v66 = v62;
  v67 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0x12u, &v64);
}
