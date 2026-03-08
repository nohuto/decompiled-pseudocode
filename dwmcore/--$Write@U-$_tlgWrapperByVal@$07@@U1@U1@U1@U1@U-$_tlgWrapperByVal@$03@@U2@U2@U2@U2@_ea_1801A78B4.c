/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333AEBU?$_tlgWrapperByVal@$03@@44444444444444444444@Z @ 0x1801A78B4
 * Callers:
 *     ??$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801A6210 (--$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInterac.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30)
{
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h]
  __int64 v33; // [rsp+58h] [rbp-A8h]
  __int64 v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h]
  __int64 v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-88h]
  __int64 v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]
  __int64 v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  __int64 v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  __int64 v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  __int64 v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  __int64 v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  __int64 v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  __int64 v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  __int64 v54; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  __int64 v56; // [rsp+110h] [rbp+10h]
  __int64 v57; // [rsp+118h] [rbp+18h]
  __int64 v58; // [rsp+120h] [rbp+20h]
  __int64 v59; // [rsp+128h] [rbp+28h]
  __int64 v60; // [rsp+130h] [rbp+30h]
  __int64 v61; // [rsp+138h] [rbp+38h]
  __int64 v62; // [rsp+140h] [rbp+40h]
  __int64 v63; // [rsp+148h] [rbp+48h]
  __int64 v64; // [rsp+150h] [rbp+50h]
  __int64 v65; // [rsp+158h] [rbp+58h]
  __int64 v66; // [rsp+160h] [rbp+60h]
  __int64 v67; // [rsp+168h] [rbp+68h]
  __int64 v68; // [rsp+170h] [rbp+70h]
  __int64 v69; // [rsp+178h] [rbp+78h]
  __int64 v70; // [rsp+180h] [rbp+80h]
  __int64 v71; // [rsp+188h] [rbp+88h]
  __int64 v72; // [rsp+190h] [rbp+90h]
  __int64 v73; // [rsp+198h] [rbp+98h]
  __int64 v74; // [rsp+1A0h] [rbp+A0h]
  __int64 v75; // [rsp+1A8h] [rbp+A8h]
  __int64 v76; // [rsp+1B0h] [rbp+B0h]
  __int64 v77; // [rsp+1B8h] [rbp+B8h]
  __int64 v78; // [rsp+1C0h] [rbp+C0h]
  __int64 v79; // [rsp+1C8h] [rbp+C8h]
  __int64 v80; // [rsp+1D0h] [rbp+D0h]
  __int64 v81; // [rsp+1D8h] [rbp+D8h]
  __int64 v82; // [rsp+1E0h] [rbp+E0h]
  __int64 v83; // [rsp+1E8h] [rbp+E8h]

  v82 = a30;
  v80 = a29;
  v78 = a28;
  v76 = a27;
  v74 = a26;
  v72 = a25;
  v70 = a24;
  v68 = a23;
  v66 = a22;
  v64 = a21;
  v62 = a20;
  v60 = a19;
  v58 = a18;
  v56 = a17;
  v54 = a16;
  v52 = a15;
  v50 = a14;
  v48 = a13;
  v46 = a12;
  v44 = a11;
  v42 = a10;
  v40 = a9;
  v38 = a8;
  v36 = a7;
  v34 = a6;
  v32 = a5;
  v83 = 4LL;
  v81 = 4LL;
  v79 = 4LL;
  v77 = 4LL;
  v75 = 4LL;
  v73 = 4LL;
  v71 = 4LL;
  v69 = 4LL;
  v67 = 4LL;
  v65 = 4LL;
  v63 = 4LL;
  v61 = 4LL;
  v59 = 4LL;
  v57 = 4LL;
  v55 = 4LL;
  v53 = 4LL;
  v51 = 4LL;
  v49 = 4LL;
  v47 = 4LL;
  v45 = 4LL;
  v43 = 4LL;
  v41 = 8LL;
  v39 = 8LL;
  v37 = 8LL;
  v35 = 8LL;
  v33 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803E07D0, a2, 0LL, 0LL, 0x1Cu, &v31);
}
