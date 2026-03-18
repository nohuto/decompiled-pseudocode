/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U?$_tlgWrapSz@D@@U2@U2@U4@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@44445AEBU?$_tlgWrapSz@D@@44644444444444444444@Z @ 0x1C01E4B28
 * Callers:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1C0034E2C (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const WCHAR **a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        const WCHAR **a14,
        void **a15,
        __int64 a16,
        __int64 a17,
        void **a18,
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
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        __int64 a35)
{
  __int64 v37; // rcx
  _BYTE *v38; // rdx
  __int64 v39; // rax
  int v40; // eax
  _BYTE *v41; // rdx
  __int64 v42; // rax
  int v43; // eax
  int v44; // r8d
  const WCHAR *v45; // rdx
  __int64 v46; // rax
  int v47; // r9d
  const WCHAR *v48; // rdx
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A8h]
  __int64 v53; // [rsp+60h] [rbp-A0h]
  __int64 v54; // [rsp+68h] [rbp-98h]
  __int64 v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h]
  __int64 v57; // [rsp+80h] [rbp-80h]
  __int64 v58; // [rsp+88h] [rbp-78h]
  const WCHAR *v59; // [rsp+90h] [rbp-70h]
  int v60; // [rsp+98h] [rbp-68h]
  int v61; // [rsp+9Ch] [rbp-64h]
  __int64 v62; // [rsp+A0h] [rbp-60h]
  __int64 v63; // [rsp+A8h] [rbp-58h]
  __int64 v64; // [rsp+B0h] [rbp-50h]
  __int64 v65; // [rsp+B8h] [rbp-48h]
  __int64 v66; // [rsp+C0h] [rbp-40h]
  __int64 v67; // [rsp+C8h] [rbp-38h]
  __int64 v68; // [rsp+D0h] [rbp-30h]
  __int64 v69; // [rsp+D8h] [rbp-28h]
  const WCHAR *v70; // [rsp+E0h] [rbp-20h]
  int v71; // [rsp+E8h] [rbp-18h]
  int v72; // [rsp+ECh] [rbp-14h]
  _BYTE *v73; // [rsp+F0h] [rbp-10h]
  int v74; // [rsp+F8h] [rbp-8h]
  int v75; // [rsp+FCh] [rbp-4h]
  __int64 v76; // [rsp+100h] [rbp+0h]
  __int64 v77; // [rsp+108h] [rbp+8h]
  __int64 v78; // [rsp+110h] [rbp+10h]
  __int64 v79; // [rsp+118h] [rbp+18h]
  _BYTE *v80; // [rsp+120h] [rbp+20h]
  int v81; // [rsp+128h] [rbp+28h]
  int v82; // [rsp+12Ch] [rbp+2Ch]
  __int64 v83; // [rsp+130h] [rbp+30h]
  __int64 v84; // [rsp+138h] [rbp+38h]
  __int64 v85; // [rsp+140h] [rbp+40h]
  __int64 v86; // [rsp+148h] [rbp+48h]
  __int64 v87; // [rsp+150h] [rbp+50h]
  __int64 v88; // [rsp+158h] [rbp+58h]
  __int64 v89; // [rsp+160h] [rbp+60h]
  __int64 v90; // [rsp+168h] [rbp+68h]
  __int64 v91; // [rsp+170h] [rbp+70h]
  __int64 v92; // [rsp+178h] [rbp+78h]
  __int64 v93; // [rsp+180h] [rbp+80h]
  __int64 v94; // [rsp+188h] [rbp+88h]
  __int64 v95; // [rsp+190h] [rbp+90h]
  __int64 v96; // [rsp+198h] [rbp+98h]
  __int64 v97; // [rsp+1A0h] [rbp+A0h]
  __int64 v98; // [rsp+1A8h] [rbp+A8h]
  __int64 v99; // [rsp+1B0h] [rbp+B0h]
  __int64 v100; // [rsp+1B8h] [rbp+B8h]
  __int64 v101; // [rsp+1C0h] [rbp+C0h]
  __int64 v102; // [rsp+1C8h] [rbp+C8h]
  __int64 v103; // [rsp+1D0h] [rbp+D0h]
  __int64 v104; // [rsp+1D8h] [rbp+D8h]
  __int64 v105; // [rsp+1E0h] [rbp+E0h]
  __int64 v106; // [rsp+1E8h] [rbp+E8h]
  __int64 v107; // [rsp+1F0h] [rbp+F0h]
  __int64 v108; // [rsp+1F8h] [rbp+F8h]
  __int64 v109; // [rsp+200h] [rbp+100h]
  __int64 v110; // [rsp+208h] [rbp+108h]
  __int64 v111; // [rsp+210h] [rbp+110h]
  __int64 v112; // [rsp+218h] [rbp+118h]
  __int64 v113; // [rsp+220h] [rbp+120h]
  __int64 v114; // [rsp+228h] [rbp+128h]
  __int64 v115; // [rsp+230h] [rbp+130h]
  __int64 v116; // [rsp+238h] [rbp+138h]

  v115 = a35;
  v113 = a34;
  v37 = -1LL;
  v111 = a33;
  v109 = a32;
  v107 = a31;
  v105 = a30;
  v103 = a29;
  v101 = a28;
  v99 = a27;
  v97 = a26;
  v95 = a25;
  v93 = a24;
  v91 = a23;
  v89 = a22;
  v87 = a21;
  v85 = a20;
  v83 = a19;
  v116 = 4LL;
  v114 = 4LL;
  v112 = 4LL;
  v38 = *a18;
  v110 = 4LL;
  v108 = 4LL;
  v106 = 4LL;
  v104 = 4LL;
  v102 = 4LL;
  v100 = 4LL;
  v98 = 4LL;
  v96 = 4LL;
  v94 = 4LL;
  v92 = 4LL;
  v90 = 4LL;
  v88 = 4LL;
  v86 = 4LL;
  v84 = 4LL;
  if ( v38 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( v38[v39] );
    v40 = v39 + 1;
  }
  else
  {
    v38 = &unk_1C0268818;
    v40 = 1;
  }
  v81 = v40;
  v78 = a17;
  v76 = a16;
  v80 = v38;
  v82 = 0;
  v79 = 4LL;
  v41 = *a15;
  v77 = 4LL;
  if ( v41 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( v41[v42] );
    v43 = v42 + 1;
  }
  else
  {
    v41 = &unk_1C0268818;
    v43 = 1;
  }
  v74 = v43;
  v44 = 2;
  v73 = v41;
  v75 = 0;
  v45 = *a14;
  if ( *a14 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( v45[v46] );
    v47 = 2 * v46 + 2;
  }
  else
  {
    v45 = &word_1C0251294;
    v47 = 2;
  }
  v68 = a13;
  v66 = a12;
  v64 = a11;
  v62 = a10;
  v70 = v45;
  v71 = v47;
  v72 = 0;
  v48 = *a9;
  v69 = 4LL;
  v67 = 4LL;
  v65 = 4LL;
  v63 = 4LL;
  if ( v48 )
  {
    do
      ++v37;
    while ( v48[v37] );
    v44 = 2 * v37 + 2;
  }
  else
  {
    v48 = &word_1C0251294;
  }
  v57 = a8;
  v55 = a7;
  v53 = a6;
  v51 = a5;
  v59 = v48;
  v60 = v44;
  v61 = 0;
  v58 = 8LL;
  v56 = 8LL;
  v54 = 4LL;
  v52 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x21u, &v50);
}
