char __fastcall EtwpWriteAppStateChangeSummary(
        __int64 a1,
        char *a2,
        unsigned int *a3,
        __int64 a4,
        int *a5,
        unsigned __int16 *a6)
{
  char v10; // al
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned int v13; // r15d
  __int64 ProcessServerSilo; // rsi
  __int64 *v15; // rax
  __int64 v16; // rax
  unsigned __int16 *v17; // r9
  unsigned __int64 v18; // r10
  char v19; // cl
  unsigned __int64 v20; // rax
  bool v21; // zf
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  int v43; // r10d
  __int64 v44; // r8
  int v46; // [rsp+30h] [rbp-D0h] BYREF
  int v47; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v48; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v49; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v50; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v51; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v52; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v53; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v54; // [rsp+68h] [rbp-98h] BYREF
  __int64 v55; // [rsp+70h] [rbp-90h] BYREF
  __int64 v56; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v57; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v58; // [rsp+88h] [rbp-78h] BYREF
  __int64 v59; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v60; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v61; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v63; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v65; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v66; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v67; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v68; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v69; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v70; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v71; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v72; // [rsp+F8h] [rbp-8h] BYREF
  _OWORD v73[2]; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 *v75; // [rsp+140h] [rbp+40h]
  __int64 v76; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v77; // [rsp+150h] [rbp+50h]
  __int64 v78; // [rsp+158h] [rbp+58h]
  unsigned __int64 *v79; // [rsp+160h] [rbp+60h]
  __int64 v80; // [rsp+168h] [rbp+68h]
  unsigned __int64 *v81; // [rsp+170h] [rbp+70h]
  __int64 v82; // [rsp+178h] [rbp+78h]
  unsigned __int64 *v83; // [rsp+180h] [rbp+80h]
  __int64 v84; // [rsp+188h] [rbp+88h]
  unsigned __int64 *v85; // [rsp+190h] [rbp+90h]
  __int64 v86; // [rsp+198h] [rbp+98h]
  unsigned __int64 *v87; // [rsp+1A0h] [rbp+A0h]
  __int64 v88; // [rsp+1A8h] [rbp+A8h]
  __int64 *v89; // [rsp+1B0h] [rbp+B0h]
  __int64 v90; // [rsp+1B8h] [rbp+B8h]
  __int64 *v91; // [rsp+1C0h] [rbp+C0h]
  __int64 v92; // [rsp+1C8h] [rbp+C8h]
  unsigned __int64 *v93; // [rsp+1D0h] [rbp+D0h]
  __int64 v94; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 *v95; // [rsp+1E0h] [rbp+E0h]
  __int64 v96; // [rsp+1E8h] [rbp+E8h]
  __int64 *v97; // [rsp+1F0h] [rbp+F0h]
  __int64 v98; // [rsp+1F8h] [rbp+F8h]
  unsigned __int64 *v99; // [rsp+200h] [rbp+100h]
  __int64 v100; // [rsp+208h] [rbp+108h]
  unsigned __int64 *v101; // [rsp+210h] [rbp+110h]
  __int64 v102; // [rsp+218h] [rbp+118h]
  __int64 *v103; // [rsp+220h] [rbp+120h]
  __int64 v104; // [rsp+228h] [rbp+128h]
  __int64 *v105; // [rsp+230h] [rbp+130h]
  __int64 v106; // [rsp+238h] [rbp+138h]
  __int64 *v107; // [rsp+240h] [rbp+140h]
  __int64 v108; // [rsp+248h] [rbp+148h]
  __int64 *v109; // [rsp+250h] [rbp+150h]
  __int64 v110; // [rsp+258h] [rbp+158h]
  unsigned __int64 *v111; // [rsp+260h] [rbp+160h]
  __int64 v112; // [rsp+268h] [rbp+168h]
  __int64 *v113; // [rsp+270h] [rbp+170h]
  __int64 v114; // [rsp+278h] [rbp+178h]
  unsigned __int64 *v115; // [rsp+280h] [rbp+180h]
  __int64 v116; // [rsp+288h] [rbp+188h]
  unsigned __int64 *v117; // [rsp+290h] [rbp+190h]
  __int64 v118; // [rsp+298h] [rbp+198h]
  unsigned __int64 *v119; // [rsp+2A0h] [rbp+1A0h]
  __int64 v120; // [rsp+2A8h] [rbp+1A8h]
  __int64 *v121; // [rsp+2B0h] [rbp+1B0h]
  __int64 v122; // [rsp+2B8h] [rbp+1B8h]
  _DWORD *v123; // [rsp+2C0h] [rbp+1C0h]
  __int64 v124; // [rsp+2C8h] [rbp+1C8h]
  __int64 v125; // [rsp+2D0h] [rbp+1D0h]
  _DWORD v126[2]; // [rsp+2D8h] [rbp+1D8h] BYREF
  char v127[16]; // [rsp+2E0h] [rbp+1E0h] BYREF
  char v128[16]; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v129; // [rsp+300h] [rbp+200h]
  __int64 v130; // [rsp+308h] [rbp+208h]
  int *v131; // [rsp+310h] [rbp+210h]
  __int64 v132; // [rsp+318h] [rbp+218h]
  _DWORD *v133; // [rsp+320h] [rbp+220h]
  __int64 v134; // [rsp+328h] [rbp+228h]
  __int64 v135; // [rsp+330h] [rbp+230h]
  _DWORD v136[2]; // [rsp+338h] [rbp+238h] BYREF
  _OWORD *v137; // [rsp+340h] [rbp+240h]
  __int64 v138; // [rsp+348h] [rbp+248h]
  __int64 *v139; // [rsp+350h] [rbp+250h]
  __int64 v140; // [rsp+358h] [rbp+258h]

  memset(v73, 0, 29);
  if ( dword_140C042B8 )
  {
    v10 = tlgKeywordOn((__int64)&dword_140C042B8, 0x200000000000LL);
    v12 = *(_QWORD *)&v73[0];
    if ( v10 )
      v12 = v11;
    *(_QWORD *)&v73[0] = v12;
  }
  else
  {
    v12 = *(_QWORD *)&v73[0];
  }
  v13 = *(_DWORD *)(a1 + 2004);
  if ( ((v13 + 1073741515) & 0xFFFFFFFB) == 0 )
    *(_QWORD *)&v73[0] = v12 | 0x100;
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  if ( PsIsHostSilo(ProcessServerSilo) )
  {
    v15 = PspNullGuid;
  }
  else
  {
    v15 = (__int64 *)(ProcessServerSilo + 1472);
    if ( ProcessServerSilo == -1472 )
      goto LABEL_10;
  }
  *(_OWORD *)((char *)v73 + 13) = *(_OWORD *)v15;
LABEL_10:
  v16 = *(_QWORD *)(a1 + 1472);
  if ( (unsigned int)dword_140C042B8 > 5 )
  {
    LOBYTE(v16) = tlgKeywordOn((__int64)&dword_140C042B8, 0x400000000000LL);
    if ( (_BYTE)v16 )
    {
      v19 = *a2;
      v20 = v18;
      v21 = *a2 == 0;
      v76 = 8LL;
      v78 = 8LL;
      LOBYTE(v20) = v21;
      v80 = 8LL;
      v48 = v20;
      v82 = 8LL;
      v75 = &v48;
      v22 = v18;
      v84 = 8LL;
      LOBYTE(v22) = v19 == 1;
      v86 = 8LL;
      v49 = v22;
      v88 = 8LL;
      v77 = &v49;
      v23 = v18;
      LOBYTE(v23) = v19 == 2;
      v90 = 8LL;
      v50 = v23;
      v92 = 8LL;
      v79 = &v50;
      v24 = v18;
      LOBYTE(v24) = v19 == 3;
      v51 = v24;
      v81 = &v51;
      v25 = v18;
      LOBYTE(v25) = v19 == 4;
      v52 = v25;
      v83 = &v52;
      v26 = v18;
      LOBYTE(v26) = v19 == 5;
      v53 = v26;
      v85 = &v53;
      v27 = v18;
      LOBYTE(v27) = v19 == 6;
      v54 = v27;
      v87 = &v54;
      v55 = *(_QWORD *)(a2 + 41);
      v89 = &v55;
      v56 = *(_QWORD *)(a2 + 49);
      v91 = &v56;
      v28 = v18;
      if ( a3 )
        LOBYTE(v28) = (*(_BYTE *)(a1 + 2171) & 7) != 0;
      v57 = v28;
      v93 = &v57;
      v29 = v18;
      v94 = 8LL;
      if ( a3 )
        LOBYTE(v29) = (*(_BYTE *)(a1 + 2171) & 0x38) != 0;
      v58 = v29;
      v95 = &v58;
      v30 = (unsigned int)v18;
      v96 = 8LL;
      if ( a3 )
        v30 = *a3;
      v59 = v30;
      v97 = &v59;
      v31 = v18;
      v98 = 8LL;
      if ( a3 )
        v31 = *(_QWORD *)(a3 + 1);
      v60 = v31;
      v99 = &v60;
      v32 = v18;
      v100 = 8LL;
      if ( a3 )
        v32 = *(_QWORD *)(a3 + 3);
      v61 = v32;
      v101 = &v61;
      v33 = (unsigned int)v18;
      v102 = 8LL;
      if ( a3 )
        v33 = a3[7];
      v62 = v33;
      v103 = &v62;
      v34 = (unsigned int)v18;
      v104 = 8LL;
      if ( a3 )
        v34 = a3[9];
      v63 = v34;
      v105 = &v63;
      v35 = (unsigned int)v18;
      v106 = 8LL;
      if ( a3 )
        v35 = a3[8];
      v64 = v35;
      v107 = &v64;
      v36 = (unsigned int)v18;
      v108 = 8LL;
      if ( a3 )
        v36 = a3[10];
      v65 = v36;
      v109 = &v65;
      v37 = v18;
      v110 = 8LL;
      if ( a3 )
        v37 = *(_QWORD *)(a3 + 5);
      v66 = v37;
      v111 = &v66;
      v112 = 8LL;
      if ( a3 )
        v38 = v13 >> 31;
      else
        v38 = (unsigned int)v18;
      v67 = v38;
      v113 = &v67;
      v39 = v18;
      v114 = 8LL;
      if ( a3 )
        LOBYTE(v39) = v13 == 0;
      v68 = v39;
      v115 = &v68;
      v40 = v18;
      v116 = 8LL;
      if ( a3 )
        LOBYTE(v40) = v13 == 1;
      v69 = v40;
      v117 = &v69;
      v118 = 8LL;
      if ( a3 )
        v41 = ((unsigned __int64)*(unsigned __int8 *)(a1 + 2171) >> 6) & 1;
      else
        v41 = v18;
      v70 = v41;
      v119 = &v70;
      v120 = 8LL;
      if ( v19 == 3 )
        v42 = *(unsigned int *)(a1 + 1832);
      else
        v42 = (unsigned int)v18;
      v71 = v42;
      v122 = 8LL;
      v121 = &v71;
      v124 = 2LL;
      v123 = v126;
      v125 = *((_QWORD *)v17 + 1);
      v126[0] = *v17;
      v126[1] = v18;
      tlgCreate1Sz_wchar_t((__int64)v127, (const size_t *)(a4 + 16));
      tlgCreate1Sz_wchar_t((__int64)v128, (const size_t *)(a4 + 272));
      v130 = 4LL;
      v132 = 4LL;
      v134 = 2LL;
      v46 = *a5;
      v129 = &v46;
      v47 = a5[1];
      v131 = &v47;
      v133 = v136;
      v135 = *((_QWORD *)a6 + 1);
      v136[0] = *a6;
      v137 = v73;
      v139 = &v72;
      v136[1] = v43;
      v138 = 29LL;
      v72 = 50331648LL;
      v140 = 8LL;
      LOBYTE(v16) = tlgWriteAgg((__int64)&dword_140C042B8, (unsigned __int8 *)&byte_1400348AD, v44, 0x24u, &v74);
    }
  }
  return v16;
}
