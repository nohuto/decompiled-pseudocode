NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        void **a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
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
        void **a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        __int64 a37,
        __int64 a38,
        __int64 a39,
        __int64 a40)
{
  __int64 v42; // rcx
  _BYTE *v43; // rdx
  __int64 v44; // rax
  int v45; // eax
  _BYTE *v46; // rdx
  int v47; // ecx
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v50; // [rsp+50h] [rbp-B0h]
  __int64 v51; // [rsp+58h] [rbp-A8h]
  __int64 v52; // [rsp+60h] [rbp-A0h]
  __int64 v53; // [rsp+68h] [rbp-98h]
  __int64 v54; // [rsp+70h] [rbp-90h]
  __int64 v55; // [rsp+78h] [rbp-88h]
  __int64 v56; // [rsp+80h] [rbp-80h]
  __int64 v57; // [rsp+88h] [rbp-78h]
  __int64 v58; // [rsp+90h] [rbp-70h]
  __int64 v59; // [rsp+98h] [rbp-68h]
  __int64 v60; // [rsp+A0h] [rbp-60h]
  __int64 v61; // [rsp+A8h] [rbp-58h]
  _BYTE *v62; // [rsp+B0h] [rbp-50h]
  int v63; // [rsp+B8h] [rbp-48h]
  int v64; // [rsp+BCh] [rbp-44h]
  __int64 v65; // [rsp+C0h] [rbp-40h]
  __int64 v66; // [rsp+C8h] [rbp-38h]
  __int64 v67; // [rsp+D0h] [rbp-30h]
  __int64 v68; // [rsp+D8h] [rbp-28h]
  __int64 v69; // [rsp+E0h] [rbp-20h]
  __int64 v70; // [rsp+E8h] [rbp-18h]
  __int64 v71; // [rsp+F0h] [rbp-10h]
  __int64 v72; // [rsp+F8h] [rbp-8h]
  __int64 v73; // [rsp+100h] [rbp+0h]
  __int64 v74; // [rsp+108h] [rbp+8h]
  __int64 v75; // [rsp+110h] [rbp+10h]
  __int64 v76; // [rsp+118h] [rbp+18h]
  __int64 v77; // [rsp+120h] [rbp+20h]
  __int64 v78; // [rsp+128h] [rbp+28h]
  __int64 v79; // [rsp+130h] [rbp+30h]
  __int64 v80; // [rsp+138h] [rbp+38h]
  __int64 v81; // [rsp+140h] [rbp+40h]
  __int64 v82; // [rsp+148h] [rbp+48h]
  __int64 v83; // [rsp+150h] [rbp+50h]
  __int64 v84; // [rsp+158h] [rbp+58h]
  __int64 v85; // [rsp+160h] [rbp+60h]
  __int64 v86; // [rsp+168h] [rbp+68h]
  __int64 v87; // [rsp+170h] [rbp+70h]
  __int64 v88; // [rsp+178h] [rbp+78h]
  __int64 v89; // [rsp+180h] [rbp+80h]
  __int64 v90; // [rsp+188h] [rbp+88h]
  __int64 v91; // [rsp+190h] [rbp+90h]
  __int64 v92; // [rsp+198h] [rbp+98h]
  __int64 v93; // [rsp+1A0h] [rbp+A0h]
  __int64 v94; // [rsp+1A8h] [rbp+A8h]
  __int64 v95; // [rsp+1B0h] [rbp+B0h]
  __int64 v96; // [rsp+1B8h] [rbp+B8h]
  _BYTE *v97; // [rsp+1C0h] [rbp+C0h]
  int v98; // [rsp+1C8h] [rbp+C8h]
  int v99; // [rsp+1CCh] [rbp+CCh]
  __int64 v100; // [rsp+1D0h] [rbp+D0h]
  __int64 v101; // [rsp+1D8h] [rbp+D8h]
  __int64 v102; // [rsp+1E0h] [rbp+E0h]
  __int64 v103; // [rsp+1E8h] [rbp+E8h]
  __int64 v104; // [rsp+1F0h] [rbp+F0h]
  __int64 v105; // [rsp+1F8h] [rbp+F8h]
  __int64 v106; // [rsp+200h] [rbp+100h]
  __int64 v107; // [rsp+208h] [rbp+108h]
  __int64 v108; // [rsp+210h] [rbp+110h]
  __int64 v109; // [rsp+218h] [rbp+118h]
  __int64 v110; // [rsp+220h] [rbp+120h]
  __int64 v111; // [rsp+228h] [rbp+128h]
  __int64 v112; // [rsp+230h] [rbp+130h]
  __int64 v113; // [rsp+238h] [rbp+138h]
  __int64 v114; // [rsp+240h] [rbp+140h]
  __int64 v115; // [rsp+248h] [rbp+148h]
  __int64 v116; // [rsp+250h] [rbp+150h]
  __int64 v117; // [rsp+258h] [rbp+158h]
  __int64 v118; // [rsp+260h] [rbp+160h]
  __int64 v119; // [rsp+268h] [rbp+168h]
  __int64 v120; // [rsp+270h] [rbp+170h]
  __int64 v121; // [rsp+278h] [rbp+178h]
  __int64 v122; // [rsp+280h] [rbp+180h]
  __int64 v123; // [rsp+288h] [rbp+188h]

  v122 = a40;
  v120 = a39;
  v42 = -1LL;
  v118 = a38;
  v116 = a37;
  v114 = a36;
  v112 = a35;
  v110 = a34;
  v108 = a33;
  v106 = a32;
  v104 = a31;
  v102 = a30;
  v100 = a29;
  v123 = 4LL;
  v121 = 4LL;
  v119 = 4LL;
  v43 = *a28;
  v117 = 4LL;
  v115 = 4LL;
  v113 = 4LL;
  v111 = 4LL;
  v109 = 4LL;
  v107 = 4LL;
  v105 = 4LL;
  v103 = 4LL;
  v101 = 4LL;
  if ( v43 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( v43[v44] );
    v45 = v44 + 1;
  }
  else
  {
    v43 = &unk_1C02A2108;
    v45 = 1;
  }
  v98 = v45;
  v95 = a27;
  v93 = a26;
  v91 = a25;
  v89 = a24;
  v87 = a23;
  v85 = a22;
  v83 = a21;
  v81 = a20;
  v79 = a19;
  v77 = a18;
  v75 = a17;
  v73 = a16;
  v71 = a15;
  v69 = a14;
  v67 = a13;
  v65 = a12;
  v97 = v43;
  v99 = 0;
  v96 = 4LL;
  v46 = *a11;
  v94 = 4LL;
  v92 = 8LL;
  v90 = 4LL;
  v88 = 8LL;
  v86 = 8LL;
  v84 = 4LL;
  v82 = 4LL;
  v80 = 4LL;
  v78 = 4LL;
  v76 = 4LL;
  v74 = 4LL;
  v72 = 4LL;
  v70 = 4LL;
  v68 = 4LL;
  v66 = 4LL;
  if ( v46 )
  {
    do
      ++v42;
    while ( v46[v42] );
    v47 = v42 + 1;
  }
  else
  {
    v46 = &unk_1C02A2108;
    v47 = 1;
  }
  v60 = a10;
  v58 = a9;
  v56 = a8;
  v54 = a7;
  v52 = a6;
  v50 = a5;
  v62 = v46;
  v63 = v47;
  v64 = 0;
  v61 = 4LL;
  v59 = 4LL;
  v57 = 2LL;
  v55 = 8LL;
  v53 = 8LL;
  v51 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x26u, &v49);
}
