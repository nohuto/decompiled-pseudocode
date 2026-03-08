/*
 * XREFs of PopIdleWakeSendDripsWakeSourceTelemetry @ 0x140997C24
 * Callers:
 *     PopIdleWakeTraceWakeSourceDiagnostic @ 0x140998420 (PopIdleWakeTraceWakeSourceDiagnostic.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PopIdleWakeSendDripsWakeSourceTelemetry(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 *v3; // rdi
  int v4; // r14d
  __int64 v7; // rbx
  unsigned int v8; // edx
  __int128 *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdi
  int v12; // r9d
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // edx
  int v17; // eax
  __int64 v18; // rax
  int v19; // [rsp+38h] [rbp-D0h] BYREF
  int v20; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-98h] BYREF
  __int64 v28; // [rsp+78h] [rbp-90h] BYREF
  __int64 v29; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  __int128 v31; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int16 *v32; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  int *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  _DWORD *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  __int64 v40; // [rsp+108h] [rbp+0h]
  _DWORD v41[2]; // [rsp+110h] [rbp+8h] BYREF
  _DWORD *v42; // [rsp+118h] [rbp+10h]
  __int64 v43; // [rsp+120h] [rbp+18h]
  __int64 v44; // [rsp+128h] [rbp+20h]
  _DWORD v45[2]; // [rsp+130h] [rbp+28h] BYREF
  _DWORD *v46; // [rsp+138h] [rbp+30h]
  __int64 v47; // [rsp+140h] [rbp+38h]
  __int64 v48; // [rsp+148h] [rbp+40h]
  _DWORD v49[2]; // [rsp+150h] [rbp+48h] BYREF
  __int64 *v50; // [rsp+158h] [rbp+50h]
  __int64 v51; // [rsp+160h] [rbp+58h]
  __int64 *v52; // [rsp+168h] [rbp+60h]
  __int64 v53; // [rsp+170h] [rbp+68h]
  __int64 *v54; // [rsp+178h] [rbp+70h]
  __int64 v55; // [rsp+180h] [rbp+78h]
  __int64 *v56; // [rsp+188h] [rbp+80h]
  __int64 v57; // [rsp+190h] [rbp+88h]
  __int64 v58; // [rsp+198h] [rbp+90h]
  __int64 v59; // [rsp+1A0h] [rbp+98h]
  __int64 v60; // [rsp+1A8h] [rbp+A0h]
  int v61; // [rsp+1B0h] [rbp+A8h]
  int v62; // [rsp+1B4h] [rbp+ACh]
  void *v63; // [rsp+1B8h] [rbp+B0h]
  __int64 v64; // [rsp+1C0h] [rbp+B8h]
  __int64 v65; // [rsp+1C8h] [rbp+C0h]
  __int64 v66; // [rsp+1D0h] [rbp+C8h]
  void *v67; // [rsp+1D8h] [rbp+D0h]
  __int64 v68; // [rsp+1E0h] [rbp+D8h]
  __int64 v69; // [rsp+1E8h] [rbp+E0h]
  __int64 v70; // [rsp+1F0h] [rbp+E8h]
  int *v71; // [rsp+1F8h] [rbp+F0h]
  __int64 v72; // [rsp+200h] [rbp+F8h]
  __int64 *v73; // [rsp+208h] [rbp+100h]
  __int64 v74; // [rsp+210h] [rbp+108h]
  __int64 v75; // [rsp+218h] [rbp+110h]
  __int64 v76; // [rsp+220h] [rbp+118h]
  __int64 v77; // [rsp+228h] [rbp+120h]
  __int64 v78; // [rsp+230h] [rbp+128h]
  __int64 *v79; // [rsp+238h] [rbp+130h]
  __int64 v80; // [rsp+240h] [rbp+138h]
  __int64 v81; // [rsp+248h] [rbp+140h]
  __int64 v82; // [rsp+250h] [rbp+148h]
  __int64 v83; // [rsp+258h] [rbp+150h]
  __int64 v84; // [rsp+260h] [rbp+158h]
  __int64 *v85; // [rsp+268h] [rbp+160h]
  __int64 v86; // [rsp+270h] [rbp+168h]
  __int64 v87; // [rsp+278h] [rbp+170h]
  __int64 v88; // [rsp+280h] [rbp+178h]
  __int64 v89; // [rsp+288h] [rbp+180h]
  __int64 v90; // [rsp+290h] [rbp+188h]
  __int64 *v91; // [rsp+298h] [rbp+190h]
  __int64 v92; // [rsp+2A0h] [rbp+198h]
  __int64 v93; // [rsp+2A8h] [rbp+1A0h]
  __int64 v94; // [rsp+2B0h] [rbp+1A8h]
  __int64 v95; // [rsp+2B8h] [rbp+1B0h]
  __int64 v96; // [rsp+2C0h] [rbp+1B8h]

  v3 = 0LL;
  v32 = 0LL;
  v4 = a3 != 0;
  v7 = a2 + (-v4 & 0x178) + 8LL;
  DestinationString = 0LL;
  v31 = 0LL;
  if ( !*(_DWORD *)v7 )
    return;
  RtlInitUnicodeString(&DestinationString, &word_1408834C0);
  if ( *(_DWORD *)a2 == 128 )
  {
    v8 = *(_DWORD *)(a2 + 784);
    if ( v8 <= 3 )
    {
      if ( !v8 )
        goto LABEL_9;
    }
    else
    {
      v8 = 3;
    }
    v9 = &v31;
    v10 = v8;
    v11 = a2 + 792;
    do
    {
      *(_QWORD *)v9 = v11;
      v11 += 16LL;
      v9 = (__int128 *)((char *)v9 + 8);
      --v10;
    }
    while ( v10 );
    v3 = v32;
LABEL_9:
    if ( v8 >= 3 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v8 = 1;
  *(_QWORD *)&v31 = a2 + 768;
LABEL_12:
  memset64((char *)&v31 + 8 * v8, (unsigned __int64)&DestinationString, 3 - v8);
  v3 = v32;
LABEL_13:
  if ( (unsigned int)dword_140C03928 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
    {
      v22 = a1;
      v34 = &v22;
      v36 = &v20;
      v35 = 8LL;
      v20 = v12;
      v37 = 4LL;
      v13 = *(unsigned __int16 *)v31;
      v14 = *(_QWORD *)(v31 + 8);
      v38 = v41;
      v40 = v14;
      v41[0] = v13;
      v39 = 2LL;
      v41[1] = 0;
      v15 = *(_QWORD *)(*((_QWORD *)&v31 + 1) + 8LL);
      v16 = (unsigned __int16)**((_WORD **)&v31 + 1);
      v42 = v45;
      v44 = v15;
      v45[0] = v16;
      v43 = 2LL;
      v45[1] = 0;
      LODWORD(v15) = *v3;
      v48 = *((_QWORD *)v3 + 1);
      LODWORD(v21) = *(_DWORD *)v7;
      v50 = &v21;
      v23 = *(_QWORD *)(v7 + 8);
      v52 = &v23;
      v24 = *(_QWORD *)(v7 + 16);
      v54 = &v24;
      v25 = *(_QWORD *)(v7 + 24);
      v56 = &v25;
      v60 = a2 + 842;
      v49[0] = v15;
      v17 = *(unsigned __int16 *)(a2 + 840);
      v58 = a2 + 840;
      v46 = v49;
      v47 = 2LL;
      v49[1] = 0;
      v51 = 4LL;
      v63 = &PopIdleWakeIdleAccountingBucketLimitsMs;
      LODWORD(v15) = 10 * v17;
      v53 = 8LL;
      v65 = v7 + 32;
      v67 = &PopIdleWakePeriodAccountingBucketLimitsMs;
      v69 = v7 + 68;
      v71 = &v19;
      v18 = *(_QWORD *)(v7 + 112);
      v55 = 8LL;
      v57 = 8LL;
      v59 = 2LL;
      v61 = v15;
      v62 = 0;
      v64 = 80LL;
      v66 = 36LL;
      v68 = 96LL;
      v70 = 44LL;
      v19 = v4;
      v72 = 4LL;
      v26 = v18;
      v74 = 8LL;
      v73 = &v26;
      v76 = 20LL;
      v75 = v7 + 120;
      v78 = 40LL;
      v77 = v7 + 144;
      v27 = *(_QWORD *)(v7 + 184);
      v79 = &v27;
      v81 = v7 + 192;
      v83 = v7 + 216;
      v28 = *(_QWORD *)(v7 + 256);
      v85 = &v28;
      v87 = v7 + 264;
      v89 = v7 + 288;
      v29 = *(_QWORD *)(v7 + 328);
      v91 = &v29;
      v93 = v7 + 336;
      v95 = v7 + 352;
      v80 = 8LL;
      v82 = 20LL;
      v84 = 40LL;
      v86 = 8LL;
      v88 = 20LL;
      v90 = 40LL;
      v92 = 8LL;
      v94 = 12LL;
      v96 = 24LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03928,
        (unsigned __int8 *)byte_1400316CD,
        0LL,
        0LL,
        0x21u,
        &v33);
    }
  }
}
