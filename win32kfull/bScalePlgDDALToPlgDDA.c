__int64 __fastcall bScalePlgDDALToPlgDDA(__int64 a1, _DWORD *a2)
{
  signed __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  signed __int64 v9; // rcx
  __int64 v10; // rax
  signed __int64 v11; // rcx
  __int64 v12; // rax
  signed __int64 v13; // rcx
  __int64 v14; // rax
  signed __int64 v15; // rcx
  __int64 v16; // rax
  signed __int64 v17; // rcx
  CCHAR MostSignificantBit; // al
  __int64 v19; // rax
  signed __int64 v20; // rcx
  CCHAR v21; // al
  __int64 v22; // rax
  signed __int64 v23; // rcx
  CCHAR v24; // al
  __int64 v25; // rax
  signed __int64 v26; // rcx
  CCHAR v27; // al
  __int64 v28; // rax
  signed __int64 v29; // rcx
  CCHAR v30; // al
  __int64 v31; // rax
  signed __int64 v32; // rcx
  CCHAR v33; // al
  __int64 v34; // rax
  signed __int64 v35; // rcx
  CCHAR v36; // al
  __int64 v37; // rax
  signed __int64 v38; // rcx
  CCHAR v39; // al
  __int64 v40; // rax
  signed __int64 v41; // rcx
  CCHAR v42; // al
  __int64 v43; // rax
  signed __int64 v44; // rcx
  CCHAR v45; // al
  __int64 v46; // rax
  signed __int64 v47; // rcx
  CCHAR v48; // al
  __int64 v49; // rax
  signed __int64 v50; // rcx
  CCHAR v51; // al
  __int64 v52; // rax
  signed __int64 v53; // rcx
  CCHAR v54; // al
  __int64 v55; // rax
  signed __int64 v56; // rcx
  CCHAR v57; // al
  __int64 v58; // rax
  signed __int64 v59; // rcx
  CCHAR v60; // al
  __int64 v61; // rax
  signed __int64 v62; // rcx
  CCHAR v63; // al
  __int64 v64; // rax
  signed __int64 v65; // rcx
  CCHAR v66; // al
  __int64 v67; // rax
  signed __int64 v68; // rcx
  CCHAR v69; // al
  __int64 v70; // rax
  signed __int64 v71; // rcx
  CCHAR v72; // al
  __int64 v73; // rax
  signed __int64 v74; // rcx
  CCHAR v75; // al
  __int64 v76; // rax
  signed __int64 v77; // rcx
  CCHAR v78; // al
  __int64 v79; // rax
  signed __int64 v80; // rcx
  CCHAR v81; // al
  __int64 v82; // rax

  memset_0(a2, 0, 0x18CuLL);
  v4 = *(_QWORD *)(a1 + 280);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 8) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[1] = *(_DWORD *)(a1 + 8);
  if ( v4 <= 0x7FFFFFFF )
    LODWORD(v5) = *(_DWORD *)(a1 + 16);
  else
    v5 = *(__int64 *)(a1 + 16) >> (RtlFindMostSignificantBit(v4) - 30);
  a2[2] = v5;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[3] = *(_DWORD *)(a1 + 24);
  if ( v4 <= 0x7FFFFFFF )
    LODWORD(v6) = *(_DWORD *)(a1 + 32);
  else
    v6 = *(__int64 *)(a1 + 32) >> (RtlFindMostSignificantBit(v4) - 30);
  a2[4] = v6;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 40) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[5] = *(_DWORD *)(a1 + 40);
  if ( v4 <= 0x7FFFFFFF )
    LODWORD(v7) = *(_DWORD *)(a1 + 48);
  else
    v7 = *(__int64 *)(a1 + 48) >> (RtlFindMostSignificantBit(v4) - 30);
  a2[6] = v7;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 56) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[7] = *(_DWORD *)(a1 + 56);
  if ( v4 <= 0x7FFFFFFF )
    LODWORD(v8) = *(_DWORD *)(a1 + 64);
  else
    v8 = *(__int64 *)(a1 + 64) >> (RtlFindMostSignificantBit(v4) - 30);
  a2[8] = v8;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 72) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[9] = *(_DWORD *)(a1 + 72);
  v9 = *(_QWORD *)(a1 + 664);
  if ( v9 <= 0x7FFFFFFF )
    LODWORD(v10) = *(_DWORD *)(a1 + 80);
  else
    v10 = *(__int64 *)(a1 + 80) >> (RtlFindMostSignificantBit(v9) - 30);
  a2[10] = v10;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 88) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[11] = *(_DWORD *)(a1 + 88);
  v11 = *(_QWORD *)(a1 + 688);
  if ( v11 <= 0x7FFFFFFF )
    LODWORD(v12) = *(_DWORD *)(a1 + 96);
  else
    v12 = *(__int64 *)(a1 + 96) >> (RtlFindMostSignificantBit(v11) - 30);
  a2[12] = v12;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 104) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[13] = *(_DWORD *)(a1 + 104);
  v13 = *(_QWORD *)(a1 + 688);
  if ( v13 <= 0x7FFFFFFF )
    LODWORD(v14) = *(_DWORD *)(a1 + 112);
  else
    v14 = *(__int64 *)(a1 + 112) >> (RtlFindMostSignificantBit(v13) - 30);
  a2[14] = v14;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 120) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[15] = *(_DWORD *)(a1 + 120);
  v15 = *(_QWORD *)(a1 + 664);
  if ( v15 <= 0x7FFFFFFF )
    LODWORD(v16) = *(_DWORD *)(a1 + 128);
  else
    v16 = *(__int64 *)(a1 + 128) >> (RtlFindMostSignificantBit(v15) - 30);
  a2[16] = v16;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 264) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[33] = *(_DWORD *)(a1 + 264);
  v17 = *(_QWORD *)(a1 + 280);
  if ( v17 <= 0x7FFFFFFF )
  {
    a2[34] = *(_DWORD *)(a1 + 272);
    LODWORD(v19) = *(_DWORD *)(a1 + 280);
  }
  else
  {
    MostSignificantBit = RtlFindMostSignificantBit(v17);
    a2[34] = *(__int64 *)(a1 + 272) >> (MostSignificantBit - 30);
    v19 = *(__int64 *)(a1 + 280) >> (MostSignificantBit - 30);
  }
  a2[35] = v19;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 288) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[36] = *(_DWORD *)(a1 + 288);
  v20 = *(_QWORD *)(a1 + 304);
  if ( v20 <= 0x7FFFFFFF )
  {
    a2[37] = *(_DWORD *)(a1 + 296);
    LODWORD(v22) = *(_DWORD *)(a1 + 304);
  }
  else
  {
    v21 = RtlFindMostSignificantBit(v20);
    a2[37] = *(__int64 *)(a1 + 296) >> (v21 - 30);
    v22 = *(__int64 *)(a1 + 304) >> (v21 - 30);
  }
  a2[38] = v22;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 312) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[39] = *(_DWORD *)(a1 + 312);
  v23 = *(_QWORD *)(a1 + 328);
  if ( v23 <= 0x7FFFFFFF )
  {
    a2[40] = *(_DWORD *)(a1 + 320);
    LODWORD(v25) = *(_DWORD *)(a1 + 328);
  }
  else
  {
    v24 = RtlFindMostSignificantBit(v23);
    a2[40] = *(__int64 *)(a1 + 320) >> (v24 - 30);
    v25 = *(__int64 *)(a1 + 328) >> (v24 - 30);
  }
  a2[41] = v25;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 336) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[42] = *(_DWORD *)(a1 + 336);
  v26 = *(_QWORD *)(a1 + 352);
  if ( v26 <= 0x7FFFFFFF )
  {
    a2[43] = *(_DWORD *)(a1 + 344);
    LODWORD(v28) = *(_DWORD *)(a1 + 352);
  }
  else
  {
    v27 = RtlFindMostSignificantBit(v26);
    a2[43] = *(__int64 *)(a1 + 344) >> (v27 - 30);
    v28 = *(__int64 *)(a1 + 352) >> (v27 - 30);
  }
  a2[44] = v28;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 360) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[45] = *(_DWORD *)(a1 + 360);
  v29 = *(_QWORD *)(a1 + 376);
  if ( v29 <= 0x7FFFFFFF )
  {
    a2[46] = *(_DWORD *)(a1 + 368);
    LODWORD(v31) = *(_DWORD *)(a1 + 376);
  }
  else
  {
    v30 = RtlFindMostSignificantBit(v29);
    a2[46] = *(__int64 *)(a1 + 368) >> (v30 - 30);
    v31 = *(__int64 *)(a1 + 376) >> (v30 - 30);
  }
  a2[47] = v31;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 384) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[48] = *(_DWORD *)(a1 + 384);
  v32 = *(_QWORD *)(a1 + 400);
  if ( v32 <= 0x7FFFFFFF )
  {
    a2[49] = *(_DWORD *)(a1 + 392);
    LODWORD(v34) = *(_DWORD *)(a1 + 400);
  }
  else
  {
    v33 = RtlFindMostSignificantBit(v32);
    a2[49] = *(__int64 *)(a1 + 392) >> (v33 - 30);
    v34 = *(__int64 *)(a1 + 400) >> (v33 - 30);
  }
  a2[50] = v34;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 408) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[51] = *(_DWORD *)(a1 + 408);
  v35 = *(_QWORD *)(a1 + 424);
  if ( v35 <= 0x7FFFFFFF )
  {
    a2[52] = *(_DWORD *)(a1 + 416);
    LODWORD(v37) = *(_DWORD *)(a1 + 424);
  }
  else
  {
    v36 = RtlFindMostSignificantBit(v35);
    a2[52] = *(__int64 *)(a1 + 416) >> (v36 - 30);
    v37 = *(__int64 *)(a1 + 424) >> (v36 - 30);
  }
  a2[53] = v37;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 432) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[54] = *(_DWORD *)(a1 + 432);
  v38 = *(_QWORD *)(a1 + 448);
  if ( v38 <= 0x7FFFFFFF )
  {
    a2[55] = *(_DWORD *)(a1 + 440);
    LODWORD(v40) = *(_DWORD *)(a1 + 448);
  }
  else
  {
    v39 = RtlFindMostSignificantBit(v38);
    a2[55] = *(__int64 *)(a1 + 440) >> (v39 - 30);
    v40 = *(__int64 *)(a1 + 448) >> (v39 - 30);
  }
  a2[56] = v40;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 456) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[57] = *(_DWORD *)(a1 + 456);
  v41 = *(_QWORD *)(a1 + 472);
  if ( v41 <= 0x7FFFFFFF )
  {
    a2[58] = *(_DWORD *)(a1 + 464);
    LODWORD(v43) = *(_DWORD *)(a1 + 472);
  }
  else
  {
    v42 = RtlFindMostSignificantBit(v41);
    a2[58] = *(__int64 *)(a1 + 464) >> (v42 - 30);
    v43 = *(__int64 *)(a1 + 472) >> (v42 - 30);
  }
  a2[59] = v43;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 480) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[60] = *(_DWORD *)(a1 + 480);
  v44 = *(_QWORD *)(a1 + 496);
  if ( v44 <= 0x7FFFFFFF )
  {
    a2[61] = *(_DWORD *)(a1 + 488);
    LODWORD(v46) = *(_DWORD *)(a1 + 496);
  }
  else
  {
    v45 = RtlFindMostSignificantBit(v44);
    a2[61] = *(__int64 *)(a1 + 488) >> (v45 - 30);
    v46 = *(__int64 *)(a1 + 496) >> (v45 - 30);
  }
  a2[62] = v46;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 504) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[63] = *(_DWORD *)(a1 + 504);
  v47 = *(_QWORD *)(a1 + 520);
  if ( v47 <= 0x7FFFFFFF )
  {
    a2[64] = *(_DWORD *)(a1 + 512);
    LODWORD(v49) = *(_DWORD *)(a1 + 520);
  }
  else
  {
    v48 = RtlFindMostSignificantBit(v47);
    a2[64] = *(__int64 *)(a1 + 512) >> (v48 - 30);
    v49 = *(__int64 *)(a1 + 520) >> (v48 - 30);
  }
  a2[65] = v49;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 528) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[66] = *(_DWORD *)(a1 + 528);
  v50 = *(_QWORD *)(a1 + 544);
  if ( v50 <= 0x7FFFFFFF )
  {
    a2[67] = *(_DWORD *)(a1 + 536);
    LODWORD(v52) = *(_DWORD *)(a1 + 544);
  }
  else
  {
    v51 = RtlFindMostSignificantBit(v50);
    a2[67] = *(__int64 *)(a1 + 536) >> (v51 - 30);
    v52 = *(__int64 *)(a1 + 544) >> (v51 - 30);
  }
  a2[68] = v52;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 552) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[69] = *(_DWORD *)(a1 + 552);
  v53 = *(_QWORD *)(a1 + 568);
  if ( v53 <= 0x7FFFFFFF )
  {
    a2[70] = *(_DWORD *)(a1 + 560);
    LODWORD(v55) = *(_DWORD *)(a1 + 568);
  }
  else
  {
    v54 = RtlFindMostSignificantBit(v53);
    a2[70] = *(__int64 *)(a1 + 560) >> (v54 - 30);
    v55 = *(__int64 *)(a1 + 568) >> (v54 - 30);
  }
  a2[71] = v55;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 576) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[72] = *(_DWORD *)(a1 + 576);
  v56 = *(_QWORD *)(a1 + 592);
  if ( v56 <= 0x7FFFFFFF )
  {
    a2[73] = *(_DWORD *)(a1 + 584);
    LODWORD(v58) = *(_DWORD *)(a1 + 592);
  }
  else
  {
    v57 = RtlFindMostSignificantBit(v56);
    a2[73] = *(__int64 *)(a1 + 584) >> (v57 - 30);
    v58 = *(__int64 *)(a1 + 592) >> (v57 - 30);
  }
  a2[74] = v58;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 600) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[75] = *(_DWORD *)(a1 + 600);
  v59 = *(_QWORD *)(a1 + 616);
  if ( v59 <= 0x7FFFFFFF )
  {
    a2[76] = *(_DWORD *)(a1 + 608);
    LODWORD(v61) = *(_DWORD *)(a1 + 616);
  }
  else
  {
    v60 = RtlFindMostSignificantBit(v59);
    a2[76] = *(__int64 *)(a1 + 608) >> (v60 - 30);
    v61 = *(__int64 *)(a1 + 616) >> (v60 - 30);
  }
  a2[77] = v61;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 624) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[78] = *(_DWORD *)(a1 + 624);
  v62 = *(_QWORD *)(a1 + 640);
  if ( v62 <= 0x7FFFFFFF )
  {
    a2[79] = *(_DWORD *)(a1 + 632);
    LODWORD(v64) = *(_DWORD *)(a1 + 640);
  }
  else
  {
    v63 = RtlFindMostSignificantBit(v62);
    a2[79] = *(__int64 *)(a1 + 632) >> (v63 - 30);
    v64 = *(__int64 *)(a1 + 640) >> (v63 - 30);
  }
  a2[80] = v64;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 648) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[81] = *(_DWORD *)(a1 + 648);
  v65 = *(_QWORD *)(a1 + 664);
  if ( v65 <= 0x7FFFFFFF )
  {
    a2[82] = *(_DWORD *)(a1 + 656);
    LODWORD(v67) = *(_DWORD *)(a1 + 664);
  }
  else
  {
    v66 = RtlFindMostSignificantBit(v65);
    a2[82] = *(__int64 *)(a1 + 656) >> (v66 - 30);
    v67 = *(__int64 *)(a1 + 664) >> (v66 - 30);
  }
  a2[83] = v67;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 672) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[84] = *(_DWORD *)(a1 + 672);
  v68 = *(_QWORD *)(a1 + 688);
  if ( v68 <= 0x7FFFFFFF )
  {
    a2[85] = *(_DWORD *)(a1 + 680);
    LODWORD(v70) = *(_DWORD *)(a1 + 688);
  }
  else
  {
    v69 = RtlFindMostSignificantBit(v68);
    a2[85] = *(__int64 *)(a1 + 680) >> (v69 - 30);
    v70 = *(__int64 *)(a1 + 688) >> (v69 - 30);
  }
  a2[86] = v70;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 696) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[87] = *(_DWORD *)(a1 + 696);
  v71 = *(_QWORD *)(a1 + 712);
  if ( v71 <= 0x7FFFFFFF )
  {
    a2[88] = *(_DWORD *)(a1 + 704);
    LODWORD(v73) = *(_DWORD *)(a1 + 712);
  }
  else
  {
    v72 = RtlFindMostSignificantBit(v71);
    a2[88] = *(__int64 *)(a1 + 704) >> (v72 - 30);
    v73 = *(__int64 *)(a1 + 712) >> (v72 - 30);
  }
  a2[89] = v73;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 720) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[90] = *(_DWORD *)(a1 + 720);
  v74 = *(_QWORD *)(a1 + 736);
  if ( v74 <= 0x7FFFFFFF )
  {
    a2[91] = *(_DWORD *)(a1 + 728);
    LODWORD(v76) = *(_DWORD *)(a1 + 736);
  }
  else
  {
    v75 = RtlFindMostSignificantBit(v74);
    a2[91] = *(__int64 *)(a1 + 728) >> (v75 - 30);
    v76 = *(__int64 *)(a1 + 736) >> (v75 - 30);
  }
  a2[92] = v76;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 744) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[93] = *(_DWORD *)(a1 + 744);
  v77 = *(_QWORD *)(a1 + 760);
  if ( v77 <= 0x7FFFFFFF )
  {
    a2[94] = *(_DWORD *)(a1 + 752);
    LODWORD(v79) = *(_DWORD *)(a1 + 760);
  }
  else
  {
    v78 = RtlFindMostSignificantBit(v77);
    a2[94] = *(__int64 *)(a1 + 752) >> (v78 - 30);
    v79 = *(__int64 *)(a1 + 760) >> (v78 - 30);
  }
  a2[95] = v79;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 768) + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[96] = *(_DWORD *)(a1 + 768);
  v80 = *(_QWORD *)(a1 + 784);
  if ( v80 <= 0x7FFFFFFF )
  {
    a2[97] = *(_DWORD *)(a1 + 776);
    LODWORD(v82) = *(_DWORD *)(a1 + 784);
  }
  else
  {
    v81 = RtlFindMostSignificantBit(v80);
    a2[97] = *(__int64 *)(a1 + 776) >> (v81 - 30);
    v82 = *(__int64 *)(a1 + 784) >> (v81 - 30);
  }
  a2[98] = v82;
  return 1LL;
}
