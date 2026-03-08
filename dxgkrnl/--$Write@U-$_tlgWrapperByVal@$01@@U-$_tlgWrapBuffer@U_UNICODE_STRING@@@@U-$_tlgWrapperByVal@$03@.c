/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U4@U1@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@555AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@6355555555@Z @ 0x1C003D490
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02B5558 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0014BA0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        void **a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22)
{
  _WORD *v23; // rcx
  __int64 v24; // rax
  int v25; // edx
  unsigned __int16 *v26; // rax
  int v27; // ecx
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  _DWORD *v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h]
  __int64 v34; // [rsp+70h] [rbp-90h]
  _DWORD v35[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+88h] [rbp-78h]
  __int64 v38; // [rsp+90h] [rbp-70h]
  __int64 v39; // [rsp+98h] [rbp-68h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  __int64 v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  __int64 v44; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+C8h] [rbp-38h]
  _WORD *v46; // [rsp+D0h] [rbp-30h]
  int v47; // [rsp+D8h] [rbp-28h]
  int v48; // [rsp+DCh] [rbp-24h]
  __int64 v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  __int64 v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  __int64 v53; // [rsp+100h] [rbp+0h]
  __int64 v54; // [rsp+108h] [rbp+8h]
  __int64 v55; // [rsp+110h] [rbp+10h]
  __int64 v56; // [rsp+118h] [rbp+18h]
  __int64 v57; // [rsp+120h] [rbp+20h]
  __int64 v58; // [rsp+128h] [rbp+28h]
  __int64 v59; // [rsp+130h] [rbp+30h]
  __int64 v60; // [rsp+138h] [rbp+38h]
  __int64 v61; // [rsp+140h] [rbp+40h]
  __int64 v62; // [rsp+148h] [rbp+48h]
  __int64 v63; // [rsp+150h] [rbp+50h]
  __int64 v64; // [rsp+158h] [rbp+58h]
  __int64 v65; // [rsp+160h] [rbp+60h]
  __int64 v66; // [rsp+168h] [rbp+68h]
  __int64 v67; // [rsp+170h] [rbp+70h]
  __int64 v68; // [rsp+178h] [rbp+78h]

  v67 = a22;
  v65 = a21;
  v63 = a20;
  v61 = a19;
  v59 = a18;
  v57 = a17;
  v55 = a16;
  v53 = a15;
  v51 = a14;
  v49 = a13;
  v68 = 4LL;
  v66 = 4LL;
  v64 = 4LL;
  v23 = *a12;
  v62 = 4LL;
  v60 = 4LL;
  v58 = 4LL;
  v56 = 4LL;
  v54 = 4LL;
  v52 = 2LL;
  v50 = 8LL;
  if ( v23 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v23[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v23 = &unk_1C0093660;
    v25 = 2;
  }
  v44 = a11;
  v42 = a10;
  v40 = a9;
  v38 = a8;
  v36 = a7;
  v32 = v35;
  v46 = v23;
  v47 = v25;
  v48 = 0;
  v26 = *a6;
  v45 = 8LL;
  v43 = 4LL;
  v41 = 4LL;
  v39 = 4LL;
  v37 = 4LL;
  v33 = 2LL;
  v27 = *v26;
  v34 = *((_QWORD *)v26 + 1);
  v30 = a5;
  v35[0] = v27;
  v35[1] = 0;
  v31 = 2LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C013A918, a2, 0LL, 0LL, 0x15u, &v29);
}
