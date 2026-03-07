NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const WCHAR **a7,
        const WCHAR **a8,
        __int64 a9,
        const WCHAR **a10,
        __int64 *a11,
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
        const WCHAR **a24,
        __int64 a25,
        __int64 a26,
        unsigned __int16 **a27,
        unsigned __int16 **a28,
        const WCHAR **a29,
        const WCHAR **a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        __int64 a37)
{
  __int64 v38; // rdx
  const WCHAR *v39; // rcx
  __int64 v40; // rax
  int v41; // r8d
  const WCHAR *v42; // rcx
  __int64 v43; // rax
  int v44; // r8d
  int v45; // ecx
  int v46; // ecx
  const WCHAR *v47; // rcx
  __int64 v48; // rax
  int v49; // r8d
  const WCHAR *v50; // rcx
  __int64 v51; // rax
  int v52; // r8d
  const WCHAR *v53; // rcx
  __int64 v54; // rax
  int v55; // r8d
  const WCHAR *v56; // rcx
  int v57; // eax
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v60; // [rsp+58h] [rbp-B0h]
  __int64 v61; // [rsp+60h] [rbp-A8h]
  __int64 v62; // [rsp+68h] [rbp-A0h]
  __int64 v63; // [rsp+70h] [rbp-98h]
  const WCHAR *v64; // [rsp+78h] [rbp-90h]
  int v65; // [rsp+80h] [rbp-88h]
  int v66; // [rsp+84h] [rbp-84h]
  const WCHAR *v67; // [rsp+88h] [rbp-80h]
  int v68; // [rsp+90h] [rbp-78h]
  int v69; // [rsp+94h] [rbp-74h]
  __int64 v70; // [rsp+98h] [rbp-70h]
  __int64 v71; // [rsp+A0h] [rbp-68h]
  const WCHAR *v72; // [rsp+A8h] [rbp-60h]
  int v73; // [rsp+B0h] [rbp-58h]
  int v74; // [rsp+B4h] [rbp-54h]
  __int64 v75; // [rsp+B8h] [rbp-50h]
  __int64 v76; // [rsp+C0h] [rbp-48h]
  __int64 v77; // [rsp+C8h] [rbp-40h]
  __int64 v78; // [rsp+D0h] [rbp-38h]
  __int64 v79; // [rsp+D8h] [rbp-30h]
  __int64 v80; // [rsp+E0h] [rbp-28h]
  __int64 v81; // [rsp+E8h] [rbp-20h]
  __int64 v82; // [rsp+F0h] [rbp-18h]
  __int64 v83; // [rsp+F8h] [rbp-10h]
  __int64 v84; // [rsp+100h] [rbp-8h]
  __int64 v85; // [rsp+108h] [rbp+0h]
  __int64 v86; // [rsp+110h] [rbp+8h]
  __int64 v87; // [rsp+118h] [rbp+10h]
  __int64 v88; // [rsp+120h] [rbp+18h]
  __int64 v89; // [rsp+128h] [rbp+20h]
  __int64 v90; // [rsp+130h] [rbp+28h]
  __int64 v91; // [rsp+138h] [rbp+30h]
  __int64 v92; // [rsp+140h] [rbp+38h]
  __int64 v93; // [rsp+148h] [rbp+40h]
  __int64 v94; // [rsp+150h] [rbp+48h]
  __int64 v95; // [rsp+158h] [rbp+50h]
  __int64 v96; // [rsp+160h] [rbp+58h]
  __int64 v97; // [rsp+168h] [rbp+60h]
  __int64 v98; // [rsp+170h] [rbp+68h]
  __int64 v99; // [rsp+178h] [rbp+70h]
  __int64 v100; // [rsp+180h] [rbp+78h]
  const WCHAR *v101; // [rsp+188h] [rbp+80h]
  int v102; // [rsp+190h] [rbp+88h]
  int v103; // [rsp+194h] [rbp+8Ch]
  __int64 v104; // [rsp+198h] [rbp+90h]
  __int64 v105; // [rsp+1A0h] [rbp+98h]
  __int64 v106; // [rsp+1A8h] [rbp+A0h]
  __int64 v107; // [rsp+1B0h] [rbp+A8h]
  _DWORD *v108; // [rsp+1B8h] [rbp+B0h]
  __int64 v109; // [rsp+1C0h] [rbp+B8h]
  __int64 v110; // [rsp+1C8h] [rbp+C0h]
  _DWORD v111[2]; // [rsp+1D0h] [rbp+C8h] BYREF
  _DWORD *v112; // [rsp+1D8h] [rbp+D0h]
  __int64 v113; // [rsp+1E0h] [rbp+D8h]
  __int64 v114; // [rsp+1E8h] [rbp+E0h]
  _DWORD v115[2]; // [rsp+1F0h] [rbp+E8h] BYREF
  const WCHAR *v116; // [rsp+1F8h] [rbp+F0h]
  int v117; // [rsp+200h] [rbp+F8h]
  int v118; // [rsp+204h] [rbp+FCh]
  const WCHAR *v119; // [rsp+208h] [rbp+100h]
  int v120; // [rsp+210h] [rbp+108h]
  int v121; // [rsp+214h] [rbp+10Ch]
  __int64 v122; // [rsp+218h] [rbp+110h]
  __int64 v123; // [rsp+220h] [rbp+118h]
  __int64 v124; // [rsp+228h] [rbp+120h]
  __int64 v125; // [rsp+230h] [rbp+128h]
  __int64 v126; // [rsp+238h] [rbp+130h]
  __int64 v127; // [rsp+240h] [rbp+138h]
  __int64 v128; // [rsp+248h] [rbp+140h]
  __int64 v129; // [rsp+250h] [rbp+148h]
  __int64 v130; // [rsp+258h] [rbp+150h]
  __int64 v131; // [rsp+260h] [rbp+158h]
  __int64 v132; // [rsp+268h] [rbp+160h]
  __int64 v133; // [rsp+270h] [rbp+168h]
  __int64 v134; // [rsp+278h] [rbp+170h]
  __int64 v135; // [rsp+280h] [rbp+178h]

  v134 = a37;
  v132 = a36;
  v38 = -1LL;
  v130 = a35;
  v128 = a34;
  v126 = a33;
  v124 = a32;
  v122 = a31;
  v135 = 8LL;
  v133 = 4LL;
  v131 = 4LL;
  v39 = *a30;
  v129 = 4LL;
  v127 = 4LL;
  v125 = 4LL;
  v123 = 4LL;
  if ( v39 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( v39[v40] );
    v41 = 2 * v40 + 2;
  }
  else
  {
    v39 = &word_1C02856D8;
    v41 = 2;
  }
  v119 = v39;
  v120 = v41;
  v121 = 0;
  v42 = *a29;
  if ( *a29 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( v42[v43] );
    v44 = 2 * v43 + 2;
  }
  else
  {
    v42 = &word_1C02856D8;
    v44 = 2;
  }
  v116 = v42;
  v112 = v115;
  v117 = v44;
  v118 = 0;
  v113 = 2LL;
  v45 = **a28;
  v114 = *((_QWORD *)*a28 + 1);
  v108 = v111;
  v115[0] = v45;
  v115[1] = 0;
  v109 = 2LL;
  v46 = **a27;
  v110 = *((_QWORD *)*a27 + 1);
  v106 = a26;
  v104 = a25;
  v111[0] = v46;
  v111[1] = 0;
  v107 = 4LL;
  v47 = *a24;
  v105 = 4LL;
  if ( v47 )
  {
    v48 = -1LL;
    do
      ++v48;
    while ( v47[v48] );
    v49 = 2 * v48 + 2;
  }
  else
  {
    v47 = &word_1C02856D8;
    v49 = 2;
  }
  v99 = a23;
  v97 = a22;
  v95 = a21;
  v93 = a20;
  v91 = a19;
  v89 = a18;
  v87 = a17;
  v85 = a16;
  v83 = a15;
  v81 = a14;
  v79 = a13;
  v77 = a12;
  v101 = v47;
  v102 = v49;
  v103 = 0;
  v75 = *a11;
  v100 = 4LL;
  v98 = 4LL;
  v50 = *a10;
  v96 = 8LL;
  v94 = 8LL;
  v92 = 4LL;
  v90 = 4LL;
  v88 = 4LL;
  v86 = 8LL;
  v84 = 1LL;
  v82 = 1LL;
  v80 = 1LL;
  v78 = 8LL;
  v76 = 16LL;
  if ( v50 )
  {
    v51 = -1LL;
    do
      ++v51;
    while ( v50[v51] );
    v52 = 2 * v51 + 2;
  }
  else
  {
    v50 = &word_1C02856D8;
    v52 = 2;
  }
  v70 = a9;
  v72 = v50;
  v73 = v52;
  v74 = 0;
  v53 = *a8;
  v71 = 4LL;
  if ( v53 )
  {
    v54 = -1LL;
    do
      ++v54;
    while ( v53[v54] );
    v55 = 2 * v54 + 2;
  }
  else
  {
    v53 = &word_1C02856D8;
    v55 = 2;
  }
  v67 = v53;
  v68 = v55;
  v69 = 0;
  v56 = *a7;
  if ( *a7 )
  {
    do
      ++v38;
    while ( v56[v38] );
    v57 = 2 * v38 + 2;
  }
  else
  {
    v56 = &word_1C02856D8;
    v57 = 2;
  }
  v65 = v57;
  v62 = a6;
  v60 = a5;
  v64 = v56;
  v66 = 0;
  v63 = 2LL;
  v61 = 2LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C92F8, a2, 0LL, 0LL, 0x25u, &v59);
}
