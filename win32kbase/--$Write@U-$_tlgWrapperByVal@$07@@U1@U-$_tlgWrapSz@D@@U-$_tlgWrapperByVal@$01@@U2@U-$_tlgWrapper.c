NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7,
        __int64 a8,
        void **a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        void **a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        void **a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        __int64 a37,
        __int64 a38,
        __int64 a39,
        __int64 a40,
        __int64 a41,
        __int64 a42,
        __int64 a43)
{
  __int64 v44; // rdx
  _BYTE *v45; // r8
  __int64 v46; // rax
  int v47; // eax
  _BYTE *v48; // r8
  __int64 v49; // rax
  int v50; // eax
  _BYTE *v51; // r8
  __int64 v52; // rax
  int v53; // eax
  _BYTE *v54; // r8
  int v55; // edx
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v58; // [rsp+50h] [rbp-B0h]
  __int64 v59; // [rsp+58h] [rbp-A8h]
  __int64 v60; // [rsp+60h] [rbp-A0h]
  __int64 v61; // [rsp+68h] [rbp-98h]
  _BYTE *v62; // [rsp+70h] [rbp-90h]
  int v63; // [rsp+78h] [rbp-88h]
  int v64; // [rsp+7Ch] [rbp-84h]
  __int64 v65; // [rsp+80h] [rbp-80h]
  __int64 v66; // [rsp+88h] [rbp-78h]
  _BYTE *v67; // [rsp+90h] [rbp-70h]
  int v68; // [rsp+98h] [rbp-68h]
  int v69; // [rsp+9Ch] [rbp-64h]
  __int64 v70; // [rsp+A0h] [rbp-60h]
  __int64 v71; // [rsp+A8h] [rbp-58h]
  __int64 v72; // [rsp+B0h] [rbp-50h]
  __int64 v73; // [rsp+B8h] [rbp-48h]
  __int64 v74; // [rsp+C0h] [rbp-40h]
  __int64 v75; // [rsp+C8h] [rbp-38h]
  __int64 v76; // [rsp+D0h] [rbp-30h]
  __int64 v77; // [rsp+D8h] [rbp-28h]
  _BYTE *v78; // [rsp+E0h] [rbp-20h]
  int v79; // [rsp+E8h] [rbp-18h]
  int v80; // [rsp+ECh] [rbp-14h]
  __int64 v81; // [rsp+F0h] [rbp-10h]
  __int64 v82; // [rsp+F8h] [rbp-8h]
  __int64 v83; // [rsp+100h] [rbp+0h]
  __int64 v84; // [rsp+108h] [rbp+8h]
  __int64 v85; // [rsp+110h] [rbp+10h]
  __int64 v86; // [rsp+118h] [rbp+18h]
  __int64 v87; // [rsp+120h] [rbp+20h]
  __int64 v88; // [rsp+128h] [rbp+28h]
  __int64 v89; // [rsp+130h] [rbp+30h]
  __int64 v90; // [rsp+138h] [rbp+38h]
  __int64 v91; // [rsp+140h] [rbp+40h]
  __int64 v92; // [rsp+148h] [rbp+48h]
  __int64 v93; // [rsp+150h] [rbp+50h]
  __int64 v94; // [rsp+158h] [rbp+58h]
  __int64 v95; // [rsp+160h] [rbp+60h]
  __int64 v96; // [rsp+168h] [rbp+68h]
  __int64 v97; // [rsp+170h] [rbp+70h]
  __int64 v98; // [rsp+178h] [rbp+78h]
  __int64 v99; // [rsp+180h] [rbp+80h]
  __int64 v100; // [rsp+188h] [rbp+88h]
  __int64 v101; // [rsp+190h] [rbp+90h]
  __int64 v102; // [rsp+198h] [rbp+98h]
  __int64 v103; // [rsp+1A0h] [rbp+A0h]
  __int64 v104; // [rsp+1A8h] [rbp+A8h]
  __int64 v105; // [rsp+1B0h] [rbp+B0h]
  __int64 v106; // [rsp+1B8h] [rbp+B8h]
  __int64 v107; // [rsp+1C0h] [rbp+C0h]
  __int64 v108; // [rsp+1C8h] [rbp+C8h]
  __int64 v109; // [rsp+1D0h] [rbp+D0h]
  __int64 v110; // [rsp+1D8h] [rbp+D8h]
  __int64 v111; // [rsp+1E0h] [rbp+E0h]
  __int64 v112; // [rsp+1E8h] [rbp+E8h]
  _BYTE *v113; // [rsp+1F0h] [rbp+F0h]
  int v114; // [rsp+1F8h] [rbp+F8h]
  int v115; // [rsp+1FCh] [rbp+FCh]
  __int64 v116; // [rsp+200h] [rbp+100h]
  __int64 v117; // [rsp+208h] [rbp+108h]
  __int64 v118; // [rsp+210h] [rbp+110h]
  __int64 v119; // [rsp+218h] [rbp+118h]
  __int64 v120; // [rsp+220h] [rbp+120h]
  __int64 v121; // [rsp+228h] [rbp+128h]
  __int64 v122; // [rsp+230h] [rbp+130h]
  __int64 v123; // [rsp+238h] [rbp+138h]
  __int64 v124; // [rsp+240h] [rbp+140h]
  __int64 v125; // [rsp+248h] [rbp+148h]
  __int64 v126; // [rsp+250h] [rbp+150h]
  __int64 v127; // [rsp+258h] [rbp+158h]
  __int64 v128; // [rsp+260h] [rbp+160h]
  __int64 v129; // [rsp+268h] [rbp+168h]
  __int64 v130; // [rsp+270h] [rbp+170h]
  __int64 v131; // [rsp+278h] [rbp+178h]
  __int64 v132; // [rsp+280h] [rbp+180h]
  __int64 v133; // [rsp+288h] [rbp+188h]
  __int64 v134; // [rsp+290h] [rbp+190h]
  __int64 v135; // [rsp+298h] [rbp+198h]
  __int64 v136; // [rsp+2A0h] [rbp+1A0h]
  __int64 v137; // [rsp+2A8h] [rbp+1A8h]
  __int64 v138; // [rsp+2B0h] [rbp+1B0h]
  __int64 v139; // [rsp+2B8h] [rbp+1B8h]

  v138 = a43;
  v44 = -1LL;
  v136 = a42;
  v134 = a41;
  v132 = a40;
  v130 = a39;
  v128 = a38;
  v126 = a37;
  v124 = a36;
  v122 = a35;
  v120 = a34;
  v118 = a33;
  v116 = a32;
  v139 = 4LL;
  v137 = 4LL;
  v135 = 4LL;
  v45 = *a31;
  v133 = 4LL;
  v131 = 4LL;
  v129 = 4LL;
  v127 = 4LL;
  v125 = 4LL;
  v123 = 4LL;
  v121 = 4LL;
  v119 = 4LL;
  v117 = 4LL;
  if ( v45 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( v45[v46] );
    v47 = v46 + 1;
  }
  else
  {
    v45 = &unk_1C02A2108;
    v47 = 1;
  }
  v114 = v47;
  v111 = a30;
  v109 = a29;
  v107 = a28;
  v105 = a27;
  v103 = a26;
  v101 = a25;
  v99 = a24;
  v97 = a23;
  v95 = a22;
  v93 = a21;
  v91 = a20;
  v89 = a19;
  v87 = a18;
  v85 = a17;
  v83 = a16;
  v81 = a15;
  v113 = v45;
  v115 = 0;
  v112 = 4LL;
  v48 = *a14;
  v110 = 4LL;
  v108 = 8LL;
  v106 = 4LL;
  v104 = 8LL;
  v102 = 8LL;
  v100 = 4LL;
  v98 = 4LL;
  v96 = 4LL;
  v94 = 4LL;
  v92 = 4LL;
  v90 = 4LL;
  v88 = 4LL;
  v86 = 4LL;
  v84 = 4LL;
  v82 = 4LL;
  if ( v48 )
  {
    v49 = -1LL;
    do
      ++v49;
    while ( v48[v49] );
    v50 = v49 + 1;
  }
  else
  {
    v48 = &unk_1C02A2108;
    v50 = 1;
  }
  v79 = v50;
  v76 = a13;
  v74 = a12;
  v72 = a11;
  v70 = a10;
  v78 = v48;
  v80 = 0;
  v77 = 4LL;
  v51 = *a9;
  v75 = 4LL;
  v73 = 4LL;
  v71 = 4LL;
  if ( v51 )
  {
    v52 = -1LL;
    do
      ++v52;
    while ( v51[v52] );
    v53 = v52 + 1;
  }
  else
  {
    v51 = &unk_1C02A2108;
    v53 = 1;
  }
  v68 = v53;
  v65 = a8;
  v67 = v51;
  v69 = 0;
  v66 = 2LL;
  v54 = *a7;
  if ( *a7 )
  {
    do
      ++v44;
    while ( v54[v44] );
    v55 = v44 + 1;
  }
  else
  {
    v54 = &unk_1C02A2108;
    v55 = 1;
  }
  v60 = a6;
  v58 = a5;
  v62 = v54;
  v63 = v55;
  v64 = 0;
  v61 = 8LL;
  v59 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x29u, &v57);
}
