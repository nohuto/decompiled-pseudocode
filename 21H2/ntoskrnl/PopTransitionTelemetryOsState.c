/*
 * XREFs of PopTransitionTelemetryOsState @ 0x140798C44
 * Callers:
 *     PopNotifyTelemetryOsState @ 0x140775B74 (PopNotifyTelemetryOsState.c)
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1408EE060 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x1408EE280 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopDiagInitialize @ 0x140A41D18 (PopDiagInitialize.c)
 * Callees:
 *     EtwTelemetryCoverageReport @ 0x140246D10 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x140246F08 (TelemetryCoverageStringHashInternal.c)
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopCurrentPowerState @ 0x14066C4DC (PopCurrentPowerState.c)
 *     PopMeasureEnergyChange @ 0x1408EDE1C (PopMeasureEnergyChange.c)
 */

__int64 __fastcall PopTransitionTelemetryOsState(int a1, int a2)
{
  unsigned int v4; // esi
  char **v6; // rcx
  int v7; // r11d
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned int v13; // r15d
  int v14; // r14d
  __int16 v15; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v16; // [rsp+3Ch] [rbp-CCh] BYREF
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h] BYREF
  int v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  int v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+54h] [rbp-B4h] BYREF
  int v23; // [rsp+58h] [rbp-B0h] BYREF
  int v24; // [rsp+5Ch] [rbp-ACh] BYREF
  int v25; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v26; // [rsp+64h] [rbp-A4h] BYREF
  int v27; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v28; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v29; // [rsp+70h] [rbp-98h] BYREF
  int v30; // [rsp+74h] [rbp-94h] BYREF
  __int64 v31; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v32; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v33; // [rsp+88h] [rbp-80h] BYREF
  __int64 v34; // [rsp+90h] [rbp-78h] BYREF
  int v35; // [rsp+98h] [rbp-70h] BYREF
  int v36; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v37; // [rsp+A0h] [rbp-68h] BYREF
  int v38; // [rsp+A4h] [rbp-64h] BYREF
  int v39; // [rsp+A8h] [rbp-60h] BYREF
  int v40; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned __int64 v41; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v44; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v45; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v46; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v47; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v48; // [rsp+F0h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+118h] [rbp+10h] BYREF
  __int16 *v50; // [rsp+138h] [rbp+30h]
  __int64 v51; // [rsp+140h] [rbp+38h]
  __int16 *v52; // [rsp+148h] [rbp+40h]
  __int64 v53; // [rsp+150h] [rbp+48h]
  unsigned __int64 *v54; // [rsp+158h] [rbp+50h]
  __int64 v55; // [rsp+160h] [rbp+58h]
  int *v56; // [rsp+168h] [rbp+60h]
  __int64 v57; // [rsp+170h] [rbp+68h]
  __int64 *v58; // [rsp+178h] [rbp+70h]
  __int64 v59; // [rsp+180h] [rbp+78h]
  unsigned __int64 *v60; // [rsp+188h] [rbp+80h]
  __int64 v61; // [rsp+190h] [rbp+88h]
  unsigned __int64 *v62; // [rsp+198h] [rbp+90h]
  __int64 v63; // [rsp+1A0h] [rbp+98h]
  unsigned __int64 *v64; // [rsp+1A8h] [rbp+A0h]
  __int64 v65; // [rsp+1B0h] [rbp+A8h]
  int *v66; // [rsp+1B8h] [rbp+B0h]
  __int64 v67; // [rsp+1C0h] [rbp+B8h]
  int *v68; // [rsp+1C8h] [rbp+C0h]
  __int64 v69; // [rsp+1D0h] [rbp+C8h]
  int *v70; // [rsp+1D8h] [rbp+D0h]
  __int64 v71; // [rsp+1E0h] [rbp+D8h]
  int *v72; // [rsp+1E8h] [rbp+E0h]
  __int64 v73; // [rsp+1F0h] [rbp+E8h]
  unsigned int *v74; // [rsp+1F8h] [rbp+F0h]
  __int64 v75; // [rsp+200h] [rbp+F8h]
  int *v76; // [rsp+208h] [rbp+100h]
  __int64 v77; // [rsp+210h] [rbp+108h]
  unsigned int *v78; // [rsp+218h] [rbp+110h]
  __int64 v79; // [rsp+220h] [rbp+118h]
  __int64 *v80; // [rsp+228h] [rbp+120h]
  __int64 v81; // [rsp+230h] [rbp+128h]
  int *v82; // [rsp+238h] [rbp+130h]
  __int64 v83; // [rsp+240h] [rbp+138h]
  int *v84; // [rsp+248h] [rbp+140h]
  __int64 v85; // [rsp+250h] [rbp+148h]
  __int64 *v86; // [rsp+258h] [rbp+150h]
  __int64 v87; // [rsp+260h] [rbp+158h]
  __int64 *v88; // [rsp+268h] [rbp+160h]
  __int64 v89; // [rsp+270h] [rbp+168h]

  v4 = 0;
  v48 = 0LL;
  v47 = 0LL;
  if ( !dword_140C02228 || !tlgKeywordOn((__int64)&dword_140C02228, 0x800000000000LL) || !byte_140C22E4C )
    return v4;
  switch ( a1 )
  {
    case 2:
      if ( a2 == 2 )
      {
        if ( (unsigned int)dword_140C0ED54 < MEMORY[0xFFFFF7800000037C] )
        {
          if ( !dword_140C0ED50 )
            dword_140C0ED50 = TelemetryCoverageStringHashInternal(off_140C0ED48, &v32);
          v6 = &off_140C0ED48;
          goto LABEL_67;
        }
      }
      else if ( (unsigned int)dword_140C0ED3C < MEMORY[0xFFFFF7800000037C] )
      {
        if ( !dword_140C0ED38 )
          dword_140C0ED38 = TelemetryCoverageStringHashInternal(off_140C0ED30, &v33);
        v6 = &off_140C0ED30;
        goto LABEL_67;
      }
      break;
    case 3:
      switch ( a2 )
      {
        case 3:
          if ( (unsigned int)dword_140C0ED24 < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140C0ED20 )
              dword_140C0ED20 = TelemetryCoverageStringHashInternal(off_140C0ED18, &v37);
            v6 = &off_140C0ED18;
            goto LABEL_67;
          }
          break;
        case 4:
          if ( (unsigned int)dword_140C0EE2C < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140C0EE28 )
              dword_140C0EE28 = TelemetryCoverageStringHashInternal(off_140C0EE20, &v36);
            v6 = &off_140C0EE20;
            goto LABEL_67;
          }
          break;
        case 5:
          if ( (unsigned int)dword_140C0EE14 < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140C0EE10 )
              dword_140C0EE10 = TelemetryCoverageStringHashInternal(off_140C0EE08, &v35);
            v6 = &off_140C0EE08;
            goto LABEL_67;
          }
          break;
        case 6:
          if ( (unsigned int)dword_140C0EDFC < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140C0EDF8 )
              dword_140C0EDF8 = TelemetryCoverageStringHashInternal(off_140C0EDF0, &v40);
            v6 = &off_140C0EDF0;
            goto LABEL_67;
          }
          break;
        default:
          if ( a2 == 8 && (unsigned int)dword_140C0EDE4 < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140C0EDE0 )
              dword_140C0EDE0 = TelemetryCoverageStringHashInternal(off_140C0EDD8, &v39);
            v6 = &off_140C0EDD8;
            goto LABEL_67;
          }
          break;
      }
      break;
    case 4:
      switch ( a2 )
      {
        case 3:
          if ( (unsigned int)dword_140C0EDCC < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140C0EDC8 )
              dword_140C0EDC8 = TelemetryCoverageStringHashInternal(off_140C0EDC0, &v38);
            v6 = &off_140C0EDC0;
            goto LABEL_67;
          }
          break;
        case 4:
          if ( (unsigned int)dword_140C0EDB4 < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140C0EDB0 )
              dword_140C0EDB0 = TelemetryCoverageStringHashInternal(off_140C0EDA8, &v19);
            v6 = &off_140C0EDA8;
            goto LABEL_67;
          }
          break;
        case 5:
          if ( (unsigned int)dword_140C0ED9C < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140C0ED98 )
              dword_140C0ED98 = TelemetryCoverageStringHashInternal(off_140C0ED90, &v20);
            v6 = &off_140C0ED90;
            goto LABEL_67;
          }
          break;
        case 6:
          if ( (unsigned int)dword_140C0ED84 < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140C0ED80 )
              dword_140C0ED80 = TelemetryCoverageStringHashInternal(off_140C0ED78, &v21);
            v6 = &off_140C0ED78;
            goto LABEL_67;
          }
          break;
        default:
          if ( a2 == 8 && (unsigned int)dword_140C0ED6C < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140C0ED68 )
              dword_140C0ED68 = TelemetryCoverageStringHashInternal(off_140C0ED60, &v22);
            v6 = &off_140C0ED60;
