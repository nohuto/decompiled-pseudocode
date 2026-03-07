__int64 __fastcall sub_14002E350(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  __int64 (__fastcall ***v5)(PVOID); // rax
  __int64 v6; // rax
  __int64 v7; // rax
  PVOID v8; // r15
  void *v9; // rdx
  __int64 v10; // rbx
  __int64 (__fastcall **v11)(PVOID); // rdx
  __int64 (__fastcall *v12)(PVOID); // rax
  PVOID v13; // rbx
  PVOID v14; // rdx
  __int64 v15; // rbx
  __int64 (__fastcall **v16)(PVOID); // rdx
  __int64 (__fastcall *v17)(PVOID); // rax
  PVOID v18; // rbx
  PVOID v19; // rdx
  char v20; // bl
  __int64 (__fastcall **v21)(PVOID); // rdx
  void (__fastcall *v22)(__int64, __int64); // rax
  PVOID v23; // rbx
  PVOID v24; // rdx
  char v25; // bl
  __int64 (__fastcall **v26)(PVOID); // rdx
  void (__fastcall *v27)(__int64, __int64); // rax
  PVOID v28; // rbx
  PVOID v29; // rdx
  char v30; // bl
  __int64 (__fastcall **v31)(PVOID); // rdx
  void (__fastcall *v32)(__int64, __int64); // rax
  PVOID v33; // rbx
  PVOID v34; // rdx
  char v35; // bl
  __int64 (__fastcall **v36)(PVOID); // rdx
  __int64 (__fastcall *v37)(PVOID); // rax
  PVOID v38; // rbx
  PVOID v39; // rdx
  char v40; // bl
  __int64 (__fastcall **v41)(PVOID); // rdx
  void (__fastcall *v42)(__int64, __int64); // rax
  PVOID v43; // rbx
  PVOID v44; // rdx
  char v45; // bl
  __int64 (__fastcall **v46)(PVOID); // rdx
  void (__fastcall *v47)(__int64, __int64); // rax
  PVOID v48; // rbx
  PVOID v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rbx
  __int64 (__fastcall **v54)(PVOID); // rdx
  __int64 (__fastcall *v55)(PVOID); // rax
  PVOID v56; // rbx
  PVOID v57; // rdx
  __int64 *v58; // rbx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r14
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rbx
  __int64 (__fastcall **v65)(PVOID); // rdx
  __int64 (__fastcall *v66)(PVOID); // rax
  PVOID v67; // rbx
  PVOID v68; // rdx
  __int64 (__fastcall **v69)(PVOID); // rdx
  __int64 (__fastcall *v70)(PVOID); // rax
  PVOID v71; // rbx
  PVOID v72; // rdx
  __int64 v73; // rbx
  PVOID v74; // r14
  __int64 (__fastcall **v76)(PVOID); // [rsp+38h] [rbp-D0h] BYREF
  __int64 v77; // [rsp+40h] [rbp-C8h]
  PVOID P; // [rsp+48h] [rbp-C0h]
  __int64 v79; // [rsp+50h] [rbp-B8h]
  __int64 v80; // [rsp+58h] [rbp-B0h]
  __int64 (__fastcall **v81)(PVOID); // [rsp+60h] [rbp-A8h] BYREF
  __int64 v82; // [rsp+68h] [rbp-A0h]
  PVOID v83; // [rsp+70h] [rbp-98h]
  __int64 v84; // [rsp+78h] [rbp-90h]
  __int64 v85; // [rsp+80h] [rbp-88h]
  __int64 (__fastcall **v86)(PVOID); // [rsp+88h] [rbp-80h] BYREF
  __int16 v87; // [rsp+90h] [rbp-78h]
  PVOID v88; // [rsp+98h] [rbp-70h]
  __int64 v89; // [rsp+A0h] [rbp-68h]
  __int64 v90; // [rsp+A8h] [rbp-60h]
  __int64 (__fastcall **v91)(PVOID); // [rsp+B0h] [rbp-58h] BYREF
  __int16 v92; // [rsp+B8h] [rbp-50h]
  PVOID v93; // [rsp+C0h] [rbp-48h]
  __int64 v94; // [rsp+C8h] [rbp-40h]
  __int64 v95; // [rsp+D0h] [rbp-38h]
  __int64 (__fastcall **v96)(PVOID); // [rsp+D8h] [rbp-30h] BYREF
  __int16 v97; // [rsp+E0h] [rbp-28h]
  PVOID v98; // [rsp+E8h] [rbp-20h]
  __int64 v99; // [rsp+F0h] [rbp-18h]
  __int64 v100; // [rsp+F8h] [rbp-10h]
  __int64 (__fastcall **v101)(PVOID); // [rsp+100h] [rbp-8h] BYREF
  __int16 v102; // [rsp+108h] [rbp+0h]
  PVOID v103; // [rsp+110h] [rbp+8h]
  __int64 v104; // [rsp+118h] [rbp+10h]
  __int64 v105; // [rsp+120h] [rbp+18h]
  __int64 (__fastcall **v106)(PVOID); // [rsp+128h] [rbp+20h] BYREF
  __int16 v107; // [rsp+130h] [rbp+28h]
  PVOID v108; // [rsp+138h] [rbp+30h]
  __int64 v109; // [rsp+140h] [rbp+38h]
  __int64 v110; // [rsp+148h] [rbp+40h]
  __int64 (__fastcall **v111)(PVOID); // [rsp+150h] [rbp+48h] BYREF
  __int16 v112; // [rsp+158h] [rbp+50h]
  PVOID v113; // [rsp+160h] [rbp+58h]
  __int64 v114; // [rsp+168h] [rbp+60h]
  __int64 v115; // [rsp+170h] [rbp+68h]
  __int64 (__fastcall **v116)(PVOID); // [rsp+178h] [rbp+70h] BYREF
  __int16 v117; // [rsp+180h] [rbp+78h]
  PVOID v118; // [rsp+188h] [rbp+80h]
  __int64 v119; // [rsp+190h] [rbp+88h]
  __int64 v120; // [rsp+198h] [rbp+90h]
  __int64 (__fastcall **v121)(PVOID); // [rsp+1A0h] [rbp+98h] BYREF
  __int16 v122; // [rsp+1A8h] [rbp+A0h]
  PVOID v123; // [rsp+1B0h] [rbp+A8h]
  __int64 v124; // [rsp+1B8h] [rbp+B0h]
  __int64 v125; // [rsp+1C0h] [rbp+B8h]
  __int64 (__fastcall **v126)(PVOID); // [rsp+1C8h] [rbp+C0h] BYREF
  __int16 v127; // [rsp+1D0h] [rbp+C8h]
  PVOID v128; // [rsp+1D8h] [rbp+D0h]
  __int64 v129; // [rsp+1E0h] [rbp+D8h]
  __int64 v130; // [rsp+1E8h] [rbp+E0h]
  __int64 (__fastcall **v131)(PVOID); // [rsp+1F0h] [rbp+E8h] BYREF
  __int16 v132; // [rsp+1F8h] [rbp+F0h]
  PVOID v133; // [rsp+200h] [rbp+F8h]
  __int64 v134; // [rsp+208h] [rbp+100h]
  __int64 v135; // [rsp+210h] [rbp+108h]
  __int64 (__fastcall **v136)(PVOID); // [rsp+218h] [rbp+110h] BYREF
  __int16 v137; // [rsp+220h] [rbp+118h]
  PVOID v138; // [rsp+228h] [rbp+120h]
  __int64 v139; // [rsp+230h] [rbp+128h]
  __int64 v140; // [rsp+238h] [rbp+130h]
  __int64 (__fastcall **v141)(PVOID); // [rsp+240h] [rbp+138h] BYREF
  __int16 v142; // [rsp+248h] [rbp+140h]
  PVOID v143; // [rsp+250h] [rbp+148h]
  __int64 v144; // [rsp+258h] [rbp+150h]
  __int64 v145; // [rsp+260h] [rbp+158h]
  __int64 (__fastcall **v146)(PVOID); // [rsp+268h] [rbp+160h] BYREF
  __int16 v147; // [rsp+270h] [rbp+168h]
  PVOID v148; // [rsp+278h] [rbp+170h]
  __int64 v149; // [rsp+280h] [rbp+178h]
  __int64 v150; // [rsp+288h] [rbp+180h]
  __int64 (__fastcall **v151)(PVOID); // [rsp+290h] [rbp+188h] BYREF
  __int16 v152; // [rsp+298h] [rbp+190h]
  PVOID v153; // [rsp+2A0h] [rbp+198h]
  __int64 v154; // [rsp+2A8h] [rbp+1A0h]
  __int64 v155; // [rsp+2B0h] [rbp+1A8h]
  __int64 (__fastcall **v156)(PVOID); // [rsp+2B8h] [rbp+1B0h] BYREF
  __int16 v157; // [rsp+2C0h] [rbp+1B8h]
  PVOID v158; // [rsp+2C8h] [rbp+1C0h]
  __int64 v159; // [rsp+2D0h] [rbp+1C8h]
  __int64 v160; // [rsp+2D8h] [rbp+1D0h]
  __int64 (__fastcall **v161)(PVOID); // [rsp+2E0h] [rbp+1D8h] BYREF
  __int16 v162; // [rsp+2E8h] [rbp+1E0h]
  PVOID v163; // [rsp+2F0h] [rbp+1E8h]
  __int64 v164; // [rsp+2F8h] [rbp+1F0h]
  __int64 v165; // [rsp+300h] [rbp+1F8h]
  __int64 (__fastcall **v166)(PVOID); // [rsp+308h] [rbp+200h] BYREF
  __int16 v167; // [rsp+310h] [rbp+208h]
  PVOID v168; // [rsp+318h] [rbp+210h]
  __int64 v169; // [rsp+320h] [rbp+218h]
  __int64 v170; // [rsp+328h] [rbp+220h]
  __int64 (__fastcall **v171)(PVOID); // [rsp+330h] [rbp+228h] BYREF
  __int16 v172; // [rsp+338h] [rbp+230h]
  PVOID v173; // [rsp+340h] [rbp+238h]
  __int64 v174; // [rsp+348h] [rbp+240h]
  __int64 v175; // [rsp+350h] [rbp+248h]
  __int64 (__fastcall **v176)(PVOID); // [rsp+358h] [rbp+250h] BYREF
  __int16 v177; // [rsp+360h] [rbp+258h]
  PVOID v178; // [rsp+368h] [rbp+260h]
  __int64 v179; // [rsp+370h] [rbp+268h]
  __int64 v180; // [rsp+378h] [rbp+270h]
  __int64 (__fastcall **v181)(PVOID); // [rsp+380h] [rbp+278h] BYREF
  PVOID v182; // [rsp+390h] [rbp+288h]
  __int64 v183; // [rsp+398h] [rbp+290h]
  __int64 v184; // [rsp+3A0h] [rbp+298h]
  __int64 (__fastcall **v185)(PVOID); // [rsp+3A8h] [rbp+2A0h] BYREF
  PVOID v186; // [rsp+3B8h] [rbp+2B0h]
  __int64 v187; // [rsp+3C0h] [rbp+2B8h]
  __int64 v188; // [rsp+3C8h] [rbp+2C0h]
  __int64 (__fastcall **v189)(PVOID); // [rsp+3D8h] [rbp+2D0h] BYREF
  __int64 (__fastcall **v190)(); // [rsp+3E0h] [rbp+2D8h]
  unsigned __int64 v191; // [rsp+420h] [rbp+318h]
  BOOL v192; // [rsp+428h] [rbp+320h]
  __int64 (__fastcall **v193)(PVOID); // [rsp+438h] [rbp+330h] BYREF
  __int64 (__fastcall **v194)(); // [rsp+440h] [rbp+338h]
  unsigned __int64 v195; // [rsp+480h] [rbp+378h]
  BOOL v196; // [rsp+488h] [rbp+380h]
  __int64 (__fastcall **v197)(PVOID); // [rsp+498h] [rbp+390h] BYREF
  __int64 (__fastcall **v198)(); // [rsp+4A0h] [rbp+398h]
  unsigned __int64 v199; // [rsp+4E0h] [rbp+3D8h]
  BOOL v200; // [rsp+4E8h] [rbp+3E0h]
  __int64 (__fastcall **v201)(PVOID); // [rsp+4F8h] [rbp+3F0h] BYREF
  __int64 (__fastcall **v202)(); // [rsp+500h] [rbp+3F8h]
  unsigned __int64 v203; // [rsp+540h] [rbp+438h]
  BOOL v204; // [rsp+548h] [rbp+440h]
  __int64 (__fastcall **v205)(PVOID); // [rsp+558h] [rbp+450h] BYREF
  __int64 (__fastcall **v206)(); // [rsp+560h] [rbp+458h]
  unsigned __int64 v207; // [rsp+5A0h] [rbp+498h]
  BOOL v208; // [rsp+5A8h] [rbp+4A0h]
  __int64 (__fastcall **v209)(PVOID); // [rsp+5B8h] [rbp+4B0h] BYREF
  __int64 (__fastcall **v210)(); // [rsp+5C0h] [rbp+4B8h]
  unsigned __int64 v211; // [rsp+600h] [rbp+4F8h]
  __int64 v212; // [rsp+608h] [rbp+500h]
  __int64 v213; // [rsp+610h] [rbp+508h]
  __int64 (__fastcall **v214)(PVOID); // [rsp+618h] [rbp+510h] BYREF
  __int64 (__fastcall **v215)(); // [rsp+620h] [rbp+518h]
  unsigned __int64 v216; // [rsp+660h] [rbp+558h]
  __int64 v217; // [rsp+668h] [rbp+560h]
  __int64 v218; // [rsp+670h] [rbp+568h]
  __int64 (__fastcall **v219)(PVOID); // [rsp+678h] [rbp+570h] BYREF
  __int64 (__fastcall **v220)(); // [rsp+680h] [rbp+578h]
  unsigned __int64 v221; // [rsp+6C0h] [rbp+5B8h]
  __int64 v222; // [rsp+6C8h] [rbp+5C0h]
  __int64 v223; // [rsp+6D0h] [rbp+5C8h]
  __int64 (__fastcall **v224)(PVOID); // [rsp+6D8h] [rbp+5D0h] BYREF
  __int64 (__fastcall **v225)(); // [rsp+6E0h] [rbp+5D8h]
  unsigned __int64 v226; // [rsp+720h] [rbp+618h]
  __int64 v227; // [rsp+728h] [rbp+620h]
  __int64 v228; // [rsp+730h] [rbp+628h]
  __int64 (__fastcall **v229)(PVOID); // [rsp+738h] [rbp+630h] BYREF
  __int64 (__fastcall **v230)(); // [rsp+740h] [rbp+638h]
  unsigned __int64 v231; // [rsp+780h] [rbp+678h]
  __int64 v232; // [rsp+788h] [rbp+680h]
  __int64 v233; // [rsp+790h] [rbp+688h]
  __int64 (__fastcall **v234)(PVOID); // [rsp+798h] [rbp+690h] BYREF
  __int64 (__fastcall **v235)(); // [rsp+7A0h] [rbp+698h]
  unsigned __int64 v236; // [rsp+7E0h] [rbp+6D8h]
  BOOL v237; // [rsp+7E8h] [rbp+6E0h]

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 352) + 104LL))(a1 + 352);
  v5 = (__int64 (__fastcall ***)(PVOID))sub_14002FE14(&v185, v4);
  v6 = sub_14002D098((__int64)&v181, (__int64)L"Last wake reason was ", v5);
  v7 = sub_14002D2AC((__int64)&v76, v6, (__int64)qword_1400B6F30);
  v8 = &unk_1400D44E0;
  v9 = &unk_1400D44E0;
  if ( *(_QWORD *)(v7 + 16) )
    v9 = *(void **)(v7 + 16);
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v9, 2LL * *(_QWORD *)(v7 + 24));
  v76 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v181 = &off_1400D41D0;
  if ( v182 )
    ExFreePool(v182);
  v182 = 0LL;
  v183 = 0LL;
  v184 = 0LL;
  v185 = &off_1400D41D0;
  if ( v186 )
    ExFreePool(v186);
  v186 = 0LL;
  v187 = 0LL;
  v188 = 0LL;
  v176 = &off_1400D41D0;
  v177 = 0;
  v178 = 0LL;
  v179 = 0LL;
  v180 = 0LL;
  sub_1400011A8(&v176, (__int64)L"m_wusRegister", 0xDuLL);
  v10 = *(unsigned int *)(a1 + 504);
  sub_1400120E0((__int64)&v224, (__int64)&v176);
  v225 = off_1400D5638;
  v228 = 10LL;
  v11 = &off_1400D5610;
  v224 = &off_1400D5610;
  v226 = 0xA5A5A5A5A5000012uLL;
  v227 = v10;
  v176 = &off_1400D41D0;
  if ( v178 )
  {
    ExFreePool(v178);
    v11 = v224;
  }
  v12 = v11[4];
  v178 = 0LL;
  v179 = 0LL;
  v180 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v12)(&v224, a2);
  v81 = &off_1400D41D0;
  LOWORD(v82) = 0;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  sub_1400011A8(&v81, (__int64)qword_1400B6F30, 1uLL);
  v13 = v83;
  v14 = &unk_1400D44E0;
  if ( v83 )
    v14 = v83;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v14, 2 * v84);
  v81 = &off_1400D41D0;
  if ( v13 )
    ExFreePool(v13);
  v83 = 0LL;
  v225 = off_1400D5638;
  v84 = 0LL;
  v85 = 0LL;
  v224 = &off_1400D5610;
  sub_140005CFC(&v224);
  v86 = &off_1400D41D0;
  v87 = 0;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  sub_1400011A8(&v86, (__int64)L"m_wusExtRegister", 0x10uLL);
  v15 = *(unsigned int *)(a1 + 508);
  sub_1400120E0((__int64)&v229, (__int64)&v86);
  v230 = off_1400D5638;
  v16 = &off_1400D5610;
  v229 = &off_1400D5610;
  v231 = 0xA5A5A5A5A5000012uLL;
  v232 = v15;
  v233 = 10LL;
  v86 = &off_1400D41D0;
  if ( v88 )
  {
    ExFreePool(v88);
    v16 = v229;
  }
  v17 = v16[4];
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v17)(&v229, a2);
  v91 = &off_1400D41D0;
  v92 = 0;
  v93 = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  sub_1400011A8(&v91, (__int64)qword_1400B6F30, 1uLL);
  v18 = v93;
  v19 = &unk_1400D44E0;
  if ( v93 )
    v19 = v93;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v19, 2 * v94);
  v91 = &off_1400D41D0;
  if ( v18 )
    ExFreePool(v18);
  v93 = 0LL;
  v230 = off_1400D5638;
  v94 = 0LL;
  v95 = 0LL;
  v229 = &off_1400D5610;
  sub_140005CFC(&v229);
  v96 = &off_1400D41D0;
  v97 = 0;
  v98 = 0LL;
  v99 = 0LL;
  v100 = 0LL;
  sub_1400011A8(&v96, (__int64)L"m_magicPacketWakeEnabled", 0x18uLL);
  v20 = *(_BYTE *)(a1 + 496);
  sub_1400120E0((__int64)&v189, (__int64)&v96);
  v190 = off_1400D59C0;
  v96 = &off_1400D41D0;
  v21 = &off_1400D5998;
  v189 = &off_1400D5998;
  v191 = 0xA5A5A5A5A5000013uLL;
  v192 = v20 != 0;
  if ( v98 )
  {
    ExFreePool(v98);
    v21 = v189;
  }
  v22 = (void (__fastcall *)(__int64, __int64))v21[4];
  v98 = 0LL;
  v99 = 0LL;
  v100 = 0LL;
  if ( v22 == sub_140007740 )
    sub_140007740((__int64)&v189, a2);
  else
    v22((__int64)&v189, a2);
  v101 = &off_1400D41D0;
  v102 = 0;
  v103 = 0LL;
  v104 = 0LL;
  v105 = 0LL;
  sub_1400011A8(&v101, (__int64)qword_1400B6F30, 1uLL);
  v23 = v103;
  v24 = &unk_1400D44E0;
  if ( v103 )
    v24 = v103;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v24, 2 * v104);
  v101 = &off_1400D41D0;
  if ( v23 )
    ExFreePool(v23);
  v103 = 0LL;
  v190 = off_1400D59C0;
  v104 = 0LL;
  v105 = 0LL;
  v189 = &off_1400D5998;
  sub_140005CFC(&v189);
  v106 = &off_1400D41D0;
  v107 = 0;
  v108 = 0LL;
  v109 = 0LL;
  v110 = 0LL;
  sub_1400011A8(&v106, (__int64)L"m_linkStatusChangeWakeEnabled", 0x1DuLL);
  v25 = *(_BYTE *)(a1 + 497);
  sub_1400120E0((__int64)&v193, (__int64)&v106);
  v194 = off_1400D59C0;
  v106 = &off_1400D41D0;
  v26 = &off_1400D5998;
  v193 = &off_1400D5998;
  v195 = 0xA5A5A5A5A5000013uLL;
  v196 = v25 != 0;
  if ( v108 )
  {
    ExFreePool(v108);
    v26 = v193;
  }
  v27 = (void (__fastcall *)(__int64, __int64))v26[4];
  v108 = 0LL;
  v109 = 0LL;
  v110 = 0LL;
  if ( v27 == sub_140007740 )
    sub_140007740((__int64)&v193, a2);
  else
    v27((__int64)&v193, a2);
  v111 = &off_1400D41D0;
  v112 = 0;
  v113 = 0LL;
  v114 = 0LL;
  v115 = 0LL;
  sub_1400011A8(&v111, (__int64)qword_1400B6F30, 1uLL);
  v28 = v113;
  v29 = &unk_1400D44E0;
  if ( v113 )
    v29 = v113;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v29, 2 * v114);
  v111 = &off_1400D41D0;
  if ( v28 )
    ExFreePool(v28);
  v113 = 0LL;
  v194 = off_1400D59C0;
  v114 = 0LL;
  v115 = 0LL;
  v193 = &off_1400D5998;
  sub_140005CFC(&v193);
  v116 = &off_1400D41D0;
  v117 = 0;
  v118 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  sub_1400011A8(&v116, (__int64)L"m_unicastWakeEnabled", 0x14uLL);
  v30 = *(_BYTE *)(a1 + 498);
  sub_1400120E0((__int64)&v197, (__int64)&v116);
  v198 = off_1400D59C0;
  v116 = &off_1400D41D0;
  v31 = &off_1400D5998;
  v197 = &off_1400D5998;
  v199 = 0xA5A5A5A5A5000013uLL;
  v200 = v30 != 0;
  if ( v118 )
  {
    ExFreePool(v118);
    v31 = v197;
  }
  v32 = (void (__fastcall *)(__int64, __int64))v31[4];
  v118 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  if ( v32 == sub_140007740 )
    sub_140007740((__int64)&v197, a2);
  else
    v32((__int64)&v197, a2);
  v121 = &off_1400D41D0;
  v122 = 0;
  v123 = 0LL;
  v124 = 0LL;
  v125 = 0LL;
  sub_1400011A8(&v121, (__int64)qword_1400B6F30, 1uLL);
  v33 = v123;
  v34 = &unk_1400D44E0;
  if ( v123 )
    v34 = v123;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v34, 2 * v124);
  v121 = &off_1400D41D0;
  if ( v33 )
    ExFreePool(v33);
  v123 = 0LL;
  v198 = off_1400D59C0;
  v124 = 0LL;
  v125 = 0LL;
  v197 = &off_1400D5998;
  sub_140005CFC(&v197);
  v126 = &off_1400D41D0;
  v127 = 0;
  v128 = 0LL;
  v129 = 0LL;
  v130 = 0LL;
  sub_1400011A8(&v126, (__int64)L"m_multicastWakeEnabled", 0x16uLL);
  v35 = *(_BYTE *)(a1 + 499);
  sub_1400120E0((__int64)&v234, (__int64)&v126);
  v235 = off_1400D59C0;
  v126 = &off_1400D41D0;
  v36 = &off_1400D5998;
  v234 = &off_1400D5998;
  v236 = 0xA5A5A5A5A5000013uLL;
  v237 = v35 != 0;
  if ( v128 )
  {
    ExFreePool(v128);
    v36 = v234;
  }
  v37 = v36[4];
  v128 = 0LL;
  v129 = 0LL;
  v130 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v37)(&v234, a2);
  v131 = &off_1400D41D0;
  v132 = 0;
  v133 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  sub_1400011A8(&v131, (__int64)qword_1400B6F30, 1uLL);
  v38 = v133;
  v39 = &unk_1400D44E0;
  if ( v133 )
    v39 = v133;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v39, 2 * v134);
  v131 = &off_1400D41D0;
  if ( v38 )
    ExFreePool(v38);
  v133 = 0LL;
  v235 = off_1400D59C0;
  v134 = 0LL;
  v135 = 0LL;
  v234 = &off_1400D5998;
  sub_140005CFC(&v234);
  v136 = &off_1400D41D0;
  v137 = 0;
  v138 = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  sub_1400011A8(&v136, (__int64)L"m_broadcastWakeEnabled", 0x16uLL);
  v40 = *(_BYTE *)(a1 + 500);
  sub_1400120E0((__int64)&v201, (__int64)&v136);
  v202 = off_1400D59C0;
  v136 = &off_1400D41D0;
  v41 = &off_1400D5998;
  v201 = &off_1400D5998;
  v203 = 0xA5A5A5A5A5000013uLL;
  v204 = v40 != 0;
  if ( v138 )
  {
    ExFreePool(v138);
    v41 = v201;
  }
  v42 = (void (__fastcall *)(__int64, __int64))v41[4];
  v138 = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  if ( v42 == sub_140007740 )
    sub_140007740((__int64)&v201, a2);
  else
    v42((__int64)&v201, a2);
  v141 = &off_1400D41D0;
  v142 = 0;
  v143 = 0LL;
  v144 = 0LL;
  v145 = 0LL;
  sub_1400011A8(&v141, (__int64)qword_1400B6F30, 1uLL);
  v43 = v143;
  v44 = &unk_1400D44E0;
  if ( v143 )
    v44 = v143;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v44, 2 * v144);
  v141 = &off_1400D41D0;
  if ( v43 )
    ExFreePool(v43);
  v143 = 0LL;
  v202 = off_1400D59C0;
  v144 = 0LL;
  v145 = 0LL;
  v201 = &off_1400D5998;
  sub_140005CFC(&v201);
  v146 = &off_1400D41D0;
  v147 = 0;
  v148 = 0LL;
  v149 = 0LL;
  v150 = 0LL;
  sub_1400011A8(&v146, (__int64)L"m_flexFiltersWakeEnabled", 0x18uLL);
  v45 = *(_BYTE *)(a1 + 501);
  sub_1400120E0((__int64)&v205, (__int64)&v146);
  v206 = off_1400D59C0;
  v146 = &off_1400D41D0;
  v46 = &off_1400D5998;
  v205 = &off_1400D5998;
  v207 = 0xA5A5A5A5A5000013uLL;
  v208 = v45 != 0;
  if ( v148 )
  {
    ExFreePool(v148);
    v46 = v205;
  }
  v47 = (void (__fastcall *)(__int64, __int64))v46[4];
  v148 = 0LL;
  v149 = 0LL;
  v150 = 0LL;
  if ( v47 == sub_140007740 )
    sub_140007740((__int64)&v205, a2);
  else
    v47((__int64)&v205, a2);
  v151 = &off_1400D41D0;
  v152 = 0;
  v153 = 0LL;
  v154 = 0LL;
  v155 = 0LL;
  sub_1400011A8(&v151, (__int64)qword_1400B6F30, 1uLL);
  v48 = v153;
  v49 = &unk_1400D44E0;
  if ( v153 )
    v49 = v153;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v49, 2 * v154);
  v151 = &off_1400D41D0;
  if ( v48 )
    ExFreePool(v48);
  v153 = 0LL;
  v206 = off_1400D59C0;
  v154 = 0LL;
  v155 = 0LL;
  v205 = &off_1400D5998;
  sub_140005CFC(&v205);
  v50 = *(_QWORD *)(a1 + 432);
  v51 = 0xFFFFFFFFLL;
  v52 = *(_QWORD *)(v50 + 8);
  if ( v52 && !*(_DWORD *)(v50 + 20) )
  {
    v53 = *(unsigned int *)(v52 + 22528);
    if ( (_DWORD)v53 == -1 && *(_DWORD *)(*(_QWORD *)(v50 + 8) + 8LL) == -1 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v50 + 8LL))(v50, 3LL, 0xFFFFFFFFLL);
    }
    else
    {
      v156 = &off_1400D41D0;
      v157 = 0;
      v158 = 0LL;
      v159 = 0LL;
      v160 = 0LL;
      sub_1400011A8(&v156, (__int64)L"Register_MAC_WUC", 0x10uLL);
      sub_1400120E0((__int64)&v209, (__int64)&v156);
      v210 = off_1400D5638;
      v213 = 10LL;
      v54 = &off_1400D5610;
      v209 = &off_1400D5610;
      v211 = 0xA5A5A5A5A5000012uLL;
      v212 = v53;
      v156 = &off_1400D41D0;
      if ( v158 )
      {
        ExFreePool(v158);
        v54 = v209;
      }
      v55 = v54[4];
      v158 = 0LL;
      v159 = 0LL;
      v160 = 0LL;
      v213 = 16LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v55)(&v209, a2);
      v161 = &off_1400D41D0;
      v162 = 0;
      v163 = 0LL;
      v164 = 0LL;
      v165 = 0LL;
      sub_1400011A8(&v161, (__int64)qword_1400B6F30, 1uLL);
      v56 = v163;
      v57 = &unk_1400D44E0;
      if ( v163 )
        v57 = v163;
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v57, 2 * v164);
      v161 = &off_1400D41D0;
      if ( v56 )
        ExFreePool(v56);
      v163 = 0LL;
      v210 = off_1400D5638;
      v164 = 0LL;
      v165 = 0LL;
      v209 = &off_1400D5610;
      sub_140005CFC(&v209);
    }
    v51 = 0xFFFFFFFFLL;
  }
  v58 = (__int64 *)(a1 + 432);
  v59 = *(_QWORD *)(a1 + 432);
  v60 = *(_QWORD *)(v59 + 8);
  if ( v60 && !*(_DWORD *)(v59 + 20) )
  {
    v61 = *(unsigned int *)(v60 + 22536);
    if ( (_DWORD)v61 == -1 && *(_DWORD *)(*(_QWORD *)(v59 + 8) + 8LL) == -1 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v59 + 8LL))(v59, 3LL, 0xFFFFFFFFLL);
    }
    else
    {
      v166 = &off_1400D41D0;
      v167 = 0;
      v168 = 0LL;
      v169 = 0LL;
      v170 = 0LL;
      sub_1400011A8(&v166, (__int64)L"Register_MAC_WUFC", 0x11uLL);
      sub_1400120E0((__int64)&v214, (__int64)&v166);
      v215 = off_1400D5638;
      v65 = &off_1400D5610;
      v214 = &off_1400D5610;
      v216 = 0xA5A5A5A5A5000012uLL;
      v217 = v61;
      v218 = 10LL;
      v166 = &off_1400D41D0;
      if ( v168 )
      {
        ExFreePool(v168);
        v65 = v214;
      }
      v66 = v65[4];
      v168 = 0LL;
      v169 = 0LL;
      v170 = 0LL;
      v218 = 16LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v66)(&v214, a2);
      v171 = &off_1400D41D0;
      v172 = 0;
      v173 = 0LL;
      v174 = 0LL;
      v175 = 0LL;
      sub_1400011A8(&v171, (__int64)qword_1400B6F30, 1uLL);
      v67 = v173;
      v68 = &unk_1400D44E0;
      if ( v173 )
        v68 = v173;
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v68, 2 * v174);
      v171 = &off_1400D41D0;
      if ( v67 )
        ExFreePool(v67);
      v173 = 0LL;
      v215 = off_1400D5638;
      v214 = &off_1400D5610;
      v174 = 0LL;
      v175 = 0LL;
      sub_140005CFC(&v214);
      v58 = (__int64 *)(a1 + 432);
    }
  }
  v62 = *v58;
  v63 = *(_QWORD *)(*v58 + 8);
  if ( v63 && !*(_DWORD *)(v62 + 20) )
  {
    v64 = *(unsigned int *)(v63 + 22540);
    if ( (_DWORD)v64 == -1 && *(_DWORD *)(*(_QWORD *)(v62 + 8) + 8LL) == -1 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v62 + 8LL))(v62, 3LL, v51);
    }
    else
    {
      v76 = &off_1400D41D0;
      LOWORD(v77) = 0;
      P = 0LL;
      v79 = 0LL;
      v80 = 0LL;
      sub_1400011A8(&v76, (__int64)L"Register_MAC_IGC_WUFC_EXT", 0x19uLL);
      sub_1400120E0((__int64)&v219, (__int64)&v76);
      v220 = off_1400D5638;
      v69 = &off_1400D5610;
      v219 = &off_1400D5610;
      v221 = 0xA5A5A5A5A5000012uLL;
      v222 = v64;
      v223 = 10LL;
      if ( P )
      {
        ExFreePool(P);
        v69 = v219;
      }
      v70 = v69[4];
      v223 = 16LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v70)(&v219, a2);
      v76 = &off_1400D41D0;
      LOWORD(v77) = 0;
      P = 0LL;
      v79 = 0LL;
      v80 = 0LL;
      sub_1400011A8(&v76, (__int64)qword_1400B6F30, 1uLL);
      v71 = P;
      v72 = &unk_1400D44E0;
      if ( P )
        v72 = P;
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v72, 2 * v79);
      if ( v71 )
        ExFreePool(v71);
      v219 = &off_1400D5610;
      v220 = off_1400D5638;
      sub_140005CFC(&v219);
    }
  }
  v73 = *(_QWORD *)(a1 + 464);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v73 + 16LL))(v73, v60, v51);
  v76 = &off_1400D41D0;
  LOWORD(v77) = 0;
  P = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  sub_1400011A8(&v76, (__int64)L"Wake packet:\n", 0xDuLL);
  v74 = P;
  if ( P )
    v8 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v8, 2 * v79);
  if ( v74 )
    ExFreePool(v74);
  sub_14002DFF8(a2, *(_QWORD *)(a1 + 392), *(_QWORD *)(a1 + 400), 0x10uLL, 3LL, 0LL);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v73 + 24LL))(v73);
}
