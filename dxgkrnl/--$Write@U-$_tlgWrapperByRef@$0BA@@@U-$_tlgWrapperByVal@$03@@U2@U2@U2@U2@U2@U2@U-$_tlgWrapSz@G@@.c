/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U?$_tlgWrapSz@G@@U3@U3@U3@U3@U2@U2@U3@U3@U3@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@444444AEBU?$_tlgWrapSz@G@@55554455544444444@Z @ 0x1C0066000
 * Callers:
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C00668BC (TraceLoggingWriteMiracastSessionStart.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0014BA0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        void **a13,
        void **a14,
        void **a15,
        void **a16,
        void **a17,
        __int64 a18,
        __int64 a19,
        void **a20,
        void **a21,
        void **a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30)
{
  __int64 v31; // rcx
  int v33; // edx
  _WORD *v34; // r8
  __int64 v35; // rax
  int v36; // r9d
  _WORD *v37; // r8
  __int64 v38; // rax
  int v39; // r9d
  _WORD *v40; // r8
  __int64 v41; // rax
  int v42; // r9d
  _WORD *v43; // r8
  __int64 v44; // rax
  int v45; // r9d
  _WORD *v46; // r8
  __int64 v47; // rax
  int v48; // r9d
  _WORD *v49; // r8
  __int64 v50; // rax
  int v51; // r9d
  _WORD *v52; // r8
  __int64 v53; // rax
  int v54; // r9d
  _WORD *v55; // r8
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v58; // [rsp+50h] [rbp-B0h]
  __int64 v59; // [rsp+58h] [rbp-A8h]
  __int64 v60; // [rsp+60h] [rbp-A0h]
  __int64 v61; // [rsp+68h] [rbp-98h]
  __int64 v62; // [rsp+70h] [rbp-90h]
  __int64 v63; // [rsp+78h] [rbp-88h]
  __int64 v64; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+88h] [rbp-78h]
  __int64 v66; // [rsp+90h] [rbp-70h]
  __int64 v67; // [rsp+98h] [rbp-68h]
  __int64 v68; // [rsp+A0h] [rbp-60h]
  __int64 v69; // [rsp+A8h] [rbp-58h]
  __int64 v70; // [rsp+B0h] [rbp-50h]
  __int64 v71; // [rsp+B8h] [rbp-48h]
  __int64 v72; // [rsp+C0h] [rbp-40h]
  __int64 v73; // [rsp+C8h] [rbp-38h]
  _WORD *v74; // [rsp+D0h] [rbp-30h]
  int v75; // [rsp+D8h] [rbp-28h]
  int v76; // [rsp+DCh] [rbp-24h]
  _WORD *v77; // [rsp+E0h] [rbp-20h]
  int v78; // [rsp+E8h] [rbp-18h]
  int v79; // [rsp+ECh] [rbp-14h]
  _WORD *v80; // [rsp+F0h] [rbp-10h]
  int v81; // [rsp+F8h] [rbp-8h]
  int v82; // [rsp+FCh] [rbp-4h]
  _WORD *v83; // [rsp+100h] [rbp+0h]
  int v84; // [rsp+108h] [rbp+8h]
  int v85; // [rsp+10Ch] [rbp+Ch]
  _WORD *v86; // [rsp+110h] [rbp+10h]
  int v87; // [rsp+118h] [rbp+18h]
  int v88; // [rsp+11Ch] [rbp+1Ch]
  __int64 v89; // [rsp+120h] [rbp+20h]
  __int64 v90; // [rsp+128h] [rbp+28h]
  __int64 v91; // [rsp+130h] [rbp+30h]
  __int64 v92; // [rsp+138h] [rbp+38h]
  _WORD *v93; // [rsp+140h] [rbp+40h]
  int v94; // [rsp+148h] [rbp+48h]
  int v95; // [rsp+14Ch] [rbp+4Ch]
  _WORD *v96; // [rsp+150h] [rbp+50h]
  int v97; // [rsp+158h] [rbp+58h]
  int v98; // [rsp+15Ch] [rbp+5Ch]
  _WORD *v99; // [rsp+160h] [rbp+60h]
  int v100; // [rsp+168h] [rbp+68h]
  int v101; // [rsp+16Ch] [rbp+6Ch]
  __int64 v102; // [rsp+170h] [rbp+70h]
  __int64 v103; // [rsp+178h] [rbp+78h]
  __int64 v104; // [rsp+180h] [rbp+80h]
  __int64 v105; // [rsp+188h] [rbp+88h]
  __int64 v106; // [rsp+190h] [rbp+90h]
  __int64 v107; // [rsp+198h] [rbp+98h]
  __int64 v108; // [rsp+1A0h] [rbp+A0h]
  __int64 v109; // [rsp+1A8h] [rbp+A8h]
  __int64 v110; // [rsp+1B0h] [rbp+B0h]
  __int64 v111; // [rsp+1B8h] [rbp+B8h]
  __int64 v112; // [rsp+1C0h] [rbp+C0h]
  __int64 v113; // [rsp+1C8h] [rbp+C8h]
  __int64 v114; // [rsp+1D0h] [rbp+D0h]
  __int64 v115; // [rsp+1D8h] [rbp+D8h]
  __int64 v116; // [rsp+1E0h] [rbp+E0h]
  __int64 v117; // [rsp+1E8h] [rbp+E8h]

  v116 = a30;
  v114 = a29;
  v31 = -1LL;
  v112 = a28;
  v33 = 2;
  v110 = a27;
  v108 = a26;
  v106 = a25;
  v104 = a24;
  v102 = a23;
  v117 = 4LL;
  v115 = 4LL;
  v113 = 4LL;
  v34 = *a22;
  v111 = 4LL;
  v109 = 4LL;
  v107 = 4LL;
  v105 = 4LL;
  v103 = 4LL;
  if ( v34 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( v34[v35] );
    v36 = 2 * v35 + 2;
  }
  else
  {
    v34 = &unk_1C0093660;
    v36 = 2;
  }
  v99 = v34;
  v100 = v36;
  v101 = 0;
  v37 = *a21;
  if ( *a21 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( v37[v38] );
    v39 = 2 * v38 + 2;
  }
  else
  {
    v37 = &unk_1C0093660;
    v39 = 2;
  }
  v96 = v37;
  v97 = v39;
  v98 = 0;
  v40 = *a20;
  if ( *a20 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( v40[v41] );
    v42 = 2 * v41 + 2;
  }
  else
  {
    v40 = &unk_1C0093660;
    v42 = 2;
  }
  v91 = a19;
  v89 = a18;
  v93 = v40;
  v94 = v42;
  v95 = 0;
  v43 = *a17;
  v92 = 4LL;
  v90 = 4LL;
  if ( v43 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( v43[v44] );
    v45 = 2 * v44 + 2;
  }
  else
  {
    v43 = &unk_1C0093660;
    v45 = 2;
  }
  v86 = v43;
  v87 = v45;
  v88 = 0;
  v46 = *a16;
  if ( *a16 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( v46[v47] );
    v48 = 2 * v47 + 2;
  }
  else
  {
    v46 = &unk_1C0093660;
    v48 = 2;
  }
  v83 = v46;
  v84 = v48;
  v85 = 0;
  v49 = *a15;
  if ( *a15 )
  {
    v50 = -1LL;
    do
      ++v50;
    while ( v49[v50] );
    v51 = 2 * v50 + 2;
  }
  else
  {
    v49 = &unk_1C0093660;
    v51 = 2;
  }
  v80 = v49;
  v81 = v51;
  v82 = 0;
  v52 = *a14;
  if ( *a14 )
  {
    v53 = -1LL;
    do
      ++v53;
    while ( v52[v53] );
    v54 = 2 * v53 + 2;
  }
  else
  {
    v52 = &unk_1C0093660;
    v54 = 2;
  }
  v77 = v52;
  v78 = v54;
  v79 = 0;
  v55 = *a13;
  if ( *a13 )
  {
    do
      ++v31;
    while ( v55[v31] );
    v33 = 2 * v31 + 2;
  }
  else
  {
    v55 = &unk_1C0093660;
  }
  v72 = a12;
  v70 = a11;
  v68 = a10;
  v66 = a9;
  v64 = a8;
  v62 = a7;
  v60 = a6;
  v74 = v55;
  v75 = v33;
  v76 = 0;
  v58 = *a5;
  v73 = 4LL;
  v71 = 4LL;
  v69 = 4LL;
  v67 = 4LL;
  v65 = 4LL;
  v63 = 4LL;
  v61 = 4LL;
  v59 = 16LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C013A918, a2, a3, 0LL, 0x1Cu, &v57);
}
