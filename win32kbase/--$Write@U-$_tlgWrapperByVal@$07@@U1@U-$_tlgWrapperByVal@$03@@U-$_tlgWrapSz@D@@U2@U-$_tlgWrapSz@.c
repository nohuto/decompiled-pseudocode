/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U3@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapSz@G@@4444654444@Z @ 0x1C0229CFC
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C007C470 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void **a8,
        __int64 a9,
        const WCHAR **a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        const WCHAR **a15,
        void **a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20)
{
  __int64 v22; // rcx
  _BYTE *v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  int v26; // r8d
  const WCHAR *v27; // rdx
  __int64 v28; // rax
  int v29; // r9d
  const WCHAR *v30; // rdx
  __int64 v31; // rax
  _BYTE *v32; // rdx
  int v33; // ecx
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  _BYTE *v42; // [rsp+80h] [rbp-80h]
  int v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+8Ch] [rbp-74h]
  __int64 v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  const WCHAR *v47; // [rsp+A0h] [rbp-60h]
  int v48; // [rsp+A8h] [rbp-58h]
  int v49; // [rsp+ACh] [rbp-54h]
  __int64 v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  __int64 v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  __int64 v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  __int64 v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  const WCHAR *v58; // [rsp+F0h] [rbp-10h]
  int v59; // [rsp+F8h] [rbp-8h]
  int v60; // [rsp+FCh] [rbp-4h]
  _BYTE *v61; // [rsp+100h] [rbp+0h]
  int v62; // [rsp+108h] [rbp+8h]
  int v63; // [rsp+10Ch] [rbp+Ch]
  __int64 v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+118h] [rbp+18h]
  __int64 v66; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+128h] [rbp+28h]
  __int64 v68; // [rsp+130h] [rbp+30h]
  __int64 v69; // [rsp+138h] [rbp+38h]
  __int64 v70; // [rsp+140h] [rbp+40h]
  __int64 v71; // [rsp+148h] [rbp+48h]

  v70 = a20;
  v68 = a19;
  v22 = -1LL;
  v66 = a18;
  v64 = a17;
  v71 = 4LL;
  v69 = 4LL;
  v67 = 4LL;
  v23 = *a16;
  v65 = 4LL;
  if ( v23 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v23[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v23 = &unk_1C02A2108;
    v25 = 1;
  }
  v62 = v25;
  v26 = 2;
  v61 = v23;
  v63 = 0;
  v27 = *a15;
  if ( *a15 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( v27[v28] );
    v29 = 2 * v28 + 2;
  }
  else
  {
    v27 = &word_1C02856D8;
    v29 = 2;
  }
  v56 = a14;
  v54 = a13;
  v52 = a12;
  v50 = a11;
  v58 = v27;
  v59 = v29;
  v60 = 0;
  v30 = *a10;
  v57 = 4LL;
  v55 = 4LL;
  v53 = 4LL;
  v51 = 4LL;
  if ( v30 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( v30[v31] );
    v26 = 2 * v31 + 2;
  }
  else
  {
    v30 = &word_1C02856D8;
  }
  v45 = a9;
  v47 = v30;
  v48 = v26;
  v49 = 0;
  v32 = *a8;
  v46 = 4LL;
  if ( v32 )
  {
    do
      ++v22;
    while ( v32[v22] );
    v33 = v22 + 1;
  }
  else
  {
    v32 = &unk_1C02A2108;
    v33 = 1;
  }
  v40 = a7;
  v38 = a6;
  v36 = a5;
  v42 = v32;
  v43 = v33;
  v44 = 0;
  v41 = 4LL;
  v39 = 8LL;
  v37 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x12u, &v35);
}
