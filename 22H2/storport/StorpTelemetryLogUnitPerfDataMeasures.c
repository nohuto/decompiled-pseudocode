/*
 * XREFs of StorpTelemetryLogUnitPerfDataMeasures @ 0x1C000DC4C
 * Callers:
 *     StorpTelemetrySendUnitPerfData @ 0x1C000BF40 (StorpTelemetrySendUnitPerfData.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000E4FC (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1C001AE84 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001B02C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C001B0D4 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitPerfDataMeasures(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // r10
  __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // r11
  _DWORD *v7; // r10
  __int64 v8; // r11
  __int64 v9; // rdx
  unsigned __int64 *v10; // r11
  unsigned __int64 v11; // kr00_8
  unsigned __int64 v12; // rax
  int v13; // r8d
  int v14; // r9d
  char v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16; // [rsp+31h] [rbp-CFh] BYREF
  char v17; // [rsp+32h] [rbp-CEh] BYREF
  char v18; // [rsp+33h] [rbp-CDh] BYREF
  __int16 v19; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+4Ch] [rbp-B4h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+80h] [rbp-80h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  int *v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  char *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  char *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  char *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  _BYTE v45[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v46[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v47[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v48[16]; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v49; // [rsp+140h] [rbp+40h]
  __int64 v50; // [rsp+148h] [rbp+48h]
  char *v51; // [rsp+150h] [rbp+50h]
  __int64 v52; // [rsp+158h] [rbp+58h]
  __int64 *v53; // [rsp+160h] [rbp+60h]
  __int64 v54; // [rsp+168h] [rbp+68h]
  int *v55; // [rsp+170h] [rbp+70h]
  __int64 v56; // [rsp+178h] [rbp+78h]
  int *v57; // [rsp+180h] [rbp+80h]
  __int64 v58; // [rsp+188h] [rbp+88h]
  int *v59; // [rsp+190h] [rbp+90h]
  __int64 v60; // [rsp+198h] [rbp+98h]
  int *v61; // [rsp+1A0h] [rbp+A0h]
  __int64 v62; // [rsp+1A8h] [rbp+A8h]
  int *v63; // [rsp+1B0h] [rbp+B0h]
  __int64 v64; // [rsp+1B8h] [rbp+B8h]
  __int64 *v65; // [rsp+1C0h] [rbp+C0h]
  __int64 v66; // [rsp+1C8h] [rbp+C8h]
  __int64 *v67; // [rsp+1D0h] [rbp+D0h]
  __int64 v68; // [rsp+1D8h] [rbp+D8h]
  _BYTE v69[16]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int16 *v70; // [rsp+1F0h] [rbp+F0h]
  __int64 v71; // [rsp+1F8h] [rbp+F8h]
  __int64 v72; // [rsp+200h] [rbp+100h]
  int v73; // [rsp+208h] [rbp+108h]
  int v74; // [rsp+20Ch] [rbp+10Ch]
  _BYTE v75[16]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v76[16]; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v77[16]; // [rsp+230h] [rbp+130h] BYREF
  unsigned __int64 *v78; // [rsp+240h] [rbp+140h]
  __int64 v79; // [rsp+248h] [rbp+148h]
  __int16 *v80; // [rsp+250h] [rbp+150h]
  __int64 v81; // [rsp+258h] [rbp+158h]
  unsigned __int64 v82; // [rsp+260h] [rbp+160h]
  int v83; // [rsp+268h] [rbp+168h]
  int v84; // [rsp+26Ch] [rbp+16Ch]

  if ( (unsigned int)dword_1C0069058 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(a1, 0x400000000000LL) )
    {
      v2 = *(_QWORD *)(v1 + 24);
      v34 = 16LL;
      v36 = 16LL;
      v33 = v2 + 5192;
      v35 = v1 + 1976;
      v21 = *(_DWORD *)(v2 + 56);
      v37 = &v21;
      v15 = *(_BYTE *)(v1 + 96);
      v39 = &v15;
      v16 = *(_BYTE *)(v1 + 97);
      v41 = &v16;
      v17 = *(_BYTE *)(v1 + 98);
      v43 = &v17;
      v38 = 4LL;
      v40 = 1LL;
      v42 = 1LL;
      v44 = 1LL;
      tlgCreate1Sz_wchar_t(v45, *(_QWORD *)(v2 + 4864));
      tlgCreate1Sz_char(v46, v3 + 160);
      tlgCreate1Sz_char(v47, v4 + 169);
      tlgCreate1Sz_char(v48, v5 + 186);
      v49 = &v27;
      v18 = *(_BYTE *)(v6 + 8);
      v51 = &v18;
      v28 = *(_QWORD *)(v6 + 312);
      v53 = &v28;
      v22 = v7[197];
      v55 = &v22;
      v23 = v7[198];
      v57 = &v23;
      v24 = *(_DWORD *)(v6 + 328);
      v59 = &v24;
      v25 = v7[576];
      v61 = &v25;
      v26 = v7[578];
      v63 = &v26;
      v29 = *(_QWORD *)(v6 + 336);
      v27 = *(_QWORD *)&g_SystemUptime_s;
      v50 = 8LL;
      v52 = 1LL;
      v54 = 8LL;
      v56 = 4LL;
      v58 = 4LL;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 4LL;
      v66 = 8LL;
      v65 = &v29;
      v30 = *(_QWORD *)(v6 + 344);
      v67 = &v30;
      v68 = 8LL;
      tlgCreate1Sz_wchar_t(v69, L"Read, Write");
      v9 = *(_QWORD *)(v8 + 16);
      v70 = &v19;
      v72 = (__int64)*(&P + 1);
      v19 = WORD1(TelemetryPerfContext);
      v73 = 8 * WORD1(TelemetryPerfContext);
      v71 = 2LL;
      v74 = 0;
      tlgCreate1Sz_wchar_t(v75, v9);
      tlgCreate1Sz_wchar_t(v76, L"Flush, Unmap");
      tlgCreate1Sz_wchar_t(v77, L"64ms, 256ms, 1024ms, 5120ms, 5120+ms");
      v79 = 8LL;
      v11 = *v10;
      v81 = 2LL;
      v78 = &v31;
      v31 = v11 / 0x2710;
      v84 = 0;
      v80 = &v20;
      v12 = v10[40];
      v20 = 3 * qword_1C0069640;
      v82 = v12;
      v83 = 8 * (unsigned __int16)(3 * qword_1C0069640);
      tlgWriteTransfer_EtwWriteTransfer(3 * qword_1C0069640, (int)&dword_1C005EDE4, v13, v14, 0x1Fu, &v32);
    }
  }
}