LABEL_67:
            EtwTelemetryCoverageReport((__int64 *)v6);
          }
          break;
      }
      break;
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v4 = dword_140C22E48;
  if ( a1 != 5 || dword_140C22E10 == 1 || (unsigned int)(dword_140C22E10 - 4) <= 1 )
  {
    v8 = (KiQueryUnbiasedInterruptTime() - qword_140C22E28) / 0x2710uLL;
    v9 = v8 - qword_140C22E38;
    v10 = (MEMORY[0xFFFFF78000000008] - qword_140C22E20) / 0x2710uLL;
    qword_140C22E38 = v8;
    v11 = v10 - qword_140C22E30;
    v33 = v10 - qword_140C22E30;
    v12 = v10 - qword_140C22E30;
    qword_140C22E30 = v10;
    if ( v9 <= v11 )
      v12 = v9;
    v32 = v12;
    v21 = v7 + dword_140C22E40;
    dword_140C22E40 += v7;
    v19 = dword_140C22E10;
    v20 = dword_140C22E14;
    if ( a1 != 5 )
    {
      dword_140C22E44 += v7;
      dword_140C22E10 = a1;
      dword_140C22E14 = a2;
    }
    if ( a1 == v7 || a1 == 4 )
      dword_140C22E48 += v7;
    v4 = dword_140C22E48;
    v22 = dword_140C22E44;
    PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
    PopCurrentPowerState(&v48);
    v13 = 0;
    v14 = DWORD2(v48);
    if ( DWORD2(v48) )
      v13 = (unsigned int)(100 * HIDWORD(v48)) / DWORD2(v48);
    PopMeasureEnergyChange(&v47, &OsStateChangeEnergyCounter);
    v34 = qword_140C22E18;
    if ( (unsigned int)dword_140C02228 > 5 && tlgKeywordOn((__int64)&dword_140C02228, 0x800000000000LL) )
    {
      v15 = a1;
      v50 = &v15;
      v52 = &v16;
      v41 = v33;
      v54 = &v41;
      v51 = 2LL;
      v16 = a2;
      v53 = 2LL;
      v55 = 8LL;
      v23 = MEMORY[0xFFFFF780000002C4];
      v56 = &v23;
      v58 = &v34;
      v42 = v32;
      v60 = &v42;
      v62 = &v43;
      v64 = &v44;
      LOWORD(v17) = v19;
      v66 = &v17;
      LOWORD(v18) = v20;
      v68 = &v18;
      v24 = v21;
      v70 = &v24;
      v25 = v22;
      v72 = &v25;
      v74 = &v26;
      v76 = &v27;
      v78 = &v28;
      v45 = *((_QWORD *)&v47 + 1);
      v80 = &v45;
      v29 = v47;
      v82 = &v29;
      v30 = (unsigned __int8)v48;
      v84 = &v30;
      v57 = 4LL;
      v59 = 8LL;
      v61 = 8LL;
      v43 = v10;
      v63 = 8LL;
      v44 = v8;
      v65 = 8LL;
      v67 = 2LL;
      v69 = 2LL;
      v71 = 4LL;
      v73 = 4LL;
      v26 = v4;
      v75 = 4LL;
      v27 = v14;
      v77 = 4LL;
      v28 = v13;
      v79 = 4LL;
      v81 = 8LL;
      v83 = 4LL;
      v85 = 4LL;
      LODWORD(v31) = BYTE3(v48);
      v87 = 4LL;
      v86 = &v31;
      v46 = 0x1000000LL;
      v88 = &v46;
      v89 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02228,
        (unsigned __int8 *)byte_140027C69,
        0LL,
        0LL,
        0x16u,
        &v49);
    }
  }
  else
  {
    PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
  }
  return v4;
}
