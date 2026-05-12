/*
 * XREFs of StorpCSExitTelemetry @ 0x1C0051FB4
 * Callers:
 *     RaidPowerSettingCallback @ 0x1C00328A0 (RaidPowerSettingCallback.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006380 (RaidUnitCheckAndAcquirePoFx.c)
 *     _tlgKeywordOn @ 0x1C000E56C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001B09C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 */

void __fastcall StorpCSExitTelemetry(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rax
  int v12; // ecx
  unsigned __int64 v13; // rcx
  __int64 *i; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // ecx
  unsigned __int64 v24; // rcx
  char v25; // [rsp+30h] [rbp-D0h] BYREF
  char v26; // [rsp+31h] [rbp-CFh] BYREF
  char v27; // [rsp+32h] [rbp-CEh] BYREF
  char v28; // [rsp+33h] [rbp-CDh] BYREF
  int v29; // [rsp+34h] [rbp-CCh] BYREF
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+3Ch] [rbp-C4h] BYREF
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+44h] [rbp-BCh] BYREF
  int v34; // [rsp+48h] [rbp-B8h] BYREF
  int v35; // [rsp+4Ch] [rbp-B4h] BYREF
  int v36; // [rsp+50h] [rbp-B0h] BYREF
  int v37; // [rsp+54h] [rbp-ACh] BYREF
  int v38; // [rsp+58h] [rbp-A8h] BYREF
  int v39; // [rsp+5Ch] [rbp-A4h] BYREF
  int v40; // [rsp+60h] [rbp-A0h] BYREF
  int v41; // [rsp+64h] [rbp-9Ch] BYREF
  int v42; // [rsp+68h] [rbp-98h] BYREF
  int v43; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned __int64 v44; // [rsp+70h] [rbp-90h] BYREF
  __int64 v45; // [rsp+78h] [rbp-88h] BYREF
  __int64 v46; // [rsp+80h] [rbp-80h] BYREF
  __int64 v47; // [rsp+88h] [rbp-78h] BYREF
  __int64 v48; // [rsp+90h] [rbp-70h] BYREF
  __int64 v49; // [rsp+98h] [rbp-68h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v51; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v52; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v55; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v56; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v57; // [rsp+D8h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+100h] [rbp+0h] BYREF
  __int64 v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  __int64 *v62; // [rsp+130h] [rbp+30h]
  __int64 v63; // [rsp+138h] [rbp+38h]
  int *v64; // [rsp+140h] [rbp+40h]
  __int64 v65; // [rsp+148h] [rbp+48h]
  char *v66; // [rsp+150h] [rbp+50h]
  __int64 v67; // [rsp+158h] [rbp+58h]
  char *v68; // [rsp+160h] [rbp+60h]
  __int64 v69; // [rsp+168h] [rbp+68h]
  char *v70; // [rsp+170h] [rbp+70h]
  __int64 v71; // [rsp+178h] [rbp+78h]
  int *v72; // [rsp+180h] [rbp+80h]
  __int64 v73; // [rsp+188h] [rbp+88h]
  int *v74; // [rsp+190h] [rbp+90h]
  __int64 v75; // [rsp+198h] [rbp+98h]
  char *v76; // [rsp+1A0h] [rbp+A0h]
  __int64 v77; // [rsp+1A8h] [rbp+A8h]
  unsigned __int64 *v78; // [rsp+1B0h] [rbp+B0h]
  __int64 v79; // [rsp+1B8h] [rbp+B8h]
  __int64 *v80; // [rsp+1C0h] [rbp+C0h]
  __int64 v81; // [rsp+1C8h] [rbp+C8h]
  __int64 *v82; // [rsp+1D0h] [rbp+D0h]
  __int64 v83; // [rsp+1D8h] [rbp+D8h]
  __int64 *v84; // [rsp+1E0h] [rbp+E0h]
  __int64 v85; // [rsp+1E8h] [rbp+E8h]
  int *v86; // [rsp+1F0h] [rbp+F0h]
  __int64 v87; // [rsp+1F8h] [rbp+F8h]
  int *v88; // [rsp+200h] [rbp+100h]
  __int64 v89; // [rsp+208h] [rbp+108h]
  int *v90; // [rsp+210h] [rbp+110h]
  __int64 v91; // [rsp+218h] [rbp+118h]
  int *v92; // [rsp+220h] [rbp+120h]
  __int64 v93; // [rsp+228h] [rbp+128h]
  __int64 *v94; // [rsp+230h] [rbp+130h]
  __int64 v95; // [rsp+238h] [rbp+138h]
  __int64 *v96; // [rsp+240h] [rbp+140h]
  __int64 v97; // [rsp+248h] [rbp+148h]
  __int64 *v98; // [rsp+250h] [rbp+150h]
  __int64 v99; // [rsp+258h] [rbp+158h]
  int *v100; // [rsp+260h] [rbp+160h]
  __int64 v101; // [rsp+268h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v102; // [rsp+270h] [rbp+170h] BYREF
  __int64 v103; // [rsp+290h] [rbp+190h]
  __int64 v104; // [rsp+298h] [rbp+198h]
  int *v105; // [rsp+2A0h] [rbp+1A0h]
  __int64 v106; // [rsp+2A8h] [rbp+1A8h]
  int *v107; // [rsp+2B0h] [rbp+1B0h]
  __int64 v108; // [rsp+2B8h] [rbp+1B8h]
  unsigned __int64 *v109; // [rsp+2C0h] [rbp+1C0h]
  __int64 v110; // [rsp+2C8h] [rbp+1C8h]
  __int64 *v111; // [rsp+2D0h] [rbp+1D0h]
  __int64 v112; // [rsp+2D8h] [rbp+1D8h]
  __int64 *v113; // [rsp+2E0h] [rbp+1E0h]
  __int64 v114; // [rsp+2E8h] [rbp+1E8h]
  __int64 *v115; // [rsp+2F0h] [rbp+1F0h]
  __int64 v116; // [rsp+2F8h] [rbp+1F8h]
  int *v117; // [rsp+300h] [rbp+200h]
  __int64 v118; // [rsp+308h] [rbp+208h]
  int *v119; // [rsp+310h] [rbp+210h]
  __int64 v120; // [rsp+318h] [rbp+218h]
  int *v121; // [rsp+320h] [rbp+220h]
  __int64 v122; // [rsp+328h] [rbp+228h]
  int *v123; // [rsp+330h] [rbp+230h]
  __int64 v124; // [rsp+338h] [rbp+238h]
  __int64 *v125; // [rsp+340h] [rbp+240h]
  __int64 v126; // [rsp+348h] [rbp+248h]
  __int64 *v127; // [rsp+350h] [rbp+250h]
  __int64 v128; // [rsp+358h] [rbp+258h]
  __int64 *v129; // [rsp+360h] [rbp+260h]
  __int64 v130; // [rsp+368h] [rbp+268h]
  int *v131; // [rsp+370h] [rbp+270h]
  __int64 v132; // [rsp+378h] [rbp+278h]

  if ( a1 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    v2 = MEMORY[0xFFFFF78000000008];
    v3 = *(_QWORD *)(a1 + 5352);
    if ( v3 )
      *(_QWORD *)(a1 + 5360) += (MEMORY[0xFFFFF78000000008] - v3) / 0x2710uLL;
    if ( *(_QWORD *)(a1 + 5088) )
    {
      v4 = *(_QWORD *)(a1 + 5376);
      if ( v4 )
        *(_QWORD *)(a1 + 5384) += (v2 - v4) / 0x2710uLL;
      v5 = *(_QWORD *)(a1 + 5456);
      if ( v5 )
        *(_QWORD *)(a1 + 5464) += (v2 - v5) / 0x2710uLL;
      v6 = *(_QWORD *)(a1 + 5392);
      if ( v6 )
        *(_QWORD *)(a1 + 5400) += (v2 - v6) / 0x2710uLL;
      v7 = *(_QWORD *)(a1 + 5368);
      if ( v7 )
        v7 -= *(_QWORD *)(a1 + 5344);
      if ( (unsigned int)dword_1C0069058 > 5 && tlgKeywordOn(v7, 0x400000000000LL) )
      {
        v104 = 16LL;
        v103 = a1 + 5192;
        v29 = *(_DWORD *)(a1 + 56);
        v105 = &v29;
        v11 = *(_QWORD *)(v10 + 8);
        v106 = 4LL;
        v108 = 4LL;
        v110 = 8LL;
        v12 = *(_DWORD *)(v11 + 12);
        v107 = &v30;
        v30 = v12;
        v13 = v2 - *(_QWORD *)(a1 + 5344);
        v112 = 8LL;
        v109 = &v44;
        v45 = *(_QWORD *)(a1 + 5360);
        v111 = &v45;
        v46 = *(_QWORD *)(a1 + 5400);
        v113 = &v46;
        v47 = *(_QWORD *)(a1 + 5384);
        v115 = &v47;
        v31 = *(_DWORD *)(a1 + 5428);
        v117 = &v31;
        v32 = *(_DWORD *)(a1 + 5432);
        v119 = &v32;
        v33 = *(_DWORD *)(a1 + 5436);
        v121 = &v33;
        v34 = *(_DWORD *)(a1 + 5440);
        v123 = &v34;
        v125 = &v48;
        v49 = *(_QWORD *)(a1 + 5408);
        v127 = &v49;
        v50 = *(_QWORD *)(a1 + 5416);
        v129 = &v50;
        v35 = *(_DWORD *)(a1 + 5424);
        v131 = &v35;
        v44 = v13 / 0x2710;
        v114 = 8LL;
        v116 = 8LL;
        v118 = 4LL;
        v120 = 4LL;
        v122 = 4LL;
        v124 = 4LL;
        v48 = v9;
        v126 = 8LL;
        v128 = 8LL;
        v130 = 8LL;
        v132 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(v13, (unsigned __int8 *)dword_1C005F64A, v8, v9, 0x11u, &v102);
      }
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    for ( i = *(__int64 **)(a1 + 136); i != (__int64 *)(a1 + 136); i = (__int64 *)*i )
    {
      if ( RaidUnitCheckAndAcquirePoFx((__int64)(i - 7)) )
      {
        v15 = i[244];
        if ( v15 )
          i[245] += (v2 - v15) / 0x2710uLL;
        v16 = i[246];
        if ( v16 )
          i[247] += (v2 - v16) / 0x2710uLL;
        v17 = i[254];
        if ( v17 )
          i[255] += (v2 - v17) / 0x2710uLL;
        v18 = i[243];
        if ( v18 )
          v18 -= *(_QWORD *)(a1 + 5344);
        if ( (unsigned int)dword_1C0069058 > 5 )
        {
          if ( tlgKeywordOn(v18, 0x400000000000LL) )
          {
            v21 = i[211];
            v60 = a1 + 5192;
            v61 = 16LL;
            v62 = i + 240;
            v36 = *(_DWORD *)(a1 + 56);
            v64 = &v36;
            v25 = *((_BYTE *)i + 40);
            v66 = &v25;
            v26 = *((_BYTE *)i + 41);
            v68 = &v26;
            v27 = *((_BYTE *)i + 42);
            v70 = &v27;
            v22 = *(_QWORD *)(v21 + 8);
            v63 = 16LL;
            v65 = 4LL;
            v67 = 1LL;
            v23 = *(_DWORD *)(v22 + 12);
            v72 = &v37;
            v38 = *(_DWORD *)(v21 + 24);
            v74 = &v38;
            LOBYTE(v22) = (*(_DWORD *)(v21 + 32) & 0x800) != 0;
            v37 = v23;
            v28 = v22;
            v24 = v2 - *(_QWORD *)(a1 + 5344);
            v76 = &v28;
            v69 = 1LL;
            v78 = &v51;
            v52 = *(_QWORD *)(a1 + 5360);
            v80 = &v52;
            v53 = i[245];
            v82 = &v53;
            v54 = i[247];
            v84 = &v54;
            v39 = *((_DWORD *)i + 501);
            v86 = &v39;
            v40 = *((_DWORD *)i + 502);
            v88 = &v40;
            LODWORD(v22) = *((_DWORD *)i + 503);
            v71 = 1LL;
            v73 = 4LL;
            v75 = 4LL;
            v77 = 1LL;
            v51 = v24 / 0x2710;
            v79 = 8LL;
            v81 = 8LL;
            v83 = 8LL;
            v85 = 8LL;
            v87 = 4LL;
            v89 = 4LL;
            v41 = v22;
            v91 = 4LL;
            v90 = &v41;
            v42 = *((_DWORD *)i + 504);
            v92 = &v42;
            v94 = &v55;
            v56 = i[248];
            v96 = &v56;
            v57 = i[249];
            v98 = &v57;
            v43 = *((_DWORD *)i + 500);
            v100 = &v43;
            v93 = 4LL;
            v55 = v20;
            v95 = 8LL;
            v97 = 8LL;
            v99 = 8LL;
            v101 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(v24, (unsigned __int8 *)dword_1C005F883, v19, v20, 0x17u, &v59);
          }
        }
        ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)i[210]);
      }
      *(__int64 *)((char *)i + 2004) = 0LL;
      *(__int64 *)((char *)i + 2012) = 0LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *(_QWORD *)(a1 + 5428) = 0LL;
    *(_QWORD *)(a1 + 5436) = 0LL;
    *(_QWORD *)(a1 + 5344) = v2;
  }
}
