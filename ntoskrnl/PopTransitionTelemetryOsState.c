__int64 __fastcall PopTransitionTelemetryOsState(int a1, int a2)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned int v10; // r15d
  int v11; // r14d
  char **v13; // rcx
  int v14; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v15; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v16; // [rsp+40h] [rbp-C8h] BYREF
  int v17; // [rsp+44h] [rbp-C4h] BYREF
  int v18; // [rsp+48h] [rbp-C0h] BYREF
  int v19; // [rsp+4Ch] [rbp-BCh] BYREF
  int v20; // [rsp+50h] [rbp-B8h]
  int v21; // [rsp+54h] [rbp-B4h]
  int v22; // [rsp+58h] [rbp-B0h]
  int v23; // [rsp+5Ch] [rbp-ACh] BYREF
  int v24; // [rsp+60h] [rbp-A8h]
  int v25; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v26; // [rsp+68h] [rbp-A0h] BYREF
  int v27; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v28; // [rsp+70h] [rbp-98h] BYREF
  int v29; // [rsp+74h] [rbp-94h] BYREF
  __int64 v30; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v31; // [rsp+80h] [rbp-88h] BYREF
  __int64 v32; // [rsp+88h] [rbp-80h] BYREF
  __int64 v33; // [rsp+90h] [rbp-78h] BYREF
  __int64 v34; // [rsp+98h] [rbp-70h]
  unsigned __int64 v35; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v36; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v37; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v38; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v39; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v40; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v41; // [rsp+D0h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+F8h] [rbp-10h] BYREF
  __int16 *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  __int16 *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]
  unsigned __int64 *v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]
  int *v49; // [rsp+148h] [rbp+40h]
  __int64 v50; // [rsp+150h] [rbp+48h]
  __int64 *v51; // [rsp+158h] [rbp+50h]
  __int64 v52; // [rsp+160h] [rbp+58h]
  unsigned __int64 *v53; // [rsp+168h] [rbp+60h]
  __int64 v54; // [rsp+170h] [rbp+68h]
  unsigned __int64 *v55; // [rsp+178h] [rbp+70h]
  __int64 v56; // [rsp+180h] [rbp+78h]
  unsigned __int64 *v57; // [rsp+188h] [rbp+80h]
  __int64 v58; // [rsp+190h] [rbp+88h]
  int *v59; // [rsp+198h] [rbp+90h]
  __int64 v60; // [rsp+1A0h] [rbp+98h]
  int *v61; // [rsp+1A8h] [rbp+A0h]
  __int64 v62; // [rsp+1B0h] [rbp+A8h]
  int *v63; // [rsp+1B8h] [rbp+B0h]
  __int64 v64; // [rsp+1C0h] [rbp+B8h]
  int *v65; // [rsp+1C8h] [rbp+C0h]
  __int64 v66; // [rsp+1D0h] [rbp+C8h]
  unsigned int *v67; // [rsp+1D8h] [rbp+D0h]
  __int64 v68; // [rsp+1E0h] [rbp+D8h]
  int *v69; // [rsp+1E8h] [rbp+E0h]
  __int64 v70; // [rsp+1F0h] [rbp+E8h]
  unsigned int *v71; // [rsp+1F8h] [rbp+F0h]
  __int64 v72; // [rsp+200h] [rbp+F8h]
  __int64 *v73; // [rsp+208h] [rbp+100h]
  __int64 v74; // [rsp+210h] [rbp+108h]
  int *v75; // [rsp+218h] [rbp+110h]
  __int64 v76; // [rsp+220h] [rbp+118h]
  __int64 *v77; // [rsp+228h] [rbp+120h]
  __int64 v78; // [rsp+230h] [rbp+128h]
  int *v79; // [rsp+238h] [rbp+130h]
  __int64 v80; // [rsp+240h] [rbp+138h]
  __int64 *v81; // [rsp+248h] [rbp+140h]
  __int64 v82; // [rsp+250h] [rbp+148h]

  v33 = 0LL;
  LODWORD(v34) = 0;
  v41 = 0LL;
  v4 = 0;
  if ( !dword_140C03928 || !tlgKeywordOn((__int64)&dword_140C03928, 0x800000000000LL) || !byte_140C3C06C )
    return v4;
  if ( a1 == 2 )
  {
    if ( a2 == 2 )
    {
      if ( (unsigned int)dword_140C0918C >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_7;
      if ( !dword_140C09188 )
        dword_140C09188 = TelemetryCoverageStringHashInternal(off_140C09180, &v14);
      v13 = &off_140C09180;
    }
    else
    {
      if ( (unsigned int)dword_140C09174 >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_7;
      if ( !dword_140C09170 )
        dword_140C09170 = TelemetryCoverageStringHashInternal(off_140C09168, &v14);
      v13 = &off_140C09168;
    }
    goto LABEL_78;
  }
  if ( a1 == 3 )
  {
    switch ( a2 )
    {
      case 3:
        if ( (unsigned int)dword_140C0915C >= MEMORY[0xFFFFF7800000037C] )
          goto LABEL_7;
        if ( !dword_140C09158 )
          dword_140C09158 = TelemetryCoverageStringHashInternal(off_140C09150, &v14);
        v13 = &off_140C09150;
        break;
      case 4:
        if ( (unsigned int)dword_140C091EC >= MEMORY[0xFFFFF7800000037C] )
          goto LABEL_7;
        if ( !dword_140C091E8 )
          dword_140C091E8 = TelemetryCoverageStringHashInternal(off_140C091E0, &v14);
        v13 = &off_140C091E0;
        break;
      case 5:
        if ( (unsigned int)dword_140C091D4 >= MEMORY[0xFFFFF7800000037C] )
          goto LABEL_7;
        if ( !dword_140C091D0 )
          dword_140C091D0 = TelemetryCoverageStringHashInternal(off_140C091C8, &v14);
        v13 = &off_140C091C8;
        break;
      case 6:
        if ( (unsigned int)dword_140C091BC >= MEMORY[0xFFFFF7800000037C] )
          goto LABEL_7;
        if ( !dword_140C091B8 )
          dword_140C091B8 = TelemetryCoverageStringHashInternal(off_140C091B0, &v14);
        v13 = &off_140C091B0;
        break;
      default:
        if ( a2 == 8 && (unsigned int)dword_140C091A4 < MEMORY[0xFFFFF7800000037C] )
        {
          if ( !dword_140C091A0 )
            dword_140C091A0 = TelemetryCoverageStringHashInternal(off_140C09198, &v14);
          v13 = &off_140C09198;
          break;
        }
        goto LABEL_7;
    }
LABEL_78:
    EtwTelemetryCoverageReport((__int64 *)v13);
    goto LABEL_7;
  }
  if ( a1 != 4 )
    goto LABEL_7;
  switch ( a2 )
  {
    case 3:
      if ( (unsigned int)dword_140C0912C >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_7;
      if ( !dword_140C09128 )
        dword_140C09128 = TelemetryCoverageStringHashInternal(off_140C09120, &v14);
      v13 = &off_140C09120;
      goto LABEL_78;
    case 4:
      if ( (unsigned int)dword_140C09114 >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_7;
      if ( !dword_140C09110 )
        dword_140C09110 = TelemetryCoverageStringHashInternal(off_140C09108, &v14);
      v13 = &off_140C09108;
      goto LABEL_78;
    case 5:
      if ( (unsigned int)dword_140C090FC >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_7;
      if ( !dword_140C090F8 )
        dword_140C090F8 = TelemetryCoverageStringHashInternal(off_140C090F0, &v14);
      v13 = &off_140C090F0;
      goto LABEL_78;
    case 6:
      if ( (unsigned int)dword_140C090E4 >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_7;
      if ( !dword_140C090E0 )
        dword_140C090E0 = TelemetryCoverageStringHashInternal(off_140C090D8, &v14);
      v13 = &off_140C090D8;
      goto LABEL_78;
  }
  if ( a2 == 8 && (unsigned int)dword_140C09144 < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140C09140 )
      dword_140C09140 = TelemetryCoverageStringHashInternal(off_140C09138, &v14);
    v13 = &off_140C09138;
    goto LABEL_78;
  }
LABEL_7:
  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v4 = dword_140C3C068;
  if ( a1 != 5 || dword_140C3C030 == 1 || (unsigned int)(dword_140C3C030 - 4) <= 1 )
  {
    v5 = (KiQueryUnbiasedInterruptTime() - qword_140C3C048) / 0x2710uLL;
    v6 = v5 - qword_140C3C058;
    v7 = (MEMORY[0xFFFFF78000000008] - qword_140C3C040) / 0x2710uLL;
    qword_140C3C058 = v5;
    v8 = v7 - qword_140C3C050;
    v31 = v7 - qword_140C3C050;
    v9 = v7 - qword_140C3C050;
    qword_140C3C050 = v7;
    if ( v6 <= v8 )
      v9 = v6;
    v35 = v9;
    v22 = ++dword_140C3C060;
    v20 = dword_140C3C030;
    v21 = dword_140C3C034;
    if ( a1 != 5 )
    {
      ++dword_140C3C064;
      dword_140C3C030 = a1;
      dword_140C3C034 = a2;
      if ( a1 == 1 || a1 == 4 )
        ++dword_140C3C068;
    }
    v4 = dword_140C3C068;
    v24 = dword_140C3C064;
    PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
    PopCurrentPowerState(&v41);
    v10 = 0;
    v11 = DWORD2(v41);
    if ( DWORD2(v41) )
      v10 = (unsigned int)(100 * HIDWORD(v41)) / DWORD2(v41);
    PopMeasureEnergyChange(&v33, &OsStateChangeEnergyCounter);
    v32 = qword_140C3C038;
    if ( (unsigned int)dword_140C03928 > 5 && tlgKeywordOn((__int64)&dword_140C03928, 0x800000000000LL) )
    {
      v15 = a1;
      v43 = &v15;
      v45 = &v16;
      v47 = &v31;
      v44 = 2LL;
      v16 = a2;
      v46 = 2LL;
      v48 = 8LL;
      v19 = MEMORY[0xFFFFF780000002C4];
      v49 = &v19;
      v51 = &v32;
      v36 = v35;
      v53 = &v36;
      v55 = &v37;
      v57 = &v38;
      LOWORD(v17) = v20;
      v59 = &v17;
      LOWORD(v18) = v21;
      v61 = &v18;
      v23 = v22;
      v63 = &v23;
      v25 = v24;
      v65 = &v25;
      v67 = &v26;
      v69 = &v27;
      v71 = &v28;
      v39 = v34;
      v73 = &v39;
      v29 = v33;
      v75 = &v29;
      LODWORD(v30) = (unsigned __int8)v41;
      v77 = &v30;
      v50 = 4LL;
      v52 = 8LL;
      v54 = 8LL;
      v37 = v7;
      v56 = 8LL;
      v38 = v5;
      v58 = 8LL;
      v60 = 2LL;
      v62 = 2LL;
      v64 = 4LL;
      v66 = 4LL;
      v26 = v4;
      v68 = 4LL;
      v27 = v11;
      v70 = 4LL;
      v28 = v10;
      v72 = 4LL;
      v74 = 8LL;
      v76 = 4LL;
      v78 = 4LL;
      v14 = BYTE3(v41);
      v80 = 4LL;
      v79 = &v14;
      v40 = 0x1000000LL;
      v81 = &v40;
      v82 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03928,
        (unsigned __int8 *)byte_14002E851,
        0LL,
        0LL,
        0x16u,
        &v42);
    }
  }
  else
  {
    PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
  }
  return v4;
}
