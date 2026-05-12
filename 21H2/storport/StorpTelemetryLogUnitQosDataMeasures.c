/*
 * XREFs of StorpTelemetryLogUnitQosDataMeasures @ 0x1C0054E70
 * Callers:
 *     StorpTelemetrySendUnitQos @ 0x1C0057BAC (StorpTelemetrySendUnitQos.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000E56C (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1C001AEF4 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001B09C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C001B144 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 */

char __fastcall StorpTelemetryLogUnitQosDataMeasures(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // r10
  __int64 v7; // r10
  __int64 v8; // rcx
  bool v9; // al
  int *v10; // r11
  __int64 v11; // r8
  __int64 v12; // r9
  char v14; // [rsp+38h] [rbp-D0h] BYREF
  char v15; // [rsp+39h] [rbp-CFh] BYREF
  char v16; // [rsp+3Ah] [rbp-CEh] BYREF
  bool v17; // [rsp+3Bh] [rbp-CDh] BYREF
  int v18; // [rsp+3Ch] [rbp-CCh] BYREF
  int v19; // [rsp+40h] [rbp-C8h] BYREF
  int v20; // [rsp+44h] [rbp-C4h] BYREF
  int v21; // [rsp+48h] [rbp-C0h] BYREF
  int v22; // [rsp+4Ch] [rbp-BCh] BYREF
  int v23; // [rsp+50h] [rbp-B8h] BYREF
  int v24; // [rsp+54h] [rbp-B4h] BYREF
  int v25; // [rsp+58h] [rbp-B0h] BYREF
  int v26; // [rsp+5Ch] [rbp-ACh] BYREF
  int v27; // [rsp+60h] [rbp-A8h] BYREF
  int v28; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v29; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-98h] BYREF
  __int64 v31; // [rsp+78h] [rbp-90h] BYREF
  __int64 v32; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+88h] [rbp-80h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  __int64 v36; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  int *v38; // [rsp+C8h] [rbp-40h]
  __int64 v39; // [rsp+D0h] [rbp-38h]
  char *v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-28h]
  char *v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  char *v44; // [rsp+F8h] [rbp-10h]
  __int64 v45; // [rsp+100h] [rbp-8h]
  char v46[16]; // [rsp+108h] [rbp+0h] BYREF
  char v47[16]; // [rsp+118h] [rbp+10h] BYREF
  char v48[16]; // [rsp+128h] [rbp+20h] BYREF
  char v49[16]; // [rsp+138h] [rbp+30h] BYREF
  int *v50; // [rsp+148h] [rbp+40h]
  __int64 v51; // [rsp+150h] [rbp+48h]
  int *v52; // [rsp+158h] [rbp+50h]
  __int64 v53; // [rsp+160h] [rbp+58h]
  int *v54; // [rsp+168h] [rbp+60h]
  __int64 v55; // [rsp+170h] [rbp+68h]
  int *v56; // [rsp+178h] [rbp+70h]
  __int64 v57; // [rsp+180h] [rbp+78h]
  int *v58; // [rsp+188h] [rbp+80h]
  __int64 v59; // [rsp+190h] [rbp+88h]
  int *v60; // [rsp+198h] [rbp+90h]
  __int64 v61; // [rsp+1A0h] [rbp+98h]
  bool *v62; // [rsp+1A8h] [rbp+A0h]
  __int64 v63; // [rsp+1B0h] [rbp+A8h]
  __int64 *v64; // [rsp+1B8h] [rbp+B0h]
  __int64 v65; // [rsp+1C0h] [rbp+B8h]
  __int64 *v66; // [rsp+1C8h] [rbp+C0h]
  __int64 v67; // [rsp+1D0h] [rbp+C8h]
  int *v68; // [rsp+1D8h] [rbp+D0h]
  __int64 v69; // [rsp+1E0h] [rbp+D8h]
  __int64 *v70; // [rsp+1E8h] [rbp+E0h]
  __int64 v71; // [rsp+1F0h] [rbp+E8h]
  __int64 *v72; // [rsp+1F8h] [rbp+F0h]
  __int64 v73; // [rsp+200h] [rbp+F8h]
  int *v74; // [rsp+208h] [rbp+100h]
  __int64 v75; // [rsp+210h] [rbp+108h]
  int *v76; // [rsp+218h] [rbp+110h]
  __int64 v77; // [rsp+220h] [rbp+118h]
  int *v78; // [rsp+228h] [rbp+120h]
  __int64 v79; // [rsp+230h] [rbp+128h]
  _UNKNOWN *retaddr; // [rsp+250h] [rbp+148h] BYREF

  v1 = &retaddr;
  if ( (unsigned int)dword_1C0069058 > 5 )
  {
    LOBYTE(v1) = tlgKeywordOn(a1, 0x400000000000LL);
    if ( (_BYTE)v1 )
    {
      v3 = *(_QWORD *)(v2 + 24);
      v35 = 16LL;
      v37 = 16LL;
      v34 = v3 + 5192;
      v36 = v2 + 1976;
      v19 = *(_DWORD *)(v3 + 56);
      v38 = &v19;
      v14 = *(_BYTE *)(v2 + 96);
      v40 = &v14;
      v15 = *(_BYTE *)(v2 + 97);
      v42 = &v15;
      v16 = *(_BYTE *)(v2 + 98);
      v44 = &v16;
      v39 = 4LL;
      v41 = 1LL;
      v43 = 1LL;
      v45 = 1LL;
      tlgCreate1Sz_wchar_t((__int64)v46, *(_WORD **)(v3 + 4864));
      tlgCreate1Sz_char((__int64)v47, (_BYTE *)(v4 + 160));
      tlgCreate1Sz_char((__int64)v48, (_BYTE *)(v5 + 169));
      tlgCreate1Sz_char((__int64)v49, (_BYTE *)(v6 + 186));
      v8 = *(unsigned int *)(v7 + 3220);
      v50 = &v20;
      v21 = *(_DWORD *)(v7 + 3224);
      v52 = &v21;
      v22 = *(_DWORD *)(v7 + 3228);
      v54 = &v22;
      v23 = *(_DWORD *)(v7 + 3232);
      v56 = &v23;
      v24 = *(_DWORD *)(v7 + 3236);
      v58 = &v24;
      v25 = *(_DWORD *)(v7 + 3240);
      v60 = &v25;
      v9 = (*(_BYTE *)(v7 + 450) & 2) != 0;
      v20 = v8;
      v17 = v9;
      v62 = &v17;
      v29 = *(_QWORD *)(v7 + 2104);
      v64 = &v29;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 4LL;
      v57 = 4LL;
      v59 = 4LL;
      v61 = 4LL;
      v63 = 1LL;
      v30 = *(_QWORD *)(v7 + 2112);
      v66 = &v30;
      LOBYTE(v18) = *((_BYTE *)v10 + 8);
      v68 = &v18;
      v31 = *(_QWORD *)(v7 + 2120);
      v70 = &v31;
      v32 = *(_QWORD *)(v7 + 2128);
      v72 = &v32;
      v26 = *(_DWORD *)(v7 + 2136);
      v74 = &v26;
      v27 = *(_DWORD *)(v7 + 2140);
      v76 = &v27;
      v28 = *v10;
      v78 = &v28;
      v65 = 8LL;
      v67 = 8LL;
      v69 = 1LL;
      v71 = 8LL;
      v73 = 8LL;
      v75 = 4LL;
      v77 = 4LL;
      v79 = 4LL;
      LOBYTE(v1) = tlgWriteTransfer_EtwWriteTransfer(v8, (unsigned __int8 *)dword_1C00608E6, v11, v12, 0x1Bu, &v33);
    }
  }
  return (char)v1;
}
