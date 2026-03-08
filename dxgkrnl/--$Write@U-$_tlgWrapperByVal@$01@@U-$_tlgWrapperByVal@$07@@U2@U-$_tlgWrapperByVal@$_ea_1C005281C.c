/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@43555555@Z @ 0x1C005281C
 * Callers:
 *     ?CreatePlaneLiveDumpAtPassive@@YAXIIPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MOCKDRIVERSTATE_PLANE@@@Z @ 0x1C031E220 (-CreatePlaneLiveDumpAtPassive@@YAXIIPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MO.c)
 *     ?MockDriverStateCreatePlaneLiveDump@@YAXPEAX@Z @ 0x1C031E8E0 (-MockDriverStateCreatePlaneLiveDump@@YAXPEAX@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0014BA0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
        __int64 a11,
        __int64 a12,
        void **a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21)
{
  _WORD *v22; // rcx
  __int64 v23; // rax
  int v24; // edx
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h]
  __int64 v29; // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  __int64 v32; // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  __int64 v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  __int64 v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  _WORD *v43; // [rsp+D0h] [rbp-30h]
  int v44; // [rsp+D8h] [rbp-28h]
  int v45; // [rsp+DCh] [rbp-24h]
  __int64 v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  __int64 v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  __int64 v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  __int64 v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]
  __int64 v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  __int64 v56; // [rsp+130h] [rbp+30h]
  __int64 v57; // [rsp+138h] [rbp+38h]
  __int64 v58; // [rsp+140h] [rbp+40h]
  __int64 v59; // [rsp+148h] [rbp+48h]
  __int64 v60; // [rsp+150h] [rbp+50h]
  __int64 v61; // [rsp+158h] [rbp+58h]

  v60 = a21;
  v58 = a20;
  v56 = a19;
  v54 = a18;
  v52 = a17;
  v50 = a16;
  v48 = a15;
  v46 = a14;
  v61 = 4LL;
  v59 = 4LL;
  v57 = 4LL;
  v22 = *a13;
  v55 = 4LL;
  v53 = 4LL;
  v51 = 4LL;
  v49 = 2LL;
  v47 = 8LL;
  if ( v22 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v22 = &unk_1C0093660;
    v24 = 2;
  }
  v41 = a12;
  v39 = a11;
  v37 = a10;
  v35 = a9;
  v33 = a8;
  v31 = a7;
  v29 = a6;
  v27 = a5;
  v43 = v22;
  v44 = v24;
  v45 = 0;
  v42 = 4LL;
  v40 = 4LL;
  v38 = 4LL;
  v36 = 4LL;
  v34 = 4LL;
  v32 = 8LL;
  v30 = 8LL;
  v28 = 2LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C013A918, a2, 0LL, 0LL, 0x13u, &v26);
}
