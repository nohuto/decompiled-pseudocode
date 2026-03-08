/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@U6@U6@U6@U6@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@33333333AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@8888AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1C0014918
 * Callers:
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x1C0188A74 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0014BA0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
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
        const CHAR **a17,
        void **a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 *a25,
        unsigned __int16 **a26)
{
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _WORD *v30; // rdx
  __int64 v31; // rax
  int v32; // r8d
  const CHAR *v33; // rdx
  int v34; // ecx
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h]
  __int64 v38; // [rsp+58h] [rbp-A8h]
  __int64 v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+68h] [rbp-98h]
  __int64 v41; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h]
  __int64 v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  __int64 v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  __int64 v51; // [rsp+C0h] [rbp-40h]
  __int64 v52; // [rsp+C8h] [rbp-38h]
  __int64 v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  __int64 v55; // [rsp+E0h] [rbp-20h]
  __int64 v56; // [rsp+E8h] [rbp-18h]
  __int64 v57; // [rsp+F0h] [rbp-10h]
  __int64 v58; // [rsp+F8h] [rbp-8h]
  __int64 v59; // [rsp+100h] [rbp+0h]
  __int64 v60; // [rsp+108h] [rbp+8h]
  const CHAR *v61; // [rsp+110h] [rbp+10h]
  int v62; // [rsp+118h] [rbp+18h]
  int v63; // [rsp+11Ch] [rbp+1Ch]
  _WORD *v64; // [rsp+120h] [rbp+20h]
  int v65; // [rsp+128h] [rbp+28h]
  int v66; // [rsp+12Ch] [rbp+2Ch]
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
  __int64 v79; // [rsp+190h] [rbp+90h]
  __int64 v80; // [rsp+198h] [rbp+98h]
  _DWORD *v81; // [rsp+1A0h] [rbp+A0h]
  __int64 v82; // [rsp+1A8h] [rbp+A8h]
  __int64 v83; // [rsp+1B0h] [rbp+B0h]
  _DWORD v84[2]; // [rsp+1B8h] [rbp+B8h] BYREF

  v82 = 2LL;
  v81 = v84;
  v27 = **a26;
  v83 = *((_QWORD *)*a26 + 1);
  v84[0] = v27;
  v84[1] = 0;
  v80 = 16LL;
  v28 = *a25;
  v77 = a24;
  v75 = a23;
  v73 = a22;
  v71 = a21;
  v69 = a20;
  v67 = a19;
  v79 = v28;
  v29 = -1LL;
  v78 = 1LL;
  v76 = 1LL;
  v30 = *a18;
  v74 = 1LL;
  v72 = 1LL;
  v70 = 1LL;
  v68 = 8LL;
  if ( v30 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( v30[v31] );
    v32 = 2 * v31 + 2;
  }
  else
  {
    v30 = &unk_1C0093660;
    v32 = 2;
  }
  v64 = v30;
  v65 = v32;
  v66 = 0;
  v33 = *a17;
  if ( *a17 )
  {
    do
      ++v29;
    while ( v33[v29] );
    v34 = v29 + 1;
  }
  else
  {
    v33 = File;
    v34 = 1;
  }
  v59 = a16;
  v57 = a15;
  v55 = a14;
  v53 = a13;
  v51 = a12;
  v49 = a11;
  v47 = a10;
  v45 = a9;
  v43 = a8;
  v41 = a7;
  v39 = a6;
  v37 = a5;
  v61 = v33;
  v62 = v34;
  v63 = 0;
  v60 = 8LL;
  v58 = 4LL;
  v56 = 8LL;
  v54 = 8LL;
  v52 = 8LL;
  v50 = 8LL;
  v48 = 8LL;
  v46 = 8LL;
  v44 = 8LL;
  v42 = 8LL;
  v40 = 2LL;
  v38 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C013A918, a2, 0, 0, 0x19u, &v36);
}
