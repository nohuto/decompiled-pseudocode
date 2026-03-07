NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9,
        __int64 *a10,
        __int64 a11,
        __int64 a12,
        __int64 *a13,
        __int64 a14,
        __int64 a15,
        __int64 *a16,
        __int64 a17,
        __int64 a18,
        __int64 *a19,
        __int64 a20,
        __int64 a21,
        __int64 *a22,
        __int64 a23,
        __int64 a24,
        __int64 *a25,
        __int64 a26,
        __int64 a27,
        __int64 *a28,
        __int64 a29,
        __int64 a30,
        __int64 *a31,
        __int64 a32,
        __int64 a33,
        __int64 *a34,
        __int64 a35,
        __int64 a36)
{
  __int64 v36; // rcx
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-A8h]
  __int64 v41; // [rsp+60h] [rbp-A0h]
  __int64 v42; // [rsp+68h] [rbp-98h]
  __int64 v43; // [rsp+70h] [rbp-90h]
  __int64 v44; // [rsp+78h] [rbp-88h]
  __int64 v45; // [rsp+80h] [rbp-80h]
  __int64 v46; // [rsp+88h] [rbp-78h]
  __int64 v47; // [rsp+90h] [rbp-70h]
  __int64 v48; // [rsp+98h] [rbp-68h]
  _DWORD *v49; // [rsp+A0h] [rbp-60h]
  __int64 v50; // [rsp+A8h] [rbp-58h]
  __int64 v51; // [rsp+B0h] [rbp-50h]
  _DWORD v52[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  __int64 v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  _DWORD *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  __int64 v59; // [rsp+F0h] [rbp-10h]
  _DWORD v60[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  __int64 v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]
  _DWORD *v65; // [rsp+120h] [rbp+20h]
  __int64 v66; // [rsp+128h] [rbp+28h]
  __int64 v67; // [rsp+130h] [rbp+30h]
  _DWORD v68[2]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v69; // [rsp+140h] [rbp+40h]
  __int64 v70; // [rsp+148h] [rbp+48h]
  __int64 v71; // [rsp+150h] [rbp+50h]
  __int64 v72; // [rsp+158h] [rbp+58h]
  _DWORD *v73; // [rsp+160h] [rbp+60h]
  __int64 v74; // [rsp+168h] [rbp+68h]
  __int64 v75; // [rsp+170h] [rbp+70h]
  _DWORD v76[2]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v77; // [rsp+180h] [rbp+80h]
  __int64 v78; // [rsp+188h] [rbp+88h]
  __int64 v79; // [rsp+190h] [rbp+90h]
  __int64 v80; // [rsp+198h] [rbp+98h]
  _DWORD *v81; // [rsp+1A0h] [rbp+A0h]
  __int64 v82; // [rsp+1A8h] [rbp+A8h]
  __int64 v83; // [rsp+1B0h] [rbp+B0h]
  _DWORD v84[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v85; // [rsp+1C0h] [rbp+C0h]
  __int64 v86; // [rsp+1C8h] [rbp+C8h]
  __int64 v87; // [rsp+1D0h] [rbp+D0h]
  __int64 v88; // [rsp+1D8h] [rbp+D8h]
  _DWORD *v89; // [rsp+1E0h] [rbp+E0h]
  __int64 v90; // [rsp+1E8h] [rbp+E8h]
  __int64 v91; // [rsp+1F0h] [rbp+F0h]
  _DWORD v92[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v93; // [rsp+200h] [rbp+100h]
  __int64 v94; // [rsp+208h] [rbp+108h]
  __int64 v95; // [rsp+210h] [rbp+110h]
  __int64 v96; // [rsp+218h] [rbp+118h]
  _DWORD *v97; // [rsp+220h] [rbp+120h]
  __int64 v98; // [rsp+228h] [rbp+128h]
  __int64 v99; // [rsp+230h] [rbp+130h]
  _DWORD v100[2]; // [rsp+238h] [rbp+138h] BYREF
  __int64 v101; // [rsp+240h] [rbp+140h]
  __int64 v102; // [rsp+248h] [rbp+148h]
  __int64 v103; // [rsp+250h] [rbp+150h]
  __int64 v104; // [rsp+258h] [rbp+158h]
  _DWORD *v105; // [rsp+260h] [rbp+160h]
  __int64 v106; // [rsp+268h] [rbp+168h]
  __int64 v107; // [rsp+270h] [rbp+170h]
  _DWORD v108[2]; // [rsp+278h] [rbp+178h] BYREF
  __int64 v109; // [rsp+280h] [rbp+180h]
  __int64 v110; // [rsp+288h] [rbp+188h]
  __int64 v111; // [rsp+290h] [rbp+190h]
  __int64 v112; // [rsp+298h] [rbp+198h]
  _DWORD *v113; // [rsp+2A0h] [rbp+1A0h]
  __int64 v114; // [rsp+2A8h] [rbp+1A8h]
  __int64 v115; // [rsp+2B0h] [rbp+1B0h]
  _DWORD v116[2]; // [rsp+2B8h] [rbp+1B8h] BYREF
  __int64 v117; // [rsp+2C0h] [rbp+1C0h]
  __int64 v118; // [rsp+2C8h] [rbp+1C8h]
  __int64 v119; // [rsp+2D0h] [rbp+1D0h]
  __int64 v120; // [rsp+2D8h] [rbp+1D8h]

  v119 = a36;
  v117 = a35;
  v113 = v116;
  v115 = *a34;
  v116[0] = *((unsigned __int16 *)a34 + 4);
  v111 = a33;
  v109 = a32;
  v105 = v108;
  v107 = *a31;
  v108[0] = *((unsigned __int16 *)a31 + 4);
  v103 = a30;
  v101 = a29;
  v97 = v100;
  v99 = *a28;
  v100[0] = *((unsigned __int16 *)a28 + 4);
  v95 = a27;
  v93 = a26;
  v89 = v92;
  v91 = *a25;
  v92[0] = *((unsigned __int16 *)a25 + 4);
  v87 = a24;
  v85 = a23;
  v81 = v84;
  v83 = *a22;
  v84[0] = *((unsigned __int16 *)a22 + 4);
  v79 = a21;
  v77 = a20;
  v120 = 1LL;
  v118 = 4LL;
  v114 = 2LL;
  v116[1] = 0;
  v112 = 1LL;
  v110 = 8LL;
  v106 = 2LL;
  v108[1] = 0;
  v104 = 1LL;
  v102 = 8LL;
  v98 = 2LL;
  v100[1] = 0;
  v96 = 1LL;
  v94 = 8LL;
  v90 = 2LL;
  v92[1] = 0;
  v88 = 1LL;
  v86 = 8LL;
  v82 = 2LL;
  v84[1] = 0;
  v80 = 1LL;
  v73 = v76;
  v78 = 8LL;
  v74 = 2LL;
  v75 = *a19;
  v76[0] = *((unsigned __int16 *)a19 + 4);
  v71 = a18;
  v69 = a17;
  v65 = v68;
  v67 = *a16;
  v68[0] = *((unsigned __int16 *)a16 + 4);
  v63 = a15;
  v61 = a14;
  v57 = v60;
  v59 = *a13;
  v60[0] = *((unsigned __int16 *)a13 + 4);
  v55 = a12;
  v53 = a11;
  v49 = v52;
  v51 = *a10;
  v52[0] = *((unsigned __int16 *)a10 + 4);
  v76[1] = 0;
  v72 = 1LL;
  v70 = 8LL;
  v36 = *a9;
  v45 = a8;
  v43 = a7;
  v41 = a6;
  v39 = a5;
  v47 = v36;
  v66 = 2LL;
  v68[1] = 0;
  v64 = 1LL;
  v62 = 8LL;
  v58 = 2LL;
  v60[1] = 0;
  v56 = 1LL;
  v54 = 8LL;
  v50 = 2LL;
  v52[1] = 0;
  v48 = 16LL;
  v46 = 1LL;
  v44 = 4LL;
  v42 = 4LL;
  v40 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C9748, a2, 0LL, 0LL, 0x2Bu, &v38);
}
