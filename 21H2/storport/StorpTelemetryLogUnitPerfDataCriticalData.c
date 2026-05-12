/*
 * XREFs of StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C0054B04
 * Callers:
 *     StorpTelemetrySendUnitPerfData @ 0x1C000BFB0 (StorpTelemetrySendUnitPerfData.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000E56C (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1C001AEF4 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001B09C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C001B144 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitPerfDataCriticalData(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // r10
  __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // r11
  _DWORD *v7; // r10
  __int64 v8; // r11
  unsigned __int64 *v9; // r11
  unsigned __int64 v10; // kr00_8
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15; // [rsp+31h] [rbp-CFh] BYREF
  char v16; // [rsp+32h] [rbp-CEh] BYREF
  char v17; // [rsp+33h] [rbp-CDh] BYREF
  __int16 v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+44h] [rbp-BCh] BYREF
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+80h] [rbp-80h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  __int64 v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  int *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  char *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  char *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  char *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  _BYTE v43[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v44[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v45[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v46[16]; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]
  char *v49; // [rsp+150h] [rbp+50h]
  __int64 v50; // [rsp+158h] [rbp+58h]
  __int64 *v51; // [rsp+160h] [rbp+60h]
  __int64 v52; // [rsp+168h] [rbp+68h]
  int *v53; // [rsp+170h] [rbp+70h]
  __int64 v54; // [rsp+178h] [rbp+78h]
  int *v55; // [rsp+180h] [rbp+80h]
  __int64 v56; // [rsp+188h] [rbp+88h]
  int *v57; // [rsp+190h] [rbp+90h]
  __int64 v58; // [rsp+198h] [rbp+98h]
  int *v59; // [rsp+1A0h] [rbp+A0h]
  __int64 v60; // [rsp+1A8h] [rbp+A8h]
  int *v61; // [rsp+1B0h] [rbp+B0h]
  __int64 v62; // [rsp+1B8h] [rbp+B8h]
  __int64 *v63; // [rsp+1C0h] [rbp+C0h]
  __int64 v64; // [rsp+1C8h] [rbp+C8h]
  __int64 *v65; // [rsp+1D0h] [rbp+D0h]
  __int64 v66; // [rsp+1D8h] [rbp+D8h]
  _BYTE v67[16]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v68[16]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v69[16]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v70[16]; // [rsp+210h] [rbp+110h] BYREF
  unsigned __int64 *v71; // [rsp+220h] [rbp+120h]
  __int64 v72; // [rsp+228h] [rbp+128h]
  __int16 *v73; // [rsp+230h] [rbp+130h]
  __int64 v74; // [rsp+238h] [rbp+138h]
  unsigned __int64 v75; // [rsp+240h] [rbp+140h]
  int v76; // [rsp+248h] [rbp+148h]
  int v77; // [rsp+24Ch] [rbp+14Ch]

  ++g_StorpTraceLoggingCriticalEventsLogged;
  if ( (unsigned int)dword_1C0069058 > 5 )
  {
    if ( tlgKeywordOn(a1, 0x800000000000LL) )
    {
      v2 = *(_QWORD *)(v1 + 24);
      v32 = 16LL;
      v34 = 16LL;
      v31 = v2 + 5192;
      v33 = v1 + 1976;
      v19 = *(_DWORD *)(v2 + 56);
      v35 = &v19;
      v14 = *(_BYTE *)(v1 + 96);
      v37 = &v14;
      v15 = *(_BYTE *)(v1 + 97);
      v39 = &v15;
      v16 = *(_BYTE *)(v1 + 98);
      v41 = &v16;
      v36 = 4LL;
      v38 = 1LL;
      v40 = 1LL;
      v42 = 1LL;
      tlgCreate1Sz_wchar_t((__int64)v43, *(_WORD **)(v2 + 4864));
      tlgCreate1Sz_char((__int64)v44, (_BYTE *)(v3 + 160));
      tlgCreate1Sz_char((__int64)v45, (_BYTE *)(v4 + 169));
      tlgCreate1Sz_char((__int64)v46, (_BYTE *)(v5 + 186));
      v47 = &v25;
      v17 = *(_BYTE *)(v6 + 8);
      v49 = &v17;
      v26 = *(_QWORD *)(v6 + 312);
      v51 = &v26;
      v20 = v7[197];
      v53 = &v20;
      v21 = v7[198];
      v55 = &v21;
      v22 = *(_DWORD *)(v6 + 328);
      v57 = &v22;
      v23 = v7[576];
      v59 = &v23;
      v24 = v7[578];
      v61 = &v24;
      v27 = *(_QWORD *)(v6 + 336);
      v25 = *(_QWORD *)&g_SystemUptime_s;
      v48 = 8LL;
      v50 = 1LL;
      v52 = 8LL;
      v54 = 4LL;
      v56 = 4LL;
      v58 = 4LL;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 8LL;
      v63 = &v27;
      v28 = *(_QWORD *)(v6 + 344);
      v65 = &v28;
      v66 = 8LL;
      tlgCreate1Sz_wchar_t((__int64)v67, L"Read, Write");
      tlgCreate1Sz_wchar_t((__int64)v68, *(_WORD **)(v8 + 16));
      tlgCreate1Sz_wchar_t((__int64)v69, L"Flush, Unmap");
      tlgCreate1Sz_wchar_t((__int64)v70, L"64ms, 256ms, 1024ms, 5120ms, 5120+ms");
      v72 = 8LL;
      v10 = *v9;
      v74 = 2LL;
      v71 = &v29;
      v29 = v10 / 0x2710;
      v77 = 0;
      v73 = &v18;
      v11 = v9[40];
      v18 = 3 * qword_1C0069640;
      v75 = v11;
      v76 = 8 * (unsigned __int16)(3 * qword_1C0069640);
      tlgWriteTransfer_EtwWriteTransfer(
        (3 * qword_1C0069640) & 0x1FFFFFFFFFFFFFFFLL,
        (unsigned __int8 *)dword_1C0060018,
        v12,
        v13,
        0x1Du,
        &v30);
    }
  }
}
