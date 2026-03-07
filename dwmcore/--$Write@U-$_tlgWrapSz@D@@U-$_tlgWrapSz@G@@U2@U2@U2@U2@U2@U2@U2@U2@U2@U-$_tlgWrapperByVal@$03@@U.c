ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const char **a5,
        wchar_t **a6,
        wchar_t **a7,
        wchar_t **a8,
        wchar_t **a9,
        wchar_t **a10,
        wchar_t **a11,
        wchar_t **a12,
        wchar_t **a13,
        wchar_t **a14,
        wchar_t **a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        const char **a22,
        const char **a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31)
{
  __int64 v33; // rcx
  const char *v34; // rdx
  __int64 v35; // rax
  int v36; // eax
  const char *v37; // rdx
  __int64 v38; // rax
  int v39; // eax
  int v40; // edx
  wchar_t *v41; // r8
  __int64 v42; // rax
  int v43; // r9d
  wchar_t *v44; // r8
  __int64 v45; // rax
  int v46; // r9d
  wchar_t *v47; // r8
  __int64 v48; // rax
  int v49; // r9d
  wchar_t *v50; // r8
  __int64 v51; // rax
  int v52; // r9d
  wchar_t *v53; // r8
  __int64 v54; // rax
  int v55; // r9d
  wchar_t *v56; // r8
  __int64 v57; // rax
  int v58; // r9d
  wchar_t *v59; // r8
  __int64 v60; // rax
  int v61; // r9d
  wchar_t *v62; // r8
  __int64 v63; // rax
  int v64; // r9d
  wchar_t *v65; // r8
  __int64 v66; // rax
  int v67; // r9d
  wchar_t *v68; // r8
  __int64 v69; // rax
  const char *v70; // rdx
  int v71; // ecx
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+30h] [rbp-D0h] BYREF
  const char *v74; // [rsp+50h] [rbp-B0h]
  int v75; // [rsp+58h] [rbp-A8h]
  int v76; // [rsp+5Ch] [rbp-A4h]
  wchar_t *v77; // [rsp+60h] [rbp-A0h]
  int v78; // [rsp+68h] [rbp-98h]
  int v79; // [rsp+6Ch] [rbp-94h]
  wchar_t *v80; // [rsp+70h] [rbp-90h]
  int v81; // [rsp+78h] [rbp-88h]
  int v82; // [rsp+7Ch] [rbp-84h]
  wchar_t *v83; // [rsp+80h] [rbp-80h]
  int v84; // [rsp+88h] [rbp-78h]
  int v85; // [rsp+8Ch] [rbp-74h]
  wchar_t *v86; // [rsp+90h] [rbp-70h]
  int v87; // [rsp+98h] [rbp-68h]
  int v88; // [rsp+9Ch] [rbp-64h]
  wchar_t *v89; // [rsp+A0h] [rbp-60h]
  int v90; // [rsp+A8h] [rbp-58h]
  int v91; // [rsp+ACh] [rbp-54h]
  wchar_t *v92; // [rsp+B0h] [rbp-50h]
  int v93; // [rsp+B8h] [rbp-48h]
  int v94; // [rsp+BCh] [rbp-44h]
  wchar_t *v95; // [rsp+C0h] [rbp-40h]
  int v96; // [rsp+C8h] [rbp-38h]
  int v97; // [rsp+CCh] [rbp-34h]
  wchar_t *v98; // [rsp+D0h] [rbp-30h]
  int v99; // [rsp+D8h] [rbp-28h]
  int v100; // [rsp+DCh] [rbp-24h]
  wchar_t *v101; // [rsp+E0h] [rbp-20h]
  int v102; // [rsp+E8h] [rbp-18h]
  int v103; // [rsp+ECh] [rbp-14h]
  wchar_t *v104; // [rsp+F0h] [rbp-10h]
  int v105; // [rsp+F8h] [rbp-8h]
  int v106; // [rsp+FCh] [rbp-4h]
  __int64 v107; // [rsp+100h] [rbp+0h]
  __int64 v108; // [rsp+108h] [rbp+8h]
  __int64 v109; // [rsp+110h] [rbp+10h]
  __int64 v110; // [rsp+118h] [rbp+18h]
  __int64 v111; // [rsp+120h] [rbp+20h]
  __int64 v112; // [rsp+128h] [rbp+28h]
  __int64 v113; // [rsp+130h] [rbp+30h]
  __int64 v114; // [rsp+138h] [rbp+38h]
  __int64 v115; // [rsp+140h] [rbp+40h]
  __int64 v116; // [rsp+148h] [rbp+48h]
  __int64 v117; // [rsp+150h] [rbp+50h]
  __int64 v118; // [rsp+158h] [rbp+58h]
  const char *v119; // [rsp+160h] [rbp+60h]
  int v120; // [rsp+168h] [rbp+68h]
  int v121; // [rsp+16Ch] [rbp+6Ch]
  const char *v122; // [rsp+170h] [rbp+70h]
  int v123; // [rsp+178h] [rbp+78h]
  int v124; // [rsp+17Ch] [rbp+7Ch]
  __int64 v125; // [rsp+180h] [rbp+80h]
  __int64 v126; // [rsp+188h] [rbp+88h]
  __int64 v127; // [rsp+190h] [rbp+90h]
  __int64 v128; // [rsp+198h] [rbp+98h]
  __int64 v129; // [rsp+1A0h] [rbp+A0h]
  __int64 v130; // [rsp+1A8h] [rbp+A8h]
  __int64 v131; // [rsp+1B0h] [rbp+B0h]
  __int64 v132; // [rsp+1B8h] [rbp+B8h]
  __int64 v133; // [rsp+1C0h] [rbp+C0h]
  __int64 v134; // [rsp+1C8h] [rbp+C8h]
  __int64 v135; // [rsp+1D0h] [rbp+D0h]
  __int64 v136; // [rsp+1D8h] [rbp+D8h]
  __int64 v137; // [rsp+1E0h] [rbp+E0h]
  __int64 v138; // [rsp+1E8h] [rbp+E8h]
  __int64 v139; // [rsp+1F0h] [rbp+F0h]
  __int64 v140; // [rsp+1F8h] [rbp+F8h]

  v139 = a31;
  v137 = a30;
  v33 = -1LL;
  v135 = a29;
  v133 = a28;
  v131 = a27;
  v129 = a26;
  v127 = a25;
  v125 = a24;
  v140 = 8LL;
  v138 = 4LL;
  v136 = 4LL;
  v34 = *a23;
  v134 = 4LL;
  v132 = 4LL;
  v130 = 4LL;
  v128 = 8LL;
  v126 = 4LL;
  if ( v34 )
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
  v123 = v36;
  v122 = v34;
  v124 = 0;
  v37 = *a22;
  if ( *a22 )
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
  v120 = v39;
  v117 = a21;
  v115 = a20;
  v113 = a19;
  v111 = a18;
  v109 = a17;
  v107 = a16;
  v119 = v37;
  v40 = 2;
  v121 = 0;
  v118 = 8LL;
  v41 = *a15;
  v116 = 8LL;
  v114 = 8LL;
  v112 = 8LL;
  v110 = 8LL;
  v108 = 4LL;
  if ( v41 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( v41[v42] );
    v43 = 2 * v42 + 2;
  }
  else
  {
    v41 = word_1803392B0;
    v43 = 2;
  }
  v104 = v41;
  v105 = v43;
  v106 = 0;
  v44 = *a14;
  if ( *a14 )
  {
    v45 = -1LL;
    do
      ++v45;
    while ( v44[v45] );
    v46 = 2 * v45 + 2;
  }
  else
  {
    v44 = word_1803392B0;
    v46 = 2;
  }
  v101 = v44;
  v102 = v46;
  v103 = 0;
  v47 = *a13;
  if ( *a13 )
  {
    v48 = -1LL;
    do
      ++v48;
    while ( v47[v48] );
    v49 = 2 * v48 + 2;
  }
  else
  {
    v47 = word_1803392B0;
    v49 = 2;
  }
  v98 = v47;
  v99 = v49;
  v100 = 0;
  v50 = *a12;
  if ( *a12 )
  {
    v51 = -1LL;
    do
      ++v51;
    while ( v50[v51] );
    v52 = 2 * v51 + 2;
  }
  else
  {
    v50 = word_1803392B0;
    v52 = 2;
  }
  v95 = v50;
  v96 = v52;
  v97 = 0;
  v53 = *a11;
  if ( *a11 )
  {
    v54 = -1LL;
    do
      ++v54;
    while ( v53[v54] );
    v55 = 2 * v54 + 2;
  }
  else
  {
    v53 = word_1803392B0;
    v55 = 2;
  }
  v92 = v53;
  v93 = v55;
  v94 = 0;
  v56 = *a10;
  if ( *a10 )
  {
    v57 = -1LL;
    do
      ++v57;
    while ( v56[v57] );
    v58 = 2 * v57 + 2;
  }
  else
  {
    v56 = word_1803392B0;
    v58 = 2;
  }
  v89 = v56;
  v90 = v58;
  v91 = 0;
  v59 = *a9;
  if ( *a9 )
  {
    v60 = -1LL;
    do
      ++v60;
    while ( v59[v60] );
    v61 = 2 * v60 + 2;
  }
  else
  {
    v59 = word_1803392B0;
    v61 = 2;
  }
  v86 = v59;
  v87 = v61;
  v88 = 0;
  v62 = *a8;
  if ( *a8 )
  {
    v63 = -1LL;
    do
      ++v63;
    while ( v62[v63] );
    v64 = 2 * v63 + 2;
  }
  else
  {
    v62 = word_1803392B0;
    v64 = 2;
  }
  v83 = v62;
  v84 = v64;
  v85 = 0;
  v65 = *a7;
  if ( *a7 )
  {
    v66 = -1LL;
    do
      ++v66;
    while ( v65[v66] );
    v67 = 2 * v66 + 2;
  }
  else
  {
    v65 = word_1803392B0;
    v67 = 2;
  }
  v80 = v65;
  v81 = v67;
  v82 = 0;
  v68 = *a6;
  if ( *a6 )
  {
    v69 = -1LL;
    do
      ++v69;
    while ( v68[v69] );
    v40 = 2 * v69 + 2;
  }
  else
  {
    v68 = word_1803392B0;
  }
  v78 = v40;
  v77 = v68;
  v79 = 0;
  v70 = *a5;
  if ( *a5 )
  {
    do
      ++v33;
    while ( v70[v33] );
    v71 = v33 + 1;
  }
  else
  {
    v70 = word_180338FC0;
    v71 = 1;
  }
  v74 = v70;
  v75 = v71;
  v76 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0x1Du, &v73);
}
