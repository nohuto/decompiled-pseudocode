__int64 __fastcall SymCryptSha1AppendBlocks(int *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  int v4; // r11d
  int v5; // r12d
  int v6; // r10d
  int v7; // ebp
  int v8; // r15d
  unsigned int *v9; // r9
  int v10; // eax
  int v11; // edx
  int v12; // r12d
  int v13; // r8d
  int v14; // r11d
  unsigned __int32 v15; // edi
  int v16; // edx
  int v17; // eax
  int v18; // r9d
  int v19; // edx
  int v20; // r8d
  unsigned __int32 v21; // r14d
  int v22; // r9d
  int v23; // eax
  int v24; // r10d
  int v25; // r8d
  int v26; // ecx
  int v27; // r9d
  unsigned __int32 v28; // r15d
  int v29; // r10d
  unsigned __int32 v30; // r12d
  int v31; // r11d
  unsigned __int32 v32; // r13d
  int v33; // edx
  int v34; // r10d
  int v35; // ecx
  int v36; // r11d
  int v37; // r8d
  int v38; // ecx
  int v39; // edx
  int v40; // r9d
  int v41; // ecx
  int v42; // r8d
  int v43; // r10d
  int v44; // ecx
  int v45; // r9d
  int v46; // r11d
  int v47; // ecx
  int v48; // r10d
  int v49; // edx
  int v50; // r8d
  int v51; // r11d
  int v52; // ecx
  int v53; // edx
  int v54; // r9d
  int v55; // ecx
  int v56; // r8d
  int v57; // r10d
  int v58; // ecx
  int v59; // r9d
  int v60; // ebx
  int v61; // ecx
  int v62; // r10d
  int v63; // ebp
  int v64; // ecx
  int v65; // ebx
  int v66; // esi
  int v67; // edx
  unsigned __int32 v68; // r15d
  int v69; // ecx
  int v70; // ebp
  int v71; // edi
  int v72; // r9d
  unsigned __int32 v73; // r14d
  int v74; // r11d
  unsigned __int32 v75; // r10d
  int v76; // r8d
  int v77; // ecx
  int v78; // esi
  int v79; // r11d
  int v80; // ecx
  int v81; // edi
  int v82; // edx
  int v83; // ecx
  int v84; // r11d
  int v85; // r8d
  int v86; // ecx
  int v87; // edx
  int v88; // r9d
  int v89; // r10d
  int v90; // r8d
  int v91; // ecx
  int v92; // r9d
  int v93; // r11d
  int v94; // ecx
  int v95; // r10d
  int v96; // r13d
  int v97; // edx
  int v98; // ecx
  int v99; // r11d
  int v100; // r8d
  int v101; // esi
  int v102; // r9d
  int v103; // edx
  int v104; // ecx
  int v105; // r8d
  int v106; // r10d
  int v107; // ecx
  int v108; // r9d
  int v109; // r11d
  int v110; // ecx
  int v111; // r10d
  int v112; // edx
  int v113; // ecx
  int v114; // r11d
  int v115; // r8d
  int v116; // r9d
  int v117; // edx
  int v118; // ecx
  int v119; // r8d
  int v120; // r10d
  int v121; // ecx
  int v122; // edi
  int v123; // r9d
  int v124; // r14d
  int v125; // r11d
  int v126; // r12d
  int v127; // ecx
  int v128; // r10d
  int v129; // edx
  int v130; // r13d
  int v131; // ecx
  int v132; // r11d
  int v133; // r8d
  int v134; // r9d
  int v135; // r15d
  int v136; // edx
  int v137; // ecx
  int v138; // r8d
  int v139; // r10d
  int v140; // ecx
  int v141; // r9d
  int v142; // r11d
  int v143; // ecx
  int v144; // r10d
  int v145; // ebx
  int v146; // ecx
  int v147; // r11d
  int v148; // r8d
  int v149; // r9d
  int v150; // ebx
  int v151; // ecx
  int v152; // r8d
  int v153; // ebp
  int v154; // eax
  int v155; // r10d
  int v156; // ecx
  int v157; // r9d
  int v158; // ecx
  int v159; // eax
  int v160; // r11d
  int v161; // ecx
  int v162; // r10d
  int v163; // ebx
  int v164; // ecx
  int v165; // r11d
  int v166; // edi
  int v167; // r15d
  int v168; // ecx
  int v169; // ebx
  int v170; // esi
  int v171; // ecx
  int v172; // edi
  int v173; // r8d
  int v174; // eax
  int v175; // ecx
  int v176; // esi
  int v177; // r9d
  int v178; // ecx
  int v179; // r8d
  int v180; // r10d
  int v181; // ecx
  int v182; // r9d
  int v183; // r11d
  int v184; // ecx
  int v185; // r10d
  int v186; // eax
  int v187; // edi
  int v188; // ecx
  int v189; // r11d
  int v190; // r8d
  int v191; // ecx
  int v192; // edi
  int v193; // esi
  int v194; // ecx
  int v195; // r8d
  int v196; // r10d
  int v197; // ebp
  int v198; // ecx
  int v199; // esi
  int v200; // ebx
  int v201; // eax
  int v202; // ecx
  int v203; // ebp
  int v204; // r9d
  int v205; // eax
  int v206; // ecx
  int v207; // ebx
  int v208; // r14d
  int v209; // r11d
  int v210; // r10d
  int v211; // r13d
  int v212; // r9d
  int v213; // ecx
  int v214; // r11d
  int v215; // r8d
  int v216; // eax
  int v217; // r10d
  int v218; // edx
  int v219; // eax
  int v220; // r8d
  int v221; // r9d
  int v222; // eax
  int v223; // edx
  int v224; // r11d
  int v225; // eax
  int v226; // r9d
  int v227; // r10d
  int v228; // eax
  int v229; // r11d
  int v230; // r8d
  int v231; // eax
  int v232; // edi
  int v233; // r10d
  int v234; // r13d
  int v235; // edx
  int v236; // eax
  int v237; // r8d
  int v238; // r9d
  int v239; // eax
  int v240; // edx
  int v241; // r11d
  int v242; // ebx
  int v243; // r9d
  int v244; // r12d
  int v245; // eax
  int v246; // r11d
  int v247; // r15d
  int v248; // r8d
  int v249; // edi
  int v250; // r14d
  int v251; // eax
  int v252; // ebx
  int v253; // esi
  int v254; // eax
  int v255; // edi
  int v256; // ebp
  int v257; // eax
  int v258; // esi
  int v259; // edx
  int v260; // r10d
  int v261; // eax
  int v262; // ebp
  int v263; // r8d
  int v264; // eax
  int v265; // r10d
  int v266; // r13d
  int v267; // edi
  int v268; // r9d
  int v269; // eax
  int v270; // r8d
  int v271; // esi
  int v272; // eax
  int v273; // r9d
  int v274; // ebp
  int v275; // r15d
  int v276; // r10d
  int v277; // eax
  int v278; // ebp
  int v279; // r12d
  int v280; // r11d
  int v281; // eax
  bool v282; // zf
  unsigned __int32 v284; // [rsp+0h] [rbp-108h]
  int v285; // [rsp+0h] [rbp-108h]
  int v286; // [rsp+0h] [rbp-108h]
  int v287; // [rsp+4h] [rbp-104h]
  int v288; // [rsp+4h] [rbp-104h]
  int v289; // [rsp+4h] [rbp-104h]
  int v290; // [rsp+4h] [rbp-104h]
  int v291; // [rsp+8h] [rbp-100h]
  int v292; // [rsp+8h] [rbp-100h]
  int v293; // [rsp+8h] [rbp-100h]
  unsigned __int32 v294; // [rsp+Ch] [rbp-FCh]
  int v295; // [rsp+Ch] [rbp-FCh]
  int v296; // [rsp+Ch] [rbp-FCh]
  int v297; // [rsp+Ch] [rbp-FCh]
  int v298; // [rsp+Ch] [rbp-FCh]
  unsigned __int32 v299; // [rsp+10h] [rbp-F8h]
  int v300; // [rsp+10h] [rbp-F8h]
  int v301; // [rsp+10h] [rbp-F8h]
  int v302; // [rsp+10h] [rbp-F8h]
  int v303; // [rsp+10h] [rbp-F8h]
  unsigned __int32 v304; // [rsp+14h] [rbp-F4h]
  int v305; // [rsp+14h] [rbp-F4h]
  int v306; // [rsp+14h] [rbp-F4h]
  int v307; // [rsp+14h] [rbp-F4h]
  unsigned __int32 v308; // [rsp+18h] [rbp-F0h]
  int v309; // [rsp+18h] [rbp-F0h]
  int v310; // [rsp+18h] [rbp-F0h]
  int v311; // [rsp+18h] [rbp-F0h]
  int v312; // [rsp+1Ch] [rbp-ECh]
  int v313; // [rsp+1Ch] [rbp-ECh]
  int v314; // [rsp+1Ch] [rbp-ECh]
  unsigned __int32 v315; // [rsp+20h] [rbp-E8h]
  int v316; // [rsp+20h] [rbp-E8h]
  int v317; // [rsp+20h] [rbp-E8h]
  int v318; // [rsp+20h] [rbp-E8h]
  int v319; // [rsp+24h] [rbp-E4h]
  int v320; // [rsp+24h] [rbp-E4h]
  int v321; // [rsp+28h] [rbp-E0h]
  int v322; // [rsp+28h] [rbp-E0h]
  int v323; // [rsp+28h] [rbp-E0h]
  int v324; // [rsp+2Ch] [rbp-DCh]
  int v325; // [rsp+2Ch] [rbp-DCh]
  unsigned __int32 v326; // [rsp+30h] [rbp-D8h]
  int v327; // [rsp+30h] [rbp-D8h]
  int v328; // [rsp+30h] [rbp-D8h]
  int v329; // [rsp+34h] [rbp-D4h]
  int v330; // [rsp+34h] [rbp-D4h]
  unsigned __int32 v331; // [rsp+38h] [rbp-D0h]
  int v332; // [rsp+38h] [rbp-D0h]
  int v333; // [rsp+38h] [rbp-D0h]
  unsigned __int32 v334; // [rsp+3Ch] [rbp-CCh]
  int v335; // [rsp+3Ch] [rbp-CCh]
  int v336; // [rsp+3Ch] [rbp-CCh]
  unsigned __int32 v337; // [rsp+40h] [rbp-C8h]
  int v338; // [rsp+40h] [rbp-C8h]
  int v339; // [rsp+40h] [rbp-C8h]
  unsigned __int32 v340; // [rsp+44h] [rbp-C4h]
  int v341; // [rsp+44h] [rbp-C4h]
  int v342; // [rsp+48h] [rbp-C0h]
  int v343; // [rsp+48h] [rbp-C0h]
  int v344; // [rsp+4Ch] [rbp-BCh]
  int v345; // [rsp+50h] [rbp-B8h]
  int v346; // [rsp+54h] [rbp-B4h]
  int v347; // [rsp+58h] [rbp-B0h]
  int v348; // [rsp+5Ch] [rbp-ACh]
  unsigned int *v349; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v350; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v352; // [rsp+78h] [rbp-90h]

  v4 = *a1;
  v5 = a1[1];
  v6 = a1[2];
  v7 = a1[3];
  v8 = a1[4];
  if ( a3 >= 0x40 )
  {
    v344 = *a1;
    v9 = (unsigned int *)(a2 + 8);
    v350 = a3 >> 6;
    v345 = a1[1];
    v346 = a1[2];
    v352 = -64LL * (a3 >> 6) + a3;
    v347 = a1[3];
    v348 = a1[4];
    v349 = (unsigned int *)(a2 + 8);
    do
    {
      v299 = _byteswap_ulong(*(v9 - 1));
      v10 = __ROL4__(v4, 5);
      v11 = v7 ^ v5 & (v6 ^ v7);
      v12 = __ROR4__(v5, 2);
      v13 = v6 ^ v4 & (v12 ^ v6);
      v14 = __ROR4__(v4, 2);
      v15 = _byteswap_ulong(*(v9 - 2));
      v16 = v8 + 1518500249 + v15 + v10 + v11;
      v17 = __ROL4__(v16, 5);
      v18 = v12 ^ v16 & (v14 ^ v12);
      v19 = __ROR4__(v16, 2);
      v20 = v7 + 1518500249 + v299 + v17 + v13;
      v21 = _byteswap_ulong(*v349);
      v22 = v6 + 1518500249 + v21 + __ROL4__(v20, 5) + v18;
      v23 = __ROL4__(v22, 5);
      v24 = v20 & (v14 ^ v19);
      v25 = __ROR4__(v20, 2);
      v26 = v22 & (v25 ^ v19);
      v27 = __ROR4__(v22, 2);
      v28 = _byteswap_ulong(v349[1]);
      v29 = v12 + v28 + v23 + 1518500249 + (v14 ^ v24);
      v30 = _byteswap_ulong(v349[2]);
      v31 = v30 + __ROL4__(v29, 5) + 1518500249 + (v19 ^ v26) + v14;
      v32 = _byteswap_ulong(v349[3]);
      v33 = v32 + __ROL4__(v31, 5) + 1518500249 + (v25 ^ v29 & (v27 ^ v25)) + v19;
      v34 = __ROR4__(v29, 2);
      v35 = v27 ^ v31 & (v34 ^ v27);
      v36 = __ROR4__(v31, 2);
      v326 = _byteswap_ulong(v349[4]);
      v37 = v326 + 1518500249 + __ROL4__(v33, 5) + v35 + v25;
      v38 = v34 ^ v33 & (v36 ^ v34);
      v39 = __ROR4__(v33, 2);
      v308 = _byteswap_ulong(v349[5]);
      v40 = v308 + 1518500249 + __ROL4__(v37, 5) + v38 + v27;
      v41 = v36 ^ v37 & (v36 ^ v39);
      v42 = __ROR4__(v37, 2);
      v331 = _byteswap_ulong(v349[7]);
      v294 = _byteswap_ulong(v349[6]);
      v43 = v294 + __ROL4__(v40, 5) + 1518500249 + v41 + v34;
      v44 = v40 & (v42 ^ v39);
      v45 = __ROR4__(v40, 2);
      v46 = v331 + 1518500249 + __ROL4__(v43, 5) + (v39 ^ v44) + v36;
      v47 = v42 ^ v43 & (v45 ^ v42);
      v48 = __ROR4__(v43, 2);
      v337 = _byteswap_ulong(v349[8]);
      v49 = v337 + 1518500249 + __ROL4__(v46, 5) + v47 + v39;
      v284 = _byteswap_ulong(v349[9]);
      v50 = v284 + 1518500249 + __ROL4__(v49, 5) + (v45 ^ v46 & (v48 ^ v45)) + v42;
      v315 = _byteswap_ulong(v349[10]);
      v51 = __ROR4__(v46, 2);
      v52 = v49 & (v51 ^ v48);
      v53 = __ROR4__(v49, 2);
      v54 = v315 + 1518500249 + __ROL4__(v50, 5) + (v48 ^ v52) + v45;
      v55 = v51 ^ v50 & (v51 ^ v53);
      v56 = __ROR4__(v50, 2);
      v340 = _byteswap_ulong(v349[11]);
      v57 = v340 + 1518500249 + __ROL4__(v54, 5) + v55 + v48;
      v58 = v53 ^ v54 & (v56 ^ v53);
      v59 = __ROR4__(v54, 2);
      v334 = _byteswap_ulong(v349[12]);
      v60 = v51 + v58 + 1518500249 + __ROL4__(v57, 5) + v334;
      v61 = v56 ^ v57 & (v59 ^ v56);
      v62 = __ROR4__(v57, 2);
      v304 = _byteswap_ulong(v349[13]);
      v291 = __ROL4__(v15 ^ v294 ^ v340 ^ v21, 1);
      v63 = v304 + __ROL4__(v60, 5) + v61 + v53 + 1518500249;
      v64 = v59 ^ v60 & (v62 ^ v59);
      v65 = __ROR4__(v60, 2);
      v66 = v291 + __ROL4__(v63, 5) + v64 + v56 + 1518500249;
      v300 = __ROL4__(v28 ^ v334 ^ v331 ^ v299, 1);
      v67 = v28 ^ v32 ^ v291 ^ v284;
      v68 = v315;
      v69 = v62 ^ v63 & (v65 ^ v62);
      v70 = __ROR4__(v63, 2);
      v287 = __ROL4__(v67, 1);
      v71 = v300 + __ROL4__(v66, 5) + v69 + v59 + 1518500249;
      v72 = v21 ^ v30;
      v73 = v337;
      v74 = v62 + 1518500249;
      v75 = v326;
      v338 = __ROL4__(v337 ^ v304 ^ v72, 1);
      v76 = __ROL4__(v30 ^ v315 ^ v326 ^ v300, 1);
      v316 = __ROL4__(v340 ^ v32 ^ v308 ^ v338, 1);
      v77 = v65 ^ v66 & (v65 ^ v70);
      v78 = __ROR4__(v66, 2);
      v327 = v76;
      v79 = v338 + __ROL4__(v71, 5) + v77 + v74;
      v80 = v70 ^ v71 & (v78 ^ v70);
      v81 = __ROR4__(v71, 2);
      v82 = v65 + v80 + 1518500249 + __ROL4__(v79, 5) + v287;
      v83 = v79 ^ v81 ^ v78;
      v84 = __ROR4__(v79, 2);
      v85 = v76 + __ROL4__(v82, 5) + v83 + v70 + 1859775393;
      v86 = v82 ^ v84 ^ v81;
      v87 = __ROR4__(v82, 2);
      v88 = v78 + v86 + 1859775393 + __ROL4__(v85, 5) + v316;
      v321 = __ROL4__(v294 ^ v334 ^ v75 ^ v287, 1);
      v89 = v321 + __ROL4__(v88, 5) + (v87 ^ v84 ^ v85) + v81 + 1859775393;
      v309 = __ROL4__(v304 ^ v331 ^ v308 ^ v327, 1);
      v90 = __ROR4__(v85, 2);
      v91 = v309 + 1859775393 + __ROL4__(v89, 5) + (v87 ^ v88 ^ v90);
      v92 = __ROR4__(v88, 2);
      v93 = v91 + v84;
      v295 = __ROL4__(v73 ^ v294 ^ v316 ^ v291, 1);
      v94 = v89 ^ v92 ^ v90;
      v95 = __ROR4__(v89, 2);
      v96 = v300;
      v97 = v295 + 1859775393 + __ROL4__(v93, 5) + v94 + v87;
      v98 = v93 ^ v95 ^ v92;
      v324 = __ROL4__(v321 ^ v331 ^ v300 ^ v284, 1);
      v99 = __ROR4__(v93, 2);
      v100 = v324 + 1859775393 + __ROL4__(v97, 5) + v98 + v90;
      v101 = __ROL4__(v73 ^ v309 ^ v68 ^ v338, 1);
      v102 = v101 + __ROL4__(v100, 5) + 1859775393 + (v97 ^ v99 ^ v95) + v92;
      v103 = __ROR4__(v97, 2);
      v104 = v99 ^ v100;
      v105 = __ROR4__(v100, 2);
      v285 = __ROL4__(v340 ^ v295 ^ v287 ^ v284, 1);
      v106 = v285 + 1859775393 + __ROL4__(v102, 5) + (v103 ^ v104) + v95;
      v107 = v103 ^ v102 ^ v105;
      v312 = __ROL4__(v324 ^ v334 ^ v68 ^ v327, 1);
      v108 = __ROR4__(v102, 2);
      v109 = v312 + 1859775393 + __ROL4__(v106, 5) + v107 + v99;
      v110 = v106 ^ v108 ^ v105;
      v301 = __ROL4__(v304 ^ v101 ^ v340 ^ v316, 1);
      v111 = __ROR4__(v106, 2);
      v112 = v301 + __ROL4__(v109, 5) + 1859775393 + v110 + v103;
      v113 = v109 ^ v111 ^ v108;
      v319 = __ROL4__(v285 ^ v334 ^ v321 ^ v291, 1);
      v114 = __ROR4__(v109, 2);
      v115 = v319 + 1859775393 + __ROL4__(v112, 5) + v113 + v105;
      v305 = __ROL4__(v304 ^ v312 ^ v309 ^ v96, 1);
      v116 = v305 + 1859775393 + __ROL4__(v115, 5) + (v112 ^ v114 ^ v111) + v108;
      v292 = __ROL4__(v301 ^ v295 ^ v338 ^ v291, 1);
      v117 = __ROR4__(v112, 2);
      v118 = v117 ^ v114 ^ v115;
      v119 = __ROR4__(v115, 2);
      v120 = v292 + 1859775393 + __ROL4__(v116, 5) + v118 + v111;
      v121 = v117 ^ v116 ^ v119;
      v122 = __ROL4__(v319 ^ v324 ^ v96 ^ v287, 1);
      v123 = __ROR4__(v116, 2);
      v124 = __ROL4__(v101 ^ v305 ^ v338 ^ v327, 1);
      v125 = v122 + __ROL4__(v120, 5) + 1859775393 + v121 + v114;
      v126 = __ROL4__(v292 ^ v285 ^ v316 ^ v287, 1);
      v288 = v122;
      v127 = v120 ^ v123 ^ v119;
      v128 = __ROR4__(v120, 2);
      v129 = v124 + __ROL4__(v125, 5) + 1859775393 + v127 + v117;
      v130 = __ROL4__(v122 ^ v312 ^ v321 ^ v327, 1);
      v131 = v125 ^ v128 ^ v123;
      v132 = __ROR4__(v125, 2);
      v133 = v126 + __ROL4__(v129, 5) + 1859775393 + v131 + v119;
      v134 = v130 + __ROL4__(v133, 5) + 1859775393 + (v129 ^ v132 ^ v128) + v123;
      v135 = v124 ^ v301 ^ v309 ^ v316;
      v310 = __ROL4__(v130 ^ v305 ^ v324 ^ v309, 1);
      v136 = __ROR4__(v129, 2);
      v137 = v136 ^ v132 ^ v133;
      v138 = __ROR4__(v133, 2);
      v317 = __ROL4__(v135, 1);
      v139 = v317 + __ROL4__(v134, 5) + 1859775393 + v137 + v128;
      v322 = __ROL4__(v126 ^ v319 ^ v295 ^ v321, 1);
      v140 = v136 ^ v134 ^ v138;
      v141 = __ROR4__(v134, 2);
      v142 = v322 + __ROL4__(v139, 5) + 1859775393 + v140 + v132;
      v143 = v139 ^ v141 ^ v138;
      v144 = __ROR4__(v139, 2);
      v145 = v310 + __ROL4__(v142, 5) + v143 + v136 + 1859775393;
      v296 = __ROL4__(v101 ^ v317 ^ v292 ^ v295, 1);
      v146 = v142 & v144 | v141 & (v142 | v144);
      v147 = __ROR4__(v142, 2);
      v148 = v296 - 1894007588 + v146 + __ROL4__(v145, 5) + v138;
      v325 = __ROL4__(v322 ^ v122 ^ v285 ^ v324, 1);
      v149 = v325 - 1894007588 + (v145 & v147 | v144 & (v145 | v147)) + __ROL4__(v148, 5) + v141;
      v150 = __ROR4__(v145, 2);
      v151 = v150 & v148 | v147 & (v150 | v148);
      v152 = __ROR4__(v148, 2);
      v153 = v101 ^ v310 ^ v124 ^ v312;
      v313 = __ROL4__(v325 ^ v130 ^ v319 ^ v312, 1);
      v342 = __ROL4__(v153, 1);
      v286 = __ROL4__(v296 ^ v126 ^ v301 ^ v285, 1);
      v154 = v149 & v152;
      v155 = v342 + v151 - 1894007588 + __ROL4__(v149, 5) + v144;
      v302 = __ROL4__(v317 ^ v342 ^ v305 ^ v301, 1);
      v156 = v150 & (v149 | v152);
      v157 = __ROR4__(v149, 2);
      v158 = v154 | v156;
      v159 = v155 & v157;
      v160 = v286 + v158 - 1894007588 + __ROL4__(v155, 5) + v147;
      v161 = v152 & (v155 | v157);
      v162 = __ROR4__(v155, 2);
      v163 = v313 - 1894007588 + (v159 | v161) + __ROL4__(v160, 5) + v150;
      v164 = v160 & v162 | v157 & (v160 | v162);
      v165 = __ROR4__(v160, 2);
      v166 = v302 - 1894007588 + v164 + v152 + __ROL4__(v163, 5);
      v167 = __ROL4__(v286 ^ v322 ^ v292 ^ v319, 1);
      v168 = v167 + (v163 & v165 | v162 & (v163 | v165)) - 1894007588;
      v169 = __ROR4__(v163, 2);
      v170 = v168 + v157 + __ROL4__(v166, 5);
      v306 = __ROL4__(v313 ^ v310 ^ v288 ^ v305, 1);
      v171 = v306 + (v169 & v166 | v165 & (v169 | v166));
      v172 = __ROR4__(v166, 2);
      v293 = __ROL4__(v302 ^ v296 ^ v124 ^ v292, 1);
      v173 = v171 - 1894007588 + v162 + __ROL4__(v170, 5);
      v174 = v170 & v172;
      v289 = __ROL4__(v167 ^ v325 ^ v126 ^ v288, 1);
      v175 = v169 & (v170 | v172);
      v176 = __ROR4__(v170, 2);
      v177 = v293 + (v174 | v175) - 1894007588 + v165 + __ROL4__(v173, 5);
      v178 = v173 & v176 | v172 & (v173 | v176);
      v179 = __ROR4__(v173, 2);
      v180 = v289 + v178 - 1894007588 + v169 + __ROL4__(v177, 5);
      v328 = __ROL4__(v306 ^ v130 ^ v124 ^ v342, 1);
      v181 = v328 + (v177 & v179 | v176 & (v177 | v179)) - 1894007588;
      v182 = __ROR4__(v177, 2);
      v183 = v181 + v172 + __ROL4__(v180, 5);
      v332 = __ROL4__(v286 ^ v317 ^ v126 ^ v293, 1);
      v335 = __ROL4__(v313 ^ v322 ^ v130 ^ v289, 1);
      v339 = __ROL4__(v167 ^ v296 ^ v322 ^ v332, 1);
      v184 = v180 & v182 | v179 & (v180 | v182);
      v185 = __ROR4__(v180, 2);
      v186 = v185 & v183;
      v187 = v332 + v184 - 1894007588 + v176 + __ROL4__(v183, 5);
      v188 = v182 & (v185 | v183);
      v189 = __ROR4__(v183, 2);
      v341 = __ROL4__(v302 ^ v310 ^ v317 ^ v328, 1);
      v190 = v179 + (v186 | v188) - 1894007588 + v335 + __ROL4__(v187, 5);
      v191 = v187 & v189 | v185 & (v187 | v189);
      v192 = __ROR4__(v187, 2);
      v193 = v182 + v191 - 1894007588 + v341 + __ROL4__(v190, 5);
      v194 = v185 - 1894007588 + (v190 & v192 | v189 & (v190 | v192));
      v195 = __ROR4__(v190, 2);
      v196 = v342;
      v197 = v194 + v339 + __ROL4__(v193, 5);
      v329 = __ROL4__(v306 ^ v325 ^ v310 ^ v335, 1);
      v343 = __ROL4__(v296 ^ v342 ^ v293 ^ v341, 1);
      v198 = v189 - 1894007588 + (v193 & v195 | v192 & (v193 | v195));
      v199 = __ROR4__(v193, 2);
      v200 = v198 + v329 + __ROL4__(v197, 5);
      v201 = v197 & v199;
      v202 = v195 & (v197 | v199);
      v203 = __ROR4__(v197, 2);
      v204 = v192 - 1894007588 + (v201 | v202) + v343 + __ROL4__(v200, 5);
      v205 = v203 & v200;
      v206 = v203 | v200;
      v207 = __ROR4__(v200, 2);
      v208 = __ROL4__(v286 ^ v325 ^ v289 ^ v339, 1);
      v209 = v195 - 1894007588 + (v205 | v199 & v206) + v208 + __ROL4__(v204, 5);
      v297 = __ROL4__(v313 ^ v196 ^ v328 ^ v329, 1);
      v210 = v199 + (v204 & v207 | v203 & (v204 | v207)) - 1894007588 + v297 + __ROL4__(v209, 5);
      v211 = v289;
      v212 = __ROR4__(v204, 2);
      v318 = __ROL4__(v302 ^ v286 ^ v332 ^ v343, 1);
      v213 = v209 & v212 | v207 & (v209 | v212);
      v214 = __ROR4__(v209, 2);
      v215 = v203 + v213 - 1894007588 + __ROL4__(v210, 5) + v318;
      v314 = __ROL4__(v167 ^ v313 ^ v335 ^ v208, 1);
      v303 = __ROL4__(v306 ^ v302 ^ v341 ^ v297, 1);
      v323 = __ROL4__(v167 ^ v293 ^ v318 ^ v339, 1);
      v216 = (v210 ^ v214 ^ v212) - 899497514;
      v217 = __ROR4__(v210, 2);
      v218 = v207 + v216 + v314 + __ROL4__(v215, 5);
      v290 = __ROL4__(v306 ^ v314 ^ v289 ^ v329, 1);
      v219 = v212 + (v215 ^ v217 ^ v214);
      v220 = __ROR4__(v215, 2);
      v221 = v219 - 899497514 + v303 + __ROL4__(v218, 5);
      v222 = v217 ^ v218;
      v223 = __ROR4__(v218, 2);
      v224 = v214 + (v220 ^ v222) - 899497514 + v323 + __ROL4__(v221, 5);
      v225 = v217 + (v220 ^ v221 ^ v223) - 899497514;
      v226 = __ROR4__(v221, 2);
      v227 = v225 + __ROL4__(v224, 5) + v290;
      v228 = v220 + (v224 ^ v226 ^ v223);
      v229 = __ROR4__(v224, 2);
      v307 = __ROL4__(v303 ^ v293 ^ v328 ^ v343, 1);
      v230 = v228 - 899497514 + v307 + __ROL4__(v227, 5);
      v231 = v223 + (v227 ^ v229 ^ v226) - 899497514;
      v232 = __ROL4__(v323 ^ v211 ^ v332 ^ v208, 1);
      v233 = __ROR4__(v227, 2);
      v234 = __ROL4__(v290 ^ v328 ^ v335 ^ v297, 1);
      v235 = v231 + v232 + __ROL4__(v230, 5);
      v320 = v232;
      v333 = __ROL4__(v307 ^ v318 ^ v332 ^ v341, 1);
      v336 = __ROL4__(v232 ^ v314 ^ v335 ^ v339, 1);
      v236 = v230 ^ v233 ^ v229;
      v237 = __ROR4__(v230, 2);
      v238 = v226 + v236 - 899497514 + __ROL4__(v235, 5) + v234;
      v239 = v233 ^ v235;
      v240 = __ROR4__(v235, 2);
      v241 = v229 + (v237 ^ v239) - 899497514 + v333 + __ROL4__(v238, 5);
      v242 = v233 + (v237 ^ v238 ^ v240) - 899497514 + v336 + __ROL4__(v241, 5);
      v243 = __ROR4__(v238, 2);
      v244 = __ROL4__(v333 ^ v323 ^ v339 ^ v343, 1);
      v245 = v237 - 899497514 + (v241 ^ v243 ^ v240);
      v246 = __ROR4__(v241, 2);
      v247 = __ROL4__(v234 ^ v303 ^ v341 ^ v329, 1);
      v248 = __ROL4__(v244 ^ v232 ^ v318 ^ v208, 1);
      v249 = v245 + v247 + __ROL4__(v242, 5);
      v250 = __ROL4__(v336 ^ v290 ^ v329 ^ v208, 1);
      v311 = v248;
      v251 = v240 - 899497514 + (v242 ^ v246 ^ v243);
      v252 = __ROR4__(v242, 2);
      v253 = v251 + v244 + __ROL4__(v249, 5);
      v254 = v243 - 899497514 + (v249 ^ v252 ^ v246);
      v255 = __ROR4__(v249, 2);
      v256 = v254 + v250 + __ROL4__(v253, 5);
      v257 = v255 ^ v252 ^ v253;
      v258 = __ROR4__(v253, 2);
      v259 = __ROL4__(v307 ^ v247 ^ v343 ^ v297, 1);
      v260 = v246 + v257 - 899497514 + v259 + __ROL4__(v256, 5);
      v261 = (v255 ^ v256 ^ v258) - 899497514;
      v262 = __ROR4__(v256, 2);
      v263 = v252 + v261 + __ROL4__(v260, 5) + v248;
      v298 = __ROL4__(v234 ^ v250 ^ v314 ^ v297, 1);
      v264 = v255 - 899497514 + (v260 ^ v262 ^ v258);
      v265 = __ROR4__(v260, 2);
      v266 = __ROL4__(v333 ^ v303 ^ v259 ^ v318, 1);
      v267 = __ROL4__(v298 ^ v247 ^ v290 ^ v303, 1);
      v268 = v264 + __ROL4__(v263, 5) + v298;
      v269 = v258 - 899497514 + (v263 ^ v265 ^ v262);
      v270 = __ROR4__(v263, 2);
      v330 = v269 + v266 + __ROL4__(v268, 5);
      v271 = __ROL4__(v336 ^ v323 ^ v314 ^ v311, 1);
      v272 = v262 + (v268 ^ v270 ^ v265) - 899497514;
      v273 = __ROR4__(v268, 2);
      v274 = v272 + v271 + __ROL4__(v330, 5);
      v275 = __ROR4__(v330, 2);
      v276 = v265 + (v273 ^ v270 ^ v330) - 899497514 + v267 + __ROL4__(v274, 5);
      v277 = (v273 ^ v274 ^ v275) - 899497514;
      v278 = __ROR4__(v274, 2);
      v279 = v270 + v277 + __ROL4__(v244 ^ v307 ^ v266 ^ v323, 1) + __ROL4__(v276, 5);
      v280 = __ROL4__(v279, 5);
      v5 = v345 + v279;
      v281 = v344 + (v276 ^ v278 ^ v275);
      v7 = v347 + v278;
      v8 = v348 + v275;
      v4 = v273 - 899497514 + v281 + __ROL4__(v320 ^ v271 ^ v250 ^ v290, 1) + v280;
      v9 = v349 + 16;
      v6 = v346 + __ROR4__(v276, 2);
      v282 = v350-- == 1;
      *a1 = v4;
      a1[1] = v5;
      a1[2] = v6;
      a1[3] = v7;
      a1[4] = v8;
      v349 += 16;
      v344 = v4;
      v345 = v5;
      v346 = v6;
      v347 = v7;
      v348 = v8;
    }
    while ( !v282 );
    a3 = v352;
  }
  *a4 = a3;
  return 0LL;
}
