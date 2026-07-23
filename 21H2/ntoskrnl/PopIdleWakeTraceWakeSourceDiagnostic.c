/*
 * XREFs of PopIdleWakeTraceWakeSourceDiagnostic @ 0x1408F4AC0
 * Callers:
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14057BC50 (PopIdleWakeNotifyModernStandbyExit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall PopIdleWakeTraceWakeSourceDiagnostic(__int64 a1, __int64 a2)
{
  unsigned __int16 *v4; // rdi
  unsigned int v5; // edx
  __int128 *v6; // rdi
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rax
  int v10; // r10d
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // edx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // r9d
  unsigned int v18; // ecx
  ULONGLONG v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  REGHANDLE v24; // rcx
  int v25; // [rsp+38h] [rbp-D0h] BYREF
  int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  int v27; // [rsp+40h] [rbp-C8h] BYREF
  int v28; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v29; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+70h] [rbp-98h] BYREF
  __int64 v35; // [rsp+78h] [rbp-90h] BYREF
  __int64 v36; // [rsp+80h] [rbp-88h] BYREF
  __int64 v37; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int16 *v40; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v42; // [rsp+D8h] [rbp-30h]
  __int64 v43; // [rsp+E0h] [rbp-28h]
  int *v44; // [rsp+E8h] [rbp-20h]
  __int64 v45; // [rsp+F0h] [rbp-18h]
  _DWORD *v46; // [rsp+F8h] [rbp-10h]
  __int64 v47; // [rsp+100h] [rbp-8h]
  __int64 v48; // [rsp+108h] [rbp+0h]
  _DWORD v49[2]; // [rsp+110h] [rbp+8h] BYREF
  _DWORD *v50; // [rsp+118h] [rbp+10h]
  __int64 v51; // [rsp+120h] [rbp+18h]
  __int64 v52; // [rsp+128h] [rbp+20h]
  _DWORD v53[2]; // [rsp+130h] [rbp+28h] BYREF
  _DWORD *v54; // [rsp+138h] [rbp+30h]
  __int64 v55; // [rsp+140h] [rbp+38h]
  __int64 v56; // [rsp+148h] [rbp+40h]
  _DWORD v57[2]; // [rsp+150h] [rbp+48h] BYREF
  int *v58; // [rsp+158h] [rbp+50h]
  __int64 v59; // [rsp+160h] [rbp+58h]
  __int64 *v60; // [rsp+168h] [rbp+60h]
  __int64 v61; // [rsp+170h] [rbp+68h]
  __int64 *v62; // [rsp+178h] [rbp+70h]
  __int64 v63; // [rsp+180h] [rbp+78h]
  __int64 *v64; // [rsp+188h] [rbp+80h]
  __int64 v65; // [rsp+190h] [rbp+88h]
  __int64 v66; // [rsp+198h] [rbp+90h]
  __int64 v67; // [rsp+1A0h] [rbp+98h]
  __int64 v68; // [rsp+1A8h] [rbp+A0h]
  int v69; // [rsp+1B0h] [rbp+A8h]
  int v70; // [rsp+1B4h] [rbp+ACh]
  void *v71; // [rsp+1B8h] [rbp+B0h]
  __int64 v72; // [rsp+1C0h] [rbp+B8h]
  __int64 v73; // [rsp+1C8h] [rbp+C0h]
  __int64 v74; // [rsp+1D0h] [rbp+C8h]
  void *v75; // [rsp+1D8h] [rbp+D0h]
  __int64 v76; // [rsp+1E0h] [rbp+D8h]
  __int64 v77; // [rsp+1E8h] [rbp+E0h]
  __int64 v78; // [rsp+1F0h] [rbp+E8h]
  int *v79; // [rsp+1F8h] [rbp+F0h]
  __int64 v80; // [rsp+200h] [rbp+F8h]
  __int64 *v81; // [rsp+208h] [rbp+100h]
  __int64 v82; // [rsp+210h] [rbp+108h]
  __int64 v83; // [rsp+218h] [rbp+110h]
  __int64 v84; // [rsp+220h] [rbp+118h]
  __int64 v85; // [rsp+228h] [rbp+120h]
  __int64 v86; // [rsp+230h] [rbp+128h]
  __int64 *v87; // [rsp+238h] [rbp+130h]
  __int64 v88; // [rsp+240h] [rbp+138h]
  __int64 v89; // [rsp+248h] [rbp+140h]
  __int64 v90; // [rsp+250h] [rbp+148h]
  __int64 v91; // [rsp+258h] [rbp+150h]
  __int64 v92; // [rsp+260h] [rbp+158h]
  __int64 *v93; // [rsp+268h] [rbp+160h]
  __int64 v94; // [rsp+270h] [rbp+168h]
  __int64 v95; // [rsp+278h] [rbp+170h]
  __int64 v96; // [rsp+280h] [rbp+178h]
  __int64 v97; // [rsp+288h] [rbp+180h]
  __int64 v98; // [rsp+290h] [rbp+188h]
  __int64 *v99; // [rsp+298h] [rbp+190h]
  __int64 v100; // [rsp+2A0h] [rbp+198h]
  __int64 v101; // [rsp+2A8h] [rbp+1A0h]
  __int64 v102; // [rsp+2B0h] [rbp+1A8h]
  __int64 v103; // [rsp+2B8h] [rbp+1B0h]
  __int64 v104; // [rsp+2C0h] [rbp+1B8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2C8h] [rbp+1C0h] BYREF
  __int64 v106; // [rsp+2D8h] [rbp+1D0h]
  __int64 v107; // [rsp+2E0h] [rbp+1D8h]
  __int64 v108; // [rsp+2E8h] [rbp+1E0h]
  __int64 v109; // [rsp+2F0h] [rbp+1E8h]
  __int64 v110; // [rsp+2F8h] [rbp+1F0h]
  __int64 v111; // [rsp+300h] [rbp+1F8h]
  __int64 v112; // [rsp+308h] [rbp+200h]
  __int64 v113; // [rsp+310h] [rbp+208h]
  __int64 *v114; // [rsp+318h] [rbp+210h]
  __int64 v115; // [rsp+320h] [rbp+218h]
  __int64 v116; // [rsp+328h] [rbp+220h]
  unsigned int v117; // [rsp+330h] [rbp+228h]
  int v118; // [rsp+334h] [rbp+22Ch]
  __int64 v119; // [rsp+338h] [rbp+230h]
  __int64 v120; // [rsp+340h] [rbp+238h]

  v4 = 0LL;
  DestinationString = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  RtlInitUnicodeString(&DestinationString, &word_1407D7CE0);
  if ( *(_DWORD *)a2 == 5 )
  {
    v5 = *(_DWORD *)(a2 + 408);
    if ( v5 > 3 )
      v5 = 3;
    if ( v5 )
    {
      v6 = &v39;
      v7 = v5;
      v8 = 0LL;
      do
      {
        v9 = v8 + a2 + 416;
        v8 += 16LL;
        *(_QWORD *)v6 = v9;
        v6 = (__int128 *)((char *)v6 + 8);
        --v7;
      }
      while ( v7 );
      v4 = v40;
    }
  }
  else
  {
    v5 = 1;
    *(_QWORD *)&v39 = a2 + 392;
  }
  if ( v5 < 3 )
  {
    memset64((char *)&v39 + 8 * v5, (unsigned __int64)&DestinationString, 3 - v5);
    v4 = v40;
  }
  if ( (unsigned int)dword_140C02228 > 5 && tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL) )
  {
    v30 = a1;
    v42 = &v30;
    v44 = &v26;
    v43 = 8LL;
    v26 = v10;
    v45 = 4LL;
    v11 = *(unsigned __int16 *)v39;
    v12 = *(_QWORD *)(v39 + 8);
    v46 = v49;
    v48 = v12;
    v49[0] = v11;
    v47 = 2LL;
    v49[1] = 0;
    v13 = *(_QWORD *)(*((_QWORD *)&v39 + 1) + 8LL);
    v14 = (unsigned __int16)**((_WORD **)&v39 + 1);
    v50 = v53;
    v52 = v13;
    v53[0] = v14;
    v51 = 2LL;
    v53[1] = 0;
    LODWORD(v13) = *v4;
    v56 = *((_QWORD *)v4 + 1);
    v27 = *(_DWORD *)(a2 + 8);
    v58 = &v27;
    v31 = *(_QWORD *)(a2 + 16);
    v60 = &v31;
    v32 = *(_QWORD *)(a2 + 24);
    v62 = &v32;
    v33 = *(_QWORD *)(a2 + 32);
    v64 = &v33;
    v68 = a2 + 466;
    v57[0] = v13;
    v15 = *(unsigned __int16 *)(a2 + 464);
    v66 = a2 + 464;
    v54 = v57;
    v55 = 2LL;
    v57[1] = 0;
    v59 = 4LL;
    v71 = &PopIdleWakeIdleAccountingBucketLimitsMs;
    v61 = 8LL;
    v73 = a2 + 40;
    v75 = &PopIdleWakePeriodAccountingBucketLimitsMs;
    v77 = a2 + 76;
    v28 = *(_DWORD *)(a2 + 4);
    v79 = &v28;
    v63 = 8LL;
    v65 = 8LL;
    v67 = 2LL;
    v69 = 10 * v15;
    v70 = 0;
    v72 = 80LL;
    v74 = 36LL;
    v76 = 96LL;
    v78 = 44LL;
    v80 = 4LL;
    v34 = *(_QWORD *)(a2 + 120);
    v82 = 8LL;
    v81 = &v34;
    v84 = 20LL;
    v83 = a2 + 128;
    v86 = 40LL;
    v85 = a2 + 152;
    v35 = *(_QWORD *)(a2 + 192);
    v87 = &v35;
    v89 = a2 + 200;
    v91 = a2 + 224;
    v36 = *(_QWORD *)(a2 + 264);
    v93 = &v36;
    v95 = a2 + 272;
    v97 = a2 + 296;
    v37 = *(_QWORD *)(a2 + 336);
    v99 = &v37;
    v101 = a2 + 344;
    v103 = a2 + 360;
    v88 = 8LL;
    v90 = 20LL;
    v92 = 40LL;
    v94 = 8LL;
    v96 = 20LL;
    v98 = 40LL;
    v100 = 8LL;
    v102 = 12LL;
    v104 = 24LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02228,
      (unsigned __int8 *)byte_140029AD3,
      0LL,
      0LL,
      0x21u,
      &v41);
  }
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DRIPS_WAKE_ACCOUNTING_SUMMARY) )
  {
    v16 = *(unsigned __int16 *)(a2 + 392);
    v17 = 8;
    LOBYTE(v25) = PopWnfCsEnterScenarioId;
    UserData.Ptr = (ULONGLONG)&v25;
    v106 = a2 + 8;
    v108 = a2 + 16;
    v110 = a2 + 24;
    v112 = a2 + 32;
    LODWORD(v29) = v16 >> 1;
    v114 = &v29;
    v116 = *(_QWORD *)(a2 + 400);
    v117 = v16;
    v18 = *(unsigned __int16 *)(a2 + 464);
    *(_QWORD *)&UserData.Size = 1LL;
    v107 = 4LL;
    v109 = 8LL;
    v111 = 8LL;
    v113 = 8LL;
    v115 = 4LL;
    v118 = 0;
    v119 = a2 + 464;
    v120 = 2LL;
    if ( (_WORD)v18 )
    {
      v19 = a2 + 468;
      v20 = v18;
      do
      {
        v21 = 2LL * v17;
        *(&UserData.Ptr + v21) = v19 - 2;
        *((_QWORD *)&UserData.Size + v21) = 2LL;
        v22 = 2LL * (v17 + 1);
        v17 += 2;
        *(&UserData.Ptr + v22) = v19;
        v19 += 10LL;
        *((_QWORD *)&UserData.Size + v22) = 8LL;
        --v20;
      }
      while ( v20 );
    }
    v23 = 2LL * v17;
    *(&UserData.Ptr + v23) = (ULONGLONG)&PopWnfCsEnterScenarioId;
    v24 = PopDiagHandle;
    *((_QWORD *)&UserData.Size + v23) = 8LL;
    EtwWrite(v24, &POP_ETW_EVENT_DRIPS_WAKE_ACCOUNTING_SUMMARY, 0LL, v17 + 1, &UserData);
  }
}
