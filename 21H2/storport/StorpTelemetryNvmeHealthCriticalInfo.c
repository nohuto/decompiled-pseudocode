/*
 * XREFs of StorpTelemetryNvmeHealthCriticalInfo @ 0x1C00570A8
 * Callers:
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C00576E0 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000E56C (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1C001AEF4 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001B09C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C001B144 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryNvmeHealthCriticalInfo(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int16 a6,
        __int64 a7,
        unsigned __int16 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r10
  __int64 v19; // r10
  __int64 v20; // r10
  int v21; // r11d
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // [rsp+30h] [rbp-D0h] BYREF
  char v25; // [rsp+31h] [rbp-CFh] BYREF
  char v26; // [rsp+32h] [rbp-CEh] BYREF
  char v27; // [rsp+33h] [rbp-CDh] BYREF
  char v28; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v29; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  __int64 v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h]
  int *v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  char *v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  char *v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  char *v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+F8h] [rbp-8h]
  _BYTE v51[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v52[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v53[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v54[16]; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v55; // [rsp+140h] [rbp+40h]
  __int64 v56; // [rsp+148h] [rbp+48h]
  char *v57; // [rsp+150h] [rbp+50h]
  __int64 v58; // [rsp+158h] [rbp+58h]
  _DWORD *v59; // [rsp+160h] [rbp+60h]
  __int64 v60; // [rsp+168h] [rbp+68h]
  __int64 v61; // [rsp+170h] [rbp+70h]
  _DWORD v62[2]; // [rsp+178h] [rbp+78h] BYREF
  char *v63; // [rsp+180h] [rbp+80h]
  __int64 v64; // [rsp+188h] [rbp+88h]
  __int16 *v65; // [rsp+190h] [rbp+90h]
  __int64 v66; // [rsp+198h] [rbp+98h]
  _DWORD *v67; // [rsp+1A0h] [rbp+A0h]
  __int64 v68; // [rsp+1A8h] [rbp+A8h]
  __int64 v69; // [rsp+1B0h] [rbp+B0h]
  _DWORD v70[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 *v71; // [rsp+1C0h] [rbp+C0h]
  __int64 v72; // [rsp+1C8h] [rbp+C8h]
  __int64 *v73; // [rsp+1D0h] [rbp+D0h]
  __int64 v74; // [rsp+1D8h] [rbp+D8h]
  __int64 *v75; // [rsp+1E0h] [rbp+E0h]
  __int64 v76; // [rsp+1E8h] [rbp+E8h]
  __int64 *v77; // [rsp+1F0h] [rbp+F0h]
  __int64 v78; // [rsp+1F8h] [rbp+F8h]
  __int64 *v79; // [rsp+200h] [rbp+100h]
  __int64 v80; // [rsp+208h] [rbp+108h]
  __int64 *v81; // [rsp+210h] [rbp+110h]
  __int64 v82; // [rsp+218h] [rbp+118h]

  if ( (unsigned int)dword_1C0069058 > 5 )
  {
    if ( tlgKeywordOn(a1, 0x800000000000LL) )
    {
      v17 = *(_QWORD *)(v16 + 24);
      v40 = 16LL;
      v42 = 16LL;
      v39 = v17 + 5192;
      v41 = v16 + 1976;
      v30 = *(_DWORD *)(v17 + 56);
      v43 = &v30;
      v24 = *(_BYTE *)(v16 + 96);
      v45 = &v24;
      v25 = *(_BYTE *)(v16 + 97);
      v47 = &v25;
      v26 = *(_BYTE *)(v16 + 98);
      v49 = &v26;
      v44 = 4LL;
      v46 = 1LL;
      v48 = 1LL;
      v50 = 1LL;
      tlgCreate1Sz_wchar_t((__int64)v51, *(_WORD **)(v17 + 4864));
      tlgCreate1Sz_char((__int64)v52, (_BYTE *)(v18 + 160));
      tlgCreate1Sz_char((__int64)v53, (_BYTE *)(v19 + 169));
      tlgCreate1Sz_wchar_t((__int64)v54, a2);
      v55 = &v31;
      v27 = *(_BYTE *)(v20 + 1996);
      v57 = &v27;
      v59 = v62;
      v28 = a5;
      v63 = &v28;
      v29 = a6;
      v65 = &v29;
      v67 = v70;
      v69 = a7;
      v70[0] = a8;
      v32 = a9;
      v71 = &v32;
      v33 = a10;
      v31 = *(_QWORD *)&g_SystemUptime_s;
      v56 = 8LL;
      v58 = 1LL;
      v60 = 2LL;
      v61 = a3;
      v62[0] = v21;
      v62[1] = 0;
      v64 = 1LL;
      v66 = 2LL;
      v68 = 2LL;
      v70[1] = 0;
      v72 = 8LL;
      v73 = &v33;
      v34 = a11;
      v75 = &v34;
      v35 = a12;
      v77 = &v35;
      v36 = a13;
      v79 = &v36;
      v37 = a14;
      v81 = &v37;
      v74 = 8LL;
      v76 = 8LL;
      v78 = 8LL;
      v80 = 8LL;
      v82 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        *(__int64 *)&g_SystemUptime_s,
        (unsigned __int8 *)dword_1C0060742,
        v22,
        v23,
        0x1Au,
        &v38);
    }
  }
}
