/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U2@U?$_tlgWrapSz@G@@U4@U4@U4@U4@U4@U4@U4@U4@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@44AEBU?$_tlgWrapSz@G@@66666666443@Z @ 0x1C022598C
 * Callers:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1C007DFAC (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7,
        __int64 a8,
        __int64 a9,
        const WCHAR **a10,
        const WCHAR **a11,
        const WCHAR **a12,
        const WCHAR **a13,
        const WCHAR **a14,
        const WCHAR **a15,
        const WCHAR **a16,
        const WCHAR **a17,
        const WCHAR **a18,
        __int64 a19,
        __int64 a20,
        __int64 a21)
{
  __int64 v22; // rcx
  int v24; // edx
  const WCHAR *v25; // r8
  __int64 v26; // rax
  int v27; // r9d
  const WCHAR *v28; // r8
  __int64 v29; // rax
  int v30; // r9d
  const WCHAR *v31; // r8
  __int64 v32; // rax
  int v33; // r9d
  const WCHAR *v34; // r8
  __int64 v35; // rax
  int v36; // r9d
  const WCHAR *v37; // r8
  __int64 v38; // rax
  int v39; // r9d
  const WCHAR *v40; // r8
  __int64 v41; // rax
  int v42; // r9d
  const WCHAR *v43; // r8
  __int64 v44; // rax
  int v45; // r9d
  const WCHAR *v46; // r8
  __int64 v47; // rax
  int v48; // r9d
  const WCHAR *v49; // r8
  __int64 v50; // rax
  _BYTE *v51; // rdx
  int v52; // ecx
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v55; // [rsp+50h] [rbp-B0h]
  __int64 v56; // [rsp+58h] [rbp-A8h]
  __int64 v57; // [rsp+60h] [rbp-A0h]
  __int64 v58; // [rsp+68h] [rbp-98h]
  _BYTE *v59; // [rsp+70h] [rbp-90h]
  int v60; // [rsp+78h] [rbp-88h]
  int v61; // [rsp+7Ch] [rbp-84h]
  __int64 v62; // [rsp+80h] [rbp-80h]
  __int64 v63; // [rsp+88h] [rbp-78h]
  __int64 v64; // [rsp+90h] [rbp-70h]
  __int64 v65; // [rsp+98h] [rbp-68h]
  const WCHAR *v66; // [rsp+A0h] [rbp-60h]
  int v67; // [rsp+A8h] [rbp-58h]
  int v68; // [rsp+ACh] [rbp-54h]
  const WCHAR *v69; // [rsp+B0h] [rbp-50h]
  int v70; // [rsp+B8h] [rbp-48h]
  int v71; // [rsp+BCh] [rbp-44h]
  const WCHAR *v72; // [rsp+C0h] [rbp-40h]
  int v73; // [rsp+C8h] [rbp-38h]
  int v74; // [rsp+CCh] [rbp-34h]
  const WCHAR *v75; // [rsp+D0h] [rbp-30h]
  int v76; // [rsp+D8h] [rbp-28h]
  int v77; // [rsp+DCh] [rbp-24h]
  const WCHAR *v78; // [rsp+E0h] [rbp-20h]
  int v79; // [rsp+E8h] [rbp-18h]
  int v80; // [rsp+ECh] [rbp-14h]
  const WCHAR *v81; // [rsp+F0h] [rbp-10h]
  int v82; // [rsp+F8h] [rbp-8h]
  int v83; // [rsp+FCh] [rbp-4h]
  const WCHAR *v84; // [rsp+100h] [rbp+0h]
  int v85; // [rsp+108h] [rbp+8h]
  int v86; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v87; // [rsp+110h] [rbp+10h]
  int v88; // [rsp+118h] [rbp+18h]
  int v89; // [rsp+11Ch] [rbp+1Ch]
  const WCHAR *v90; // [rsp+120h] [rbp+20h]
  int v91; // [rsp+128h] [rbp+28h]
  int v92; // [rsp+12Ch] [rbp+2Ch]
  __int64 v93; // [rsp+130h] [rbp+30h]
  __int64 v94; // [rsp+138h] [rbp+38h]
  __int64 v95; // [rsp+140h] [rbp+40h]
  __int64 v96; // [rsp+148h] [rbp+48h]
  __int64 v97; // [rsp+150h] [rbp+50h]
  __int64 v98; // [rsp+158h] [rbp+58h]

  v97 = a21;
  v95 = a20;
  v22 = -1LL;
  v93 = a19;
  v24 = 2;
  v98 = 8LL;
  v96 = 4LL;
  v94 = 4LL;
  v25 = *a18;
  if ( *a18 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v25[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v25 = &word_1C02856D8;
    v27 = 2;
  }
  v90 = v25;
  v91 = v27;
  v92 = 0;
  v28 = *a17;
  if ( *a17 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = 2 * v29 + 2;
  }
  else
  {
    v28 = &word_1C02856D8;
    v30 = 2;
  }
  v87 = v28;
  v88 = v30;
  v89 = 0;
  v31 = *a16;
  if ( *a16 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( v31[v32] );
    v33 = 2 * v32 + 2;
  }
  else
  {
    v31 = &word_1C02856D8;
    v33 = 2;
  }
  v84 = v31;
  v85 = v33;
  v86 = 0;
  v34 = *a15;
  if ( *a15 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( v34[v35] );
    v36 = 2 * v35 + 2;
  }
  else
  {
    v34 = &word_1C02856D8;
    v36 = 2;
  }
  v81 = v34;
  v82 = v36;
  v83 = 0;
  v37 = *a14;
  if ( *a14 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( v37[v38] );
    v39 = 2 * v38 + 2;
  }
  else
  {
    v37 = &word_1C02856D8;
    v39 = 2;
  }
  v78 = v37;
  v79 = v39;
  v80 = 0;
  v40 = *a13;
  if ( *a13 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( v40[v41] );
    v42 = 2 * v41 + 2;
  }
  else
  {
    v40 = &word_1C02856D8;
    v42 = 2;
  }
  v75 = v40;
  v76 = v42;
  v77 = 0;
  v43 = *a12;
  if ( *a12 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( v43[v44] );
    v45 = 2 * v44 + 2;
  }
  else
  {
    v43 = &word_1C02856D8;
    v45 = 2;
  }
  v72 = v43;
  v73 = v45;
  v74 = 0;
  v46 = *a11;
  if ( *a11 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( v46[v47] );
    v48 = 2 * v47 + 2;
  }
  else
  {
    v46 = &word_1C02856D8;
    v48 = 2;
  }
  v69 = v46;
  v70 = v48;
  v71 = 0;
  v49 = *a10;
  if ( *a10 )
  {
    v50 = -1LL;
    do
      ++v50;
    while ( v49[v50] );
    v24 = 2 * v50 + 2;
  }
  else
  {
    v49 = &word_1C02856D8;
  }
  v64 = a9;
  v62 = a8;
  v67 = v24;
  v66 = v49;
  v68 = 0;
  v51 = *a7;
  v65 = 4LL;
  v63 = 4LL;
  if ( v51 )
  {
    do
      ++v22;
    while ( v51[v22] );
    v52 = v22 + 1;
  }
  else
  {
    v51 = &unk_1C02A2108;
    v52 = 1;
  }
  v57 = a6;
  v55 = a5;
  v59 = v51;
  v60 = v52;
  v61 = 0;
  v58 = 4LL;
  v56 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x13u, &v54);
}
