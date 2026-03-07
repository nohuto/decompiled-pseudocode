unsigned __int64 __fastcall SymCryptFdefRawSquare1024Asm(unsigned __int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rsi
  __int128 v4; // kr00_16
  unsigned __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rbp
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rbp
  unsigned __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdi
  unsigned __int64 v29; // rax
  __int64 v30; // rbp
  __int64 v31; // rbp
  unsigned __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rdi
  unsigned __int64 v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rbp
  unsigned __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rdi
  unsigned __int64 v41; // rax
  __int64 v42; // rbp
  __int64 v43; // rbp
  unsigned __int64 v44; // rax
  __int64 v45; // rdi
  unsigned __int64 *v46; // rcx
  unsigned __int64 v47; // rsi
  __int64 v48; // rbp
  unsigned __int128 v49; // kr20_16
  __int64 v50; // rdi
  unsigned __int128 v51; // kr30_16
  __int64 v52; // rbp
  unsigned __int128 v53; // kr40_16
  __int64 v54; // rdi
  unsigned __int128 v55; // kr50_16
  __int64 v56; // rbp
  unsigned __int128 v57; // kr60_16
  __int64 v58; // rdi
  unsigned __int128 v59; // kr70_16
  __int64 v60; // rbp
  unsigned __int128 v61; // kr80_16
  __int64 v62; // rdi
  unsigned __int128 v63; // kr90_16
  __int64 v64; // rbp
  unsigned __int128 v65; // krA0_16
  __int64 v66; // rdi
  unsigned __int128 v67; // krB0_16
  __int64 v68; // rbp
  unsigned __int128 v69; // krC0_16
  __int64 v70; // rdi
  unsigned __int128 v71; // krD0_16
  __int64 v72; // rbp
  unsigned __int128 v73; // krE0_16
  unsigned __int64 v74; // rsi
  __int64 v75; // rdi
  unsigned __int128 v76; // kr100_16
  __int64 v77; // rbp
  unsigned __int128 v78; // kr110_16
  __int64 v79; // rdi
  unsigned __int128 v80; // kr120_16
  __int64 v81; // rbp
  unsigned __int128 v82; // kr130_16
  __int64 v83; // rdi
  unsigned __int128 v84; // kr140_16
  __int64 v85; // rbp
  unsigned __int128 v86; // kr150_16
  __int64 v87; // rdi
  unsigned __int128 v88; // kr160_16
  __int64 v89; // rbp
  unsigned __int128 v90; // kr170_16
  __int64 v91; // rdi
  unsigned __int128 v92; // kr180_16
  __int64 v93; // rbp
  unsigned __int128 v94; // kr190_16
  __int64 v95; // rdi
  unsigned __int128 v96; // kr1A0_16
  __int64 v97; // rbp
  unsigned __int128 v98; // kr1B0_16
  unsigned __int64 v99; // rsi
  __int64 v100; // rbp
  unsigned __int128 v101; // kr1D0_16
  __int64 v102; // rdi
  unsigned __int128 v103; // kr1E0_16
  __int64 v104; // rbp
  unsigned __int128 v105; // kr1F0_16
  __int64 v106; // rdi
  unsigned __int128 v107; // kr200_16
  __int64 v108; // rbp
  unsigned __int128 v109; // kr210_16
  __int64 v110; // rdi
  unsigned __int128 v111; // kr220_16
  __int64 v112; // rbp
  unsigned __int128 v113; // kr230_16
  __int64 v114; // rdi
  unsigned __int128 v115; // kr240_16
  __int64 v116; // rbp
  unsigned __int128 v117; // kr250_16
  __int64 v118; // rdi
  unsigned __int128 v119; // kr260_16
  __int64 v120; // rbp
  unsigned __int128 v121; // kr270_16
  unsigned __int64 v122; // rsi
  __int64 v123; // rdi
  unsigned __int128 v124; // kr290_16
  __int64 v125; // rbp
  unsigned __int128 v126; // kr2A0_16
  __int64 v127; // rdi
  unsigned __int128 v128; // kr2B0_16
  __int64 v129; // rbp
  unsigned __int128 v130; // kr2C0_16
  __int64 v131; // rdi
  unsigned __int128 v132; // kr2D0_16
  __int64 v133; // rbp
  unsigned __int128 v134; // kr2E0_16
  __int64 v135; // rdi
  unsigned __int128 v136; // kr2F0_16
  __int64 v137; // rbp
  unsigned __int128 v138; // kr300_16
  __int64 v139; // rdi
  unsigned __int128 v140; // kr310_16
  __int64 v141; // rbp
  unsigned __int128 v142; // kr320_16
  unsigned __int64 v143; // rsi
  __int64 v144; // rbp
  unsigned __int128 v145; // kr340_16
  __int64 v146; // rdi
  unsigned __int128 v147; // kr350_16
  __int64 v148; // rbp
  unsigned __int128 v149; // kr360_16
  __int64 v150; // rdi
  unsigned __int128 v151; // kr370_16
  __int64 v152; // rbp
  unsigned __int128 v153; // kr380_16
  __int64 v154; // rdi
  unsigned __int128 v155; // kr390_16
  __int64 v156; // rbp
  unsigned __int128 v157; // kr3A0_16
  __int64 v158; // rdi
  unsigned __int128 v159; // kr3B0_16
  __int64 v160; // rbp
  unsigned __int128 v161; // kr3C0_16
  unsigned __int64 v162; // rsi
  __int64 v163; // rdi
  unsigned __int128 v164; // kr3E0_16
  __int64 v165; // rbp
  unsigned __int128 v166; // kr3F0_16
  __int64 v167; // rdi
  unsigned __int128 v168; // kr400_16
  __int64 v169; // rbp
  unsigned __int128 v170; // kr410_16
  __int64 v171; // rdi
  unsigned __int128 v172; // kr420_16
  __int64 v173; // rbp
  unsigned __int128 v174; // kr430_16
  __int64 v175; // rdi
  unsigned __int128 v176; // kr440_16
  __int64 v177; // rbp
  unsigned __int128 v178; // kr450_16
  unsigned __int64 v179; // rsi
  __int64 v180; // rbp
  unsigned __int128 v181; // kr470_16
  __int64 v182; // rdi
  unsigned __int128 v183; // kr480_16
  __int64 v184; // rbp
  unsigned __int128 v185; // kr490_16
  __int64 v186; // rdi
  unsigned __int128 v187; // kr4A0_16
  __int64 v188; // rbp
  unsigned __int128 v189; // kr4B0_16
  __int64 v190; // rdi
  unsigned __int128 v191; // kr4C0_16
  __int64 v192; // rbp
  unsigned __int128 v193; // kr4D0_16
  unsigned __int64 v194; // rsi
  __int64 v195; // rdi
  unsigned __int128 v196; // kr4F0_16
  __int64 v197; // rbp
  unsigned __int128 v198; // kr500_16
  __int64 v199; // rdi
  unsigned __int128 v200; // kr510_16
  __int64 v201; // rbp
  unsigned __int128 v202; // kr520_16
  __int64 v203; // rdi
  unsigned __int128 v204; // kr530_16
  __int64 v205; // rbp
  unsigned __int128 v206; // kr540_16
  unsigned __int64 v207; // rsi
  __int64 v208; // rbp
  unsigned __int128 v209; // kr560_16
  __int64 v210; // rdi
  unsigned __int128 v211; // kr570_16
  __int64 v212; // rbp
  unsigned __int128 v213; // kr580_16
  __int64 v214; // rdi
  unsigned __int128 v215; // kr590_16
  __int64 v216; // rbp
  unsigned __int128 v217; // kr5A0_16
  unsigned __int64 v218; // rsi
  __int64 v219; // rdi
  unsigned __int128 v220; // kr5C0_16
  __int64 v221; // rbp
  unsigned __int128 v222; // kr5D0_16
  __int64 v223; // rdi
  unsigned __int128 v224; // kr5E0_16
  __int64 v225; // rbp
  unsigned __int128 v226; // kr5F0_16
  unsigned __int64 v227; // rsi
  __int64 v228; // rbp
  unsigned __int128 v229; // kr610_16
  __int64 v230; // rdi
  unsigned __int128 v231; // kr620_16
  __int64 v232; // rbp
  unsigned __int128 v233; // kr630_16
  unsigned __int64 v234; // rsi
  __int64 v235; // rdi
  unsigned __int128 v236; // kr650_16
  __int64 v237; // rbp
  unsigned __int128 v238; // kr660_16
  unsigned __int64 v239; // rsi
  __int64 v240; // rbp
  unsigned __int128 v241; // kr680_16
  bool v242; // cf
  unsigned __int64 v243; // rax
  unsigned __int64 v244; // rtt
  unsigned __int64 v245; // rax
  unsigned __int64 v246; // rtt
  unsigned __int64 v247; // rax
  unsigned __int64 v248; // rtt
  unsigned __int64 v249; // rax
  unsigned __int64 v250; // rtt
  unsigned __int64 v251; // rax
  unsigned __int64 v252; // rtt
  unsigned __int64 v253; // rax
  unsigned __int64 v254; // rtt
  unsigned __int64 v255; // rax
  unsigned __int64 v256; // rtt
  unsigned __int64 v257; // rax
  unsigned __int64 v258; // rtt
  unsigned __int64 v259; // rax
  unsigned __int64 v260; // rtt
  unsigned __int64 v261; // rax
  unsigned __int64 v262; // rtt
  unsigned __int64 v263; // rax
  unsigned __int64 v264; // rtt
  unsigned __int64 v265; // rax
  unsigned __int64 v266; // rtt
  unsigned __int64 v267; // rax
  unsigned __int64 v268; // rtt
  unsigned __int64 v269; // rax
  unsigned __int64 v270; // rtt
  unsigned __int64 v271; // rax
  unsigned __int64 v272; // rtt
  unsigned __int64 v273; // rax
  unsigned __int64 v274; // rtt
  unsigned __int64 v275; // rax
  unsigned __int64 v276; // rtt
  unsigned __int64 v277; // rax
  unsigned __int64 v278; // rtt
  unsigned __int64 v279; // rax
  unsigned __int64 v280; // rtt
  unsigned __int64 v281; // rax
  unsigned __int64 v282; // rtt
  unsigned __int64 v283; // rax
  unsigned __int64 v284; // rtt
  unsigned __int64 v285; // rax
  unsigned __int64 v286; // rtt
  unsigned __int64 v287; // rax
  unsigned __int64 v288; // rtt
  unsigned __int64 v289; // rax
  unsigned __int64 v290; // rtt
  unsigned __int64 v291; // rax
  unsigned __int64 v292; // rtt
  unsigned __int64 v293; // rax
  unsigned __int64 v294; // rtt
  unsigned __int64 v295; // rax
  unsigned __int64 v296; // rtt
  unsigned __int64 v297; // rax
  unsigned __int64 v298; // rtt
  unsigned __int64 v299; // rax
  unsigned __int64 v300; // rtt
  unsigned __int64 v301; // rax
  unsigned __int64 v302; // rtt
  unsigned __int64 *v303; // rcx
  unsigned __int128 v304; // rax
  unsigned __int128 v305; // rax
  unsigned __int128 v306; // rax
  unsigned __int128 v307; // rax
  unsigned __int128 v308; // rax
  unsigned __int128 v309; // rax
  unsigned __int128 v310; // rax
  unsigned __int128 v311; // rax
  unsigned __int128 v312; // rax
  unsigned __int128 v313; // rax
  unsigned __int128 v314; // rax
  unsigned __int128 v315; // rax
  unsigned __int128 v316; // rax
  unsigned __int128 v317; // rax
  unsigned __int128 v318; // rax
  unsigned __int128 v319; // rax
  unsigned __int128 v320; // rax
  unsigned __int128 v321; // rax
  unsigned __int128 v322; // rax
  unsigned __int128 v323; // rax
  unsigned __int128 v324; // rax
  unsigned __int128 v325; // rax
  unsigned __int128 v326; // rax
  unsigned __int128 v327; // rax
  unsigned __int128 v328; // rax
  unsigned __int128 v329; // rax
  unsigned __int128 v330; // rax
  unsigned __int128 v331; // rax
  unsigned __int128 v332; // rax
  unsigned __int128 v333; // rax
  unsigned __int128 v334; // rax
  unsigned __int64 result; // rax

  v3 = *a1;
  *a3 = 0LL;
  v4 = a1[1];
  a3[1] = v3 * a1[1];
  v5 = v3 * a1[2];
  v6 = (v3 * (unsigned __int128)a1[2]) >> 64;
  a3[2] = (__PAIR128__(a1[2], v4) * v3) >> 64;
  v7 = __CFADD__(((unsigned __int128)v3 * v4) >> 64, v5) + v6;
  v8 = v3 * a1[3];
  v9 = (v3 * (unsigned __int128)a1[3]) >> 64;
  a3[3] = v7 + v8;
  v10 = __CFADD__(v7, v8) + v9;
  v11 = v3 * a1[4];
  v12 = (v3 * (unsigned __int128)a1[4]) >> 64;
  a3[4] = v10 + v11;
  v13 = __CFADD__(v10, v11) + v12;
  v14 = v3 * a1[5];
  v15 = (v3 * (unsigned __int128)a1[5]) >> 64;
  a3[5] = v13 + v14;
  v16 = __CFADD__(v13, v14) + v15;
  v17 = v3 * a1[6];
  v18 = (v3 * (unsigned __int128)a1[6]) >> 64;
  a3[6] = v16 + v17;
  v19 = __CFADD__(v16, v17) + v18;
  v20 = v3 * a1[7];
  v21 = (v3 * (unsigned __int128)a1[7]) >> 64;
  a3[7] = v19 + v20;
  v22 = __CFADD__(v19, v20) + v21;
  v23 = v3 * a1[8];
  v24 = (v3 * (unsigned __int128)a1[8]) >> 64;
  a3[8] = v22 + v23;
  v25 = __CFADD__(v22, v23) + v24;
  v26 = v3 * a1[9];
  v27 = (v3 * (unsigned __int128)a1[9]) >> 64;
  a3[9] = v25 + v26;
  v28 = __CFADD__(v25, v26) + v27;
  v29 = v3 * a1[10];
  v30 = (v3 * (unsigned __int128)a1[10]) >> 64;
  a3[10] = v28 + v29;
  v31 = __CFADD__(v28, v29) + v30;
  v32 = v3 * a1[11];
  v33 = (v3 * (unsigned __int128)a1[11]) >> 64;
  a3[11] = v31 + v32;
  v34 = __CFADD__(v31, v32) + v33;
  v35 = v3 * a1[12];
  v36 = (v3 * (unsigned __int128)a1[12]) >> 64;
  a3[12] = v34 + v35;
  v37 = __CFADD__(v34, v35) + v36;
  v38 = v3 * a1[13];
  v39 = (v3 * (unsigned __int128)a1[13]) >> 64;
  a3[13] = v37 + v38;
  v40 = __CFADD__(v37, v38) + v39;
  v41 = v3 * a1[14];
  v42 = (v3 * (unsigned __int128)a1[14]) >> 64;
  a3[14] = v40 + v41;
  v43 = __CFADD__(v40, v41) + v42;
  v44 = v3 * a1[15];
  v45 = (v3 * (unsigned __int128)a1[15]) >> 64;
  a3[15] = v43 + v44;
  a3[16] = __CFADD__(v43, v44) + v45;
  v46 = a1 + 1;
  v47 = *v46;
  v48 = (a3[3] + *v46 * (unsigned __int128)v46[1]) >> 64;
  a3[3] += *v46 * v46[1];
  v49 = a3[4] + v47 * (unsigned __int128)v46[2];
  a3[4] = v48 + v49;
  v50 = __CFADD__(v48, (_QWORD)v49) + *((_QWORD *)&v49 + 1);
  v51 = a3[5] + v47 * (unsigned __int128)v46[3];
  a3[5] = v50 + v51;
  v52 = __CFADD__(v50, (_QWORD)v51) + *((_QWORD *)&v51 + 1);
  v53 = a3[6] + v47 * (unsigned __int128)v46[4];
  a3[6] = v52 + v53;
  v54 = __CFADD__(v52, (_QWORD)v53) + *((_QWORD *)&v53 + 1);
  v55 = a3[7] + v47 * (unsigned __int128)v46[5];
  a3[7] = v54 + v55;
  v56 = __CFADD__(v54, (_QWORD)v55) + *((_QWORD *)&v55 + 1);
  v57 = a3[8] + v47 * (unsigned __int128)v46[6];
  a3[8] = v56 + v57;
  v58 = __CFADD__(v56, (_QWORD)v57) + *((_QWORD *)&v57 + 1);
  v59 = a3[9] + v47 * (unsigned __int128)v46[7];
  a3[9] = v58 + v59;
  v60 = __CFADD__(v58, (_QWORD)v59) + *((_QWORD *)&v59 + 1);
  v61 = a3[10] + v47 * (unsigned __int128)v46[8];
  a3[10] = v60 + v61;
  v62 = __CFADD__(v60, (_QWORD)v61) + *((_QWORD *)&v61 + 1);
  v63 = a3[11] + v47 * (unsigned __int128)v46[9];
  a3[11] = v62 + v63;
  v64 = __CFADD__(v62, (_QWORD)v63) + *((_QWORD *)&v63 + 1);
  v65 = a3[12] + v47 * (unsigned __int128)v46[10];
  a3[12] = v64 + v65;
  v66 = __CFADD__(v64, (_QWORD)v65) + *((_QWORD *)&v65 + 1);
  v67 = a3[13] + v47 * (unsigned __int128)v46[11];
  a3[13] = v66 + v67;
  v68 = __CFADD__(v66, (_QWORD)v67) + *((_QWORD *)&v67 + 1);
  v69 = a3[14] + v47 * (unsigned __int128)v46[12];
  a3[14] = v68 + v69;
  v70 = __CFADD__(v68, (_QWORD)v69) + *((_QWORD *)&v69 + 1);
  v71 = a3[15] + v47 * (unsigned __int128)v46[13];
  a3[15] = v70 + v71;
  v72 = __CFADD__(v70, (_QWORD)v71) + *((_QWORD *)&v71 + 1);
  v73 = a3[16] + v47 * (unsigned __int128)v46[14];
  a3[16] = v72 + v73;
  a3[17] = __CFADD__(v72, (_QWORD)v73) + *((_QWORD *)&v73 + 1);
  v74 = *++v46;
  v75 = (a3[5] + *v46 * (unsigned __int128)v46[1]) >> 64;
  a3[5] += *v46 * v46[1];
  v76 = a3[6] + v74 * (unsigned __int128)v46[2];
  a3[6] = v75 + v76;
  v77 = __CFADD__(v75, (_QWORD)v76) + *((_QWORD *)&v76 + 1);
  v78 = a3[7] + v74 * (unsigned __int128)v46[3];
  a3[7] = v77 + v78;
  v79 = __CFADD__(v77, (_QWORD)v78) + *((_QWORD *)&v78 + 1);
  v80 = a3[8] + v74 * (unsigned __int128)v46[4];
  a3[8] = v79 + v80;
  v81 = __CFADD__(v79, (_QWORD)v80) + *((_QWORD *)&v80 + 1);
  v82 = a3[9] + v74 * (unsigned __int128)v46[5];
  a3[9] = v81 + v82;
  v83 = __CFADD__(v81, (_QWORD)v82) + *((_QWORD *)&v82 + 1);
  v84 = a3[10] + v74 * (unsigned __int128)v46[6];
  a3[10] = v83 + v84;
  v85 = __CFADD__(v83, (_QWORD)v84) + *((_QWORD *)&v84 + 1);
  v86 = a3[11] + v74 * (unsigned __int128)v46[7];
  a3[11] = v85 + v86;
  v87 = __CFADD__(v85, (_QWORD)v86) + *((_QWORD *)&v86 + 1);
  v88 = a3[12] + v74 * (unsigned __int128)v46[8];
  a3[12] = v87 + v88;
  v89 = __CFADD__(v87, (_QWORD)v88) + *((_QWORD *)&v88 + 1);
  v90 = a3[13] + v74 * (unsigned __int128)v46[9];
  a3[13] = v89 + v90;
  v91 = __CFADD__(v89, (_QWORD)v90) + *((_QWORD *)&v90 + 1);
  v92 = a3[14] + v74 * (unsigned __int128)v46[10];
  a3[14] = v91 + v92;
  v93 = __CFADD__(v91, (_QWORD)v92) + *((_QWORD *)&v92 + 1);
  v94 = a3[15] + v74 * (unsigned __int128)v46[11];
  a3[15] = v93 + v94;
  v95 = __CFADD__(v93, (_QWORD)v94) + *((_QWORD *)&v94 + 1);
  v96 = a3[16] + v74 * (unsigned __int128)v46[12];
  a3[16] = v95 + v96;
  v97 = __CFADD__(v95, (_QWORD)v96) + *((_QWORD *)&v96 + 1);
  v98 = a3[17] + v74 * (unsigned __int128)v46[13];
  a3[17] = v97 + v98;
  a3[18] = __CFADD__(v97, (_QWORD)v98) + *((_QWORD *)&v98 + 1);
  v99 = *++v46;
  v100 = (a3[7] + *v46 * (unsigned __int128)v46[1]) >> 64;
  a3[7] += *v46 * v46[1];
  v101 = a3[8] + v99 * (unsigned __int128)v46[2];
  a3[8] = v100 + v101;
  v102 = __CFADD__(v100, (_QWORD)v101) + *((_QWORD *)&v101 + 1);
  v103 = a3[9] + v99 * (unsigned __int128)v46[3];
  a3[9] = v102 + v103;
  v104 = __CFADD__(v102, (_QWORD)v103) + *((_QWORD *)&v103 + 1);
  v105 = a3[10] + v99 * (unsigned __int128)v46[4];
  a3[10] = v104 + v105;
  v106 = __CFADD__(v104, (_QWORD)v105) + *((_QWORD *)&v105 + 1);
  v107 = a3[11] + v99 * (unsigned __int128)v46[5];
  a3[11] = v106 + v107;
  v108 = __CFADD__(v106, (_QWORD)v107) + *((_QWORD *)&v107 + 1);
  v109 = a3[12] + v99 * (unsigned __int128)v46[6];
  a3[12] = v108 + v109;
  v110 = __CFADD__(v108, (_QWORD)v109) + *((_QWORD *)&v109 + 1);
  v111 = a3[13] + v99 * (unsigned __int128)v46[7];
  a3[13] = v110 + v111;
  v112 = __CFADD__(v110, (_QWORD)v111) + *((_QWORD *)&v111 + 1);
  v113 = a3[14] + v99 * (unsigned __int128)v46[8];
  a3[14] = v112 + v113;
  v114 = __CFADD__(v112, (_QWORD)v113) + *((_QWORD *)&v113 + 1);
  v115 = a3[15] + v99 * (unsigned __int128)v46[9];
  a3[15] = v114 + v115;
  v116 = __CFADD__(v114, (_QWORD)v115) + *((_QWORD *)&v115 + 1);
  v117 = a3[16] + v99 * (unsigned __int128)v46[10];
  a3[16] = v116 + v117;
  v118 = __CFADD__(v116, (_QWORD)v117) + *((_QWORD *)&v117 + 1);
  v119 = a3[17] + v99 * (unsigned __int128)v46[11];
  a3[17] = v118 + v119;
  v120 = __CFADD__(v118, (_QWORD)v119) + *((_QWORD *)&v119 + 1);
  v121 = a3[18] + v99 * (unsigned __int128)v46[12];
  a3[18] = v120 + v121;
  a3[19] = __CFADD__(v120, (_QWORD)v121) + *((_QWORD *)&v121 + 1);
  v122 = *++v46;
  v123 = (a3[9] + *v46 * (unsigned __int128)v46[1]) >> 64;
  a3[9] += *v46 * v46[1];
  v124 = a3[10] + v122 * (unsigned __int128)v46[2];
  a3[10] = v123 + v124;
  v125 = __CFADD__(v123, (_QWORD)v124) + *((_QWORD *)&v124 + 1);
  v126 = a3[11] + v122 * (unsigned __int128)v46[3];
  a3[11] = v125 + v126;
  v127 = __CFADD__(v125, (_QWORD)v126) + *((_QWORD *)&v126 + 1);
  v128 = a3[12] + v122 * (unsigned __int128)v46[4];
  a3[12] = v127 + v128;
  v129 = __CFADD__(v127, (_QWORD)v128) + *((_QWORD *)&v128 + 1);
  v130 = a3[13] + v122 * (unsigned __int128)v46[5];
  a3[13] = v129 + v130;
  v131 = __CFADD__(v129, (_QWORD)v130) + *((_QWORD *)&v130 + 1);
  v132 = a3[14] + v122 * (unsigned __int128)v46[6];
  a3[14] = v131 + v132;
  v133 = __CFADD__(v131, (_QWORD)v132) + *((_QWORD *)&v132 + 1);
  v134 = a3[15] + v122 * (unsigned __int128)v46[7];
  a3[15] = v133 + v134;
  v135 = __CFADD__(v133, (_QWORD)v134) + *((_QWORD *)&v134 + 1);
  v136 = a3[16] + v122 * (unsigned __int128)v46[8];
  a3[16] = v135 + v136;
  v137 = __CFADD__(v135, (_QWORD)v136) + *((_QWORD *)&v136 + 1);
  v138 = a3[17] + v122 * (unsigned __int128)v46[9];
  a3[17] = v137 + v138;
  v139 = __CFADD__(v137, (_QWORD)v138) + *((_QWORD *)&v138 + 1);
  v140 = a3[18] + v122 * (unsigned __int128)v46[10];
  a3[18] = v139 + v140;
  v141 = __CFADD__(v139, (_QWORD)v140) + *((_QWORD *)&v140 + 1);
  v142 = a3[19] + v122 * (unsigned __int128)v46[11];
  a3[19] = v141 + v142;
  a3[20] = __CFADD__(v141, (_QWORD)v142) + *((_QWORD *)&v142 + 1);
  v143 = *++v46;
  v144 = (a3[11] + *v46 * (unsigned __int128)v46[1]) >> 64;
  a3[11] += *v46 * v46[1];
  v145 = a3[12] + v143 * (unsigned __int128)v46[2];
  a3[12] = v144 + v145;
  v146 = __CFADD__(v144, (_QWORD)v145) + *((_QWORD *)&v145 + 1);
  v147 = a3[13] + v143 * (unsigned __int128)v46[3];
  a3[13] = v146 + v147;
  v148 = __CFADD__(v146, (_QWORD)v147) + *((_QWORD *)&v147 + 1);
  v149 = a3[14] + v143 * (unsigned __int128)v46[4];
  a3[14] = v148 + v149;
  v150 = __CFADD__(v148, (_QWORD)v149) + *((_QWORD *)&v149 + 1);
  v151 = a3[15] + v143 * (unsigned __int128)v46[5];
  a3[15] = v150 + v151;
  v152 = __CFADD__(v150, (_QWORD)v151) + *((_QWORD *)&v151 + 1);
  v153 = a3[16] + v143 * (unsigned __int128)v46[6];
  a3[16] = v152 + v153;
  v154 = __CFADD__(v152, (_QWORD)v153) + *((_QWORD *)&v153 + 1);
  v155 = a3[17] + v143 * (unsigned __int128)v46[7];
  a3[17] = v154 + v155;
  v156 = __CFADD__(v154, (_QWORD)v155) + *((_QWORD *)&v155 + 1);
  v157 = a3[18] + v143 * (unsigned __int128)v46[8];
  a3[18] = v156 + v157;
  v158 = __CFADD__(v156, (_QWORD)v157) + *((_QWORD *)&v157 + 1);
  v159 = a3[19] + v143 * (unsigned __int128)v46[9];
  a3[19] = v158 + v159;
  v160 = __CFADD__(v158, (_QWORD)v159) + *((_QWORD *)&v159 + 1);
  v161 = a3[20] + v143 * (unsigned __int128)v46[10];
  a3[20] = v160 + v161;
  a3[21] = __CFADD__(v160, (_QWORD)v161) + *((_QWORD *)&v161 + 1);
  v162 = *++v46;
  v163 = (a3[13] + *v46 * (unsigned __int128)v46[1]) >> 64;
  a3[13] += *v46 * v46[1];
  v164 = a3[14] + v162 * (unsigned __int128)v46[2];
  a3[14] = v163 + v164;
  v165 = __CFADD__(v163, (_QWORD)v164) + *((_QWORD *)&v164 + 1);
  v166 = a3[15] + v162 * (unsigned __int128)v46[3];
  a3[15] = v165 + v166;
  v167 = __CFADD__(v165, (_QWORD)v166) + *((_QWORD *)&v166 + 1);
  v168 = a3[16] + v162 * (unsigned __int128)v46[4];
  a3[16] = v167 + v168;
  v169 = __CFADD__(v167, (_QWORD)v168) + *((_QWORD *)&v168 + 1);
  v170 = a3[17] + v162 * (unsigned __int128)v46[5];
  a3[17] = v169 + v170;
  v171 = __CFADD__(v169, (_QWORD)v170) + *((_QWORD *)&v170 + 1);
  v172 = a3[18] + v162 * (unsigned __int128)v46[6];
  a3[18] = v171 + v172;
  v173 = __CFADD__(v171, (_QWORD)v172) + *((_QWORD *)&v172 + 1);
  v174 = a3[19] + v162 * (unsigned __int128)v46[7];
  a3[19] = v173 + v174;
  v175 = __CFADD__(v173, (_QWORD)v174) + *((_QWORD *)&v174 + 1);
  v176 = a3[20] + v162 * (unsigned __int128)v46[8];
  a3[20] = v175 + v176;
  v177 = __CFADD__(v175, (_QWORD)v176) + *((_QWORD *)&v176 + 1);
  v178 = a3[21] + v162 * (unsigned __int128)v46[9];
  a3[21] = v177 + v178;
  a3[22] = __CFADD__(v177, (_QWORD)v178) + *((_QWORD *)&v178 + 1);
  v179 = *++v46;
  v180 = (a3[15] + *v46 * (unsigned __int128)v46[1]) >> 64;
  a3[15] += *v46 * v46[1];
  v181 = a3[16] + v179 * (unsigned __int128)v46[2];
  a3[16] = v180 + v181;
  v182 = __CFADD__(v180, (_QWORD)v181) + *((_QWORD *)&v181 + 1);
  v183 = a3[17] + v179 * (unsigned __int128)v46[3];
  a3[17] = v182 + v183;
  v184 = __CFADD__(v182, (_QWORD)v183) + *((_QWORD *)&v183 + 1);
  v185 = a3[18] + v179 * (unsigned __int128)v46[4];
  a3[18] = v184 + v185;
  v186 = __CFADD__(v184, (_QWORD)v185) + *((_QWORD *)&v185 + 1);
  v187 = a3[19] + v179 * (unsigned __int128)v46[5];
  a3[19] = v186 + v187;
  v188 = __CFADD__(v186, (_QWORD)v187) + *((_QWORD *)&v187 + 1);
  v189 = a3[20] + v179 * (unsigned __int128)v46[6];
  a3[20] = v188 + v189;
  v190 = __CFADD__(v188, (_QWORD)v189) + *((_QWORD *)&v189 + 1);
  v191 = a3[21] + v179 * (unsigned __int128)v46[7];
  a3[21] = v190 + v191;
  v192 = __CFADD__(v190, (_QWORD)v191) + *((_QWORD *)&v191 + 1);
  v193 = a3[22] + v179 * (unsigned __int128)v46[8];
  a3[22] = v192 + v193;
  a3[23] = __CFADD__(v192, (_QWORD)v193) + *((_QWORD *)&v193 + 1);
  v194 = *++v46;
  v195 = (a3[17] + *v46 * (unsigned __int128)v46[1]) >> 64;
  a3[17] += *v46 * v46[1];
  v196 = a3[18] + v194 * (unsigned __int128)v46[2];
  a3[18] = v195 + v196;
  v197 = __CFADD__(v195, (_QWORD)v196) + *((_QWORD *)&v196 + 1);
  v198 = a3[19] + v194 * (unsigned __int128)v46[3];
  a3[19] = v197 + v198;
  v199 = __CFADD__(v197, (_QWORD)v198) + *((_QWORD *)&v198 + 1);
  v200 = a3[20] + v194 * (unsigned __int128)v46[4];
  a3[20] = v199 + v200;
  v201 = __CFADD__(v199, (_QWORD)v200) + *((_QWORD *)&v200 + 1);
  v202 = a3[21] + v194 * (unsigned __int128)v46[5];
  a3[21] = v201 + v202;
  v203 = __CFADD__(v201, (_QWORD)v202) + *((_QWORD *)&v202 + 1);
  v204 = a3[22] + v194 * (unsigned __int128)v46[6];
  a3[22] = v203 + v204;
  v205 = __CFADD__(v203, (_QWORD)v204) + *((_QWORD *)&v204 + 1);
  v206 = a3[23] + v194 * (unsigned __int128)v46[7];
  a3[23] = v205 + v206;
  a3[24] = __CFADD__(v205, (_QWORD)v206) + *((_QWORD *)&v206 + 1);
  v207 = *++v46;
  v208 = (a3[19] + *v46 * (unsigned __int128)v46[1]) >> 64;
  a3[19] += *v46 * v46[1];
  v209 = a3[20] + v207 * (unsigned __int128)v46[2];
  a3[20] = v208 + v209;
  v210 = __CFADD__(v208, (_QWORD)v209) + *((_QWORD *)&v209 + 1);
  v211 = a3[21] + v207 * (unsigned __int128)v46[3];
  a3[21] = v210 + v211;
  v212 = __CFADD__(v210, (_QWORD)v211) + *((_QWORD *)&v211 + 1);
  v213 = a3[22] + v207 * (unsigned __int128)v46[4];
  a3[22] = v212 + v213;
  v214 = __CFADD__(v212, (_QWORD)v213) + *((_QWORD *)&v213 + 1);
  v215 = a3[23] + v207 * (unsigned __int128)v46[5];
  a3[23] = v214 + v215;
  v216 = __CFADD__(v214, (_QWORD)v215) + *((_QWORD *)&v215 + 1);
  v217 = a3[24] + v207 * (unsigned __int128)v46[6];
  a3[24] = v216 + v217;
  a3[25] = __CFADD__(v216, (_QWORD)v217) + *((_QWORD *)&v217 + 1);
  v218 = *++v46;
  v219 = (a3[21] + *v46 * (unsigned __int128)v46[1]) >> 64;
  a3[21] += *v46 * v46[1];
  v220 = a3[22] + v218 * (unsigned __int128)v46[2];
  a3[22] = v219 + v220;
  v221 = __CFADD__(v219, (_QWORD)v220) + *((_QWORD *)&v220 + 1);
  v222 = a3[23] + v218 * (unsigned __int128)v46[3];
  a3[23] = v221 + v222;
  v223 = __CFADD__(v221, (_QWORD)v222) + *((_QWORD *)&v222 + 1);
  v224 = a3[24] + v218 * (unsigned __int128)v46[4];
  a3[24] = v223 + v224;
  v225 = __CFADD__(v223, (_QWORD)v224) + *((_QWORD *)&v224 + 1);
  v226 = a3[25] + v218 * (unsigned __int128)v46[5];
  a3[25] = v225 + v226;
  a3[26] = __CFADD__(v225, (_QWORD)v226) + *((_QWORD *)&v226 + 1);
  v227 = *++v46;
  v228 = (a3[23] + *v46 * (unsigned __int128)v46[1]) >> 64;
  a3[23] += *v46 * v46[1];
  v229 = a3[24] + v227 * (unsigned __int128)v46[2];
  a3[24] = v228 + v229;
  v230 = __CFADD__(v228, (_QWORD)v229) + *((_QWORD *)&v229 + 1);
  v231 = a3[25] + v227 * (unsigned __int128)v46[3];
  a3[25] = v230 + v231;
  v232 = __CFADD__(v230, (_QWORD)v231) + *((_QWORD *)&v231 + 1);
  v233 = a3[26] + v227 * (unsigned __int128)v46[4];
  a3[26] = v232 + v233;
  a3[27] = __CFADD__(v232, (_QWORD)v233) + *((_QWORD *)&v233 + 1);
  v234 = *++v46;
  v235 = (a3[25] + *v46 * (unsigned __int128)v46[1]) >> 64;
  a3[25] += *v46 * v46[1];
  v236 = a3[26] + v234 * (unsigned __int128)v46[2];
  a3[26] = v235 + v236;
  v237 = __CFADD__(v235, (_QWORD)v236) + *((_QWORD *)&v236 + 1);
  v238 = a3[27] + v234 * (unsigned __int128)v46[3];
  a3[27] = v237 + v238;
  a3[28] = __CFADD__(v237, (_QWORD)v238) + *((_QWORD *)&v238 + 1);
  v239 = *++v46;
  v240 = (a3[27] + *v46 * (unsigned __int128)v46[1]) >> 64;
  a3[27] += *v46 * v46[1];
  v241 = a3[28] + v239 * (unsigned __int128)v46[2];
  a3[28] = v240 + v241;
  a3[29] = __CFADD__(v240, (_QWORD)v241) + *((_QWORD *)&v241 + 1);
  *(_OWORD *)(a3 + 29) = a3[29] + v46[1] * (unsigned __int128)v46[2];
  a3[31] = 0LL;
  v242 = __CFADD__(*a3, *a3);
  *a3 *= 2LL;
  v243 = a3[1];
  v244 = v242 + v243;
  v242 = __CFADD__(v242, v243) | __CFADD__(v243, v244);
  a3[1] = v243 + v244;
  v245 = a3[2];
  v246 = v242 + v245;
  v242 = __CFADD__(v242, v245) | __CFADD__(v245, v246);
  a3[2] = v245 + v246;
  v247 = a3[3];
  v248 = v242 + v247;
  v242 = __CFADD__(v242, v247) | __CFADD__(v247, v248);
  a3[3] = v247 + v248;
  v249 = a3[4];
  v250 = v242 + v249;
  v242 = __CFADD__(v242, v249) | __CFADD__(v249, v250);
  a3[4] = v249 + v250;
  v251 = a3[5];
  v252 = v242 + v251;
  v242 = __CFADD__(v242, v251) | __CFADD__(v251, v252);
  a3[5] = v251 + v252;
  v253 = a3[6];
  v254 = v242 + v253;
  v242 = __CFADD__(v242, v253) | __CFADD__(v253, v254);
  a3[6] = v253 + v254;
  v255 = a3[7];
  v256 = v242 + v255;
  v242 = __CFADD__(v242, v255) | __CFADD__(v255, v256);
  a3[7] = v255 + v256;
  v257 = a3[8];
  v258 = v242 + v257;
  v242 = __CFADD__(v242, v257) | __CFADD__(v257, v258);
  a3[8] = v257 + v258;
  v259 = a3[9];
  v260 = v242 + v259;
  v242 = __CFADD__(v242, v259) | __CFADD__(v259, v260);
  a3[9] = v259 + v260;
  v261 = a3[10];
  v262 = v242 + v261;
  v242 = __CFADD__(v242, v261) | __CFADD__(v261, v262);
  a3[10] = v261 + v262;
  v263 = a3[11];
  v264 = v242 + v263;
  v242 = __CFADD__(v242, v263) | __CFADD__(v263, v264);
  a3[11] = v263 + v264;
  v265 = a3[12];
  v266 = v242 + v265;
  v242 = __CFADD__(v242, v265) | __CFADD__(v265, v266);
  a3[12] = v265 + v266;
  v267 = a3[13];
  v268 = v242 + v267;
  v242 = __CFADD__(v242, v267) | __CFADD__(v267, v268);
  a3[13] = v267 + v268;
  v269 = a3[14];
  v270 = v242 + v269;
  v242 = __CFADD__(v242, v269) | __CFADD__(v269, v270);
  a3[14] = v269 + v270;
  v271 = a3[15];
  v272 = v242 + v271;
  v242 = __CFADD__(v242, v271) | __CFADD__(v271, v272);
  a3[15] = v271 + v272;
  v273 = a3[16];
  v274 = v242 + v273;
  v242 = __CFADD__(v242, v273) | __CFADD__(v273, v274);
  a3[16] = v273 + v274;
  v275 = a3[17];
  v276 = v242 + v275;
  v242 = __CFADD__(v242, v275) | __CFADD__(v275, v276);
  a3[17] = v275 + v276;
  v277 = a3[18];
  v278 = v242 + v277;
  v242 = __CFADD__(v242, v277) | __CFADD__(v277, v278);
  a3[18] = v277 + v278;
  v279 = a3[19];
  v280 = v242 + v279;
  v242 = __CFADD__(v242, v279) | __CFADD__(v279, v280);
  a3[19] = v279 + v280;
  v281 = a3[20];
  v282 = v242 + v281;
  v242 = __CFADD__(v242, v281) | __CFADD__(v281, v282);
  a3[20] = v281 + v282;
  v283 = a3[21];
  v284 = v242 + v283;
  v242 = __CFADD__(v242, v283) | __CFADD__(v283, v284);
  a3[21] = v283 + v284;
  v285 = a3[22];
  v286 = v242 + v285;
  v242 = __CFADD__(v242, v285) | __CFADD__(v285, v286);
  a3[22] = v285 + v286;
  v287 = a3[23];
  v288 = v242 + v287;
  v242 = __CFADD__(v242, v287) | __CFADD__(v287, v288);
  a3[23] = v287 + v288;
  v289 = a3[24];
  v290 = v242 + v289;
  v242 = __CFADD__(v242, v289) | __CFADD__(v289, v290);
  a3[24] = v289 + v290;
  v291 = a3[25];
  v292 = v242 + v291;
  v242 = __CFADD__(v242, v291) | __CFADD__(v291, v292);
  a3[25] = v291 + v292;
  v293 = a3[26];
  v294 = v242 + v293;
  v242 = __CFADD__(v242, v293) | __CFADD__(v293, v294);
  a3[26] = v293 + v294;
  v295 = a3[27];
  v296 = v242 + v295;
  v242 = __CFADD__(v242, v295) | __CFADD__(v295, v296);
  a3[27] = v295 + v296;
  v297 = a3[28];
  v298 = v242 + v297;
  v242 = __CFADD__(v242, v297) | __CFADD__(v297, v298);
  a3[28] = v297 + v298;
  v299 = a3[29];
  v300 = v242 + v299;
  v242 = __CFADD__(v242, v299) | __CFADD__(v299, v300);
  a3[29] = v299 + v300;
  v301 = a3[30];
  v302 = v242 + v301;
  a3[30] = v301 + v302;
  a3[31] += (__CFADD__(v242, v301) | (unsigned __int8)__CFADD__(v301, v302)) + a3[31];
  v303 = a1;
  v304 = 0 + *a3 + *a1 * (unsigned __int128)*a1;
  *a3 += *a1 * *a1;
  v305 = a3[1] + (unsigned __int128)*((unsigned __int64 *)&v304 + 1);
  a3[1] = v305;
  v306 = *((unsigned __int64 *)&v305 + 1) + a3[2] + v303[1] * (unsigned __int128)v303[1];
  a3[2] = v306;
  v307 = a3[3] + (unsigned __int128)*((unsigned __int64 *)&v306 + 1);
  a3[3] = v307;
  v308 = *((unsigned __int64 *)&v307 + 1) + a3[4] + v303[2] * (unsigned __int128)v303[2];
  a3[4] = v308;
  v309 = a3[5] + (unsigned __int128)*((unsigned __int64 *)&v308 + 1);
  a3[5] = v309;
  v310 = *((unsigned __int64 *)&v309 + 1) + a3[6] + v303[3] * (unsigned __int128)v303[3];
  a3[6] = v310;
  v311 = a3[7] + (unsigned __int128)*((unsigned __int64 *)&v310 + 1);
  a3[7] = v311;
  v312 = *((unsigned __int64 *)&v311 + 1) + a3[8] + v303[4] * (unsigned __int128)v303[4];
  a3[8] = v312;
  v313 = a3[9] + (unsigned __int128)*((unsigned __int64 *)&v312 + 1);
  a3[9] = v313;
  v314 = *((unsigned __int64 *)&v313 + 1) + a3[10] + v303[5] * (unsigned __int128)v303[5];
  a3[10] = v314;
  v315 = a3[11] + (unsigned __int128)*((unsigned __int64 *)&v314 + 1);
  a3[11] = v315;
  v316 = *((unsigned __int64 *)&v315 + 1) + a3[12] + v303[6] * (unsigned __int128)v303[6];
  a3[12] = v316;
  v317 = a3[13] + (unsigned __int128)*((unsigned __int64 *)&v316 + 1);
  a3[13] = v317;
  v318 = *((unsigned __int64 *)&v317 + 1) + a3[14] + v303[7] * (unsigned __int128)v303[7];
  a3[14] = v318;
  v319 = a3[15] + (unsigned __int128)*((unsigned __int64 *)&v318 + 1);
  a3[15] = v319;
  v320 = *((unsigned __int64 *)&v319 + 1) + a3[16] + v303[8] * (unsigned __int128)v303[8];
  a3[16] = v320;
  v321 = a3[17] + (unsigned __int128)*((unsigned __int64 *)&v320 + 1);
  a3[17] = v321;
  v322 = *((unsigned __int64 *)&v321 + 1) + a3[18] + v303[9] * (unsigned __int128)v303[9];
  a3[18] = v322;
  v323 = a3[19] + (unsigned __int128)*((unsigned __int64 *)&v322 + 1);
  a3[19] = v323;
  v324 = *((unsigned __int64 *)&v323 + 1) + a3[20] + v303[10] * (unsigned __int128)v303[10];
  a3[20] = v324;
  v325 = a3[21] + (unsigned __int128)*((unsigned __int64 *)&v324 + 1);
  a3[21] = v325;
  v326 = *((unsigned __int64 *)&v325 + 1) + a3[22] + v303[11] * (unsigned __int128)v303[11];
  a3[22] = v326;
  v327 = a3[23] + (unsigned __int128)*((unsigned __int64 *)&v326 + 1);
  a3[23] = v327;
  v328 = *((unsigned __int64 *)&v327 + 1) + a3[24] + v303[12] * (unsigned __int128)v303[12];
  a3[24] = v328;
  v329 = a3[25] + (unsigned __int128)*((unsigned __int64 *)&v328 + 1);
  a3[25] = v329;
  v330 = *((unsigned __int64 *)&v329 + 1) + a3[26] + v303[13] * (unsigned __int128)v303[13];
  a3[26] = v330;
  v331 = a3[27] + (unsigned __int128)*((unsigned __int64 *)&v330 + 1);
  a3[27] = v331;
  v332 = *((unsigned __int64 *)&v331 + 1) + a3[28] + v303[14] * (unsigned __int128)v303[14];
  a3[28] = v332;
  v333 = a3[29] + (unsigned __int128)*((unsigned __int64 *)&v332 + 1);
  a3[29] = v333;
  v334 = *((unsigned __int64 *)&v333 + 1) + a3[30] + v303[15] * (unsigned __int128)v303[15];
  a3[30] = v334;
  result = a3[31] + *((_QWORD *)&v334 + 1);
  a3[31] = result;
  return result;
}
