/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U2@U2@U2@U3@U3@U3@U3@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@55555444555545@Z @ 0x1C01A91B0
 * Callers:
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1C0021BEC (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        void **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
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
        __int64 a23)
{
  __int64 v25; // rcx
  _BYTE *v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  _BYTE *v29; // rdx
  int v30; // ecx
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *v33; // [rsp+50h] [rbp-B0h]
  int v34; // [rsp+58h] [rbp-A8h]
  int v35; // [rsp+5Ch] [rbp-A4h]
  _BYTE *v36; // [rsp+60h] [rbp-A0h]
  int v37; // [rsp+68h] [rbp-98h]
  int v38; // [rsp+6Ch] [rbp-94h]
  __int64 v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  __int64 v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+88h] [rbp-78h]
  __int64 v43; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  __int64 v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  __int64 v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  __int64 v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  __int64 v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  __int64 v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  __int64 v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  __int64 v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  __int64 v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  __int64 v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  __int64 v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]
  __int64 v65; // [rsp+140h] [rbp+40h]
  __int64 v66; // [rsp+148h] [rbp+48h]
  __int64 v67; // [rsp+150h] [rbp+50h]
  __int64 v68; // [rsp+158h] [rbp+58h]
  __int64 v69; // [rsp+160h] [rbp+60h]
  __int64 v70; // [rsp+168h] [rbp+68h]
  __int64 v71; // [rsp+170h] [rbp+70h]
  __int64 v72; // [rsp+178h] [rbp+78h]

  v71 = a23;
  v69 = a22;
  v25 = -1LL;
  v67 = a21;
  v65 = a20;
  v63 = a19;
  v61 = a18;
  v59 = a17;
  v57 = a16;
  v55 = a15;
  v53 = a14;
  v51 = a13;
  v49 = a12;
  v47 = a11;
  v45 = a10;
  v43 = a9;
  v41 = a8;
  v39 = a7;
  v72 = 4LL;
  v70 = 8LL;
  v68 = 4LL;
  v26 = *a6;
  v66 = 4LL;
  v64 = 4LL;
  v62 = 4LL;
  v60 = 8LL;
  v58 = 8LL;
  v56 = 8LL;
  v54 = 4LL;
  v52 = 4LL;
  v50 = 4LL;
  v48 = 4LL;
  v46 = 4LL;
  v44 = 4LL;
  v42 = 8LL;
  v40 = 8LL;
  if ( v26 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( v26[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v26 = &unk_1C03206E9;
    v28 = 1;
  }
  v37 = v28;
  v36 = v26;
  v38 = 0;
  v29 = *a5;
  if ( *a5 )
  {
    do
      ++v25;
    while ( v29[v25] );
    v30 = v25 + 1;
  }
  else
  {
    v29 = &unk_1C03206E9;
    v30 = 1;
  }
  v33 = v29;
  v34 = v30;
  v35 = 0;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x15u, &v32);
}
