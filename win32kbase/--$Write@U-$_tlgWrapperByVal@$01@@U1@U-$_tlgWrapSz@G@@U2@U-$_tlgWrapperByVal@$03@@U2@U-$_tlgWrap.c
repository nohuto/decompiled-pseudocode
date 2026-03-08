/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U6@U6@U5@U3@U3@U3@U5@U5@U3@U3@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@88755577557@Z @ 0x1C00879D8
 * Callers:
 *     ?LogNonPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH@Z @ 0x1C0087818 (-LogNonPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        int a2,
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
        __int64 a24)
{
  __int64 v25; // rcx
  const WCHAR *v26; // rdx
  __int64 v27; // rax
  int v28; // r8d
  const WCHAR *v29; // rdx
  __int64 v30; // rax
  int v31; // r8d
  const WCHAR *v32; // rdx
  int v33; // eax
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  const WCHAR *v40; // [rsp+70h] [rbp-90h]
  int v41; // [rsp+78h] [rbp-88h]
  int v42; // [rsp+7Ch] [rbp-84h]
  const WCHAR *v43; // [rsp+80h] [rbp-80h]
  int v44; // [rsp+88h] [rbp-78h]
  int v45; // [rsp+8Ch] [rbp-74h]
  __int64 v46; // [rsp+90h] [rbp-70h]
  __int64 v47; // [rsp+98h] [rbp-68h]
  const WCHAR *v48; // [rsp+A0h] [rbp-60h]
  int v49; // [rsp+A8h] [rbp-58h]
  int v50; // [rsp+ACh] [rbp-54h]
  __int64 v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  __int64 v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  __int64 v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  __int64 v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  __int64 v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  __int64 v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  __int64 v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]
  __int64 v65; // [rsp+120h] [rbp+20h]
  __int64 v66; // [rsp+128h] [rbp+28h]
  __int64 v67; // [rsp+130h] [rbp+30h]
  __int64 v68; // [rsp+138h] [rbp+38h]
  __int64 v69; // [rsp+140h] [rbp+40h]
  __int64 v70; // [rsp+148h] [rbp+48h]
  __int64 v71; // [rsp+150h] [rbp+50h]
  __int64 v72; // [rsp+158h] [rbp+58h]
  __int64 v73; // [rsp+160h] [rbp+60h]
  __int64 v74; // [rsp+168h] [rbp+68h]
  __int64 v75; // [rsp+170h] [rbp+70h]
  __int64 v76; // [rsp+178h] [rbp+78h]
  __int64 v77; // [rsp+180h] [rbp+80h]
  __int64 v78; // [rsp+188h] [rbp+88h]

  v77 = a24;
  v75 = a23;
  v73 = a22;
  v71 = a21;
  v69 = a20;
  v67 = a19;
  v65 = a18;
  v63 = a17;
  v61 = a16;
  v59 = a15;
  v57 = a14;
  v55 = a13;
  v53 = a12;
  v78 = 8LL;
  v76 = 4LL;
  v74 = 4LL;
  v51 = *a11;
  v25 = -1LL;
  v72 = 8LL;
  v70 = 8LL;
  v26 = *a10;
  v68 = 4LL;
  v66 = 4LL;
  v64 = 4LL;
  v62 = 8LL;
  v60 = 1LL;
  v58 = 1LL;
  v56 = 1LL;
  v54 = 8LL;
  v52 = 16LL;
  if ( v26 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( v26[v27] );
    v28 = 2 * v27 + 2;
  }
  else
  {
    v26 = &word_1C02856D8;
    v28 = 2;
  }
  v46 = a9;
  v48 = v26;
  v49 = v28;
  v50 = 0;
  v29 = *a8;
  v47 = 4LL;
  if ( v29 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( v29[v30] );
    v31 = 2 * v30 + 2;
  }
  else
  {
    v29 = &word_1C02856D8;
    v31 = 2;
  }
  v43 = v29;
  v44 = v31;
  v45 = 0;
  v32 = *a7;
  if ( *a7 )
  {
    do
      ++v25;
    while ( v32[v25] );
    v33 = 2 * v25 + 2;
  }
  else
  {
    v32 = &word_1C02856D8;
    v33 = 2;
  }
  v41 = v33;
  v38 = a6;
  v36 = a5;
  v40 = v32;
  v42 = 0;
  v39 = 2LL;
  v37 = 2LL;
  return tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C02C92F8, a2, 0, 0, 0x16u, &v35);
}
