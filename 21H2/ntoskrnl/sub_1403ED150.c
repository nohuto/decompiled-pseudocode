/*
 * XREFs of sub_1403ED150 @ 0x1403ED150
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 *     ObGetCurrentIrql @ 0x140244120 (ObGetCurrentIrql.c)
 *     KeVerifyGroupAffinity @ 0x1402585E8 (KeVerifyGroupAffinity.c)
 *     KeAreAllApcsDisabled @ 0x140281980 (KeAreAllApcsDisabled.c)
 *     KeAreApcsDisabled @ 0x1402D61E0 (KeAreApcsDisabled.c)
 *     KeCheckProcessorGroupAffinity @ 0x140389050 (KeCheckProcessorGroupAffinity.c)
 *     sub_1403F966C @ 0x1403F966C (sub_1403F966C.c)
 *     sub_1403F974C @ 0x1403F974C (sub_1403F974C.c)
 *     sub_1403FA684 @ 0x1403FA684 (sub_1403FA684.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     KiGetNtDdiVersion @ 0x140459FFC (KiGetNtDdiVersion.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140ACF0E0 @ 0x140ACF0E0 (sub_140ACF0E0.c)
 *     sub_140ACFC24 @ 0x140ACFC24 (sub_140ACFC24.c)
 *     $$b9 @ 0x140AD049C ($$b9.c)
 *     sub_140AD0678 @ 0x140AD0678 (sub_140AD0678.c)
 *     sub_140AD0CE4 @ 0x140AD0CE4 (sub_140AD0CE4.c)
 *     KiGetGdtIdt @ 0x140AD1FE0 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x140AD1FF0 (KiGetLdtr.c)
 *     KiGetSs @ 0x140AD2000 (KiGetSs.c)
 *     KiGetTr @ 0x140AD2010 (KiGetTr.c)
 *     KiErrata361Present @ 0x140AD2020 (KiErrata361Present.c)
 *     KiErrataSkx55Present @ 0x140AD2040 (KiErrataSkx55Present.c)
 *     KiErrata704Present @ 0x140AD2050 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x140AD2100 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140AD23B0 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140AD23C0 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x140AD25B8 (RtlInitMinimalBarrier.c)
 *     sub_140AD6FD0 @ 0x140AD6FD0 (sub_140AD6FD0.c)
 */

__int64 __fastcall sub_1403ED150(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rsi
  int v6; // eax
  int v7; // r14d
  int v8; // ecx
  int v9; // edi
  __int64 v10; // r14
  __int64 Pool2; // rax
  __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // rdx
  unsigned int v15; // eax
  ULONG_PTR v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rbx
  int v19; // eax
  unsigned __int64 v20; // rax
  unsigned __int128 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int128 v23; // rax
  unsigned __int64 v24; // rcx
  int v25; // ecx
  int v26; // ecx
  unsigned int v27; // r10d
  __int64 v28; // rbx
  __int64 v29; // rdx
  int v30; // ecx
  unsigned int v31; // eax
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  unsigned int v37; // r10d
  __int64 v38; // r14
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rax
  unsigned __int128 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rbx
  unsigned int *v45; // rax
  int v46; // ecx
  unsigned __int64 v47; // rdx
  int v48; // eax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // r12
  unsigned int v51; // r15d
  unsigned __int64 v52; // rbx
  unsigned int v53; // esi
  unsigned __int64 v54; // rax
  unsigned __int128 v55; // rax
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // r8
  unsigned __int64 v58; // r9
  char *v59; // r13
  __int64 v60; // r10
  int v61; // ecx
  __int64 v62; // rax
  int v63; // eax
  unsigned int v64; // r15d
  unsigned int v65; // r15d
  bool v66; // zf
  __int64 v67; // r8
  __int64 v68; // rdx
  int v69; // r10d
  unsigned __int64 v70; // rbx
  unsigned __int64 v71; // rsi
  __int64 v72; // r8
  __int64 v73; // r9
  const char *v74; // rsi
  __int64 v75; // r8
  __int64 v76; // r9
  const char *v77; // rax
  unsigned int v78; // r10d
  __int64 v79; // r14
  unsigned __int64 v80; // rbx
  unsigned int v81; // r11d
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rbx
  unsigned int v85; // r8d
  unsigned __int64 v86; // rdx
  __int64 v87; // rax
  unsigned __int64 i32; // rax
  unsigned int v89; // edx
  unsigned int v90; // ebx
  __int64 v91; // r8
  unsigned __int8 v92; // r15
  unsigned __int64 v93; // rsi
  __int64 v94; // r13
  unsigned __int64 v95; // r12
  unsigned __int64 v96; // r14
  int v97; // eax
  bool v98; // zf
  int v99; // edx
  __int64 v100; // rbx
  unsigned int *v101; // rbx
  unsigned __int64 v102; // r12
  unsigned __int64 v103; // r13
  __int64 v104; // r8
  _QWORD *v105; // r9
  const char *v106; // rax
  int v107; // r11d
  __int64 v108; // r15
  unsigned __int64 v109; // r14
  unsigned __int64 v110; // rsi
  unsigned int v111; // r10d
  __int64 v112; // rdx
  __int64 v113; // rax
  __int64 v114; // rsi
  unsigned __int64 v115; // rcx
  __int64 v116; // r8
  unsigned __int64 v117; // rdx
  __int64 v118; // rax
  unsigned __int64 i31; // rax
  unsigned int v120; // esi
  unsigned __int8 v121; // r12
  unsigned __int64 v122; // r14
  unsigned __int64 v123; // r13
  unsigned __int64 v124; // r15
  int v125; // eax
  int *v126; // rsi
  bool v127; // zf
  __int64 v128; // rax
  __int64 v129; // rcx
  __int64 v130; // rbx
  unsigned __int16 v131; // dx
  _QWORD *v132; // rsi
  __int64 v133; // r8
  _QWORD *v134; // r9
  const char *v135; // rax
  int v136; // r10d
  __int64 v137; // r14
  unsigned __int64 v138; // rbx
  unsigned int v139; // r11d
  __int64 v140; // rax
  __int64 v141; // rbx
  unsigned __int128 v142; // rax
  __int64 v143; // r8
  unsigned __int64 v144; // rax
  __int64 v145; // rax
  unsigned __int64 i30; // rax
  unsigned int v147; // ebx
  __int64 v148; // rcx
  __int64 v149; // rdx
  unsigned __int8 v150; // r12
  unsigned __int64 v151; // rsi
  unsigned __int64 v152; // r13
  unsigned __int64 v153; // r14
  int v154; // eax
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // rcx
  __int64 v158; // rcx
  unsigned int i29; // ebx
  __int64 v160; // rcx
  unsigned __int64 v161; // rdx
  __int64 v162; // r8
  __int64 v163; // r9
  unsigned __int64 v164; // rdx
  unsigned __int64 v165; // r8
  unsigned __int64 v166; // r9
  int v167; // eax
  unsigned __int64 v168; // rax
  unsigned __int128 v169; // rax
  void (*v170)(void); // rax
  int v171; // r14d
  __int64 v172; // rbx
  unsigned int v173; // ecx
  unsigned __int8 v174; // si
  volatile signed __int8 **v175; // r8
  volatile signed __int8 *v176; // rdx
  unsigned __int64 v177; // r14
  __int64 v178; // r12
  unsigned __int64 v179; // r13
  __int64 *v180; // rax
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 *v183; // r15
  _BYTE *v184; // rbx
  char v185; // cl
  __int64 v186; // rdx
  int *v187; // rcx
  __int64 v188; // rcx
  __int64 v189; // rax
  bool v190; // zf
  int *v191; // rcx
  unsigned int v192; // eax
  void (*v193)(void); // rax
  int v194; // r13d
  __int64 v195; // rbx
  unsigned int v196; // ecx
  unsigned __int8 v197; // si
  __int64 v198; // r8
  __int64 v199; // r9
  _QWORD **v200; // r15
  _QWORD *v201; // r14
  unsigned __int64 v202; // rbx
  int *v203; // rcx
  __int64 v204; // rcx
  __int64 v205; // r8
  __int64 v206; // r9
  _QWORD **v207; // r12
  _QWORD *v208; // r14
  unsigned __int8 v209; // r15
  int v210; // r13d
  int *v211; // rsi
  unsigned __int8 v212; // r15
  __int64 v213; // rcx
  char *v214; // rbx
  const char *v215; // rsi
  __int64 v216; // r8
  const char *v217; // rax
  unsigned int v218; // r10d
  __int64 v219; // r14
  unsigned __int64 v220; // rbx
  unsigned int v221; // r11d
  __int64 v222; // rax
  __int64 v223; // rbx
  unsigned __int64 v224; // rax
  __int64 v225; // rax
  unsigned __int64 i28; // rax
  unsigned int v227; // ebx
  __int64 v228; // rdx
  unsigned __int8 v229; // r12
  unsigned __int64 v230; // rsi
  unsigned __int64 v231; // r13
  int v232; // eax
  __int64 v233; // r8
  unsigned int v234; // edx
  __int64 v235; // r14
  int v236; // ecx
  __int64 v237; // rbx
  __int64 v238; // rsi
  unsigned __int64 v239; // rbx
  unsigned __int64 v240; // rsi
  __int64 v241; // r8
  __int64 v242; // r9
  int v243; // eax
  __int64 v244; // rcx
  unsigned __int8 v245; // r14
  __int64 v246; // rdx
  unsigned int *v247; // rcx
  unsigned int *v248; // rbx
  char v249; // r15
  unsigned __int64 v250; // r12
  __int64 v251; // r8
  __int64 *v252; // r9
  unsigned int *v253; // r10
  __int64 v254; // rcx
  __int64 v255; // rax
  __int64 v256; // rax
  ULONG_PTR v257; // rax
  __int64 v258; // rsi
  unsigned int *v259; // r12
  void (*v260)(void); // rax
  __int64 v261; // rbx
  unsigned int v262; // ecx
  void (__fastcall *v263)(__int64, _QWORD); // rax
  unsigned __int64 *v264; // r9
  __int64 v265; // r13
  unsigned __int64 v266; // r8
  __int64 v267; // rdx
  __int64 v268; // rax
  _QWORD **v269; // r15
  _QWORD *v270; // rsi
  unsigned int v271; // r13d
  unsigned __int8 v272; // r12
  unsigned int *v273; // r14
  char *v274; // rbx
  __int64 v275; // rcx
  unsigned int *v276; // r8
  int *v277; // rcx
  _QWORD **v278; // r10
  _QWORD *i20; // r9
  int v280; // r12d
  unsigned int *v281; // r13
  __int64 v282; // rbx
  void (*v283)(void); // rax
  unsigned int v284; // ecx
  unsigned __int8 v285; // r14
  volatile signed __int8 **v286; // r8
  volatile signed __int8 *v287; // rdx
  __int64 v288; // r9
  _QWORD **v289; // r15
  _QWORD *v290; // rsi
  __int64 v291; // rax
  int *v292; // r13
  char *v293; // rcx
  __int64 v294; // r8
  __int64 v295; // rdx
  __int64 v296; // rbx
  _QWORD **v297; // r15
  __int64 (*v298)(void); // rax
  __int64 v299; // rcx
  __int64 v300; // rdx
  unsigned int v301; // r13d
  unsigned int *v302; // rcx
  __int64 v303; // r12
  _QWORD *v304; // rax
  __int64 v305; // r8
  unsigned __int64 v306; // rax
  __int64 v307; // rcx
  int v308; // ebx
  unsigned __int64 v309; // rax
  unsigned __int128 v310; // rax
  unsigned __int64 v311; // rsi
  __int64 v312; // rax
  unsigned __int64 v313; // rdx
  unsigned __int64 v314; // r8
  __int64 v315; // r9
  __int64 v316; // r11
  int v317; // r10d
  unsigned __int64 *v318; // r9
  unsigned __int64 v319; // r8
  unsigned __int64 v320; // rax
  unsigned __int128 v321; // rax
  unsigned __int64 v322; // rax
  unsigned __int128 v323; // rax
  unsigned int v324; // ebx
  unsigned __int64 v325; // r9
  unsigned __int64 v326; // rax
  unsigned __int128 v327; // rax
  unsigned __int64 v328; // rax
  unsigned __int128 v329; // rax
  __int64 v330; // r14
  _QWORD *v331; // rbx
  __int64 v332; // rsi
  __int64 v333; // rax
  unsigned __int64 v334; // rsi
  unsigned int *v335; // r15
  unsigned __int64 v336; // rbx
  int v337; // ecx
  int *v338; // rcx
  unsigned __int64 v339; // rax
  unsigned __int128 v340; // rax
  int v341; // ecx
  int v342; // ecx
  int v343; // ecx
  char *v344; // rbx
  int i21; // r13d
  unsigned int v346; // esi
  __int64 v347; // r14
  __int64 v348; // r8
  __int64 v349; // r9
  _QWORD *v350; // rcx
  int v351; // edx
  char v352; // al
  __int64 v353; // rax
  __int64 v354; // rcx
  __int64 (__fastcall *v355)(_QWORD); // rax
  __int64 v356; // r14
  char *v357; // r12
  char *v358; // rbx
  int v359; // r15d
  __int64 v360; // rsi
  __int64 v361; // r8
  _QWORD *v362; // rcx
  int v363; // edx
  char v364; // al
  __int64 v365; // rax
  __int64 v366; // rax
  __int64 (__fastcall *v367)(__int64); // rax
  ULONG_PTR *v368; // rax
  ULONG_PTR v369; // r13
  int *v370; // rdx
  __int64 v371; // rax
  __int64 v372; // rax
  __int64 v373; // rax
  __int64 (__fastcall *v374)(ULONG_PTR, char *); // rax
  __int64 v375; // rax
  ULONG_PTR v376; // r15
  unsigned int v377; // r11d
  int v378; // r14d
  _DWORD *v379; // r12
  int v380; // ecx
  int *v381; // rax
  __int64 v382; // r8
  __int64 v383; // rdx
  unsigned int v384; // esi
  int v385; // r10d
  ULONG_PTR v386; // rbx
  __int64 v387; // r9
  int v388; // ecx
  int v389; // ecx
  int v390; // ecx
  int v391; // ecx
  __int64 v392; // rax
  int v393; // eax
  unsigned __int64 v394; // rcx
  __int64 v395; // r11
  int v396; // eax
  char **v397; // rbx
  int v398; // esi
  __int64 v399; // rcx
  __int64 v400; // rdx
  char *v401; // rdx
  __int64 v402; // r9
  ULONG_PTR v403; // rax
  __int64 v404; // rdx
  __int64 (__fastcall *v405)(ULONG_PTR, __int64, _QWORD, int *); // rax
  __int64 v406; // rdx
  __int64 (__fastcall *v407)(ULONG_PTR, __int64, __int64, int *); // rax
  __int64 v408; // rax
  __int64 v409; // rdx
  __int64 (__fastcall *v410)(ULONG_PTR, __int64, __int64, int *); // rax
  __int64 (__fastcall *v411)(ULONG_PTR); // rax
  __int64 v412; // rbx
  __int64 v413; // r8
  __int64 v414; // rax
  __int64 v415; // r8
  __int64 v416; // rsi
  int v417; // r9d
  unsigned int v418; // eax
  ULONG_PTR v419; // r14
  int v420; // ecx
  unsigned int v421; // eax
  __int64 v422; // r9
  _QWORD *v423; // rcx
  int v424; // r8d
  unsigned __int64 v425; // rdx
  int v426; // ebx
  __int64 v427; // r15
  ULONG_PTR *v428; // r13
  unsigned int *v429; // rdi
  __int64 v430; // r12
  __int64 v431; // rdx
  _QWORD *v432; // rsi
  int v433; // ecx
  _QWORD *v434; // rax
  _QWORD *v435; // r10
  const char *v436; // rax
  int v437; // r11d
  __int64 v438; // rbx
  unsigned __int64 v439; // r8
  unsigned int v440; // r9d
  __int64 v441; // rdx
  __int64 v442; // rax
  __int64 v443; // r8
  unsigned __int64 v444; // rcx
  unsigned int v445; // edx
  unsigned __int64 v446; // r9
  __int64 v447; // rax
  unsigned __int64 i23; // rax
  _DWORD *v449; // rbx
  ULONG_PTR v450; // r15
  int v451; // r13d
  int v452; // eax
  _BYTE *v453; // rsi
  unsigned int v454; // r9d
  _QWORD *v455; // r14
  unsigned int *v456; // r12
  int v457; // ecx
  _QWORD *v458; // rax
  __int64 v459; // rdx
  _QWORD *v460; // r10
  const char *v461; // rax
  int v462; // ebx
  __int64 v463; // r15
  unsigned __int64 v464; // rcx
  unsigned __int64 v465; // r8
  unsigned int v466; // r11d
  __int64 v467; // rdx
  unsigned __int64 v468; // rax
  __int64 v469; // r8
  unsigned __int64 v470; // rcx
  unsigned __int64 v471; // rdx
  __int64 v472; // rax
  unsigned __int64 i24; // rax
  _DWORD *v474; // rdx
  int v475; // r15d
  __int64 v476; // r14
  unsigned int v477; // eax
  _BYTE *v478; // rbx
  int v479; // ecx
  unsigned int v480; // eax
  __int64 v481; // r8
  int v482; // edx
  unsigned __int64 v483; // rcx
  int v484; // esi
  _BYTE *v485; // r14
  _QWORD *v486; // rax
  int v487; // ecx
  __int64 v488; // rdx
  const char *v489; // r12
  __int64 v490; // r15
  int v491; // r11d
  __int64 v492; // rsi
  const char *v493; // rax
  unsigned int v494; // r10d
  __int64 v495; // rdx
  unsigned __int64 v496; // rax
  __int64 v497; // r8
  unsigned __int64 v498; // rcx
  unsigned int v499; // edx
  unsigned __int64 v500; // r10
  __int64 v501; // rax
  unsigned __int64 i25; // rax
  __int64 v503; // rdx
  _DWORD *v504; // rsi
  ULONG_PTR v505; // r15
  __int64 v506; // r14
  __int64 v507; // rax
  int v508; // ecx
  _QWORD *v509; // rax
  _QWORD *v510; // rax
  ULONG_PTR v511; // rsi
  __int64 v512; // rax
  __int64 v513; // r8
  __int64 v514; // r14
  unsigned int v515; // r12d
  unsigned int *v516; // r15
  unsigned int v517; // r10d
  unsigned int v518; // ecx
  __int64 v519; // rax
  _DWORD *v520; // rdx
  unsigned int v521; // r13d
  unsigned int v522; // r13d
  unsigned int v523; // eax
  __int64 v524; // rax
  unsigned int v525; // esi
  unsigned int v526; // r12d
  unsigned int v527; // esi
  unsigned int *v528; // rax
  __int64 v529; // r9
  unsigned int *v530; // r14
  ULONG_PTR v531; // r8
  unsigned int *v532; // rax
  __int64 v533; // r8
  unsigned int v534; // eax
  __int64 v535; // r14
  _DWORD *v536; // r13
  int v537; // ecx
  __int64 v538; // rsi
  unsigned int v539; // eax
  _BYTE *v540; // r11
  int v541; // ecx
  unsigned int v542; // eax
  __int64 v543; // r8
  int v544; // edx
  unsigned __int64 v545; // rcx
  int v546; // ebx
  _BYTE *v547; // rdx
  _QWORD *v548; // rax
  int v549; // ecx
  __int64 v550; // r8
  unsigned int *v551; // rax
  unsigned __int64 v552; // rcx
  unsigned __int64 i26; // rax
  bool v554; // cl
  unsigned __int64 v555; // r15
  __int64 v556; // rax
  __int64 v557; // r8
  unsigned int *v558; // rax
  __int64 v559; // rdx
  _DWORD *v560; // rax
  unsigned int v561; // r10d
  __int64 v562; // rcx
  int v563; // r14d
  int v564; // eax
  __int16 v565; // ax
  int v566; // r10d
  unsigned __int8 *v567; // r8
  unsigned __int8 *v568; // r9
  __int64 *v569; // r11
  unsigned __int8 *v570; // rbx
  unsigned __int8 *v571; // rsi
  __int64 v572; // rdx
  __int64 v573; // rax
  unsigned int v574; // r8d
  __int64 *v575; // r9
  __int64 v576; // rcx
  __int64 v577; // rax
  __int64 v578; // rdx
  __int64 v579; // rax
  int v580; // r9d
  unsigned __int8 *v581; // r8
  __int64 v582; // rdx
  __int64 v583; // rax
  int v584; // r9d
  unsigned __int8 *v585; // r8
  __int64 v586; // rdx
  __int64 v587; // rax
  int v588; // ecx
  ULONG_PTR v589; // r9
  unsigned int v590; // esi
  __int64 v591; // r12
  unsigned int *v592; // r8
  unsigned int *v593; // rdx
  unsigned int v594; // esi
  unsigned int v595; // r13d
  unsigned int v596; // eax
  unsigned int v597; // r15d
  bool v598; // cf
  unsigned int *v599; // rdx
  unsigned __int64 v600; // rbx
  unsigned __int64 *v601; // r8
  unsigned __int64 v602; // r11
  unsigned int *v603; // rdx
  __int64 v604; // rax
  _QWORD *v605; // r10
  int v606; // r14d
  unsigned __int64 v607; // rsi
  const char *v608; // rax
  unsigned __int64 v609; // r8
  unsigned int v610; // r11d
  __int64 v611; // rdx
  __int64 v612; // rax
  __int64 v613; // r8
  unsigned __int64 v614; // rcx
  unsigned __int64 v615; // rdx
  __int64 v616; // rax
  unsigned __int64 v617; // rax
  unsigned int *v618; // r15
  unsigned int v619; // r12d
  char *v620; // rax
  char v621; // r8
  __int64 v622; // rbx
  ULONG_PTR v623; // rcx
  unsigned int *v624; // rdx
  unsigned __int64 v625; // rsi
  unsigned __int64 *v626; // r8
  unsigned __int64 v627; // rbx
  __int64 v628; // rax
  _QWORD *v629; // r11
  int v630; // r15d
  unsigned __int64 v631; // r14
  const char *v632; // rax
  unsigned __int64 v633; // r8
  unsigned int v634; // r10d
  __int64 v635; // rdx
  __int64 v636; // rax
  __int64 v637; // r8
  unsigned __int64 v638; // rcx
  unsigned __int64 v639; // rdx
  __int64 v640; // rax
  unsigned __int64 i27; // rax
  unsigned int *v642; // r15
  ULONG_PTR v643; // rbx
  unsigned int *v644; // rdx
  unsigned __int64 *v645; // r8
  __int64 v646; // rax
  unsigned int v647; // r9d
  unsigned __int64 v648; // rbx
  unsigned __int64 v649; // r11
  __int64 v650; // rax
  _QWORD *v651; // r10
  int v652; // r14d
  unsigned __int64 v653; // rsi
  const char *v654; // rax
  unsigned __int64 v655; // r8
  unsigned int v656; // r11d
  __int64 v657; // rdx
  __int64 v658; // rax
  __int64 v659; // r8
  unsigned __int64 v660; // rcx
  unsigned int v661; // r9d
  unsigned __int64 v662; // rdx
  __int64 v663; // rax
  unsigned __int64 v664; // rax
  __int64 v665; // r8
  char *v666; // rax
  _BYTE *v667; // rax
  char *v668; // rdx
  char *v669; // rbx
  __int64 v670; // r12
  int v671; // eax
  __int64 v672; // rdx
  __int64 v673; // rsi
  __int64 v674; // r14
  __int64 v675; // rax
  int v676; // edx
  char v677; // al
  __int64 v678; // rax
  __int64 v679; // rax
  char *v680; // rbx
  unsigned __int8 v681; // r14
  __int64 i22; // rsi
  __int64 v683; // r8
  __int64 v684; // r9
  _QWORD *v685; // rcx
  int v686; // edx
  char v687; // al
  __int64 v688; // rax
  __int64 v689; // rax
  char *v690; // rbx
  __int64 v691; // r8
  __int64 v692; // r9
  _QWORD *v693; // rcx
  int v694; // edx
  char v695; // al
  __int64 v696; // rax
  __int64 v697; // rax
  __int64 v698; // rsi
  int v699; // eax
  int v700; // ebx
  unsigned __int64 v701; // rbx
  _BYTE *v702; // rcx
  __int64 v703; // rdx
  __int64 v704; // rax
  __int64 v705; // r14
  __int64 v706; // rsi
  unsigned __int64 v707; // rax
  __int64 v708; // r8
  __int64 v709; // r9
  __int64 v710; // rcx
  unsigned __int64 v711; // rbx
  unsigned __int64 v712; // rcx
  _QWORD *v713; // rsi
  __int64 v714; // r8
  _QWORD *v715; // r9
  const char *v716; // rax
  unsigned int v717; // r11d
  __int64 v718; // r14
  unsigned __int64 v719; // rbx
  unsigned int v720; // r10d
  __int64 v721; // rdx
  __int64 v722; // rax
  __int64 v723; // rbx
  __int64 v724; // r8
  unsigned __int64 v725; // rdx
  __int64 v726; // rax
  unsigned __int64 i19; // rax
  unsigned int v728; // ebx
  __int64 v729; // rdx
  unsigned __int8 v730; // r15
  unsigned __int64 v731; // rsi
  __int64 v732; // r13
  unsigned __int64 v733; // r12
  unsigned __int64 v734; // r14
  int v735; // eax
  __int64 v736; // r8
  __int64 v737; // r8
  __int64 *v738; // r9
  unsigned __int64 *v739; // r10
  __int64 v740; // rax
  __int64 v741; // rdx
  __int64 v742; // rax
  __int64 v743; // rdx
  unsigned __int8 v744; // r14
  unsigned __int64 v745; // rbx
  __int64 v746; // r12
  unsigned __int64 v747; // r15
  unsigned __int64 v748; // rsi
  int v749; // eax
  __int64 v750; // r8
  __int16 v751; // ax
  __int64 v752; // rcx
  int (__fastcall *v753)(_WORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, __int64 *); // rax
  __int64 v754; // rcx
  __int64 (*v755)(void); // rax
  __int64 v756; // rax
  __int64 (*v757)(void); // rax
  __int64 v758; // rax
  unsigned int v759; // r10d
  unsigned __int8 v760; // dl
  __int64 v761; // r15
  _QWORD *v762; // rsi
  __int64 v763; // r9
  _QWORD *v764; // r10
  const char *v765; // rax
  int v766; // ebx
  __int64 v767; // r14
  unsigned int v768; // r11d
  __int64 v769; // rdx
  unsigned __int64 v770; // rax
  __int64 v771; // r8
  unsigned __int64 v772; // rcx
  unsigned int v773; // r9d
  unsigned __int64 v774; // rdx
  unsigned __int8 v775; // dl
  __int64 v776; // rax
  unsigned __int64 i17; // rax
  unsigned int v778; // r10d
  unsigned int *v779; // rsi
  unsigned int *v780; // r9
  unsigned int v781; // ebx
  const char *v782; // rax
  __int64 v783; // r14
  unsigned __int64 v784; // r8
  unsigned int v785; // r11d
  __int64 v786; // rdx
  __int64 v787; // rax
  __int64 v788; // r8
  unsigned int v789; // r10d
  unsigned __int64 v790; // rdx
  __int64 v791; // rax
  unsigned __int64 i18; // rax
  __int64 v793; // rax
  _QWORD *v794; // rcx
  int v795; // edx
  char v796; // al
  __int64 v797; // rax
  _QWORD *v798; // rsi
  _QWORD *v799; // r9
  int v800; // r11d
  const char *v801; // rax
  __int64 v802; // r14
  unsigned __int64 v803; // rbx
  unsigned int v804; // r10d
  __int64 v805; // rdx
  __int64 v806; // rax
  __int64 v807; // rbx
  unsigned __int64 v808; // rcx
  __int64 v809; // r8
  unsigned __int64 v810; // rdx
  __int64 v811; // rax
  unsigned __int64 i15; // rax
  unsigned int v813; // ebx
  __int64 v814; // rcx
  __int64 v815; // rdx
  unsigned __int8 v816; // r12
  unsigned __int64 v817; // rsi
  unsigned __int64 v818; // r13
  unsigned __int64 v819; // r14
  int v820; // eax
  unsigned int v821; // r9d
  unsigned int *v822; // r10
  unsigned int v823; // r11d
  const char *v824; // rax
  __int64 v825; // r14
  unsigned int v826; // ebx
  __int64 v827; // rdx
  unsigned __int64 v828; // rax
  __int64 v829; // r8
  unsigned __int64 v830; // rdx
  __int64 v831; // rax
  unsigned __int64 i16; // rax
  __int64 v833; // rcx
  __int64 v834; // rax
  const char *v835; // rsi
  __int64 v836; // r8
  __int64 v837; // r9
  const char *v838; // rax
  int v839; // r10d
  __int64 m; // r14
  unsigned __int64 v841; // rbx
  unsigned int v842; // r11d
  __int64 v843; // rax
  __int64 v844; // rbx
  unsigned __int128 v845; // rax
  char v846; // r10
  __int64 v847; // rdx
  __int64 v848; // r8
  unsigned __int64 v849; // rax
  __int64 v850; // rax
  unsigned __int64 n; // rax
  unsigned int v852; // ebx
  __int64 v853; // rcx
  unsigned __int8 v854; // r12
  unsigned __int64 v855; // rsi
  unsigned __int64 v856; // r13
  unsigned __int64 v857; // r14
  int v858; // eax
  __int64 v859; // rcx
  __int64 v860; // rcx
  unsigned __int8 v861; // r14
  __int64 v862; // rdx
  unsigned int *v863; // rcx
  unsigned int *v864; // rbx
  char v865; // r15
  unsigned __int64 v866; // r12
  __int64 v867; // r8
  __int64 *v868; // r9
  unsigned int *v869; // r10
  __int64 v870; // rcx
  __int64 v871; // rax
  __int64 v872; // rax
  __int64 v873; // r8
  __int64 v874; // r9
  __int64 v875; // rcx
  unsigned __int8 v876; // r14
  unsigned int *v877; // rcx
  unsigned __int64 v878; // rax
  unsigned __int64 v879; // rsi
  unsigned __int64 v880; // rcx
  unsigned __int64 v881; // rdx
  unsigned int v882; // eax
  int v883; // edx
  unsigned __int64 v884; // rbx
  unsigned __int64 v885; // rsi
  int *v886; // rsi
  int v887; // eax
  __int64 v888; // rbx
  __int64 v889; // rdx
  __int64 v890; // rax
  const char *v891; // rsi
  __int64 v892; // r8
  const char *v893; // rax
  int v894; // r10d
  __int64 mm; // r14
  unsigned __int64 v896; // rbx
  unsigned int v897; // r11d
  __int64 v898; // rdx
  __int64 v899; // rax
  __int64 v900; // rbx
  unsigned __int64 v901; // rcx
  unsigned __int64 v902; // rdx
  __int64 v903; // rax
  unsigned __int64 nn; // rax
  unsigned int v905; // edx
  unsigned int v906; // ebx
  __int64 v907; // rcx
  unsigned __int8 v908; // r15
  unsigned __int64 v909; // rsi
  __int64 v910; // r13
  unsigned __int64 v911; // r12
  unsigned __int64 v912; // r14
  int v913; // eax
  __int64 v914; // rax
  __int64 v915; // rcx
  const char *v916; // rsi
  __int64 v917; // r8
  const char *v918; // rax
  int v919; // r10d
  __int64 i1; // r14
  unsigned __int64 v921; // rbx
  unsigned int v922; // r11d
  __int64 v923; // rax
  __int64 v924; // rbx
  unsigned __int128 v925; // rax
  unsigned __int64 v926; // rax
  __int64 v927; // rax
  unsigned __int64 i2; // rax
  __int64 v929; // rcx
  __int64 v930; // rdx
  unsigned __int8 v931; // r12
  unsigned __int64 v932; // rsi
  unsigned __int64 v933; // r13
  int v934; // eax
  __int64 v935; // rdx
  __int64 v936; // rax
  int v937; // eax
  __int64 v938; // rbx
  __int64 (__fastcall *v939)(_QWORD); // rax
  unsigned int v940; // r12d
  __int64 v941; // rax
  __int64 v942; // r14
  char *v943; // rsi
  unsigned __int64 v944; // rbx
  __int64 v945; // r8
  __int64 v946; // r9
  char v947; // r13
  int *v948; // r12
  __int64 v949; // r12
  unsigned __int64 v950; // rbx
  int *v951; // r15
  unsigned __int64 *v952; // rax
  unsigned __int64 *v953; // rbx
  unsigned __int64 v954; // rcx
  _QWORD *v955; // r12
  unsigned __int8 v956; // r12
  __int64 v957; // r13
  __int64 v958; // rdx
  unsigned __int64 v959; // r15
  unsigned __int64 v960; // rcx
  __int64 v961; // r8
  _QWORD *v962; // rcx
  int v963; // edx
  char v964; // al
  char *v965; // rsi
  unsigned __int64 v966; // rbx
  __int64 v967; // r8
  __int64 v968; // r9
  char v969; // r13
  int *v970; // r12
  __int64 v971; // r12
  unsigned __int64 v972; // rbx
  char v973; // al
  int *v974; // r15
  unsigned __int64 *v975; // rax
  unsigned __int64 *v976; // rbx
  unsigned __int64 v977; // rcx
  unsigned __int8 v978; // r12
  __int64 v979; // r13
  __int64 v980; // rdx
  unsigned __int64 v981; // r15
  unsigned __int64 v982; // rcx
  __int64 v983; // r8
  _QWORD *v984; // rcx
  int v985; // edx
  char v986; // al
  __int64 (__fastcall *v987)(__int64); // rax
  __int64 v988; // r15
  unsigned __int64 v989; // rbx
  unsigned int v990; // r13d
  __int64 v991; // rax
  __int64 v992; // rdx
  __int64 v993; // r9
  __int64 v994; // r8
  int *v995; // r14
  char v996; // si
  char v997; // r12
  __int64 v998; // r14
  unsigned __int64 v999; // rbx
  char v1000; // al
  int *v1001; // rsi
  unsigned __int64 *v1002; // rax
  unsigned __int64 *v1003; // rbx
  unsigned __int64 v1004; // rcx
  _QWORD *v1005; // r14
  __int64 v1006; // r12
  char *v1007; // r14
  __int64 v1008; // rdx
  unsigned __int64 v1009; // rsi
  unsigned __int64 v1010; // rcx
  __int64 v1011; // r8
  _QWORD *v1012; // rcx
  int v1013; // edx
  char v1014; // al
  __int64 v1015; // r8
  unsigned __int64 v1016; // rcx
  unsigned int *v1017; // r9
  unsigned int *v1018; // rbx
  unsigned __int64 v1019; // r10
  char *v1020; // r14
  unsigned int v1021; // r11d
  unsigned __int64 v1022; // rdx
  unsigned int v1023; // eax
  unsigned __int64 v1024; // r12
  __int64 v1025; // r9
  _QWORD *v1026; // r10
  int v1027; // ebx
  const char *v1028; // rax
  unsigned __int64 v1029; // rsi
  __int64 v1030; // r15
  unsigned __int64 v1031; // r8
  unsigned int v1032; // r11d
  __int64 v1033; // rdx
  __int64 v1034; // rax
  __int64 v1035; // r8
  unsigned __int64 v1036; // rcx
  __int64 v1037; // r9
  unsigned __int64 v1038; // rdx
  __int64 v1039; // rax
  unsigned __int64 j; // rax
  unsigned int v1041; // r13d
  unsigned __int8 v1042; // r14
  unsigned __int64 v1043; // rbx
  __int64 v1044; // r12
  unsigned __int64 v1045; // r15
  unsigned __int64 v1046; // rsi
  int v1047; // eax
  __int64 v1048; // rcx
  unsigned __int64 v1049; // rax
  __int64 v1050; // rcx
  unsigned int *v1051; // rdx
  __int64 v1052; // r15
  unsigned __int64 v1053; // r14
  __int64 v1054; // r8
  _QWORD *v1055; // r9
  int v1056; // r10d
  const char *v1057; // rax
  unsigned __int64 v1058; // rsi
  __int64 v1059; // r12
  unsigned __int64 v1060; // rbx
  unsigned int v1061; // r11d
  __int64 v1062; // rax
  __int64 v1063; // rbx
  unsigned __int128 v1064; // rax
  __int64 v1065; // r8
  unsigned __int64 v1066; // rax
  __int64 v1067; // rax
  unsigned __int64 k; // rax
  unsigned int v1069; // ecx
  unsigned int v1070; // ebx
  unsigned __int8 v1071; // r15
  unsigned __int64 v1072; // rsi
  __int64 v1073; // r13
  unsigned __int64 v1074; // r12
  unsigned __int64 v1075; // r14
  int v1076; // eax
  unsigned int *v1077; // rcx
  __int64 v1078; // rax
  _QWORD *v1079; // rsi
  __int64 v1080; // r8
  _QWORD *v1081; // r9
  const char *v1082; // rax
  unsigned int v1083; // r10d
  __int64 v1084; // r14
  unsigned __int64 v1085; // rbx
  unsigned int v1086; // r11d
  __int64 v1087; // rax
  __int64 v1088; // rbx
  __int64 v1089; // r8
  unsigned __int64 v1090; // rax
  __int64 v1091; // rax
  unsigned __int64 i; // rax
  unsigned int v1093; // ebx
  __int64 v1094; // rdx
  unsigned __int8 v1095; // r12
  unsigned __int64 v1096; // rsi
  unsigned __int64 v1097; // r13
  unsigned __int64 v1098; // r14
  int v1099; // eax
  int v1100; // r12d
  __int64 **v1101; // r15
  unsigned int v1102; // eax
  __int64 v1103; // r13
  char *v1104; // rbx
  __int64 v1105; // r14
  __int64 v1106; // rsi
  __int64 v1107; // r8
  _QWORD *v1108; // rcx
  int v1109; // edx
  char v1110; // al
  __int64 v1111; // rax
  __int64 v1112; // rax
  const char *v1113; // rsi
  __int64 v1114; // r8
  __int64 v1115; // r9
  const char *v1116; // rax
  unsigned int v1117; // r10d
  __int64 v1118; // r14
  unsigned __int64 v1119; // rbx
  unsigned int v1120; // r11d
  __int64 v1121; // rax
  __int64 v1122; // rbx
  __int64 v1123; // r8
  unsigned __int64 v1124; // rax
  __int64 v1125; // rax
  unsigned __int64 i4; // rax
  unsigned int v1127; // ebx
  __int64 v1128; // rdx
  unsigned __int8 v1129; // r12
  unsigned __int64 v1130; // rsi
  unsigned __int64 v1131; // r13
  unsigned __int64 v1132; // r14
  int v1133; // eax
  __int64 v1134; // rax
  __int64 v1135; // rcx
  unsigned int v1136; // edx
  unsigned __int64 v1137; // rbx
  unsigned __int64 v1138; // rsi
  __int64 v1139; // r8
  __int64 v1140; // r9
  const char *v1141; // rsi
  __int64 v1142; // r8
  const char *v1143; // rax
  unsigned int v1144; // r10d
  __int64 v1145; // r14
  unsigned __int64 v1146; // rbx
  unsigned int v1147; // r11d
  __int64 v1148; // rax
  __int64 v1149; // rbx
  unsigned int v1150; // r8d
  unsigned __int64 v1151; // rax
  __int64 v1152; // rax
  unsigned __int64 i5; // rax
  unsigned int v1154; // edx
  unsigned int v1155; // ebx
  unsigned __int8 v1156; // r15
  unsigned __int64 v1157; // rsi
  __int64 v1158; // r13
  unsigned __int64 v1159; // r12
  int v1160; // eax
  __int64 v1161; // rsi
  __int64 v1162; // rcx
  int v1163; // eax
  __int64 v1164; // rcx
  unsigned int v1165; // ebx
  bool i3; // zf
  _QWORD *v1167; // rcx
  int v1168; // edx
  char v1169; // al
  int v1170; // esi
  __int64 v1171; // r14
  unsigned int v1172; // ecx
  char v1173; // bl
  volatile signed __int8 **v1174; // r8
  volatile signed __int8 *v1175; // rdx
  unsigned __int8 v1176; // bl
  unsigned int v1177; // eax
  int v1178; // r8d
  int v1179; // edx
  unsigned __int64 v1180; // rbx
  unsigned __int64 v1181; // rsi
  __int64 v1182; // r8
  __int64 v1183; // r9
  const char *v1184; // rsi
  __int64 v1185; // r8
  __int64 v1186; // r9
  const char *v1187; // rax
  int v1188; // r11d
  __int64 i6; // r14
  unsigned __int64 v1190; // rbx
  unsigned int v1191; // r10d
  __int64 v1192; // rdx
  __int64 v1193; // rax
  __int64 v1194; // rbx
  __int64 v1195; // rcx
  unsigned int v1196; // r8d
  unsigned __int64 v1197; // rdx
  __int64 v1198; // rax
  unsigned __int64 i7; // rax
  unsigned int v1200; // edx
  unsigned int v1201; // ebx
  __int64 v1202; // rcx
  __int64 v1203; // r8
  unsigned __int8 v1204; // r15
  unsigned __int64 v1205; // rsi
  __int64 v1206; // r13
  unsigned __int64 v1207; // r12
  unsigned __int64 v1208; // r14
  int v1209; // eax
  __int64 v1210; // r13
  __int64 v1211; // rax
  _DWORD *v1212; // r14
  unsigned int v1213; // r15d
  int v1214; // esi
  __int64 v1215; // rcx
  const char *v1216; // rsi
  __int64 v1217; // r8
  const char *v1218; // rax
  int v1219; // r11d
  __int64 i8; // r14
  unsigned __int64 v1221; // rbx
  unsigned int v1222; // r10d
  __int64 v1223; // rdx
  __int64 v1224; // rax
  __int64 v1225; // rbx
  __int64 v1226; // rcx
  unsigned __int64 v1227; // rdx
  __int64 v1228; // rax
  unsigned __int64 i9; // rax
  unsigned int v1230; // ebx
  __int64 v1231; // rcx
  __int64 v1232; // rdx
  unsigned __int8 v1233; // r12
  unsigned __int64 v1234; // rsi
  unsigned __int64 v1235; // r13
  int v1236; // eax
  unsigned int v1237; // eax
  unsigned int v1238; // r11d
  unsigned int v1239; // r12d
  int v1240; // eax
  __int64 v1241; // r8
  __int16 v1242; // ax
  char *v1243; // r8
  int v1244; // r10d
  unsigned __int8 *v1245; // r9
  __int64 v1246; // rdx
  __int64 v1247; // rax
  __int64 *v1248; // r9
  unsigned int v1249; // r8d
  unsigned __int64 *v1250; // r10
  __int64 v1251; // rax
  __int64 v1252; // rdx
  __int64 v1253; // rax
  unsigned __int8 *v1254; // r8
  int v1255; // r10d
  unsigned __int8 *v1256; // r9
  __int64 v1257; // rdx
  __int64 v1258; // rax
  unsigned __int8 *v1259; // r8
  int v1260; // r10d
  unsigned __int8 *v1261; // r9
  __int64 v1262; // rdx
  __int64 v1263; // rax
  int v1264; // eax
  __int64 v1265; // rbx
  int v1266; // eax
  __int64 v1267; // r9
  int v1268; // eax
  ULONG_PTR v1269; // rcx
  unsigned __int8 v1270; // bl
  __int64 v1271; // rdx
  int v1272; // eax
  unsigned __int64 v1273; // rbx
  unsigned __int64 v1274; // rsi
  __int64 v1275; // r8
  __int64 v1276; // r9
  const char *v1277; // r11
  __int64 v1278; // r8
  __int64 v1279; // r9
  const char *v1280; // rax
  int v1281; // esi
  __int64 i10; // r14
  unsigned __int64 v1283; // rbx
  unsigned int v1284; // r10d
  __int64 v1285; // rdx
  __int64 v1286; // rax
  __int64 v1287; // rbx
  __int64 v1288; // rcx
  unsigned int v1289; // r8d
  unsigned __int64 v1290; // rdx
  __int64 v1291; // rax
  unsigned __int64 i11; // rax
  unsigned int v1293; // edx
  unsigned int v1294; // ebx
  __int64 v1295; // rcx
  __int64 v1296; // r8
  unsigned __int8 v1297; // r15
  unsigned __int64 v1298; // rsi
  __int64 v1299; // r13
  unsigned __int64 v1300; // r12
  unsigned __int64 v1301; // r14
  int v1302; // eax
  unsigned __int64 v1303; // rcx
  const char *v1304; // rsi
  __int64 v1305; // r8
  const char *v1306; // rax
  int v1307; // r11d
  __int64 i12; // r14
  unsigned __int64 v1309; // rbx
  unsigned int v1310; // r10d
  __int64 v1311; // rdx
  __int64 v1312; // rax
  __int64 v1313; // rbx
  __int64 v1314; // rcx
  unsigned __int64 v1315; // rdx
  __int64 v1316; // rax
  unsigned __int64 i13; // rax
  __int64 v1318; // rcx
  __int64 v1319; // rdx
  unsigned __int8 v1320; // r12
  unsigned __int64 v1321; // rsi
  unsigned __int64 v1322; // r13
  int v1323; // eax
  __int64 v1324; // rcx
  int *v1325; // r13
  __int64 v1326; // r8
  int *v1327; // r12
  unsigned int *v1328; // rbx
  unsigned int *v1329; // rsi
  __int64 v1330; // rdx
  unsigned __int64 v1331; // r15
  unsigned int v1332; // r14d
  __int64 v1333; // r8
  int v1334; // r10d
  const char *v1335; // rax
  __int64 v1336; // r11
  unsigned __int64 v1337; // rcx
  unsigned __int64 v1338; // r13
  unsigned __int64 v1339; // r9
  __int64 v1340; // rdx
  __int64 v1341; // rax
  __int64 v1342; // r13
  __int64 v1343; // rcx
  unsigned int v1344; // edx
  __int64 v1345; // rax
  unsigned __int64 i14; // rax
  unsigned int v1347; // r13d
  unsigned int v1348; // eax
  _BYTE *v1349; // rsi
  char *v1350; // rbx
  char v1351; // cl
  volatile signed __int32 *v1352; // rcx
  struct _KPRCB *v1353; // rdx
  __int64 v1354; // r8
  int v1355; // ecx
  struct _KPRCB *v1356; // rax
  unsigned __int64 v1357; // rcx
  int *v1358; // rcx
  __int64 v1359; // rdx
  unsigned __int8 v1360; // r14
  unsigned __int64 v1361; // rbx
  __int64 v1362; // r12
  unsigned __int64 v1363; // r15
  unsigned __int64 v1364; // rsi
  int v1365; // eax
  bool v1366; // zf
  __int64 v1367; // rax
  __int64 v1368; // rcx
  __int64 v1369; // rcx
  unsigned __int8 v1370; // r14
  __int64 v1371; // rdx
  unsigned int *v1372; // rcx
  unsigned int *v1373; // rbx
  char v1374; // r15
  unsigned __int64 v1375; // r12
  __int64 v1376; // r8
  __int64 *v1377; // r9
  unsigned int *v1378; // r10
  __int64 v1379; // rcx
  __int64 v1380; // rax
  __int64 v1381; // rax
  __int64 v1382; // r8
  __int64 v1383; // r9
  __int64 v1384; // r9
  _QWORD *v1385; // rbx
  int v1386; // r11d
  _QWORD *v1387; // r10
  __int64 v1388; // r14
  const char *v1389; // rax
  unsigned int v1390; // esi
  __int64 v1391; // rax
  __int64 v1392; // r8
  unsigned __int128 v1393; // rax
  unsigned __int64 v1394; // rax
  __int64 v1395; // rax
  int v1396; // eax
  int v1397; // r10d
  int v1398; // r10d
  __int64 v1399; // rbx
  unsigned int v1400; // ebx
  __int64 v1401; // rax
  unsigned int v1402; // esi
  unsigned __int64 v1403; // rax
  __int64 v1404; // r8
  __int64 v1405; // r9
  __int64 v1406; // rdx
  int v1407; // ecx
  _QWORD *v1408; // rax
  __int64 v1409; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v1411; // rcx
  unsigned __int64 v1412; // rdx
  unsigned __int64 v1413; // rdx
  _QWORD *v1414; // r14
  __int64 v1415; // rsi
  __int64 v1416; // rdx
  __int64 v1417; // r8
  int v1418; // ecx
  _QWORD *v1419; // rax
  unsigned __int64 v1420; // rcx
  __int64 Ldtr; // r15
  unsigned __int16 Tr; // ax
  unsigned __int64 v1423; // rdx
  __int64 v1424; // r9
  unsigned __int16 v1425; // r12
  __int64 v1426; // r11
  _QWORD *v1427; // r8
  const char *v1428; // rcx
  unsigned __int64 v1429; // rbx
  unsigned int v1430; // r10d
  __int64 v1431; // rdx
  __int64 v1432; // rax
  __int64 v1433; // rbx
  unsigned __int64 v1434; // rcx
  unsigned int v1435; // esi
  __int64 v1436; // rax
  unsigned __int64 ii; // rax
  unsigned int v1438; // ebx
  __int64 v1439; // r8
  __int64 v1440; // r9
  _QWORD *v1441; // rcx
  int v1442; // edx
  char v1443; // al
  int v1444; // eax
  __int64 v1445; // rdx
  void (__fastcall *v1446)(_BYTE *, __int64); // rax
  unsigned int v1447; // r10d
  __int64 v1448; // rcx
  unsigned int *v1449; // r8
  __int64 v1450; // rsi
  unsigned __int64 v1451; // r13
  __int64 v1452; // r12
  __int64 v1453; // r15
  unsigned __int8 v1454; // r14
  __int16 v1455; // r9
  int v1456; // eax
  __int64 v1457; // rcx
  unsigned __int64 v1458; // rbx
  __int64 v1459; // rdx
  unsigned int *v1460; // r15
  __int64 v1461; // rax
  __int64 v1462; // rax
  __int64 v1463; // r12
  __int64 v1464; // rax
  unsigned int *v1465; // rax
  __int64 v1466; // rcx
  unsigned __int64 v1467; // rbx
  unsigned __int64 v1468; // rdx
  struct _KPRCB *v1469; // r8
  _QWORD *v1470; // r14
  _QWORD *v1471; // r8
  int v1472; // ebx
  const char *v1473; // rax
  int v1474; // r10d
  __int64 v1475; // r11
  int v1476; // r9d
  unsigned __int64 v1477; // rsi
  __int64 v1478; // rdx
  __int64 v1479; // rax
  __int64 *v1480; // r8
  __int64 v1481; // rsi
  unsigned __int64 v1482; // rcx
  int v1483; // r15d
  int v1484; // edx
  __int64 v1485; // r9
  __int64 v1486; // rax
  unsigned __int64 jj; // rax
  unsigned int *v1488; // rax
  __int64 v1489; // rax
  unsigned int v1490; // esi
  _QWORD *v1491; // rdx
  int v1492; // r9d
  unsigned __int64 v1493; // rbx
  const char *v1494; // rax
  __int64 v1495; // rax
  int v1496; // r8d
  __int64 v1497; // rax
  unsigned __int64 kk; // rax
  unsigned int v1499; // ebx
  __int64 v1500; // r9
  int *v1501; // r8
  __int64 v1502; // rdx
  unsigned __int64 v1503; // rcx
  __int64 v1504; // rax
  __int64 v1505; // rdx
  int v1506; // eax
  __int64 v1507; // rbx
  __int64 v1508; // rbx
  int v1509; // eax
  __int64 v1510; // r12
  __int64 v1511; // r13
  __int64 v1512; // rbx
  __int64 v1513; // rsi
  struct _KPRCB *v1514; // rdx
  unsigned __int64 v1515; // r11
  unsigned __int64 v1516; // rdi
  __int64 v1517; // r14
  unsigned __int64 v1518; // r15
  PSLIST_ENTRY v1519; // r10
  unsigned int v1520; // r8d
  PSLIST_ENTRY v1521; // r9
  unsigned __int64 v1522; // rsi
  _QWORD *v1523; // rdx
  unsigned __int64 v1524; // rcx
  unsigned __int64 v1525; // rax
  __int64 v1526; // rbx
  _QWORD *v1527; // rcx
  char *Next; // r8
  int v1529; // r10d
  signed __int64 v1530; // r8
  unsigned int v1531; // ebx
  unsigned int v1532; // ebx
  unsigned __int8 CurrentIrql; // al
  unsigned int v1534; // ebx
  unsigned __int8 v1535; // al
  unsigned int v1536; // ebx
  unsigned __int8 v1537; // al
  int v1538; // ecx
  int v1539; // ecx
  int v1540; // ecx
  int v1541; // ecx
  int v1542; // ecx
  volatile signed __int32 *v1543; // rax
  unsigned int v1544; // ebx
  unsigned __int8 v1545; // al
  signed __int32 v1546[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v1547; // [rsp+28h] [rbp-D8h]
  __int64 *v1548; // [rsp+38h] [rbp-C8h]
  int *v1549; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v1550; // [rsp+58h] [rbp-A8h]
  unsigned int v1551; // [rsp+60h] [rbp-A0h]
  unsigned int *v1552; // [rsp+68h] [rbp-98h]
  __int64 v1553; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-88h]
  __int64 v1555; // [rsp+80h] [rbp-80h]
  int v1556; // [rsp+88h] [rbp-78h]
  unsigned int *v1557; // [rsp+90h] [rbp-70h]
  unsigned int *v1558; // [rsp+98h] [rbp-68h]
  unsigned __int8 v1559; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int8 v1560; // [rsp+A1h] [rbp-5Fh] BYREF
  char v1561[2]; // [rsp+A2h] [rbp-5Eh] BYREF
  int v1562; // [rsp+A4h] [rbp-5Ch]
  unsigned int *v1563; // [rsp+A8h] [rbp-58h]
  int v1564; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v1565; // [rsp+B8h] [rbp-48h]
  __int64 v1566; // [rsp+C0h] [rbp-40h]
  __int64 v1567; // [rsp+C8h] [rbp-38h]
  unsigned int v1568; // [rsp+D0h] [rbp-30h]
  int v1569; // [rsp+D4h] [rbp-2Ch]
  char *v1570; // [rsp+D8h] [rbp-28h]
  __int64 v1571; // [rsp+E0h] [rbp-20h] BYREF
  PSLIST_ENTRY v1572; // [rsp+E8h] [rbp-18h]
  unsigned int v1573; // [rsp+F0h] [rbp-10h]
  _BYTE *v1574; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD *v1575; // [rsp+100h] [rbp+0h]
  unsigned int v1576; // [rsp+108h] [rbp+8h]
  _BYTE *v1577; // [rsp+110h] [rbp+10h] BYREF
  __int64 v1578; // [rsp+118h] [rbp+18h]
  __int64 v1579; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v1580; // [rsp+128h] [rbp+28h] BYREF
  unsigned int v1581; // [rsp+12Ch] [rbp+2Ch] BYREF
  __int64 v1582; // [rsp+130h] [rbp+30h]
  unsigned int v1583; // [rsp+138h] [rbp+38h] BYREF
  int v1584; // [rsp+140h] [rbp+40h]
  unsigned __int64 v1585; // [rsp+148h] [rbp+48h]
  unsigned __int64 v1586; // [rsp+150h] [rbp+50h] BYREF
  _BYTE *v1587; // [rsp+158h] [rbp+58h]
  int v1588; // [rsp+160h] [rbp+60h] BYREF
  __int64 v1589; // [rsp+168h] [rbp+68h]
  int v1590; // [rsp+170h] [rbp+70h] BYREF
  __int64 v1591; // [rsp+178h] [rbp+78h] BYREF
  _DWORD *v1592; // [rsp+180h] [rbp+80h]
  unsigned __int64 v1593; // [rsp+188h] [rbp+88h]
  __int64 v1594; // [rsp+190h] [rbp+90h]
  unsigned __int64 v1595; // [rsp+198h] [rbp+98h]
  int v1596; // [rsp+1A0h] [rbp+A0h]
  int v1597; // [rsp+1A4h] [rbp+A4h]
  int v1598; // [rsp+1A8h] [rbp+A8h]
  int v1599; // [rsp+1ACh] [rbp+ACh]
  int v1600; // [rsp+1B0h] [rbp+B0h]
  int v1601; // [rsp+1B4h] [rbp+B4h]
  int v1602; // [rsp+1B8h] [rbp+B8h]
  int v1603; // [rsp+1BCh] [rbp+BCh]
  int v1604; // [rsp+1C0h] [rbp+C0h]
  int v1605; // [rsp+1C4h] [rbp+C4h]
  int v1606; // [rsp+1C8h] [rbp+C8h]
  int v1607; // [rsp+1CCh] [rbp+CCh]
  int v1608; // [rsp+1D0h] [rbp+D0h]
  int v1609; // [rsp+1D4h] [rbp+D4h]
  int v1610; // [rsp+1D8h] [rbp+D8h]
  int v1611; // [rsp+1DCh] [rbp+DCh]
  int v1612; // [rsp+1E0h] [rbp+E0h]
  __int64 v1613; // [rsp+1E8h] [rbp+E8h]
  __int64 v1614; // [rsp+1F0h] [rbp+F0h] BYREF
  int v1615; // [rsp+1F8h] [rbp+F8h]
  int v1616; // [rsp+1FCh] [rbp+FCh]
  int v1617; // [rsp+200h] [rbp+100h] BYREF
  _DWORD v1618[6]; // [rsp+208h] [rbp+108h] BYREF
  __int16 v1619; // [rsp+220h] [rbp+120h] BYREF
  _QWORD *v1620; // [rsp+222h] [rbp+122h]
  ULONG_PTR v1621; // [rsp+230h] [rbp+130h]
  __int64 v1622; // [rsp+238h] [rbp+138h] BYREF
  __int64 v1623; // [rsp+240h] [rbp+140h] BYREF
  __int64 v1624; // [rsp+248h] [rbp+148h] BYREF
  char v1625; // [rsp+250h] [rbp+150h] BYREF
  __int64 v1626; // [rsp+258h] [rbp+158h] BYREF
  __int64 v1627; // [rsp+260h] [rbp+160h]
  __int64 v1628; // [rsp+268h] [rbp+168h]
  __int64 v1629; // [rsp+270h] [rbp+170h] BYREF
  __int64 v1630; // [rsp+278h] [rbp+178h] BYREF
  __int128 v1631; // [rsp+280h] [rbp+180h]
  __int128 v1632; // [rsp+290h] [rbp+190h]
  __int16 v1633; // [rsp+2A0h] [rbp+1A0h] BYREF
  struct _KPRCB *v1634; // [rsp+2A2h] [rbp+1A2h]
  __int16 v1635; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v1636; // [rsp+2B2h] [rbp+1B2h]
  __int16 v1637; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v1638; // [rsp+2C2h] [rbp+1C2h]
  __int16 v1639; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v1640; // [rsp+2D2h] [rbp+1D2h]
  _BYTE *v1641; // [rsp+2E0h] [rbp+1E0h]
  __int64 v1642; // [rsp+2E8h] [rbp+1E8h] BYREF
  unsigned int v1643; // [rsp+2F0h] [rbp+1F0h]
  int v1644; // [rsp+2F8h] [rbp+1F8h] BYREF
  unsigned int v1645; // [rsp+300h] [rbp+200h]
  _DWORD *v1646; // [rsp+308h] [rbp+208h]
  _WORD v1647[4]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE *v1648; // [rsp+318h] [rbp+218h]
  _WORD v1649[4]; // [rsp+320h] [rbp+220h] BYREF
  _BYTE *v1650; // [rsp+328h] [rbp+228h]
  unsigned int v1651; // [rsp+330h] [rbp+230h]
  ULONG_PTR v1652; // [rsp+338h] [rbp+238h] BYREF
  __int64 v1653; // [rsp+340h] [rbp+240h]
  __int64 v1654; // [rsp+348h] [rbp+248h]
  __int64 v1655; // [rsp+350h] [rbp+250h]
  __int64 v1656; // [rsp+358h] [rbp+258h]
  __int64 v1657; // [rsp+360h] [rbp+260h]
  _BYTE v1658[16]; // [rsp+368h] [rbp+268h] BYREF
  _BYTE v1659[16]; // [rsp+378h] [rbp+278h] BYREF
  _BYTE v1660[16]; // [rsp+388h] [rbp+288h] BYREF
  __int64 v1661; // [rsp+398h] [rbp+298h] BYREF
  __int16 v1662; // [rsp+3A0h] [rbp+2A0h]
  __int16 v1663; // [rsp+3A2h] [rbp+2A2h]
  unsigned __int64 v1664; // [rsp+3B8h] [rbp+2B8h]
  int v1665; // [rsp+3C0h] [rbp+2C0h]
  unsigned int v1666; // [rsp+3C4h] [rbp+2C4h]
  unsigned __int64 v1667; // [rsp+3C8h] [rbp+2C8h]
  _BYTE v1668[16]; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 v1669; // [rsp+3E0h] [rbp+2E0h]
  __int64 v1670; // [rsp+3E8h] [rbp+2E8h]
  char v1671[8]; // [rsp+3F0h] [rbp+2F0h] BYREF
  char v1672[8]; // [rsp+3F8h] [rbp+2F8h] BYREF
  __int64 v1673; // [rsp+400h] [rbp+300h]
  __int64 v1674; // [rsp+408h] [rbp+308h]
  __int64 v1675; // [rsp+410h] [rbp+310h]
  unsigned int *v1676; // [rsp+418h] [rbp+318h]
  __int64 v1677; // [rsp+420h] [rbp+320h]
  __int64 v1678; // [rsp+428h] [rbp+328h]
  __int64 v1679; // [rsp+430h] [rbp+330h]
  char v1680[8]; // [rsp+438h] [rbp+338h] BYREF
  char v1681[8]; // [rsp+440h] [rbp+340h] BYREF
  char v1682[8]; // [rsp+448h] [rbp+348h] BYREF
  __int64 v1683; // [rsp+450h] [rbp+350h]
  __int64 v1684; // [rsp+458h] [rbp+358h]
  __int64 v1685; // [rsp+460h] [rbp+360h]
  __int64 v1686; // [rsp+468h] [rbp+368h]
  __int64 v1687; // [rsp+470h] [rbp+370h]
  __int64 v1688; // [rsp+478h] [rbp+378h]
  __int64 v1689; // [rsp+480h] [rbp+380h]
  __int64 v1690; // [rsp+488h] [rbp+388h]
  __int64 v1691; // [rsp+490h] [rbp+390h]
  __int64 v1692; // [rsp+498h] [rbp+398h]
  __int64 v1693; // [rsp+4A0h] [rbp+3A0h]
  char v1694[8]; // [rsp+4A8h] [rbp+3A8h] BYREF
  __int64 v1695; // [rsp+4B0h] [rbp+3B0h]
  __int64 v1696; // [rsp+4B8h] [rbp+3B8h]
  __int64 v1697; // [rsp+4C0h] [rbp+3C0h]
  __int64 v1698; // [rsp+4C8h] [rbp+3C8h]
  __int64 v1699; // [rsp+4D8h] [rbp+3D8h]
  __int64 v1700; // [rsp+4E0h] [rbp+3E0h]
  __int64 v1701; // [rsp+4E8h] [rbp+3E8h]
  ULONG_PTR v1702; // [rsp+4F0h] [rbp+3F0h]
  __int64 v1703; // [rsp+4F8h] [rbp+3F8h]
  ULONG_PTR v1704; // [rsp+500h] [rbp+400h]
  __int64 v1705; // [rsp+508h] [rbp+408h]
  unsigned __int64 v1706; // [rsp+510h] [rbp+410h]
  __int64 v1707; // [rsp+518h] [rbp+418h]
  __int64 v1708; // [rsp+520h] [rbp+420h]
  __int64 v1709; // [rsp+528h] [rbp+428h]
  __int64 v1710; // [rsp+530h] [rbp+430h]
  __int64 v1711; // [rsp+538h] [rbp+438h]
  unsigned __int64 v1712; // [rsp+540h] [rbp+440h]
  unsigned __int64 v1713; // [rsp+548h] [rbp+448h]
  unsigned __int64 v1714; // [rsp+550h] [rbp+450h]
  __int64 v1715; // [rsp+558h] [rbp+458h]
  __int64 v1716; // [rsp+560h] [rbp+460h]
  __int64 v1717; // [rsp+568h] [rbp+468h]
  __int64 v1718; // [rsp+570h] [rbp+470h]
  __int64 v1719; // [rsp+578h] [rbp+478h]
  __int64 v1720; // [rsp+580h] [rbp+480h]
  __int64 v1721; // [rsp+588h] [rbp+488h]
  _BYTE v1722[16]; // [rsp+590h] [rbp+490h] BYREF
  _BYTE v1723[16]; // [rsp+5A0h] [rbp+4A0h] BYREF
  _BYTE v1724[16]; // [rsp+5B0h] [rbp+4B0h] BYREF
  ULONG_PTR v1725; // [rsp+5C0h] [rbp+4C0h]
  _BYTE v1726[16]; // [rsp+5C8h] [rbp+4C8h] BYREF
  _BYTE v1727[16]; // [rsp+5D8h] [rbp+4D8h] BYREF
  _BYTE v1728[16]; // [rsp+5E8h] [rbp+4E8h] BYREF
  _BYTE v1729[16]; // [rsp+5F8h] [rbp+4F8h] BYREF
  _BYTE v1730[16]; // [rsp+608h] [rbp+508h] BYREF
  _BYTE v1731[16]; // [rsp+618h] [rbp+518h] BYREF
  _BYTE v1732[16]; // [rsp+628h] [rbp+528h] BYREF
  _BYTE v1733[16]; // [rsp+638h] [rbp+538h] BYREF
  _BYTE v1734[16]; // [rsp+648h] [rbp+548h] BYREF
  _BYTE v1735[16]; // [rsp+658h] [rbp+558h] BYREF
  __int64 v1736; // [rsp+668h] [rbp+568h]
  _BYTE v1737[24]; // [rsp+670h] [rbp+570h] BYREF
  char v1738[8]; // [rsp+688h] [rbp+588h] BYREF
  ULONG_PTR v1739; // [rsp+690h] [rbp+590h]
  int v1740; // [rsp+69Ch] [rbp+59Ch]
  __int64 v1741; // [rsp+6A0h] [rbp+5A0h]
  __int64 v1742; // [rsp+6A8h] [rbp+5A8h]
  _BYTE v1743[16]; // [rsp+6B0h] [rbp+5B0h] BYREF
  char v1744[16]; // [rsp+6C0h] [rbp+5C0h] BYREF
  char v1745[16]; // [rsp+6D0h] [rbp+5D0h] BYREF
  char v1746[8]; // [rsp+6E0h] [rbp+5E0h] BYREF
  unsigned __int64 v1747; // [rsp+6E8h] [rbp+5E8h]
  char v1748[8]; // [rsp+6F8h] [rbp+5F8h] BYREF
  unsigned __int64 v1749; // [rsp+700h] [rbp+600h]
  _BYTE v1750[48]; // [rsp+710h] [rbp+610h] BYREF
  _BYTE v1751[24]; // [rsp+740h] [rbp+640h] BYREF
  _BYTE v1752[48]; // [rsp+758h] [rbp+658h] BYREF
  unsigned __int8 *v1753; // [rsp+788h] [rbp+688h]
  int v1755; // [rsp+800h] [rbp+700h]
  unsigned __int64 v1756; // [rsp+800h] [rbp+700h]
  __int64 v1757; // [rsp+800h] [rbp+700h]
  BOOL v1758; // [rsp+800h] [rbp+700h]
  unsigned __int8 v1759; // [rsp+800h] [rbp+700h]
  __int64 v1760; // [rsp+800h] [rbp+700h]
  unsigned int v1761; // [rsp+800h] [rbp+700h]
  int v1762; // [rsp+800h] [rbp+700h]
  int v1763; // [rsp+800h] [rbp+700h]
  int v1764; // [rsp+800h] [rbp+700h]
  unsigned int v1765; // [rsp+800h] [rbp+700h]
  __int16 v1766; // [rsp+800h] [rbp+700h]
  int v1767; // [rsp+800h] [rbp+700h]
  __int64 v1768; // [rsp+800h] [rbp+700h]
  __int64 v1769; // [rsp+800h] [rbp+700h]
  __int64 v1770; // [rsp+800h] [rbp+700h]
  unsigned __int8 v1771; // [rsp+800h] [rbp+700h]
  unsigned __int8 v1772; // [rsp+800h] [rbp+700h]
  __int64 v1773; // [rsp+800h] [rbp+700h]
  unsigned int v1774; // [rsp+800h] [rbp+700h]
  unsigned int *v1775; // [rsp+800h] [rbp+700h]
  __int64 v1776; // [rsp+800h] [rbp+700h]
  __int64 **v1777; // [rsp+800h] [rbp+700h]
  __int64 v1778; // [rsp+800h] [rbp+700h]
  int v1779; // [rsp+800h] [rbp+700h]
  __int64 v1780; // [rsp+800h] [rbp+700h]
  unsigned __int16 v1781; // [rsp+800h] [rbp+700h]
  __int16 v1782; // [rsp+800h] [rbp+700h]
  char v1783; // [rsp+808h] [rbp+708h] BYREF

  v2 = a2;
  if ( !__31 )
    KeBugCheck(0x33u);
  v4 = *(_QWORD *)&MaxDataSize;
  _InterlockedOr(v1546, 0);
  if ( !v4 )
    return 3221225635LL;
  if ( *(_QWORD *)a1 < 0x40uLL
    || *(_QWORD *)(a1 + 8) != (unsigned int)KiGetNtDdiVersion()
    || (*(_DWORD *)(a1 + 20) & 0x7FFFFFFE) != 0
    || *(_QWORD *)(a1 + 24)
    || *(_QWORD *)(a1 + 32)
    || *(_QWORD *)(a1 + 40)
    || *(_QWORD *)(v2 + 16)
    || *(_QWORD *)(v2 + 24)
    || *(_QWORD *)(v2 + 32)
    || *(_DWORD *)(v2 + 4) >= *(_DWORD *)(v4 + 2004) )
  {
    return 3221225485LL;
  }
  v6 = *(_DWORD *)(a1 + 48);
  v7 = 1;
  v8 = *(_DWORD *)(a1 + 52);
  v9 = *(_DWORD *)(a1 + 20) & 1;
  if ( v6 )
  {
    if ( v6 <= 0 )
      return 3221225485LL;
    if ( v6 > 4 )
    {
      if ( v6 == 5 && !v8 )
      {
        if ( ObGetCurrentIrql() || KeAreApcsDisabled() )
        {
          v1532 = KeAreAllApcsDisabled();
          CurrentIrql = ObGetCurrentIrql();
          KeBugCheckEx(0xC8u, ((unsigned __int64)CurrentIrql << 16) | 0xFF, v1532, 0LL, 0LL);
        }
        goto LABEL_34;
      }
      return 3221225485LL;
    }
    if ( v8 != 16 || !KeVerifyGroupAffinity(*(_QWORD *)(a1 + 56), 0) )
      return 3221225485LL;
    if ( *(int *)(a1 + 20) >= 0 )
    {
      if ( ObGetCurrentIrql() || KeAreApcsDisabled() )
      {
        v1536 = KeAreAllApcsDisabled();
        v1537 = ObGetCurrentIrql();
        KeBugCheckEx(0xC8u, ((unsigned __int64)v1537 << 16) | 0xFF, v1536, 0LL, 0LL);
      }
    }
    else if ( ObGetCurrentIrql() > 1u )
    {
      v1534 = KeAreAllApcsDisabled();
      v1535 = ObGetCurrentIrql();
      KeBugCheckEx(0xC8u, ((unsigned __int64)v1535 << 16) | 0xFF, v1534, 0LL, 0LL);
    }
  }
  else
  {
    if ( v8 != 16 || (unsigned __int64)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL) - 1LL) > 0xFFFFFFFE )
      return 3221225485LL;
    if ( ObGetCurrentIrql() || KeAreApcsDisabled() )
    {
      v1544 = KeAreAllApcsDisabled();
      v1545 = ObGetCurrentIrql();
      KeBugCheckEx(0xC8u, ((unsigned __int64)v1545 << 16) | 0xFF, v1544, 0LL, 0LL);
    }
  }
LABEL_34:
  v1594 = 2744LL;
  if ( v9 )
  {
    v10 = *(_QWORD *)(v4 + 2648) + 2751LL;
    v1594 = v10;
    if ( v10 != 2744 )
    {
      Pool2 = ExAllocatePool2(64LL, v10, 1953384779LL);
      v7 = 1;
      goto LABEL_40;
    }
    v7 = 1;
  }
  ++dword_140C0DC14;
  v1572 = RtlpInterlockedPopEntrySList(&Lookaside);
  v12 = (__int64)v1572;
  if ( v1572 )
    goto LABEL_41;
  ++dword_140C0DC18;
  Pool2 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140C0DC30)(
            (unsigned int)dword_140C0DC24,
            (unsigned int)dword_140C0DC2C,
            (unsigned int)dword_140C0DC28);
LABEL_40:
  v1572 = (PSLIST_ENTRY)Pool2;
  v12 = Pool2;
LABEL_41:
  if ( !v12 )
    return 3221225626LL;
  v13 = v12 + 32;
  v1578 = v12 + 32;
  memmove((void *)(v12 + 32), (const void *)v4, 0xA68uLL);
  *(_QWORD *)(v12 + 2656) = v4;
  *(_QWORD *)(v12 + 2664) = v12 + 2696;
  *(_DWORD *)(v12 + 2056) = *(_DWORD *)v2;
  *(_DWORD *)(v12 + 2060) = *(_DWORD *)(v2 + 4);
  *(_DWORD *)(v12 + 2064) = 0;
  *(_DWORD *)(v12 + 2072) = 0;
  *(_DWORD *)(v12 + 2428) |= 0x1000u;
  if ( v9 )
    *(_QWORD *)(v12 + 2672) = (v12 + 2751) & 0xFFFFFFFFFFFFFFF8uLL;
  v15 = *(_DWORD *)(a1 + 16);
  v1550 = v12 + 32;
  v16 = v12 + 32;
  if ( v15 > 0x80000 )
    v15 = 0x80000;
  *(_DWORD *)(v12 + 2068) = v15;
  v1569 = 0;
  if ( !v15 )
    v15 = 1;
  v1584 = 0;
  *(_DWORD *)(v12 + 2068) = v15;
  v1627 = a1;
  v1628 = v2;
  v17 = *(unsigned int *)(v12 + 2392);
  if ( (_DWORD)v17 != -1 )
  {
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v12 + 648))(v17, v14, 6LL);
    if ( v18 || (v18 = (*(__int64 (__fastcall **)(_QWORD))(v12 + 656))(0LL)) != 0 )
    {
      if ( (*(int (__fastcall **)(__int64, _BYTE *))(v12 + 672))(v18, v1750) >= 0 )
      {
        *(_QWORD *)(v12 + 2408) = v18;
        v28 = (*(__int64 (**)(void))(v12 + 712))();
        v29 = (*(__int64 (__fastcall **)(__int64))(v12 + 744))(v28);
        if ( v29 )
        {
          (*(void (__fastcall **)(__int64, __int64))(v12 + 760))(v28, v29);
          v30 = 0;
        }
        else
        {
          v30 = 4;
        }
        v31 = *(_DWORD *)(v12 + 2428) & 0xFFFFFFFB;
        v1584 = 1;
        *(_DWORD *)(v12 + 2428) = v30 | v31;
        *(_DWORD *)(v12 + 2064) += 0x10000;
        goto LABEL_92;
      }
      (*(void (__fastcall **)(__int64))(v12 + 664))(v18);
    }
  }
  v19 = *(_DWORD *)(v12 + 2428);
  if ( (v19 & 8) != 0 && (v19 & 0x1000) == 0 )
  {
    v20 = __rdtsc();
    v21 = (__ROR8__(v20, 3) ^ v20) * (unsigned __int128)0x7010008004002001uLL;
    v1705 = *((_QWORD *)&v21 + 1);
    if ( (((unsigned __int8)v21 ^ BYTE8(v21)) & 3) == 0 )
    {
      v22 = __rdtsc();
      v23 = (__ROR8__(v22, 3) ^ v22) * (unsigned __int128)0x7010008004002001uLL;
      v1708 = *((_QWORD *)&v23 + 1);
      v24 = ((unsigned __int64)v23 ^ *((_QWORD *)&v23 + 1)) % 0xB;
      if ( (unsigned int)v24 > 5 )
      {
        v32 = v24 - 6;
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( v33 )
          {
            v34 = v33 - 1;
            if ( v34 )
            {
              if ( v34 == 1 )
              {
                v1601 = -1333354875;
                v27 = __ROR4__(-1333354868, 33);
              }
              else
              {
                v35 = __rdtsc();
                v36 = __ROR8__(v35, 3);
                v1709 = ((v36 ^ v35) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v37 = (67117057 * (v36 ^ v35)) ^ v1709;
                v27 = ((((((v37 % 0x1A + 97) << 8) | ((v37 >> 5)
                                                    - 26
                                                    * ((unsigned int)((1321528399 * (unsigned __int64)(v37 >> 5)) >> 32) >> 3)
                                                    + 65)) << 8) | ((v37 >> 10)
                                                                  - 26
                                                                  * ((unsigned int)((1321528399
                                                                                   * (unsigned __int64)(v37 >> 10)) >> 32) >> 3)
                                                                  + 97)) << 8) | ((v37 >> 15) % 0x1A + 65);
              }
            }
            else
            {
              v1602 = 1684422978;
              v27 = __ROR4__(1684422978, 8);
            }
          }
          else
          {
            v1603 = -2100910376;
            v27 = __ROL4__(-2100910376, 7);
          }
        }
        else
        {
          v1604 = 1314342514;
          v27 = __ROR4__(1314342516, 24);
        }
      }
      else if ( (_DWORD)v24 == 5 )
      {
        v1600 = 680282605;
        v27 = __ROR4__(680282605, 5);
      }
      else if ( (_DWORD)v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            if ( v26 == 1 )
            {
              v1597 = -1474152136;
              v27 = __ROR4__(-1474152133, 15);
            }
            else
            {
              v1596 = 1728537748;
              v27 = __ROL4__(1728537748, 4);
            }
          }
          else
          {
            v1598 = -2051698419;
            v27 = __ROR4__(-2051698419, 2);
          }
        }
        else
        {
          v1599 = -1297272415;
          v27 = __ROL4__(-1297272415, 1);
        }
      }
      else
      {
        v1609 = -795291432;
        v27 = __ROR4__(-795291432, 6);
      }
      v38 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v12 + 264))(64LL, *(_QWORD *)(v12 + 1880), v27);
      if ( v38 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(v12 + 440))(v38, *(unsigned __int16 *)(v12 + 1888));
        v39 = *(unsigned int *)(*(_QWORD *)(v12 + 1752) + *(_QWORD *)(v12 + 1296));
        if ( (_DWORD)v39 )
        {
          v40 = __rdtsc();
          v41 = (__ROR8__(v40, 3) ^ v40) * (unsigned __int128)0x7010008004002001uLL;
          v1710 = *((_QWORD *)&v41 + 1);
          v39 = (*((_QWORD *)&v41 + 1) ^ (unsigned __int64)v41) % v39;
        }
        v42 = 0LL;
        while ( 1 )
        {
          v43 = (*(__int64 (__fastcall **)(__int64))(v12 + 960))(v42);
          v44 = v43;
          if ( !v43 )
            goto LABEL_89;
          v42 = v43;
          if ( !(_DWORD)v39 )
            break;
          LODWORD(v39) = v39 - 1;
        }
        if ( (*(int (__fastcall **)(__int64))(v12 + 944))(v43) < 0 )
        {
          (*(void (__fastcall **)(__int64))(v12 + 968))(v44);
LABEL_89:
          (*(void (__fastcall **)(__int64))(v12 + 272))(v38);
          goto LABEL_90;
        }
        (*(void (__fastcall **)(__int64, _BYTE *))(v12 + 1096))(v44, v1750);
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(v12 + 472))(v44, v38, 0LL, 0LL, 0LL);
        v54 = __rdtsc();
        v55 = (__ROR8__(v54, 3) ^ v54) * (unsigned __int128)0x7010008004002001uLL;
        v1711 = *((_QWORD *)&v55 + 1);
        v56 = ((unsigned __int64)v55 ^ *((_QWORD *)&v55 + 1))
            % (*(unsigned int (__fastcall **)(__int64))(v12 + 464))(v38);
        _disable();
        _enable();
        (*(void (__fastcall **)(_BYTE *, _QWORD))(v12 + 432))(v1668, 0LL);
        (*(void (__fastcall **)(_BYTE *, __int64))(v12 + 448))(v1737, v38);
        while ( (*(int (__fastcall **)(unsigned int *, _BYTE *))(v12 + 456))(&v1580, v1737) >= 0 )
        {
          if ( !(_DWORD)v56 )
          {
            (*(void (__fastcall **)(_BYTE *, _QWORD))(v12 + 432))(v1668, v1580);
            break;
          }
          LODWORD(v56) = v56 - 1;
        }
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(v12 + 480))(v1668, v1735);
        (*(void (__fastcall **)(__int64))(v12 + 272))(v38);
        v7 = 1;
        v1569 = 1;
        goto LABEL_92;
      }
LABEL_90:
      v7 = 1;
    }
  }
  v1569 = 0;
LABEL_92:
  v1582 = 0LL;
  v45 = &v1583;
  v46 = 4;
  v47 = 0xFFFFFFFFLL;
  do
  {
    *(_BYTE *)v45 = 0;
    v45 = (unsigned int *)((char *)v45 + 1);
    --v46;
  }
  while ( v46 );
  v48 = *(_DWORD *)(v12 + 2068);
  v49 = *(unsigned int *)(v12 + 2056);
  v1568 = *(_DWORD *)(v12 + 2056);
  if ( *(_DWORD *)(v12 + 2064) >= v48 )
    goto LABEL_2474;
  v50 = v1712;
  v51 = v49;
  v52 = v1713;
  v53 = v1651;
  v1585 = v1712;
  v1593 = v1713;
  v1576 = v1651;
  v1573 = v1643;
  while ( 1 )
  {
    if ( (*(_DWORD *)(v16 + 2392) & 0x110000) != 0x110000 )
      __writedr(7u, 0LL);
    if ( v51 == *(_DWORD *)(v16 + 2004) )
      break;
    v57 = v16;
    if ( *(_QWORD *)(v16 + 2624) )
      v57 = *(_QWORD *)(v16 + 2624);
    v58 = 0LL;
    v59 = (char *)(v57 + *(unsigned int *)(v57 + 2000));
    v1549 = (int *)v59;
    if ( (_DWORD)v1582 && HIDWORD(v1582) <= v51 )
    {
      v58 = HIDWORD(v1582);
      v59 = (char *)(v57 + v1583);
      v1549 = (int *)v59;
    }
    if ( (_DWORD)v58 != v51 )
    {
      v60 = v51 - (unsigned int)v58;
      v58 = v51;
      while ( 1 )
      {
        v49 = *(unsigned int *)v59;
        if ( (int)v49 > 12 )
          break;
        if ( (_DWORD)v49 == 12 )
          goto LABEL_129;
        v61 = v49 - 1;
        if ( !v61 )
          goto LABEL_129;
        v49 = (unsigned int)(v61 - 6);
        if ( (_DWORD)v49 )
        {
          v49 = (unsigned int)(v49 - 1);
          if ( !(_DWORD)v49 )
          {
            v63 = *((unsigned __int16 *)v59 + 16);
LABEL_134:
            v62 = (v63 + 55) & 0xFFFFFFF8;
            goto LABEL_135;
          }
          if ( (_DWORD)v49 != 2 )
            goto LABEL_131;
          v62 = (unsigned int)(16 * (*((_DWORD *)v59 + 7) + 3));
        }
        else
        {
          v62 = (unsigned int)(24 * (*((_DWORD *)v59 + 6) + 2));
        }
LABEL_135:
        v59 += v62;
        if ( !--v60 )
        {
          v50 = v1585;
          v52 = v1593;
          v53 = v1576;
          v1549 = (int *)v59;
          goto LABEL_137;
        }
      }
      if ( (_DWORD)v49 == 28 )
      {
        v63 = *((unsigned __int16 *)v59 + 20);
        goto LABEL_134;
      }
      if ( (_DWORD)v49 == 30 )
      {
        v49 = *((_DWORD *)v59 + 9) != 0 ? (unsigned int)(*((_DWORD *)v59 + 9) - 1) : 0;
        v47 = ((*((_DWORD *)v59 + 9) != 0 ? *((_DWORD *)v59 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8;
        v62 = (unsigned int)v47 + 24 * (*((unsigned __int16 *)v59 + 20) + 2);
        goto LABEL_135;
      }
      if ( (int)v49 <= 32 )
      {
LABEL_131:
        v62 = 48LL;
        goto LABEL_135;
      }
      if ( (int)v49 <= 34 )
      {
        v49 = *((_DWORD *)v59 + 8) & 0xFFF;
        v47 = (v49 + *((unsigned int *)v59 + 10) + 4095LL) >> 12;
        v62 = (unsigned int)(20 * v47 + 48);
        goto LABEL_135;
      }
      if ( (_DWORD)v49 != 43 )
        goto LABEL_131;
LABEL_129:
      v49 = *((unsigned int *)v59 + 4);
      v47 = v49 / 0xC;
      v62 = 4 * (unsigned int)(v49 / 0xC) + 48;
      goto LABEL_135;
    }
LABEL_137:
    LODWORD(v1582) = 1;
    HIDWORD(v1582) = v58;
    v64 = 0;
    v1583 = (_DWORD)v59 - v57;
    if ( !*(_DWORD *)(v16 + 2028) )
    {
      v57 = 0LL;
      v49 = *(int *)v59;
      v47 = *(unsigned int *)(v1627 + 48);
      v58 = *(_QWORD *)(v1627 + 56);
      if ( (int)v49 > 21 )
      {
        if ( (_DWORD)v49 == 24 )
          goto LABEL_175;
        if ( (int)v49 <= 27 )
          goto LABEL_147;
        if ( (int)v49 <= 29 )
          goto LABEL_175;
        if ( (unsigned int)v49 > 0x23 || (v67 = 0x940000000LL, !_bittest64(&v67, v49)) )
        {
          if ( (unsigned int)(v49 - 43) > 1 )
            goto LABEL_147;
        }
LABEL_170:
        if ( (_DWORD)v47 )
          goto LABEL_147;
      }
      else
      {
        if ( (_DWORD)v49 == 21 )
        {
          LODWORD(v57) = *((_DWORD *)v59 + 11);
          if ( (_DWORD)v47 != 4 )
            goto LABEL_147;
          goto LABEL_162;
        }
        if ( (v49 & 0x80000000) != 0LL )
          goto LABEL_147;
        if ( (int)v49 <= 1 )
          goto LABEL_170;
        if ( (int)v49 > 3 )
        {
          if ( (_DWORD)v49 != 7 )
          {
            if ( (_DWORD)v49 != 8 )
            {
              if ( (_DWORD)v49 != 9 && (unsigned int)(v49 - 11) > 3 )
                goto LABEL_147;
              goto LABEL_170;
            }
LABEL_175:
            if ( (_DWORD)v47 != 5 )
              goto LABEL_147;
LABEL_176:
            ++*(_QWORD *)(v1628 + 8);
            goto LABEL_177;
          }
          LODWORD(v57) = *((_DWORD *)v59 + 7);
          v66 = (_DWORD)v47 == 1;
LABEL_153:
          if ( !v66 )
            goto LABEL_147;
          goto LABEL_162;
        }
        if ( (_DWORD)v47 )
        {
          if ( (unsigned int)(v49 - 2) <= 1 )
          {
            LODWORD(v57) = *((_DWORD *)v59 + 10);
            if ( (_DWORD)v49 == 3 && (_DWORD)v47 != 2 )
              goto LABEL_147;
            if ( (_DWORD)v49 == 2 )
            {
              v66 = (_DWORD)v47 == 3;
              goto LABEL_153;
            }
          }
LABEL_162:
          if ( !(unsigned int)KeCheckProcessorGroupAffinity(*(_QWORD *)(v1627 + 56), v57) )
            goto LABEL_147;
          goto LABEL_176;
        }
      }
      v68 = *((unsigned int *)v59 + 4);
      if ( !(_DWORD)v68 )
        goto LABEL_147;
      v57 = *(_QWORD *)v58;
      v49 = *((_QWORD *)v59 + 1);
      v1645 = *(_DWORD *)(v58 + 8);
      v47 = v49 + v68;
      v1714 = v57;
      if ( v49 >= v57 + v1645 || v47 <= v57 )
        goto LABEL_147;
      goto LABEL_176;
    }
LABEL_177:
    v69 = *(_DWORD *)v59;
    v1755 = *(_DWORD *)v59;
    if ( *(int *)v59 > 28 )
    {
      if ( v69 <= 37 )
      {
        if ( v69 == 37 )
        {
          v49 = 2LL;
          if ( (*(_DWORD *)(v16 + 2396) & 2) != 0
            || !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(v16 + 1048))(2LL, v47)
            || *(_DWORD *)(v16 + 2240) )
          {
            goto LABEL_147;
          }
          *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v16 + 2264) = *(int *)v59;
          goto LABEL_1806;
        }
        if ( v69 == 29 )
        {
          v1079 = (_QWORD *)*((_QWORD *)v59 + 1);
          v1080 = *((unsigned int *)v59 + 4);
          v1081 = v1079;
          *(_DWORD *)(v16 + 2032) += v1080;
          v1082 = (const char *)v1079;
          v1083 = *(_DWORD *)(v16 + 2012);
          v1084 = *(_QWORD *)(v16 + 2016);
          v49 = (unsigned __int64)v1079 + v1080;
          if ( v1079 < (_QWORD *)((char *)v1079 + v1080) )
          {
            do
            {
              _mm_prefetch(v1082, 0);
              v1082 += 64;
            }
            while ( (unsigned __int64)v1082 < v49 );
          }
          v1085 = *(_QWORD *)(v16 + 2016);
          v1086 = (unsigned int)v1080 >> 7;
          if ( (unsigned int)v1080 >> 7 )
          {
            do
            {
              v1087 = 8LL;
              do
              {
                v1088 = v1081[1] ^ __ROL8__(*v1081 ^ v1085, v1083);
                v1081 += 2;
                v1085 = __ROL8__(v1088, v1083);
                --v1087;
              }
              while ( v1087 );
              v49 = __ROL8__(v1084 ^ ((char *)v1081 - (char *)v1079), 17) ^ v1084 ^ ((char *)v1081 - (char *)v1079);
              v1693 = (v49 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1083 = ((unsigned __int8)v49 ^ (unsigned __int8)(v1693 ^ v1083)) & 0x3F;
              if ( !v1083 )
                v1083 = 1;
              --v1086;
            }
            while ( v1086 );
            v16 = v1550;
          }
          v1089 = v1080 & 0x7F;
          if ( (unsigned int)v1089 >= 8 )
          {
            v1090 = (unsigned __int64)(unsigned int)v1089 >> 3;
            do
            {
              v49 = v1083;
              v1085 = __ROL8__(*v1081++ ^ v1085, v1083);
              v1089 = (unsigned int)(v1089 - 8);
              --v1090;
            }
            while ( v1090 );
          }
          for ( ; (_DWORD)v1089; v1089 = (unsigned int)(v1089 - 1) )
          {
            v1091 = *(unsigned __int8 *)v1081;
            v49 = v1083;
            v1081 = (_QWORD *)((char *)v1081 + 1);
            v1085 = __ROL8__(v1091 ^ v1085, v1083);
          }
          for ( i = v1085; ; LODWORD(v1085) = i ^ v1085 )
          {
            i >>= 31;
            if ( !i )
              break;
          }
          v1093 = v1085 & 0x7FFFFFFF;
          if ( v1093 == *((_DWORD *)v59 + 5) )
            goto LABEL_1780;
          if ( !*(_DWORD *)v59 && *((_DWORD *)v59 + 6) )
            v64 = 1;
          v49 = *((unsigned int *)v59 + 4);
          v1094 = *((_QWORD *)v59 + 1);
          if ( *((_DWORD *)v59 + 4) )
          {
            v1089 = 64LL;
            if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
            {
              v1095 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1096 = v1094 & 0xFFFFFFFFFFFFF000uLL;
              v1776 = (v1094 + v49 - 1) | 0xFFF;
              v1097 = (v1094 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v1098 = v1095;
                while ( 1 )
                {
                  v1099 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v16 + 1112))(
                            v1096,
                            0LL,
                            v1089,
                            v1081);
                  if ( v1099 != -1073741267 )
                    break;
                  if ( v64 )
                    goto LABEL_1798;
                  if ( v1095 > 1u )
                    goto LABEL_1778;
                  v1098 = v1095;
                  __writecr8(v1095);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1099 < 0 )
                  break;
LABEL_1778:
                v1096 += 4096LL;
                v1097 += 4096LL;
                if ( v1097 == v1776 )
                {
                  __writecr8(v1098);
                  v59 = (char *)v1549;
                  goto LABEL_1780;
                }
              }
LABEL_1798:
              __writecr8(v1098);
              v59 = (char *)v1549;
            }
          }
          if ( *(_DWORD *)(v16 + 2240) )
          {
LABEL_1780:
            v1100 = 1;
          }
          else
          {
            v1100 = 1;
            *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = *((unsigned int *)v59 + 5) ^ (unsigned __int64)v1093;
            v49 = *((_QWORD *)v59 + 1);
            if ( !*(_DWORD *)(v16 + 2240) )
            {
              *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v16 + 2264) = *(int *)v59;
              *(_QWORD *)(v16 + 2272) = v49;
              *(_DWORD *)(v16 + 2240) = 1;
              __b9(v16, 0LL, v1089, v1081);
            }
          }
          v1101 = (__int64 **)*((_QWORD *)v59 + 1);
          v1102 = *((_DWORD *)v59 + 4) >> 4;
          v1777 = v1101;
          if ( v1102 )
          {
            v1103 = v1102;
            v1555 = v1102;
            do
            {
              v1104 = (char *)v1549;
              v1105 = **v1101;
              v1624 = 0LL;
              v1106 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, _QWORD *))(v16 + 768))(
                        v1105,
                        &v1624,
                        v1089,
                        v1081);
              if ( v1106 )
              {
                do
                {
                  ++v1100;
                  if ( !(*(__int64 (__fastcall **)(__int64, char *))(v16 + 504))(v1106, v1694) )
                  {
                    if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
                    {
                      v1108 = *(_QWORD **)(v16 + 2632);
                      v1109 = 48;
                      v1107 = 6LL;
                      do
                      {
                        v1109 -= 8;
                        *v1108 = *(_QWORD *)v1104;
                        v1104 += 8;
                        ++v1108;
                        --v1107;
                      }
                      while ( v1107 );
                      if ( v1109 )
                      {
                        do
                        {
                          v1110 = *v1104++;
                          *(_BYTE *)v1108 = v1110;
                          v1108 = (_QWORD *)((char *)v1108 + 1);
                          --v1109;
                        }
                        while ( v1109 );
                        v16 = v1550;
                      }
                      v1104 = *(char **)(v16 + 2632);
                    }
                    *((_QWORD *)v1104 + 3) = v1106;
                    *((_QWORD *)v1104 + 4) = v1105;
                    v1111 = *(_QWORD *)(v16 + 1384);
                    *(_QWORD *)v1111 = v1104;
                    *(_DWORD *)(v1111 + 16) = 48;
                    v1112 = *(_QWORD *)(v16 + 1384);
                    *(_QWORD *)(v1112 + 8) = v1106;
                    *(_DWORD *)(v1112 + 20) = 4096;
                    if ( !*(_DWORD *)(v16 + 2240) )
                    {
                      *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v16 + 2256) = v1104 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v16 + 2264) = *(int *)v1104;
                      *(_QWORD *)(v16 + 2272) = 6LL;
                      *(_DWORD *)(v16 + 2240) = 1;
                      __b9(v16, 0LL, v1107, 1LL);
                    }
                  }
                  v1106 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v16 + 768))(v1105, &v1624);
                }
                while ( v1106 );
                v1101 = v1777;
                v1103 = v1555;
              }
              v1101 += 2;
              v1100 = 1;
              --v1103;
              v1777 = v1101;
              v1555 = v1103;
            }
            while ( v1103 );
          }
          goto LABEL_147;
        }
        v49 = (unsigned int)(v69 - 30);
        if ( v69 == 30 )
        {
          if ( (v59[42] & 1) != 0 )
          {
            if ( !*(_QWORD *)(v16 + 2376) )
              goto LABEL_1747;
            v49 = *(unsigned int *)(v16 + 2396);
            if ( (v49 & 4) != 0 )
              goto LABEL_1747;
            if ( *(_DWORD *)(v16 + 2028) )
            {
              if ( (v49 & 0x20) != 0 )
                goto LABEL_1747;
            }
            else
            {
              *(_DWORD *)(v16 + 2396) = v49 ^ ((unsigned __int8)v49 ^ (unsigned __int8)(8 * v49)) & 0x20;
            }
          }
          v1015 = *(unsigned int *)(v16 + 2028);
          v1016 = *((unsigned int *)v59 + 9);
          v1558 = (unsigned int *)*((_QWORD *)v59 + 1);
          v1017 = &v1558[3 * v1015];
          v1018 = v1017 + 3;
          v1555 = (__int64)v1017;
          v1557 = v1017 + 3;
          v1019 = v1016 / 0xC;
          BugCheckParameter2 = v1016 / 0xC;
          v1563 = &v1558[3 * (unsigned int)(v1016 / 0xC)];
          v1020 = &v59[v1015 + 48];
          v1553 = (__int64)v1020;
          v1021 = v1016 / 0xC - 1;
          v1774 = v1021;
          if ( (unsigned int)(v1016 / 0xC) )
          {
            v1022 = (unsigned __int64)&v59[((v1021 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
            v1567 = v1022;
          }
          else
          {
            v1022 = (unsigned __int64)(v59 + 48);
            v1567 = (__int64)(v59 + 48);
            v1774 = v1016 / 0xC - 1;
          }
          v49 = 3LL * *((unsigned __int16 *)v59 + 20);
          v1552 = (unsigned int *)(v1022 + 24LL * *((unsigned __int16 *)v59 + 20));
          if ( (_DWORD)v1019 && (unsigned int)v1015 < v1021 )
          {
            do
            {
              if ( *v1020 >= 0 )
              {
                v1023 = v1017[1];
                v1024 = *((_QWORD *)v59 + 3) + v1023;
                v1025 = *v1018 - v1023;
                *(_DWORD *)(v16 + 2032) += v1025;
                v1026 = (_QWORD *)v1024;
                v1027 = *(_DWORD *)(v16 + 2012);
                v1028 = (const char *)v1024;
                v1029 = *(_QWORD *)(v16 + 2016);
                v1565 = v1024;
                v1030 = (unsigned int)v1025;
                if ( v1024 < v1024 + v1025 )
                {
                  do
                  {
                    _mm_prefetch(v1028, 0);
                    v1028 += 64;
                  }
                  while ( (unsigned __int64)v1028 < v1024 + v1025 );
                }
                v1031 = v1029;
                v1032 = (unsigned int)v1025 >> 7;
                if ( (unsigned int)v1025 >> 7 )
                {
                  do
                  {
                    v1033 = 8LL;
                    do
                    {
                      v1034 = v1031 ^ *v1026;
                      v1035 = v1026[1];
                      v1026 += 2;
                      v1031 = __ROL8__(__ROL8__(v1034, v1027) ^ v1035, v1027);
                      --v1033;
                    }
                    while ( v1033 );
                    v1036 = __ROL8__(v1029 ^ ((unsigned __int64)v1026 - v1024), 17) ^ v1029 ^ ((unsigned __int64)v1026
                                                                                             - v1024);
                    v1691 = (v1036 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v1027 = ((unsigned __int8)v1036 ^ (unsigned __int8)(v1691 ^ v1027)) & 0x3F;
                    if ( !v1027 )
                      LOBYTE(v1027) = 1;
                    --v1032;
                  }
                  while ( v1032 );
                  v16 = v1550;
                }
                v1037 = v1025 & 0x7F;
                if ( (unsigned int)v1037 >= 8 )
                {
                  v1038 = (unsigned __int64)(unsigned int)v1037 >> 3;
                  do
                  {
                    v1031 = __ROL8__(*v1026++ ^ v1031, v1027);
                    v1037 = (unsigned int)(v1037 - 8);
                    --v1038;
                  }
                  while ( v1038 );
                }
                if ( (_DWORD)v1037 )
                {
                  do
                  {
                    v1039 = *(unsigned __int8 *)v1026;
                    v1026 = (_QWORD *)((char *)v1026 + 1);
                    v1031 = __ROL8__(v1039 ^ v1031, v1027);
                    v1037 = (unsigned int)(v1037 - 1);
                  }
                  while ( (_DWORD)v1037 );
                  v1020 = (char *)v1553;
                }
                for ( j = v1031; ; LOBYTE(v1031) = j ^ v1031 )
                {
                  j >>= 7;
                  if ( !j )
                    break;
                }
                v49 = (unsigned __int8)*v1020;
                v1041 = v1031 & 0x7F;
                if ( v1041 == (*v1020 & 0x7F) )
                  goto LABEL_1694;
                if ( v1030 && (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
                {
                  v1042 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v1043 = v1024 & 0xFFFFFFFFFFFFF000uLL;
                  v1044 = (v1030 - 1 + v1024) | 0xFFF;
                  v1045 = v1043 - 1;
                  while ( 1 )
                  {
                    v1046 = v1042;
                    while ( 1 )
                    {
                      v1047 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v16 + 1112))(v1043, 0LL);
                      if ( v1047 != -1073741267 )
                        break;
                      if ( v1042 > 1u )
                        goto LABEL_1692;
                      v1046 = v1042;
                      __writecr8(v1042);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                    }
                    if ( v1047 < 0 )
                      break;
LABEL_1692:
                    v1043 += 4096LL;
                    v1045 += 4096LL;
                    if ( v1045 == v1044 )
                    {
                      __writecr8(v1046);
                      goto LABEL_1694;
                    }
                  }
                  __writecr8(v1046);
                  v1024 = v1565;
                  LOBYTE(v49) = *(_BYTE *)v1553;
                }
                v1049 = v49 & 0x7F;
                if ( *(_DWORD *)(v16 + 2240) )
                {
LABEL_1694:
                  v59 = (char *)v1549;
                }
                else
                {
                  v1050 = v1041;
                  v59 = (char *)v1549;
                  v49 = v1049 ^ v1050;
                  *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v49;
                  if ( !*(_DWORD *)(v16 + 2240) )
                  {
                    *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v16 + 2264) = *(int *)v59;
                    *(_QWORD *)(v16 + 2272) = v1024;
                    *(_DWORD *)(v16 + 2240) = 1;
                    __b9(v16, 0LL, v1031, v1037);
                  }
                }
                v1017 = (unsigned int *)v1555;
                *(_DWORD *)(v16 + 2032) += 64;
                v1020 = (char *)v1553;
                v1018 = v1557;
              }
              ++v1020;
              v1017 += 3;
              v1553 = (__int64)v1020;
              v1018 += 3;
              v1555 = (__int64)v1017;
              v1557 = v1018;
            }
            while ( v1018 < v1563 && *(_DWORD *)(v16 + 2032) < *(_DWORD *)(v16 + 2036) );
            LODWORD(v1019) = BugCheckParameter2;
            LODWORD(v1015) = ((int)v1017 - (int)v1558) / 12;
            *(_DWORD *)(v16 + 2028) = v1015;
            v1022 = v1567;
            if ( (unsigned int)v1015 < v1774 )
              goto LABEL_147;
          }
          if ( *(_DWORD *)(v16 + 2032) >= *(_DWORD *)(v16 + 2036) )
            goto LABEL_147;
          if ( (_DWORD)v1019 )
            v1048 = 3LL * (unsigned int)(v1015 - v1019 + 1);
          else
            v1048 = 3LL * (unsigned int)v1015;
          v49 = v1022 + 8 * v1048;
          v1557 = (unsigned int *)v49;
          while ( 1 )
          {
            v1051 = (unsigned int *)(v49 + 8);
            v1052 = 2LL;
            v1553 = 2LL;
            v1775 = (unsigned int *)(v49 + 8);
            do
            {
              if ( (*v1051 & 0x80000000) == 0 )
              {
                v1053 = *((_QWORD *)v59 + 3) + *(v1051 - 2);
                v1054 = *(v1051 - 1) - *(v1051 - 2);
                *(_DWORD *)(v16 + 2032) += v1054;
                v1055 = (_QWORD *)v1053;
                v1056 = *(_DWORD *)(v16 + 2012);
                v1057 = (const char *)v1053;
                v1058 = *(_QWORD *)(v16 + 2016);
                v1059 = (unsigned int)v1054;
                v1555 = v1053;
                v1565 = (unsigned int)v1054;
                if ( v1053 < v1053 + v1054 )
                {
                  do
                  {
                    _mm_prefetch(v1057, 0);
                    v1057 += 64;
                  }
                  while ( (unsigned __int64)v1057 < v1053 + v1054 );
                }
                v1060 = v1058;
                v1061 = (unsigned int)v1054 >> 7;
                if ( (unsigned int)v1054 >> 7 )
                {
                  do
                  {
                    v1062 = 8LL;
                    do
                    {
                      v1063 = v1055[1] ^ __ROL8__(*v1055 ^ v1060, v1056);
                      v1055 += 2;
                      v1060 = __ROL8__(v1063, v1056);
                      --v1062;
                    }
                    while ( v1062 );
                    v1064 = (__ROL8__(v1058 ^ ((unsigned __int64)v1055 - v1053), 17) ^ v1058 ^ ((unsigned __int64)v1055
                                                                                              - v1053))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v1692 = *((_QWORD *)&v1064 + 1);
                    v1056 = ((unsigned __int8)v1064 ^ (unsigned __int8)(BYTE8(v1064) ^ v1056)) & 0x3F;
                    if ( !v1056 )
                      LOBYTE(v1056) = 1;
                    --v1061;
                  }
                  while ( v1061 );
                  v16 = v1550;
                  v1059 = v1565;
                  v1051 = v1775;
                  v1052 = v1553;
                }
                v1065 = v1054 & 0x7F;
                if ( (unsigned int)v1065 >= 8 )
                {
                  v1066 = (unsigned __int64)(unsigned int)v1065 >> 3;
                  do
                  {
                    v1060 = __ROL8__(*v1055++ ^ v1060, v1056);
                    v1065 = (unsigned int)(v1065 - 8);
                    --v1066;
                  }
                  while ( v1066 );
                }
                if ( (_DWORD)v1065 )
                {
                  do
                  {
                    v1067 = *(unsigned __int8 *)v1055;
                    v1055 = (_QWORD *)((char *)v1055 + 1);
                    v1060 = __ROL8__(v1067 ^ v1060, v1056);
                    v1065 = (unsigned int)(v1065 - 1);
                  }
                  while ( (_DWORD)v1065 );
                  v16 = v1550;
                }
                for ( k = v1060; ; LODWORD(v1060) = k ^ v1060 )
                {
                  k >>= 31;
                  if ( !k )
                    break;
                }
                v1069 = *v1051;
                v1070 = v1060 & 0x7FFFFFFF;
                if ( v1070 != (*v1051 & 0x7FFFFFFF) )
                {
                  if ( v1059 )
                  {
                    v1065 = 64LL;
                    if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
                    {
                      v1071 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v1072 = v1053 & 0xFFFFFFFFFFFFF000uLL;
                      v1073 = (v1053 + v1059 - 1) | 0xFFF;
                      v1074 = (v1053 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      while ( 1 )
                      {
                        v1075 = v1071;
                        while ( 1 )
                        {
                          v1076 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v16 + 1112))(
                                    v1072,
                                    0LL,
                                    v1065,
                                    v1055);
                          if ( v1076 != -1073741267 )
                            break;
                          if ( v1071 > 1u )
                            goto LABEL_1737;
                          v1075 = v1071;
                          __writecr8(v1071);
                          KeGetCurrentIrql();
                          __writecr8(2uLL);
                        }
                        if ( v1076 < 0 )
                          break;
LABEL_1737:
                        v1072 += 4096LL;
                        v1074 += 4096LL;
                        if ( v1074 == v1073 )
                        {
                          __writecr8(v1075);
                          v1051 = v1775;
                          v1052 = v1553;
                          goto LABEL_1739;
                        }
                      }
                      __writecr8(v1075);
                      v1051 = v1775;
                      v1053 = v1555;
                      v1052 = v1553;
                      v59 = (char *)v1549;
                      v1069 = *v1775;
                    }
                  }
                  v1078 = v1069;
                  if ( !*(_DWORD *)(v16 + 2240) )
                  {
                    LODWORD(v1078) = v1069 & 0x7FFFFFFF;
                    *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v1078 ^ v1070;
                    if ( !*(_DWORD *)(v16 + 2240) )
                    {
                      *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v16 + 2264) = *(int *)v59;
                      *(_QWORD *)(v16 + 2272) = v1053;
                      *(_DWORD *)(v16 + 2240) = 1;
                      __b9(v16, 0LL, v1065, v1055);
                      v1051 = v1775;
                    }
                  }
                }
              }
LABEL_1739:
              v59 = (char *)v1549;
              v1051 += 3;
              --v1052;
              v1775 = v1051;
              v1553 = v1052;
            }
            while ( v1052 );
            v1077 = v1557;
            ++*(_DWORD *)(v16 + 2028);
            v49 = (unsigned __int64)(v1077 + 6);
            v1557 = (unsigned int *)v49;
            if ( (unsigned int *)v49 == v1552 )
              goto LABEL_1747;
            if ( *(_DWORD *)(v16 + 2032) >= *(_DWORD *)(v16 + 2036) )
              goto LABEL_147;
          }
        }
        v49 = (unsigned int)(v69 - 31);
        if ( v69 != 31 )
        {
          if ( v69 == 32 )
          {
            sub_1403FA684(v16, v59);
            goto LABEL_147;
          }
          if ( v69 == 33 )
          {
            sub_1403F974C(v16, v59);
            goto LABEL_147;
          }
          v49 = (unsigned int)(v69 - 35);
          if ( v69 != 35 )
          {
            if ( v69 == 36 )
            {
              v835 = (const char *)*((_QWORD *)v59 + 1);
              v836 = *((unsigned int *)v59 + 4);
              v837 = (__int64)v835;
              *(_DWORD *)(v16 + 2032) += v836;
              v838 = v835;
              v839 = *(_DWORD *)(v16 + 2012);
              for ( m = *(_QWORD *)(v16 + 2016); v838 < &v835[v836]; v838 += 64 )
                _mm_prefetch(v838, 0);
              v841 = *(_QWORD *)(v16 + 2016);
              v842 = (unsigned int)v836 >> 7;
              if ( (unsigned int)v836 >> 7 )
              {
                do
                {
                  v843 = 8LL;
                  do
                  {
                    v844 = *(_QWORD *)(v837 + 8) ^ __ROL8__(*(_QWORD *)v837 ^ v841, v839);
                    v837 += 16LL;
                    v841 = __ROL8__(v844, v839);
                    --v843;
                  }
                  while ( v843 );
                  v845 = (__ROL8__(m ^ (v837 - (_QWORD)v835), 17) ^ m ^ (unsigned __int64)(v837 - (_QWORD)v835))
                       * (unsigned __int128)0x7010008004002001uLL;
                  v1688 = *((_QWORD *)&v845 + 1);
                  v846 = v845 ^ BYTE8(v845) ^ v839;
                  v847 = 0xFFFFFFFFLL;
                  v839 = v846 & 0x3F;
                  if ( !v839 )
                    LOBYTE(v839) = 1;
                  --v842;
                }
                while ( v842 );
                v16 = v1550;
              }
              else
              {
                v847 = 0xFFFFFFFFLL;
              }
              v848 = v836 & 0x7F;
              if ( (unsigned int)v848 >= 8 )
              {
                v849 = (unsigned __int64)(unsigned int)v848 >> 3;
                do
                {
                  v841 = __ROL8__(*(_QWORD *)v837 ^ v841, v839);
                  v837 += 8LL;
                  v848 = (unsigned int)(v848 - 8);
                  --v849;
                }
                while ( v849 );
              }
              for ( ; (_DWORD)v848; v848 = (unsigned int)(v848 - 1) )
              {
                v850 = *(unsigned __int8 *)v837++;
                v841 = __ROL8__(v850 ^ v841, v839);
              }
              for ( n = v841; ; LODWORD(v841) = n ^ v841 )
              {
                n >>= 31;
                if ( !n )
                  break;
              }
              v852 = v841 & 0x7FFFFFFF;
              if ( v852 == *((_DWORD *)v59 + 5) )
                goto LABEL_1398;
              v848 = 0LL;
              if ( !*(_DWORD *)v59 && *((_DWORD *)v59 + 6) )
                v64 = 1;
              v853 = *((unsigned int *)v59 + 4);
              v847 = *((_QWORD *)v59 + 1);
              if ( *((_DWORD *)v59 + 4) )
              {
                v837 = 64LL;
                if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
                {
                  v854 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v855 = v847 & 0xFFFFFFFFFFFFF000uLL;
                  v1769 = (v847 + v853 - 1) | 0xFFF;
                  v856 = (v847 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    v857 = v854;
                    while ( 1 )
                    {
                      v858 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v16 + 1112))(v855, 0LL);
                      v848 = 0LL;
                      if ( v858 != -1073741267 )
                        break;
                      if ( v64 )
                        goto LABEL_1394;
                      if ( v854 > 1u )
                        goto LABEL_1392;
                      v857 = v854;
                      __writecr8(v854);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                    }
                    if ( v858 < 0 )
                      break;
LABEL_1392:
                    v855 += 4096LL;
                    v856 += 4096LL;
                    if ( v856 == v1769 )
                    {
                      __writecr8(v857);
                      v59 = (char *)v1549;
LABEL_1398:
                      v860 = *(_QWORD *)(v16 + 1304);
                      v861 = KeGetCurrentIrql();
                      __writecr8(0xFuLL);
                      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(v16 + 320))(v860, v847, v848, v837);
                      v863 = **(unsigned int ***)(v16 + 1512);
                      v864 = v863 + 4;
                      v865 = *((_BYTE *)v863 + 12);
                      v866 = (unsigned __int64)&v863[6 * *v863 + 4];
                      do
                      {
                        v867 = 24LL;
                        v868 = (__int64 *)(v59 + 24);
                        v869 = v864;
                        do
                        {
                          v870 = *(_QWORD *)v869;
                          v869 += 2;
                          v871 = *v868++;
                          if ( v870 != v871 )
                            goto LABEL_1406;
                          v867 = (unsigned int)(v867 - 8);
                        }
                        while ( (unsigned int)v867 >= 8 );
                        if ( !(_DWORD)v867 )
                          break;
                        while ( 1 )
                        {
                          v862 = *(unsigned __int8 *)v869;
                          v869 = (unsigned int *)((char *)v869 + 1);
                          v872 = *(unsigned __int8 *)v868;
                          v868 = (__int64 *)((char *)v868 + 1);
                          if ( v862 != v872 )
                            break;
                          v66 = (_DWORD)v867 == 1;
                          v867 = (unsigned int)(v867 - 1);
                          if ( v66 )
                            goto LABEL_1407;
                        }
LABEL_1406:
                        v864 += 6;
                      }
                      while ( (unsigned __int64)v864 < v866 );
LABEL_1407:
                      v16 = v1550;
                      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v1550 + 384))(
                        *(_QWORD *)(v1550 + 1304),
                        v862,
                        v867,
                        v868);
                      __writecr8(v861);
                      if ( !v865 )
                        goto LABEL_2552;
                      if ( (*(_DWORD *)(v16 + 2396) & 0x10) != 0 && !*(_DWORD *)(v16 + 2240) )
                      {
                        *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v16 + 2264) = *(int *)v59;
                        *(_QWORD *)(v16 + 2272) = 1LL;
                        *(_DWORD *)(v16 + 2240) = 1;
                        __b9(v16, 0LL, v873, v874);
                      }
                      if ( *((_QWORD *)v59 + 3) != 1LL )
                      {
LABEL_2552:
                        if ( v864 == (unsigned int *)v866 && !*(_DWORD *)(v16 + 2240) )
                        {
                          *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v16 + 2264) = *(int *)v59;
                          *(_QWORD *)(v16 + 2272) = v864;
                          *(_DWORD *)(v16 + 2240) = 1;
                          __b9(v16, 0LL, v873, v874);
                        }
                      }
                      v875 = *(_QWORD *)(v16 + 1304);
                      v876 = KeGetCurrentIrql();
                      __writecr8(0xFuLL);
                      (*(void (__fastcall **)(__int64))(v16 + 320))(v875);
                      v877 = **(unsigned int ***)(v16 + 1512);
                      v248 = v877 + 4;
                      v878 = 0LL;
                      v879 = (unsigned __int64)&v877[6 * *v877 + 4];
                      do
                      {
                        v248 += 6;
                        v881 = v878;
                        if ( (unsigned __int64)v248 >= v879 )
                          break;
                        v880 = *((_QWORD *)v248 + 1);
                        if ( v880 < v878 )
                          break;
                        if ( (v880 & 0xFFFFFFFFFFFFF000uLL) != v880 )
                          break;
                        v878 = v880 + v248[4];
                        if ( v878 <= v880 )
                          break;
                      }
                      while ( v878 != v881 );
                      (*(void (__fastcall **)(_QWORD, unsigned __int64))(v16 + 384))(*(_QWORD *)(v16 + 1304), v881);
                      __writecr8(v876);
                      if ( v248 == (unsigned int *)v879 || *(_DWORD *)(v16 + 2240) )
                        goto LABEL_147;
                      v257 = v16 - 0x5C5FC0A76E374B18LL;
LABEL_482:
                      *(_QWORD *)(v16 + 2248) = v257;
                      *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v16 + 2264) = *(int *)v59;
                      *(_QWORD *)(v16 + 2272) = v248;
LABEL_1132:
                      *(_DWORD *)(v16 + 2240) = 1;
                      __b9(v16, 0LL, v57, v58);
                      goto LABEL_147;
                    }
                  }
LABEL_1394:
                  __writecr8(v857);
                  v59 = (char *)v1549;
                }
              }
              if ( !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v852 ^ (unsigned __int64)*((unsigned int *)v59 + 5);
                v859 = *((_QWORD *)v59 + 1);
                if ( !*(_DWORD *)(v16 + 2240) )
                {
                  *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v16 + 2264) = *(int *)v59;
                  *(_QWORD *)(v16 + 2272) = v859;
                  *(_DWORD *)(v16 + 2240) = 1;
                  __b9(v16, 0LL, 0LL, v837);
                }
              }
              goto LABEL_1398;
            }
LABEL_2296:
            v1397 = v69 - 2;
            if ( v1397 )
            {
              v1398 = v1397 - 1;
              if ( !v1398 )
              {
                (*(void (__fastcall **)(_BYTE *, _QWORD))(v16 + 400))(v1729, *((unsigned int *)v59 + 10));
                (*(void (__fastcall **)(_BYTE *, _BYTE *))(v16 + 448))(v1729, v1730);
                KiGetGdtIdt(&v1619, v1745);
                v1414 = v1620;
                v1415 = *((unsigned int *)v59 + 4);
                if ( (*(_BYTE *)(v16 + 2115) & 2) != 0 )
                {
                  v1416 = *(_QWORD *)(v16 + 2216);
                  v1417 = 38LL;
                  v1418 = 304;
                  v1419 = (_QWORD *)v1416;
                  do
                  {
                    *v1419 = 0LL;
                    v1418 -= 8;
                    ++v1419;
                    --v1417;
                  }
                  while ( v1417 );
                  if ( v1418 )
                  {
                    v1417 = 0xFFFFFFFFLL;
                    do
                    {
                      *(_BYTE *)v1419 = 0;
                      v1419 = (_QWORD *)((char *)v1419 + 1);
                      --v1418;
                    }
                    while ( v1418 );
                  }
                  *(_OWORD *)(v1416 + 16) = *(_OWORD *)(v16 + 2064);
                  *(_OWORD *)(v1416 + 32) = *(_OWORD *)(v16 + 2080);
                  *(_OWORD *)(v1416 + 288) = *(_OWORD *)(v16 + 2096);
                  v1637 = 303;
                  v1638 = v1416;
                  *(_WORD *)(v1416 + 16) = v16 + 2112;
                  v1725 = v16 + 2112;
                  *(_WORD *)(v1416 + 22) = (unsigned int)(v16 + 2112) >> 16;
                  *(_DWORD *)(v1416 + 24) = (v16 + 2112) >> 32;
                  _disable();
                  __sidt(v1660);
                  __lidt(&v1637);
                  __writedr(7u, 0LL);
                  *(_WORD *)(v1416 + 16) = v16 + 2118;
                  v1420 = (v16 + 2118) >> 16;
                  *(_WORD *)(v1416 + 22) = v1420;
                  *(_DWORD *)(v1416 + 24) = (v16 + 2118) >> 32;
                  if ( (*(_BYTE *)(v16 + 2115) & 0x20) != 0 )
                  {
                    *(_WORD *)(v16 + 2162) = KiGetSs(v1420, v1416, v1417, 1LL);
                    __writedr(0, v16 + 2162);
                    __writedr(7u, 0x70001uLL);
                    *(_QWORD *)(v16 + 2224) = KiErrataSkx55Present(v16 + 2162);
                    __writedr(7u, 0LL);
                    __writedr(0, 0LL);
                  }
                  else
                  {
                    *(_QWORD *)(v16 + 2224) = KiErrata704Present(v1420, v1416, v1417, 1LL);
                  }
                  *(_DWORD *)(v16 + 2232) = KeGetPcr()->Prcb.Number;
                  __lidt(v1660);
                  _enable();
                }
                Ldtr = (unsigned __int16)KiGetLdtr();
                Tr = KiGetTr();
                *(_DWORD *)(v16 + 2032) += v1415;
                v1423 = (unsigned __int64)v1414 + v1415;
                v1424 = *(unsigned int *)(v16 + 2012);
                v1425 = Tr;
                v1426 = *(_QWORD *)(v16 + 2016);
                v1427 = v1414;
                v1781 = Tr;
                v1428 = (const char *)v1414;
                if ( v1414 < (_QWORD *)((char *)v1414 + v1415) )
                {
                  do
                  {
                    _mm_prefetch(v1428, 0);
                    v1428 += 64;
                  }
                  while ( (unsigned __int64)v1428 < v1423 );
                }
                v1429 = *(_QWORD *)(v16 + 2016);
                v1430 = (unsigned int)v1415 >> 7;
                if ( (unsigned int)v1415 >> 7 )
                {
                  do
                  {
                    v1431 = 8LL;
                    do
                    {
                      v1432 = v1429 ^ *v1427;
                      v1433 = v1427[1];
                      v1427 += 2;
                      v1429 = __ROL8__(__ROL8__(v1432, v1424) ^ v1433, v1424);
                      --v1431;
                    }
                    while ( v1431 );
                    v1434 = __ROL8__(v1426 ^ ((char *)v1427 - (char *)v1414), 17) ^ v1426 ^ ((char *)v1427
                                                                                           - (char *)v1414);
                    v1423 = (v1434 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v1706 = v1423;
                    v1424 = ((unsigned __int8)v1423 ^ (unsigned __int8)(v1434 ^ v1424)) & 0x3F;
                    if ( !(_DWORD)v1424 )
                      v1424 = 1LL;
                    --v1430;
                  }
                  while ( v1430 );
                  v16 = v1550;
                  v1425 = v1781;
                }
                v1435 = v1415 & 0x7F;
                if ( v1435 >= 8 )
                {
                  v1423 = (unsigned __int64)v1435 >> 3;
                  do
                  {
                    v1429 = __ROL8__(*v1427++ ^ v1429, v1424);
                    v1435 -= 8;
                    --v1423;
                  }
                  while ( v1423 );
                }
                if ( v1435 )
                {
                  do
                  {
                    v1436 = *(unsigned __int8 *)v1427;
                    v1427 = (_QWORD *)((char *)v1427 + 1);
                    v1429 = __ROL8__(v1436 ^ v1429, v1424);
                    --v1435;
                  }
                  while ( v1435 );
                  v16 = v1550;
                }
                for ( ii = v1429; ; LODWORD(v1429) = ii ^ v1429 )
                {
                  ii >>= 31;
                  if ( !ii )
                    break;
                }
                v1438 = v1429 & 0x7FFFFFFF;
                (*(void (__fastcall **)(_BYTE *, unsigned __int64, _QWORD *, __int64))(v16 + 392))(
                  v1730,
                  v1423,
                  v1427,
                  v1424);
                if ( v1438 != *((_DWORD *)v59 + 5) || v1619 != *((_WORD *)v59 + 22) || (_WORD)Ldtr || v1425 != 64 )
                {
                  if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
                  {
                    v1441 = *(_QWORD **)(v16 + 2632);
                    v1442 = 48;
                    v1439 = 6LL;
                    v1440 = 1LL;
                    do
                    {
                      v1442 -= 8;
                      *v1441 = *(_QWORD *)v59;
                      v59 += 8;
                      ++v1441;
                      --v1439;
                    }
                    while ( v1439 );
                    if ( v1442 )
                    {
                      do
                      {
                        v1443 = *v59++;
                        *(_BYTE *)v1441 = v1443;
                        v1441 = (_QWORD *)((char *)v1441 + 1);
                        --v1442;
                      }
                      while ( v1442 );
                      v16 = v1550;
                    }
                    v59 = *(char **)(v16 + 2632);
                  }
                  *((_QWORD *)v59 + 3) = v1620;
                  *((_QWORD *)v59 + 4) = v1438;
                  if ( (_WORD)Ldtr )
                  {
                    *((_QWORD *)v59 + 3) = Ldtr;
                  }
                  else if ( v1425 != 64 )
                  {
                    *((_QWORD *)v59 + 3) = v1425;
                  }
                  v1444 = *(_DWORD *)(v16 + 2240);
                  if ( !v1444 )
                  {
                    *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = *((unsigned int *)v59 + 5) ^ (unsigned __int64)v1438;
                    v1444 = *(_DWORD *)(v16 + 2240);
                  }
                  v49 = *((_QWORD *)v59 + 1);
                  if ( !v1444 )
                  {
                    *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v16 + 2264) = *(int *)v59;
                    *(_QWORD *)(v16 + 2272) = v49;
                    *(_DWORD *)(v16 + 2240) = 1;
                    __b9(v16, 0LL, v1439, v1440);
                  }
                }
                *(_DWORD *)(v16 + 2032) += 0x8000;
                goto LABEL_147;
              }
              if ( v1398 != 20 )
              {
                if ( *(_DWORD *)(v16 + 2240) )
                  goto LABEL_147;
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = 257LL;
LABEL_1806:
                *(_QWORD *)(v16 + 2272) = 0LL;
                goto LABEL_1132;
              }
              (*(void (__fastcall **)(_BYTE *, _QWORD))(v16 + 400))(v1727, *((unsigned int *)v59 + 10));
              (*(void (__fastcall **)(_BYTE *, _BYTE *))(v16 + 448))(v1727, v1728);
              v1399 = *(_QWORD *)(v16 + 2520);
              if ( v1399 )
              {
                v1400 = *(_DWORD *)(v1399 + 800);
                v1401 = *(_QWORD *)(v16 + 2520);
                if ( v1401 )
                {
                  v1402 = *(_DWORD *)(v1401 + 832);
LABEL_2306:
                  (*(void (__fastcall **)(_BYTE *))(v16 + 392))(v1728);
                  if ( (*(_BYTE *)(v16 + 2115) & 0x10) != 0 )
                  {
                    _disable();
                    v1406 = *(_QWORD *)(v16 + 2216);
                    v1407 = 304;
                    v1408 = (_QWORD *)v1406;
                    v1409 = 38LL;
                    do
                    {
                      *v1408 = 0LL;
                      v1407 -= 8;
                      ++v1408;
                      --v1409;
                    }
                    while ( v1409 );
                    for ( ; v1407; --v1407 )
                    {
                      *(_BYTE *)v1408 = 0;
                      v1408 = (_QWORD *)((char *)v1408 + 1);
                    }
                    *(_OWORD *)(v1406 + 16) = *(_OWORD *)(v16 + 2064);
                    *(_OWORD *)(v1406 + 32) = *(_OWORD *)(v16 + 2080);
                    *(_OWORD *)(v1406 + 288) = *(_OWORD *)(v16 + 2096);
                    v1635 = 303;
                    v1636 = v1406;
                    *(_WORD *)(v1406 + 16) = v16 + 2112;
                    v1704 = v16 + 2112;
                    *(_WORD *)(v1406 + 22) = (unsigned int)(v16 + 2112) >> 16;
                    *(_DWORD *)(v1406 + 24) = (v16 + 2112) >> 32;
                    __sidt(v1659);
                    __lidt(&v1635);
                    if ( (*(_DWORD *)(v16 + 2396) & 0x20000) == 0 )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      **(_QWORD **)(v16 + 1176) = v16 - 0x5C5FC0A76E374B18LL;
                      **(_QWORD **)(v16 + 1184) = CurrentPrcb;
                      **(_QWORD **)(v16 + 1192) = 0LL;
                      **(_QWORD **)(v16 + 1200) = 277LL;
                    }
                    KiErrata361Present();
                    if ( (*(_DWORD *)(v16 + 2396) & 0x20000) == 0 )
                    {
                      **(_QWORD **)(v16 + 1176) = 0xA3A03F5891C8B4E8uLL;
                      **(_QWORD **)(v16 + 1184) = 0LL;
                      **(_QWORD **)(v16 + 1192) = 0LL;
                      **(_QWORD **)(v16 + 1200) = 0LL;
                    }
                    __lidt(v1659);
                    _enable();
                  }
                  v1411 = *((unsigned int *)v59 + 6);
                  if ( (v1400 & *((_DWORD *)v59 + 7)) != (_DWORD)v1411
                    || (v1400 & 0x10000) == 0 && (_BYTE)v1400 != 0xD1 && (unsigned __int8)(v1400 + 3) > 1u )
                  {
                    v1412 = v1411 | ((unsigned __int64)*((unsigned int *)v59 + 10) << 48) | 0x32000000000LL;
                    if ( !*(_DWORD *)(v16 + 2240) )
                    {
                      *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v1400 ^ v1411;
                      if ( !*(_DWORD *)(v16 + 2240) )
                      {
                        *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v16 + 2264) = *(int *)v59;
                        *(_QWORD *)(v16 + 2272) = v1412;
                        *(_DWORD *)(v16 + 2240) = 1;
                        __b9(v16, 0LL, v1404, v1405);
                      }
                    }
                  }
                  v49 = *((unsigned int *)v59 + 8);
                  if ( (v1402 & *((_DWORD *)v59 + 9)) != (_DWORD)v49
                    || (v1402 & 0x10000) == 0 && (_BYTE)v1402 != 0xD1 && (unsigned __int8)(v1402 + 3) > 1u )
                  {
                    v1413 = v49 | ((unsigned __int64)*((unsigned int *)v59 + 10) << 48) | 0x34000000000LL;
                    if ( !*(_DWORD *)(v16 + 2240) )
                    {
                      v49 ^= v1402;
                      *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v49;
                      if ( !*(_DWORD *)(v16 + 2240) )
                      {
                        *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v16 + 2264) = *(int *)v59;
                        *(_QWORD *)(v16 + 2272) = v1413;
                        *(_DWORD *)(v16 + 2240) = 1;
                        __b9(v16, 0LL, v1404, v1405);
                      }
                    }
                  }
                  *(_DWORD *)(v16 + 2032) += 0x8000;
                  goto LABEL_147;
                }
              }
              else
              {
                v1400 = __readmsr(0x832u);
              }
              v1403 = __readmsr(0x834u);
              v1402 = v1403;
              goto LABEL_2306;
            }
            v1445 = *((unsigned int *)v59 + 10);
            v1446 = *(void (__fastcall **)(_BYTE *, __int64))(v16 + 400);
            v1556 = 0;
            v1446(v1731, v1445);
            (*(void (__fastcall **)(_BYTE *, _BYTE *))(v16 + 448))(v1731, v1732);
            KiGetGdtIdt(v1744, &v1639);
            v1447 = 0;
            v1565 = v1640;
            v1448 = v1640 + 4;
            v1553 = v1640 + 4;
            v1551 = 0;
            while ( 2 )
            {
              v1449 = 0LL;
              v1586 = *(_QWORD *)(v16 + 2192);
              v1450 = 0LL;
              v1451 = *(_QWORD *)(v16 + 2200);
              v1452 = *(unsigned int *)(v16 + 2168);
              v1552 = 0LL;
              v1453 = *(unsigned int *)(v16 + 2164);
              v1555 = 0LL;
              v1454 = KeGetCurrentIrql();
              __writecr8(0xFuLL);
              v1455 = *(_WORD *)v1448;
              LOWORD(v1595) = *(_WORD *)(v1448 - 4);
              WORD1(v1595) = *(_WORD *)(v1448 + 2);
              v1456 = *(_DWORD *)(v1448 + 4);
              v1457 = *(_QWORD *)(v16 + 1520);
              HIDWORD(v1595) = v1456;
              v1458 = v1595;
              v1782 = v1455;
              v1459 = v1457 + 8LL * v1447;
              if ( v1595 == v1459 )
              {
                if ( (v1455 & 0x6000) != 0 )
                {
                  __writecr8(v1454);
                  goto LABEL_2387;
                }
                v1450 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v16 + 1120))(v1447, v1459, 0LL);
                if ( v1450 )
                {
                  v1460 = *(unsigned int **)(v1453 + v1450);
                  v1552 = v1460;
                  if ( v1551 < 0x30 )
                  {
                    __writecr8(v1454);
LABEL_2386:
                    v1449 = v1552;
LABEL_2387:
                    v1461 = *(_QWORD *)(v16 + 1384);
                    *(_QWORD *)v1461 = v1458;
                    *(_DWORD *)(v1461 + 16) = 128;
                    if ( v1449 )
                    {
                      v1462 = *(_QWORD *)(v16 + 1384);
                      *(_QWORD *)(v1462 + 8) = v1449;
                      *(_DWORD *)(v1462 + 20) = 128;
                    }
                    v1556 = 1;
                    goto LABEL_2406;
                  }
                  v1463 = *(_QWORD *)(v1452 + v1450);
LABEL_2394:
                  __writecr8(v1454);
                  if ( !v1450 )
                  {
                    if ( v1458 < v1586 )
                      goto LABEL_2386;
                    if ( v1458 > v1451 )
                      goto LABEL_2386;
                    v1464 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v16 + 512))(
                              *(_QWORD *)(v16 + 2208),
                              v1586,
                              (unsigned int)(v1595 - v1586));
                    if ( !v1464 || (*(_DWORD *)(v1464 + 36) & 0x2000000) != 0 )
                      goto LABEL_2386;
                  }
                  if ( *(_WORD *)(v1553 - 2) != 16 || (*(_WORD *)v1553 & 0x1F00) != 0xE00 || *(__int16 *)v1553 >= 0 )
                    goto LABEL_2386;
                  v1465 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64 *, _QWORD))(v16 + 592))(
                                            v1458,
                                            &v1586,
                                            0LL);
                  if ( v1465 && v1586 + *v1465 == v1458 && v1586 == *(_QWORD *)(v16 + 2192) )
                  {
                    if ( !v1450 )
                      goto LABEL_2406;
                  }
                  else if ( !v1450 )
                  {
                    goto LABEL_2386;
                  }
                  if ( (v1782 & 0x6000) != 0 )
                    goto LABEL_2386;
                  if ( v1450 != -1 )
                  {
                    v1488 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, unsigned __int64 *, _QWORD))(v16 + 592))(
                                              v1460,
                                              &v1586,
                                              0LL);
                    if ( !v1488 )
                      goto LABEL_2386;
                    if ( (unsigned int *)(v1586 + *v1488) != v1460 )
                      goto LABEL_2386;
                    if ( v1586 != *(_QWORD *)(v16 + 2192) )
                      goto LABEL_2386;
                    v1489 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v16 + 512))(
                              *(_QWORD *)(v16 + 2208),
                              v1586,
                              (unsigned int)((_DWORD)v1460 - v1586));
                    if ( !v1489
                      || (*(_DWORD *)(v1489 + 36) & 0x2000000) != 0
                      || v1551 == 254 && v1463 != *(_QWORD *)(v16 + 2176) )
                    {
                      goto LABEL_2386;
                    }
                  }
LABEL_2406:
                  v1447 = v1551 + 1;
                  v1448 = v1553 + 16;
                  v1551 = v1447;
                  v1553 += 16LL;
                  if ( v1447 > 0xFF )
                  {
                    if ( (*(_BYTE *)(v16 + 2115) & 1) != 0 )
                    {
                      _disable();
                      v1466 = 3221225602LL;
                      v1467 = __readmsr(0xC0000082);
                      v1468 = (v16 + 2114) >> 32;
                      __writemsr(0xC0000082, v16 + 2114);
                      if ( !_bittest((const signed __int32 *)(v16 + 2396), 0x11u) )
                      {
                        v1469 = KeGetCurrentPrcb();
                        v1468 = v16 - 0x5C5FC0A76E374B18LL;
                        **(_QWORD **)(v16 + 1176) = v16 - 0x5C5FC0A76E374B18LL;
                        **(_QWORD **)(v16 + 1184) = v1469;
                        **(_QWORD **)(v16 + 1192) = 3221225602LL;
                        v1466 = *(_QWORD *)(v16 + 1200);
                        *(_QWORD *)v1466 = 274LL;
                      }
                      ((void (__fastcall *)(__int64, unsigned __int64))(v16 + 2116))(v1466, v1468);
                      if ( !_bittest((const signed __int32 *)(v16 + 2396), 0x11u) )
                      {
                        **(_QWORD **)(v16 + 1176) = 0xA3A03F5891C8B4E8uLL;
                        **(_QWORD **)(v16 + 1184) = 0LL;
                        **(_QWORD **)(v16 + 1192) = 0LL;
                        **(_QWORD **)(v16 + 1200) = 0LL;
                      }
                      __writemsr(0xC0000082, v1467);
                      _enable();
                    }
                    v1470 = (_QWORD *)v1565;
                    *(_DWORD *)(v16 + 2032) += 848;
                    v1471 = v1470;
                    v1472 = *(_DWORD *)(v16 + 2032);
                    v1473 = (const char *)v1470;
                    v1474 = *(_DWORD *)(v16 + 2012);
                    v1475 = *(_QWORD *)(v16 + 2016);
                    if ( v1470 < v1470 + 106 )
                    {
                      do
                      {
                        _mm_prefetch(v1473, 0);
                        v1473 += 64;
                      }
                      while ( v1473 < (const char *)v1470 + 848 );
                    }
                    v1476 = 6;
                    v1477 = *(_QWORD *)(v16 + 2016);
                    do
                    {
                      v1478 = 8LL;
                      do
                      {
                        v1479 = v1477 ^ *v1471;
                        v1480 = v1471 + 1;
                        v1481 = *v1480;
                        v1471 = v1480 + 1;
                        v1477 = __ROL8__(__ROL8__(v1479, v1474) ^ v1481, v1474);
                        --v1478;
                      }
                      while ( v1478 );
                      v1482 = __ROL8__(v1475 ^ ((char *)v1471 - (char *)v1470), 17) ^ v1475 ^ ((char *)v1471
                                                                                             - (char *)v1470);
                      v1707 = (v1482 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v1474 = ((unsigned __int8)(v1707 ^ v1482) ^ (unsigned __int8)v1474) & 0x3F;
                      if ( !v1474 )
                        LOBYTE(v1474) = 1;
                      --v1476;
                    }
                    while ( v1476 );
                    v1483 = v1556;
                    v1484 = 80;
                    v1485 = 10LL;
                    do
                    {
                      v1477 = __ROL8__(*v1471++ ^ v1477, v1474);
                      v1484 -= 8;
                      --v1485;
                    }
                    while ( v1485 );
                    if ( v1484 )
                    {
                      do
                      {
                        v1486 = *(unsigned __int8 *)v1471;
                        v1471 = (_QWORD *)((char *)v1471 + 1);
                        v1477 = __ROL8__(v1486 ^ v1477, v1474);
                        --v1484;
                      }
                      while ( v1484 );
                      v1483 = v1556;
                    }
                    for ( jj = v1477; ; LODWORD(v1477) = jj ^ v1477 )
                    {
                      jj >>= 31;
                      if ( !jj )
                        break;
                    }
                    v1490 = v1477 & 0x7FFFFFFF;
                    *(_DWORD *)(v16 + 2032) = v1472 + 16;
                    v1491 = v1470 + 450;
                    v1492 = *(_DWORD *)(v16 + 2012);
                    v1493 = *(_QWORD *)(v16 + 2016);
                    v1494 = (const char *)(v1470 + 450);
                    if ( v1470 + 450 < v1470 + 452 )
                    {
                      do
                      {
                        _mm_prefetch(v1494, 0);
                        v1494 += 64;
                      }
                      while ( v1494 < (const char *)v1470 + 3616 );
                    }
                    v1495 = 2LL;
                    v1496 = 16;
                    do
                    {
                      v1493 = __ROL8__(*v1491++ ^ v1493, v1492);
                      v1496 -= 8;
                      --v1495;
                    }
                    while ( v1495 );
                    if ( v1496 )
                    {
                      do
                      {
                        v1497 = *(unsigned __int8 *)v1491;
                        v1491 = (_QWORD *)((char *)v1491 + 1);
                        v1493 = __ROL8__(v1497 ^ v1493, v1492);
                        --v1496;
                      }
                      while ( v1496 );
                      v1483 = v1556;
                    }
                    for ( kk = v1493; ; LODWORD(v1493) = kk ^ v1493 )
                    {
                      kk >>= 31;
                      if ( !kk )
                        break;
                    }
                    v1499 = v1493 & 0x7FFFFFFF;
                    (*(void (__fastcall **)(_BYTE *, _QWORD *))(v16 + 392))(v1732, v1491);
                    v1501 = v1549;
                    v1502 = (unsigned int)v1549[5];
                    if ( v1490 != (_DWORD)v1502
                      || v1499 != *((_QWORD *)v1549 + 3)
                      || v1639 != *((_WORD *)v1549 + 22)
                      || v1483 )
                    {
                      if ( !v1483 )
                      {
                        if ( v1499 == *((_QWORD *)v1549 + 3) )
                        {
                          if ( !*(_DWORD *)(v16 + 2240) )
                          {
                            v1503 = v1502 ^ v1490;
                            goto LABEL_2460;
                          }
                        }
                        else if ( !*(_DWORD *)(v16 + 2240) )
                        {
                          v1503 = v1499 ^ (unsigned __int64)(unsigned int)v1549[6];
LABEL_2460:
                          *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v1503;
                        }
                      }
                      v49 = *((_QWORD *)v1501 + 1);
                      if ( !*(_DWORD *)(v16 + 2240) )
                      {
                        *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v16 + 2256) = (char *)v1501 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v16 + 2264) = *v1501;
                        *(_QWORD *)(v16 + 2272) = v49;
                        *(_DWORD *)(v16 + 2240) = 1;
                        __b9(v16, 0LL, v1501, v1500);
                      }
                    }
                    *(_DWORD *)(v16 + 2032) += 0x10000;
                    goto LABEL_147;
                  }
                  continue;
                }
                v1450 = -1LL;
                v1463 = 0LL;
              }
              else
              {
                v1463 = v1555;
              }
              break;
            }
            v1460 = v1552;
            goto LABEL_2394;
          }
          v49 = *((_DWORD *)v59 + 10) & 1;
          if ( (*((_DWORD *)v59 + 10) & 1) == 0 )
            goto LABEL_1483;
          if ( !*(_QWORD *)(v16 + 2376) )
            goto LABEL_1747;
          v882 = *(_DWORD *)(v16 + 2396);
          if ( (v882 & 4) != 0 )
            goto LABEL_1747;
          if ( (_DWORD)v49 )
          {
            v57 = *(unsigned int *)(v16 + 2028);
            if ( (_DWORD)v57 )
            {
              v49 = v882;
              if ( (((unsigned __int8)v882 ^ (unsigned __int8)(v882 >> 3)) & 4) != 0 )
                goto LABEL_1747;
            }
            else
            {
              LODWORD(v49) = v882 ^ ((unsigned __int8)v882 ^ (unsigned __int8)(8 * v882)) & 0x20;
              *(_DWORD *)(v16 + 2396) = v49;
            }
            if ( !*(_QWORD *)(v16 + 2376) )
              goto LABEL_1482;
            if ( !(_DWORD)v57 )
            {
              v883 = v49 ^ ((unsigned __int8)v49 ^ (unsigned __int8)(8 * v49)) & 0x20;
              *(_DWORD *)(v16 + 2396) = v883;
              goto LABEL_1435;
            }
            LOBYTE(v883) = v49;
            if ( (((unsigned __int8)v49 ^ (unsigned __int8)((unsigned int)v49 >> 3)) & 4) != 0 )
            {
LABEL_1482:
              *(_DWORD *)(v16 + 2028) = 0;
              goto LABEL_1442;
            }
LABEL_1435:
            if ( (v883 & 4) != 0 )
            {
              v884 = *((_QWORD *)v59 + 1) & 0xFFFFFFFFFFFFF000uLL;
              v885 = ((*((_DWORD *)v59 + 2) & 0xFFF) + (unsigned __int64)*((unsigned int *)v59 + 4) + 4095) >> 12;
              while ( v885 )
              {
                --v885;
                if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v16 + 672))(v884) && !*(_DWORD *)(v16 + 2240) )
                {
                  *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v16 + 2264) = *(int *)v59;
                  *(_QWORD *)(v16 + 2272) = v884;
                  *(_DWORD *)(v16 + 2240) = 1;
                  __b9(v16, 0LL, v57, v58);
                }
                v884 += 4096LL;
                *(_DWORD *)(v16 + 2032) += 256;
              }
LABEL_1442:
              v886 = v1549;
              v49 = 2LL;
              v887 = v1549[10];
              if ( (v887 & 2) == 0 )
                goto LABEL_147;
              v888 = *((_QWORD *)v1549 + 1);
              if ( (v887 & 4) != 0 )
              {
                v889 = *((_QWORD *)v1549 + 3);
                v49 = **(_QWORD **)(v888 + 112);
                if ( v49 != v889 )
                {
                  v890 = *(_QWORD *)(v16 + 1384);
                  *(_QWORD *)v890 = v49;
                  *(_DWORD *)(v890 + 16) = 256;
                  if ( !*(_DWORD *)(v16 + 2240) )
                  {
                    *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v889 ^ v49;
                    v49 = *(_QWORD *)(v888 + 112);
                    if ( !*(_DWORD *)(v16 + 2240) )
                    {
                      *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v16 + 2256) = (char *)v886 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v16 + 2264) = *v886;
                      *(_QWORD *)(v16 + 2272) = v49;
                      *(_DWORD *)(v16 + 2240) = 1;
                      __b9(v16, 0LL, v57, v58);
                    }
                  }
                }
              }
              if ( (v886[10] & 8) == 0 )
                goto LABEL_147;
              v935 = *((_QWORD *)v886 + 4);
              v49 = **(_QWORD **)(v888 + 120);
              if ( v49 == v935 )
                goto LABEL_147;
              v936 = *(_QWORD *)(v16 + 1384);
              *(_QWORD *)v936 = v49;
              *(_DWORD *)(v936 + 16) = 256;
              if ( *(_DWORD *)(v16 + 2240) )
                goto LABEL_147;
              *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v935 ^ v49;
              v49 = *(_QWORD *)(v888 + 120);
              if ( *(_DWORD *)(v16 + 2240) )
                goto LABEL_147;
              *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v16 + 2256) = (char *)v886 - 0x4C48B4211BBACBEBLL;
              v704 = *v886;
              goto LABEL_1131;
            }
            v891 = (const char *)*((_QWORD *)v59 + 1);
            v892 = *((unsigned int *)v59 + 4);
            v58 = (unsigned __int64)v891;
            *(_DWORD *)(v16 + 2032) += v892;
            v893 = v891;
            v894 = *(_DWORD *)(v16 + 2012);
            for ( mm = *(_QWORD *)(v16 + 2016); v893 < &v891[v892]; v893 += 64 )
              _mm_prefetch(v893, 0);
            v896 = *(_QWORD *)(v16 + 2016);
            v897 = (unsigned int)v892 >> 7;
            if ( (unsigned int)v892 >> 7 )
            {
              do
              {
                v898 = 8LL;
                do
                {
                  v899 = v896 ^ *(_QWORD *)v58;
                  v900 = *(_QWORD *)(v58 + 8);
                  v58 += 16LL;
                  v896 = __ROL8__(__ROL8__(v899, v894) ^ v900, v894);
                  --v898;
                }
                while ( v898 );
                v901 = __ROL8__(mm ^ (v58 - (_QWORD)v891), 17) ^ mm ^ (v58 - (_QWORD)v891);
                v1689 = (v901 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v894 = ((unsigned __int8)v901 ^ (unsigned __int8)(v1689 ^ v894)) & 0x3F;
                if ( !v894 )
                  LOBYTE(v894) = 1;
                --v897;
              }
              while ( v897 );
              v16 = v1550;
            }
            v57 = v892 & 0x7F;
            if ( (unsigned int)v57 >= 8 )
            {
              v902 = (unsigned __int64)(unsigned int)v57 >> 3;
              do
              {
                v896 = __ROL8__(*(_QWORD *)v58 ^ v896, v894);
                v58 += 8LL;
                v57 = (unsigned int)(v57 - 8);
                --v902;
              }
              while ( v902 );
            }
            if ( (_DWORD)v57 )
            {
              do
              {
                v903 = *(unsigned __int8 *)v58++;
                v896 = __ROL8__(v903 ^ v896, v894);
                v57 = (unsigned int)(v57 - 1);
              }
              while ( (_DWORD)v57 );
              v16 = v1550;
            }
            for ( nn = v896; ; LODWORD(v896) = nn ^ v896 )
            {
              nn >>= 31;
              if ( !nn )
                break;
            }
            v905 = *((_DWORD *)v59 + 5);
            v906 = v896 & 0x7FFFFFFF;
            if ( v906 == v905 )
              goto LABEL_1442;
            v907 = *((unsigned int *)v59 + 4);
            v57 = *((_QWORD *)v59 + 1);
            if ( *((_DWORD *)v59 + 4) )
            {
              v58 = 64LL;
              if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
              {
                v908 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v909 = v57 & 0xFFFFFFFFFFFFF000uLL;
                v910 = (v57 + v907 - 1) | 0xFFF;
                v911 = (v57 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v912 = v908;
                  while ( 1 )
                  {
                    v913 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v16 + 1112))(v909, 0LL);
                    if ( v913 != -1073741267 )
                      break;
                    if ( v908 > 1u )
                      goto LABEL_1475;
                    v912 = v908;
                    __writecr8(v908);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v913 < 0 )
                    break;
LABEL_1475:
                  v909 += 4096LL;
                  v911 += 4096LL;
                  if ( v911 == v910 )
                    goto LABEL_1476;
                }
                __writecr8(v912);
                v59 = (char *)v1549;
                v905 = v1549[5];
              }
            }
            if ( *(_DWORD *)(v16 + 2240) )
              goto LABEL_1442;
            v914 = v905;
          }
          else
          {
LABEL_1483:
            v916 = (const char *)*((_QWORD *)v59 + 1);
            v917 = *((unsigned int *)v59 + 4);
            v58 = (unsigned __int64)v916;
            *(_DWORD *)(v16 + 2032) += v917;
            v918 = v916;
            v919 = *(_DWORD *)(v16 + 2012);
            for ( i1 = *(_QWORD *)(v16 + 2016); v918 < &v916[v917]; v918 += 64 )
              _mm_prefetch(v918, 0);
            v921 = *(_QWORD *)(v16 + 2016);
            v922 = (unsigned int)v917 >> 7;
            if ( (unsigned int)v917 >> 7 )
            {
              do
              {
                v923 = 8LL;
                do
                {
                  v924 = *(_QWORD *)(v58 + 8) ^ __ROL8__(*(_QWORD *)v58 ^ v921, v919);
                  v58 += 16LL;
                  v921 = __ROL8__(v924, v919);
                  --v923;
                }
                while ( v923 );
                v925 = (__ROL8__(i1 ^ (v58 - (_QWORD)v916), 17) ^ i1 ^ (v58 - (unsigned __int64)v916))
                     * (unsigned __int128)0x7010008004002001uLL;
                v1690 = *((_QWORD *)&v925 + 1);
                v919 = ((unsigned __int8)v925 ^ (unsigned __int8)(BYTE8(v925) ^ v919)) & 0x3F;
                if ( !v919 )
                  LOBYTE(v919) = 1;
                --v922;
              }
              while ( v922 );
              v16 = v1550;
            }
            v57 = v917 & 0x7F;
            if ( (unsigned int)v57 >= 8 )
            {
              v926 = (unsigned __int64)(unsigned int)v57 >> 3;
              do
              {
                v921 = __ROL8__(*(_QWORD *)v58 ^ v921, v919);
                v58 += 8LL;
                v57 = (unsigned int)(v57 - 8);
                --v926;
              }
              while ( v926 );
            }
            for ( ; (_DWORD)v57; v57 = (unsigned int)(v57 - 1) )
            {
              v927 = *(unsigned __int8 *)v58++;
              v921 = __ROL8__(v927 ^ v921, v919);
            }
            for ( i2 = v921; ; LODWORD(v921) = i2 ^ v921 )
            {
              i2 >>= 31;
              if ( !i2 )
                break;
            }
            v906 = v921 & 0x7FFFFFFF;
            if ( v906 == *((_DWORD *)v59 + 5) )
              goto LABEL_1442;
            if ( !*(_DWORD *)v59 && *((_DWORD *)v59 + 6) )
              v64 = 1;
            v929 = *((unsigned int *)v59 + 4);
            v930 = *((_QWORD *)v59 + 1);
            if ( *((_DWORD *)v59 + 4) )
            {
              v57 = 64LL;
              if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
              {
                v931 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v932 = v930 & 0xFFFFFFFFFFFFF000uLL;
                v1770 = (v930 + v929 - 1) | 0xFFF;
                v933 = (v930 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v912 = v931;
                  while ( 1 )
                  {
                    v934 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(v16 + 1112))(
                             v932,
                             0LL,
                             v57,
                             v58);
                    if ( v934 != -1073741267 )
                      break;
                    if ( v64 )
                      goto LABEL_1515;
                    if ( v931 > 1u )
                      goto LABEL_1513;
                    v912 = v931;
                    __writecr8(v931);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v934 < 0 )
                    break;
LABEL_1513:
                  v932 += 4096LL;
                  v933 += 4096LL;
                  if ( v933 == v1770 )
                  {
LABEL_1476:
                    __writecr8(v912);
                    goto LABEL_1442;
                  }
                }
LABEL_1515:
                __writecr8(v912);
                v59 = (char *)v1549;
              }
            }
            v914 = *((unsigned int *)v59 + 5);
            if ( *(_DWORD *)(v16 + 2240) )
              goto LABEL_1442;
          }
          *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v914 ^ v906;
          v915 = *((_QWORD *)v59 + 1);
          if ( !*(_DWORD *)(v16 + 2240) )
          {
            *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v16 + 2264) = *(int *)v59;
            *(_QWORD *)(v16 + 2272) = v915;
            *(_DWORD *)(v16 + 2240) = 1;
            __b9(v16, 0LL, v57, v58);
          }
          goto LABEL_1442;
        }
        if ( (*(_DWORD *)(v16 + 2040) & 1) == 0 )
          goto LABEL_147;
        if ( !*(_QWORD *)(v16 + 2376) || (*(_DWORD *)(v16 + 2396) & 4) != 0 )
        {
          v938 = 0LL;
        }
        else
        {
          v937 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(v16 + 960))(26LL, &v1642, 0LL);
          v938 = v1642;
          if ( v937 < 0 )
            v938 = 0LL;
        }
        v939 = *(__int64 (__fastcall **)(_QWORD))(v16 + 928);
        v1553 = v938;
        v940 = 0;
        v1551 = 0;
        v941 = v939(0LL);
        while ( 2 )
        {
          v942 = v941;
          if ( !v941 )
          {
            v988 = *(_QWORD *)(v16 + 1208);
            if ( (*(int (__fastcall **)(__int64))(v16 + 912))(v988) >= 0 )
            {
              v989 = (*(unsigned __int8 (__fastcall **)(__int64))(v16 + 976))(v988);
              v990 = (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *))(v16 + 984))(v988, &v1560);
              v991 = (*(__int64 (__fastcall **)(__int64))(v16 + 992))(v988);
              v994 = 0LL;
              v1773 = v991;
              if ( (_BYTE)v989 == 114 || *(_DWORD *)(v16 + 2240) )
              {
                v995 = v1549;
              }
              else
              {
                v995 = v1549;
                v992 = (unsigned int)v989 ^ 0x72LL;
                *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v992;
                if ( !*(_DWORD *)(v16 + 2240) )
                {
                  *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v16 + 2256) = (char *)v995 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v16 + 2264) = *v995;
                  *(_QWORD *)(v16 + 2272) = v988;
                  *(_DWORD *)(v16 + 2240) = 1;
                  __b9(v16, 0LL, 0LL, v993);
                  v994 = 0LL;
                }
              }
              v996 = 0;
              v997 = 0;
              if ( (v989 & 7) == 1 )
              {
                v996 = 48;
              }
              else if ( (v989 & 7) == 2 )
              {
                v996 = 16;
                v997 = 16;
              }
              else if ( (v989 & 7) != 0 && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = (char *)v995 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v995;
                *(_QWORD *)(v16 + 2272) = v988;
                *(_DWORD *)(v16 + 2240) = 1;
                __b9(v16, 0LL, 0LL, v993);
                v994 = 0LL;
              }
              v998 = *(_QWORD *)(v16 + 1440);
              v999 = v989 >> 4;
              v1000 = v996 | *(_BYTE *)(v998 + 2 * v999);
              v1001 = v1549;
              if ( v1000 != (_BYTE)v990 && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = (char *)v1001 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v1001;
                *(_QWORD *)(v16 + 2272) = v988;
                *(_DWORD *)(v16 + 2240) = 1;
                __b9(v16, 0LL, 0LL, v993);
              }
              if ( ((unsigned __int8)v997 | *(_BYTE *)(v998 + 2 * v999 + 1)) != v1560 && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = (char *)v1001 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v1001;
                *(_QWORD *)(v16 + 2272) = v988;
                *(_DWORD *)(v16 + 2240) = 1;
                __b9(v16, 0LL, v994, v993);
              }
              if ( v988 != *(_QWORD *)(v16 + 1208) )
              {
                v1002 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64, __int64))(v16 + 968))(
                                              v988,
                                              1LL,
                                              v994);
                v1003 = v1002;
                if ( v1002 )
                {
                  v1004 = *v1002;
                  v1005 = v1002;
                  if ( *v1002 )
                  {
                    v1006 = v1773;
                    v1007 = (char *)v1549;
                    v1565 = (__int64)v1002;
                    do
                    {
                      *v1003 = v1004 & 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (**)(void))(v16 + 464))();
                      v1008 = v1560;
                      v1009 = v1003[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v1009 == v1006 )
                        v1008 = v990;
                      v1010 = v1003[1] >> 6;
                      LOBYTE(v1010) = v1010 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v16 + 1000))(v1010, v1008) )
                      {
                        if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
                        {
                          v1012 = *(_QWORD **)(v16 + 2632);
                          v1013 = 48;
                          v1011 = 6LL;
                          do
                          {
                            v1013 -= 8;
                            *v1012 = *(_QWORD *)v1007;
                            v1007 += 8;
                            ++v1012;
                            --v1011;
                          }
                          while ( v1011 );
                          if ( v1013 )
                          {
                            do
                            {
                              v1014 = *v1007++;
                              *(_BYTE *)v1012 = v1014;
                              v1012 = (_QWORD *)((char *)v1012 + 1);
                              --v1013;
                            }
                            while ( v1013 );
                            v1006 = v1773;
                          }
                          v1007 = *(char **)(v16 + 2632);
                        }
                        *((_QWORD *)v1007 + 3) = v1009;
                        *((_QWORD *)v1007 + 4) = *v1003;
                        v1007[40] = ((unsigned __int64)*((unsigned int *)v1003 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v16 + 2240) )
                        {
                          *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v16 + 2256) = v1007 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v16 + 2264) = *(int *)v1007;
                          *(_QWORD *)(v16 + 2272) = v988;
                          *(_DWORD *)(v16 + 2240) = 1;
                          __b9(v16, 0LL, v1011, 0LL);
                        }
                      }
                      v1003 += 6;
                      v1004 = *v1003;
                    }
                    while ( *v1003 );
                    v1005 = (_QWORD *)v1565;
                  }
                  (*(void (__fastcall **)(_QWORD *))(v16 + 240))(v1005);
                }
              }
              (*(void (__fastcall **)(__int64, __int64, __int64))(v16 + 920))(v988, v992, v994);
              *(_DWORD *)(v16 + 2032) += 0x8000;
              v940 = v1551;
            }
            v49 = v1553;
            if ( v1553 )
              (*(void (**)(void))(v16 + 464))();
            *(_DWORD *)(v16 + 2032) += v940 << 8;
            goto LABEL_147;
          }
          if ( v938 == v941 )
          {
            v943 = v59;
            if ( (*(int (__fastcall **)(__int64))(v16 + 912))(v941) >= 0 )
            {
              v944 = (*(unsigned __int8 (__fastcall **)(__int64))(v16 + 976))(v942);
              v1771 = (*(__int64 (__fastcall **)(__int64, char *))(v16 + 984))(v942, v1561);
              v1565 = (*(__int64 (__fastcall **)(__int64))(v16 + 992))(v942);
              if ( (_BYTE)v944 != 97 && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = (unsigned int)v944 ^ 0x61LL;
                if ( !*(_DWORD *)(v16 + 2240) )
                {
                  *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v16 + 2264) = *(int *)v59;
                  *(_QWORD *)(v16 + 2272) = v942;
                  *(_DWORD *)(v16 + 2240) = 1;
                  __b9(v16, 0LL, v945, v946);
                }
              }
              v947 = 0;
              if ( (v944 & 7) == 1 )
              {
                LOBYTE(v64) = 48;
              }
              else if ( (v944 & 7) == 2 )
              {
                LOBYTE(v64) = 16;
                v947 = 16;
              }
              else if ( (v944 & 7) != 0 && !*(_DWORD *)(v16 + 2240) )
              {
                v948 = v1549;
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v943 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v948;
                *(_QWORD *)(v16 + 2272) = v942;
                *(_DWORD *)(v16 + 2240) = 1;
                __b9(v16, 0LL, v945, v946);
              }
              v949 = *(_QWORD *)(v16 + 1440);
              v950 = v944 >> 4;
              v66 = (*(_BYTE *)(v949 + 2 * v950) | (unsigned __int8)v64) == v1771;
              v951 = v1549;
              if ( !v66 && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v943 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v951;
                *(_QWORD *)(v16 + 2272) = v942;
                *(_DWORD *)(v16 + 2240) = 1;
                __b9(v16, 0LL, v945, v946);
              }
              if ( ((unsigned __int8)v947 | *(_BYTE *)(v949 + 2 * v950 + 1)) != v1561[0] && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v943 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v951;
                *(_QWORD *)(v16 + 2272) = v942;
                *(_DWORD *)(v16 + 2240) = 1;
                __b9(v16, 0LL, v945, v946);
              }
              if ( v942 != *(_QWORD *)(v16 + 1208) )
              {
                v952 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v16 + 968))(v942, 1LL);
                v953 = v952;
                if ( v952 )
                {
                  v954 = *v952;
                  v955 = v952;
                  if ( *v952 )
                  {
                    v956 = v1771;
                    v957 = v1565;
                    v1555 = (__int64)v952;
                    do
                    {
                      *v953 = v954 & 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (**)(void))(v16 + 464))();
                      v958 = (unsigned __int8)v1561[0];
                      v959 = v953[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v959 == v957 )
                        v958 = v956;
                      v960 = v953[1] >> 6;
                      LOBYTE(v960) = v960 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v16 + 1000))(v960, v958) )
                      {
                        if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
                        {
                          v962 = *(_QWORD **)(v16 + 2632);
                          v963 = 48;
                          v961 = 6LL;
                          do
                          {
                            v963 -= 8;
                            *v962 = *(_QWORD *)v943;
                            v943 += 8;
                            ++v962;
                            --v961;
                          }
                          while ( v961 );
                          if ( v963 )
                          {
                            do
                            {
                              v964 = *v943++;
                              *(_BYTE *)v962 = v964;
                              v962 = (_QWORD *)((char *)v962 + 1);
                              --v963;
                            }
                            while ( v963 );
                            v956 = v1771;
                          }
                          v943 = *(char **)(v16 + 2632);
                        }
                        *((_QWORD *)v943 + 3) = v959;
                        *((_QWORD *)v943 + 4) = *v953;
                        v943[40] = ((unsigned __int64)*((unsigned int *)v953 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v16 + 2240) )
                        {
                          *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v16 + 2256) = v943 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v16 + 2264) = *(int *)v943;
                          *(_QWORD *)(v16 + 2272) = v942;
                          *(_DWORD *)(v16 + 2240) = 1;
                          __b9(v16, 0LL, v961, 0LL);
                        }
                      }
                      v953 += 6;
                      v954 = *v953;
                    }
                    while ( *v953 );
                    goto LABEL_1607;
                  }
                  goto LABEL_1608;
                }
              }
              goto LABEL_1609;
            }
          }
          else if ( (*(unsigned int (__fastcall **)(__int64))(v16 + 952))(v941) )
          {
            v965 = v59;
            if ( (*(int (__fastcall **)(__int64))(v16 + 912))(v942) >= 0 )
            {
              v966 = (*(unsigned __int8 (__fastcall **)(__int64))(v16 + 976))(v942);
              v1772 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(v16 + 984))(v942, &v1559);
              v1565 = (*(__int64 (__fastcall **)(__int64))(v16 + 992))(v942);
              if ( (_BYTE)v966 != 97 && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = (unsigned int)v966 ^ 0x61LL;
                if ( !*(_DWORD *)(v16 + 2240) )
                {
                  *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v16 + 2264) = *(int *)v59;
                  *(_QWORD *)(v16 + 2272) = v942;
                  *(_DWORD *)(v16 + 2240) = 1;
                  __b9(v16, 0LL, v967, v968);
                }
              }
              v969 = 0;
              if ( (v966 & 7) == 1 )
              {
                LOBYTE(v64) = 48;
              }
              else if ( (v966 & 7) == 2 )
              {
                LOBYTE(v64) = 16;
                v969 = 16;
              }
              else if ( (v966 & 7) != 0 && !*(_DWORD *)(v16 + 2240) )
              {
                v970 = v1549;
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v965 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v970;
                *(_QWORD *)(v16 + 2272) = v942;
                *(_DWORD *)(v16 + 2240) = 1;
                __b9(v16, 0LL, v967, v968);
              }
              v971 = *(_QWORD *)(v16 + 1440);
              v972 = v966 >> 4;
              v973 = v64 | *(_BYTE *)(v971 + 2 * v972);
              v974 = v1549;
              if ( v973 != v1772 && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v965 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v974;
                *(_QWORD *)(v16 + 2272) = v942;
                *(_DWORD *)(v16 + 2240) = 1;
                __b9(v16, 0LL, v967, v968);
              }
              if ( ((unsigned __int8)v969 | *(_BYTE *)(v971 + 2 * v972 + 1)) != v1559 && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v965 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v974;
                *(_QWORD *)(v16 + 2272) = v942;
                *(_DWORD *)(v16 + 2240) = 1;
                __b9(v16, 0LL, v967, v968);
              }
              if ( v942 != *(_QWORD *)(v16 + 1208) )
              {
                v975 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v16 + 968))(v942, 1LL);
                v976 = v975;
                if ( v975 )
                {
                  v977 = *v975;
                  v955 = v975;
                  if ( *v975 )
                  {
                    v978 = v1772;
                    v979 = v1565;
                    v1555 = (__int64)v975;
                    do
                    {
                      *v976 = v977 & 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (**)(void))(v16 + 464))();
                      v980 = v1559;
                      v981 = v976[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v981 == v979 )
                        v980 = v978;
                      v982 = v976[1] >> 6;
                      LOBYTE(v982) = v982 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v16 + 1000))(v982, v980) )
                      {
                        if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
                        {
                          v984 = *(_QWORD **)(v16 + 2632);
                          v985 = 48;
                          v983 = 6LL;
                          do
                          {
                            v985 -= 8;
                            *v984 = *(_QWORD *)v965;
                            v965 += 8;
                            ++v984;
                            --v983;
                          }
                          while ( v983 );
                          if ( v985 )
                          {
                            do
                            {
                              v986 = *v965++;
                              *(_BYTE *)v984 = v986;
                              v984 = (_QWORD *)((char *)v984 + 1);
                              --v985;
                            }
                            while ( v985 );
                            v978 = v1772;
                          }
                          v965 = *(char **)(v16 + 2632);
                        }
                        *((_QWORD *)v965 + 3) = v981;
                        *((_QWORD *)v965 + 4) = *v976;
                        v965[40] = ((unsigned __int64)*((unsigned int *)v976 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v16 + 2240) )
                        {
                          *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v16 + 2256) = v965 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v16 + 2264) = *(int *)v965;
                          *(_QWORD *)(v16 + 2272) = v942;
                          *(_DWORD *)(v16 + 2240) = 1;
                          __b9(v16, 0LL, v983, 0LL);
                        }
                      }
                      v976 += 6;
                      v977 = *v976;
                    }
                    while ( *v976 );
LABEL_1607:
                    v955 = (_QWORD *)v1555;
                  }
LABEL_1608:
                  (*(void (__fastcall **)(_QWORD *))(v16 + 240))(v955);
                }
              }
LABEL_1609:
              (*(void (__fastcall **)(__int64))(v16 + 920))(v942);
              *(_DWORD *)(v16 + 2032) += 0x8000;
              v59 = (char *)v1549;
              LOBYTE(v64) = 0;
              v940 = v1551;
              v938 = v1553;
            }
          }
          v987 = *(__int64 (__fastcall **)(__int64))(v16 + 928);
          v1551 = ++v940;
          v941 = v987(v942);
          continue;
        }
      }
      if ( v69 == 38 )
      {
        (*(void (__fastcall **)(_BYTE *, _QWORD))(v16 + 400))(v1733, *((unsigned int *)v59 + 11));
        v1504 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(v16 + 448))(v1733, v1734);
        __asm { xgetbv }
        v702 = v1734;
        v701 = v1504 | (v1505 << 32);
        goto LABEL_1126;
      }
      if ( v69 <= 42 )
      {
        *(_DWORD *)(v16 + 2032) += *((_DWORD *)v59 + 9);
        v1384 = *((unsigned int *)v59 + 9);
        v1385 = (_QWORD *)(v16 + *((unsigned int *)v59 + 8));
        v1386 = *(_DWORD *)(v16 + 2012);
        v1387 = v1385;
        v1388 = *(_QWORD *)(v16 + 2016);
        v1389 = (const char *)v1385;
        if ( v1385 < (_QWORD *)((char *)v1385 + v1384) )
        {
          do
          {
            _mm_prefetch(v1389, 0);
            v1389 += 64;
          }
          while ( v1389 < (const char *)v1385 + v1384 );
        }
        v91 = *(_QWORD *)(v16 + 2016);
        v1390 = (unsigned int)v1384 >> 7;
        if ( (unsigned int)v1384 >> 7 )
        {
          do
          {
            v1391 = 8LL;
            do
            {
              v1392 = v1387[1] ^ __ROL8__(*v1387 ^ v91, v1386);
              v1387 += 2;
              v91 = __ROL8__(v1392, v1386);
              --v1391;
            }
            while ( v1391 );
            v1393 = (__ROL8__(v1388 ^ ((char *)v1387 - (char *)v1385), 17) ^ v1388 ^ (unsigned __int64)((char *)v1387 - (char *)v1385))
                  * (unsigned __int128)0x7010008004002001uLL;
            v1703 = *((_QWORD *)&v1393 + 1);
            v1386 = (BYTE8(v1393) ^ (unsigned __int8)(v1393 ^ v1386)) & 0x3F;
            if ( !v1386 )
              LOBYTE(v1386) = 1;
            --v1390;
          }
          while ( v1390 );
          v16 = v1550;
        }
        v76 = v1384 & 0x7F;
        if ( (unsigned int)v76 >= 8 )
        {
          v1394 = (unsigned __int64)(unsigned int)v76 >> 3;
          do
          {
            v91 = __ROL8__(*v1387++ ^ v91, v1386);
            v76 = (unsigned int)(v76 - 8);
            --v1394;
          }
          while ( v1394 );
        }
        for ( ; (_DWORD)v76; v76 = (unsigned int)(v76 - 1) )
        {
          v1395 = *(unsigned __int8 *)v1387;
          v1387 = (_QWORD *)((char *)v1387 + 1);
          v91 = __ROL8__(v1395 ^ v91, v1386);
        }
        v49 = *((_QWORD *)v59 + 3);
        if ( v91 == v49 )
          goto LABEL_147;
        v1396 = *(_DWORD *)(v16 + 2240);
        if ( !v1396 )
        {
          *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v91 ^ v49;
          v1396 = *(_DWORD *)(v16 + 2240);
        }
        v49 = v16 + *((unsigned int *)v59 + 8);
        v98 = v1396 == 0;
        goto LABEL_233;
      }
      if ( v69 != 43 )
      {
        if ( v69 != 44 )
        {
          if ( v69 == 46 )
          {
            if ( (*(_DWORD *)(v16 + 2040) & 1) == 0 )
            {
              v1170 = 0;
              v1171 = *(_QWORD *)(v16 + 1312);
              (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(v16 + 360))(v49, v47);
              if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 || (v1172 = *(_DWORD *)(v16 + 2328), v1172 >= 7) )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 280))(*(_QWORD *)(v16 + 2504), 0LL);
                v1173 = 0x80;
              }
              else
              {
                v1173 = 1 << v1172;
              }
              (*(void (__fastcall **)(__int64, _QWORD))(v16 + 296))(v1171, 0LL);
              if ( v1173 == (char)0x80 )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 288))(*(_QWORD *)(v16 + 2504), 0LL);
              }
              else
              {
                v1174 = *(volatile signed __int8 ***)(v16 + 1272);
                v1175 = *v1174;
                if ( *v1174 != (volatile signed __int8 *)v1174 )
                {
                  v1176 = ~v1173;
                  do
                  {
                    _InterlockedAnd8(&v1175[*(_QWORD *)(v16 + 1672) - *(_QWORD *)(v16 + 1696)], v1176);
                    v1175 = *(volatile signed __int8 **)v1175;
                    ++v1170;
                  }
                  while ( v1175 != (volatile signed __int8 *)v1174 );
                }
              }
              (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 304))(*(_QWORD *)(v16 + 1312), 0LL);
              (*(void (**)(void))(v16 + 368))();
              *(_DWORD *)(v16 + 2032) += v1170 << 7;
            }
            goto LABEL_147;
          }
          if ( v69 == 47 )
          {
            v1571 = *(_QWORD *)(*(_QWORD *)(v16 + 1656)
                              + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v16 + 1560))
                              + *(_QWORD *)(v16 + 1624));
            v1161 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v16 + 1152))(v1571, v47);
            if ( v1161 == 0xFFFFFFFFLL )
            {
              v1571 = 0LL;
              v1162 = *(_QWORD *)(v16 + 2384);
              if ( !v1162 )
                goto LABEL_1909;
              v1163 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v16 + 1136))(v1162, &v1571);
              v1164 = v1571;
              if ( v1163 < 0 )
                v1164 = 0LL;
              v1571 = v1164;
              if ( !v1164 )
LABEL_1909:
                v1571 = (*(__int64 (__fastcall **)(_QWORD))(v16 + 944))(0LL);
              *(_QWORD *)(v16 + 2384) = 0LL;
              v1165 = 0;
              v49 = v1571;
              for ( i3 = v1571 == 0; ; i3 = v49 == 0 )
              {
                if ( i3 )
                  goto LABEL_1917;
                ++v1165;
                if ( (*(int (**)(void))(v16 + 912))() >= 0 )
                {
                  (*(void (__fastcall **)(__int64, _BYTE *))(v16 + 1064))(v1571, v1752);
                  v1161 = (*(__int64 (**)(void))(v16 + 1152))();
                  (*(void (__fastcall **)(_BYTE *))(v16 + 1072))(v1752);
                  (*(void (__fastcall **)(__int64))(v16 + 920))(v1571);
                  if ( v1161 != 0xFFFFFFFFLL || v1165 > 0x100 )
                    break;
                }
                v49 = (*(__int64 (__fastcall **)(__int64))(v16 + 944))(v1571);
                v1571 = v49;
              }
              *(_QWORD *)(v16 + 2384) = (*(__int64 (__fastcall **)(__int64))(v16 + 1144))(v1571);
              (*(void (__fastcall **)(__int64))(v16 + 464))(v1571);
              if ( v1161 == 0xFFFFFFFFLL )
              {
LABEL_1917:
                *(_DWORD *)(v16 + 2032) += v1165 << 12;
                goto LABEL_147;
              }
            }
            if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
            {
              v1167 = *(_QWORD **)(v16 + 2632);
              v1168 = 48;
              v57 = 6LL;
              do
              {
                v1168 -= 8;
                *v1167 = *(_QWORD *)v59;
                v59 += 8;
                ++v1167;
                --v57;
              }
              while ( v57 );
              for ( ; v1168; --v1168 )
              {
                v1169 = *v59++;
                *(_BYTE *)v1167 = v1169;
                v1167 = (_QWORD *)((char *)v1167 + 1);
              }
              v59 = *(char **)(v16 + 2632);
            }
            *((_QWORD *)v59 + 3) = v1161;
            v49 = v1571;
            goto LABEL_1129;
          }
          if ( v69 != 48 )
            goto LABEL_2296;
          if ( !*((_DWORD *)v59 + 4) )
            goto LABEL_147;
          if ( (*(_DWORD *)(v16 + 2396) & 0x4000) != 0 )
          {
            v49 = *(_QWORD *)(v16 + 1208);
            while ( 1 )
            {
              _disable();
              if ( !_interlockedbittestandset((volatile signed __int32 *)v49, (*(_DWORD *)(v16 + 2392) >> 10) & 0x1F) )
                break;
              _enable();
              _mm_pause();
            }
          }
          if ( (*((_DWORD *)v59 + 6) & 1) == 0 )
          {
            v1113 = (const char *)*((_QWORD *)v59 + 1);
            v1114 = *((unsigned int *)v59 + 4);
            v1115 = (__int64)v1113;
            *(_DWORD *)(v16 + 2032) += v1114;
            v1116 = v1113;
            v1117 = *(_DWORD *)(v16 + 2012);
            v1118 = *(_QWORD *)(v16 + 2016);
            v49 = (unsigned __int64)&v1113[v1114];
            if ( v1113 < &v1113[v1114] )
            {
              do
              {
                _mm_prefetch(v1116, 0);
                v1116 += 64;
              }
              while ( (unsigned __int64)v1116 < v49 );
            }
            v1119 = *(_QWORD *)(v16 + 2016);
            v1120 = (unsigned int)v1114 >> 7;
            if ( (unsigned int)v1114 >> 7 )
            {
              do
              {
                v1121 = 8LL;
                do
                {
                  v1122 = *(_QWORD *)(v1115 + 8) ^ __ROL8__(*(_QWORD *)v1115 ^ v1119, v1117);
                  v1115 += 16LL;
                  v1119 = __ROL8__(v1122, v1117);
                  --v1121;
                }
                while ( v1121 );
                v49 = __ROL8__(v1118 ^ (v1115 - (_QWORD)v1113), 17) ^ v1118 ^ (v1115 - (_QWORD)v1113);
                v1695 = (v49 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v1117 = ((unsigned __int8)v49 ^ (unsigned __int8)(v1695 ^ v1117)) & 0x3F;
                if ( !v1117 )
                  v1117 = 1;
                --v1120;
              }
              while ( v1120 );
              v16 = v1550;
            }
            v1123 = v1114 & 0x7F;
            if ( (unsigned int)v1123 >= 8 )
            {
              v1124 = (unsigned __int64)(unsigned int)v1123 >> 3;
              do
              {
                v49 = v1117;
                v1119 = __ROL8__(*(_QWORD *)v1115 ^ v1119, v1117);
                v1115 += 8LL;
                v1123 = (unsigned int)(v1123 - 8);
                --v1124;
              }
              while ( v1124 );
            }
            for ( ; (_DWORD)v1123; v1123 = (unsigned int)(v1123 - 1) )
            {
              v1125 = *(unsigned __int8 *)v1115;
              v49 = v1117;
              ++v1115;
              v1119 = __ROL8__(v1125 ^ v1119, v1117);
            }
            for ( i4 = v1119; ; LODWORD(v1119) = i4 ^ v1119 )
            {
              i4 >>= 31;
              if ( !i4 )
                break;
            }
            v1127 = v1119 & 0x7FFFFFFF;
            if ( v1127 != *((_DWORD *)v59 + 5) )
            {
              if ( !*(_DWORD *)v59 && *((_DWORD *)v59 + 6) )
                v64 = 1;
              v49 = *((unsigned int *)v59 + 4);
              v1128 = *((_QWORD *)v59 + 1);
              if ( *((_DWORD *)v59 + 4) )
              {
                v1123 = 64LL;
                if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
                {
                  v1129 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v1130 = v1128 & 0xFFFFFFFFFFFFF000uLL;
                  v1778 = (v1128 + v49 - 1) | 0xFFF;
                  v1131 = (v1128 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    v1132 = v1129;
                    while ( 1 )
                    {
                      v1133 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(v16 + 1112))(
                                v1130,
                                0LL,
                                v1123,
                                v1115);
                      if ( v1133 != -1073741267 )
                        break;
                      if ( v64 )
                        goto LABEL_1852;
                      if ( v1129 > 1u )
                        goto LABEL_1850;
                      v1132 = v1129;
                      __writecr8(v1129);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                    }
                    if ( v1133 < 0 )
                      break;
LABEL_1850:
                    v1130 += 4096LL;
                    v1131 += 4096LL;
                    if ( v1131 == v1778 )
                      goto LABEL_1896;
                  }
LABEL_1852:
                  __writecr8(v1132);
                  v59 = (char *)v1549;
                }
              }
              v1134 = *((unsigned int *)v59 + 5);
              if ( !*(_DWORD *)(v16 + 2240) )
              {
                v1135 = v1127;
                goto LABEL_1855;
              }
            }
            goto LABEL_1902;
          }
          if ( *(_QWORD *)(v16 + 2376) )
          {
            v1136 = *(_DWORD *)(v16 + 2396);
            if ( !*(_DWORD *)(v16 + 2028) )
            {
              LODWORD(v49) = v1136 ^ ((unsigned __int8)v1136 ^ (unsigned __int8)(8 * v1136)) & 0x20;
              *(_DWORD *)(v16 + 2396) = v49;
              goto LABEL_1861;
            }
            v49 = v1136;
            if ( (((unsigned __int8)v1136 ^ (unsigned __int8)(v1136 >> 3)) & 4) == 0 )
            {
LABEL_1861:
              if ( (v49 & 4) != 0 )
              {
                v49 = *((_DWORD *)v59 + 2) & 0xFFF;
                v1137 = *((_QWORD *)v59 + 1) & 0xFFFFFFFFFFFFF000uLL;
                v1138 = (v49 + *((unsigned int *)v59 + 4) + 4095LL) >> 12;
                while ( v1138 )
                {
                  --v1138;
                  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v16 + 672))(v1137)
                    && !*(_DWORD *)(v16 + 2240) )
                  {
                    *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v16 + 2264) = *(int *)v59;
                    *(_QWORD *)(v16 + 2272) = v1137;
                    *(_DWORD *)(v16 + 2240) = 1;
                    __b9(v16, 0LL, v1139, v1140);
                  }
                  v1137 += 4096LL;
                  *(_DWORD *)(v16 + 2032) += 256;
                }
                goto LABEL_1902;
              }
              v1141 = (const char *)*((_QWORD *)v59 + 1);
              v1142 = *((unsigned int *)v59 + 4);
              v1115 = (__int64)v1141;
              *(_DWORD *)(v16 + 2032) += v1142;
              v1143 = v1141;
              v1144 = *(_DWORD *)(v16 + 2012);
              v1145 = *(_QWORD *)(v16 + 2016);
              v49 = (unsigned __int64)&v1141[v1142];
              if ( v1141 < &v1141[v1142] )
              {
                do
                {
                  _mm_prefetch(v1143, 0);
                  v1143 += 64;
                }
                while ( (unsigned __int64)v1143 < v49 );
              }
              v1146 = *(_QWORD *)(v16 + 2016);
              v1147 = (unsigned int)v1142 >> 7;
              if ( (unsigned int)v1142 >> 7 )
              {
                do
                {
                  v1148 = 8LL;
                  do
                  {
                    v1149 = *(_QWORD *)(v1115 + 8) ^ __ROL8__(*(_QWORD *)v1115 ^ v1146, v1144);
                    v1115 += 16LL;
                    v1146 = __ROL8__(v1149, v1144);
                    --v1148;
                  }
                  while ( v1148 );
                  v49 = __ROL8__(v1145 ^ (v1115 - (_QWORD)v1141), 17) ^ v1145 ^ (v1115 - (_QWORD)v1141);
                  v1696 = (v49 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v1144 = ((unsigned __int8)v49 ^ (unsigned __int8)(v1696 ^ v1144)) & 0x3F;
                  if ( !v1144 )
                    v1144 = 1;
                  --v1147;
                }
                while ( v1147 );
                v16 = v1550;
              }
              v1150 = v1142 & 0x7F;
              if ( v1150 >= 8 )
              {
                v1151 = (unsigned __int64)v1150 >> 3;
                do
                {
                  v49 = v1144;
                  v1146 = __ROL8__(*(_QWORD *)v1115 ^ v1146, v1144);
                  v1115 += 8LL;
                  v1150 -= 8;
                  --v1151;
                }
                while ( v1151 );
              }
              for ( ; v1150; --v1150 )
              {
                v1152 = *(unsigned __int8 *)v1115;
                v49 = v1144;
                ++v1115;
                v1146 = __ROL8__(v1152 ^ v1146, v1144);
              }
              for ( i5 = v1146; ; LODWORD(v1146) = i5 ^ v1146 )
              {
                i5 >>= 31;
                if ( !i5 )
                  break;
              }
              v1154 = *((_DWORD *)v59 + 5);
              v1155 = v1146 & 0x7FFFFFFF;
              if ( v1155 == v1154 )
                goto LABEL_1902;
              v49 = *((unsigned int *)v59 + 4);
              v1123 = *((_QWORD *)v59 + 1);
              if ( *((_DWORD *)v59 + 4) )
              {
                v1115 = 64LL;
                if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
                {
                  v1156 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v1157 = v1123 & 0xFFFFFFFFFFFFF000uLL;
                  v1158 = (v1123 + v49 - 1) | 0xFFF;
                  v1159 = (v1123 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    v1132 = v1156;
                    while ( 1 )
                    {
                      v1160 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v16 + 1112))(v1157, 0LL);
                      if ( v1160 != -1073741267 )
                        break;
                      if ( v1156 > 1u )
                        goto LABEL_1895;
                      v1132 = v1156;
                      __writecr8(v1156);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                    }
                    if ( v1160 < 0 )
                      break;
LABEL_1895:
                    v1157 += 4096LL;
                    v1159 += 4096LL;
                    if ( v1159 == v1158 )
                    {
LABEL_1896:
                      __writecr8(v1132);
                      goto LABEL_1902;
                    }
                  }
                  __writecr8(v1132);
                  v59 = (char *)v1549;
                  v1154 = v1549[5];
                }
              }
              if ( !*(_DWORD *)(v16 + 2240) )
              {
                v1135 = v1154;
                v1134 = v1155;
LABEL_1855:
                *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v1134 ^ v1135;
                v49 = *((_QWORD *)v59 + 1);
                if ( !*(_DWORD *)(v16 + 2240) )
                {
                  *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v16 + 2264) = *(int *)v59;
                  *(_QWORD *)(v16 + 2272) = v49;
                  *(_DWORD *)(v16 + 2240) = 1;
                  __b9(v16, 0LL, v1123, v1115);
                }
              }
LABEL_1902:
              if ( (*(_DWORD *)(v16 + 2396) & 0x4000) != 0 )
              {
                v49 = (*(_DWORD *)(v16 + 2392) >> 10) & 0x1F;
                _InterlockedAnd(
                  *(volatile signed __int32 **)(v16 + 1208),
                  ~(1 << ((*(_DWORD *)(v16 + 2392) >> 10) & 0x1F)));
                _enable();
              }
              goto LABEL_147;
            }
          }
          *(_DWORD *)(v16 + 2028) = 0;
          goto LABEL_1902;
        }
        v49 = *((unsigned int *)v59 + 8);
        BugCheckParameter2 = v16;
        if ( (v49 & 2) == 0 )
          goto LABEL_1997;
        if ( !*(_QWORD *)(v16 + 2376) )
          goto LABEL_1747;
        v1177 = *(_DWORD *)(v16 + 2396);
        if ( (v1177 & 4) != 0 )
          goto LABEL_1747;
        if ( (v49 & 2) != 0 )
        {
          v1178 = *(_DWORD *)(v16 + 2028);
          if ( v1178 )
          {
            v49 = v1177;
            if ( (((unsigned __int8)v1177 ^ (unsigned __int8)(v1177 >> 3)) & 4) != 0 )
              goto LABEL_1747;
          }
          else
          {
            LODWORD(v49) = v1177 ^ ((unsigned __int8)v1177 ^ (unsigned __int8)(8 * v1177)) & 0x20;
            *(_DWORD *)(v16 + 2396) = v49;
          }
          if ( !*(_QWORD *)(v16 + 2376) )
            goto LABEL_1996;
          if ( !v1178 )
          {
            v1179 = v49 ^ ((unsigned __int8)v49 ^ (unsigned __int8)(8 * v49)) & 0x20;
            *(_DWORD *)(v16 + 2396) = v1179;
            goto LABEL_1948;
          }
          LOBYTE(v1179) = v49;
          if ( (((unsigned __int8)v49 ^ (unsigned __int8)((unsigned int)v49 >> 3)) & 4) != 0 )
          {
LABEL_1996:
            *(_DWORD *)(v16 + 2028) = 0;
            goto LABEL_1985;
          }
LABEL_1948:
          if ( (v1179 & 4) != 0 )
          {
            v1180 = *((_QWORD *)v59 + 1) & 0xFFFFFFFFFFFFF000uLL;
            v1181 = ((*((_DWORD *)v59 + 2) & 0xFFF) + (unsigned __int64)*((unsigned int *)v59 + 4) + 4095) >> 12;
            while ( v1181 )
            {
              --v1181;
              if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v16 + 672))(v1180) && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *(int *)v59;
                *(_QWORD *)(v16 + 2272) = v1180;
                *(_DWORD *)(v16 + 2240) = 1;
                __b9(v16, 0LL, v1182, v1183);
              }
              v1180 += 4096LL;
              *(_DWORD *)(v16 + 2032) += 256;
            }
            goto LABEL_1985;
          }
          v1184 = (const char *)*((_QWORD *)v59 + 1);
          v1185 = *((unsigned int *)v59 + 4);
          v1186 = (__int64)v1184;
          *(_DWORD *)(v16 + 2032) += v1185;
          v1187 = v1184;
          v1188 = *(_DWORD *)(v16 + 2012);
          for ( i6 = *(_QWORD *)(v16 + 2016); v1187 < &v1184[v1185]; v1187 += 64 )
            _mm_prefetch(v1187, 0);
          v1190 = *(_QWORD *)(v16 + 2016);
          v1191 = (unsigned int)v1185 >> 7;
          if ( (unsigned int)v1185 >> 7 )
          {
            do
            {
              v1192 = 8LL;
              do
              {
                v1193 = v1190 ^ *(_QWORD *)v1186;
                v1194 = *(_QWORD *)(v1186 + 8);
                v1186 += 16LL;
                v1190 = __ROL8__(__ROL8__(v1193, v1188) ^ v1194, v1188);
                --v1192;
              }
              while ( v1192 );
              v1195 = __ROL8__(i6 ^ (v1186 - (_QWORD)v1184), 17) ^ i6 ^ (v1186 - (_QWORD)v1184);
              v1697 = ((unsigned __int64)v1195 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1188 = ((unsigned __int8)(v1195 ^ v1697) ^ (unsigned __int8)v1188) & 0x3F;
              if ( !v1188 )
                LOBYTE(v1188) = 1;
              --v1191;
            }
            while ( v1191 );
            v16 = v1550;
          }
          v1196 = v1185 & 0x7F;
          if ( v1196 >= 8 )
          {
            v1197 = (unsigned __int64)v1196 >> 3;
            do
            {
              v1190 = __ROL8__(*(_QWORD *)v1186 ^ v1190, v1188);
              v1186 += 8LL;
              v1196 -= 8;
              --v1197;
            }
            while ( v1197 );
          }
          if ( v1196 )
          {
            do
            {
              v1198 = *(unsigned __int8 *)v1186++;
              v1190 = __ROL8__(v1198 ^ v1190, v1188);
              --v1196;
            }
            while ( v1196 );
            v16 = v1550;
          }
          for ( i7 = v1190; ; LODWORD(v1190) = i7 ^ v1190 )
          {
            i7 >>= 31;
            if ( !i7 )
              break;
          }
          v1200 = *((_DWORD *)v59 + 5);
          v1201 = v1190 & 0x7FFFFFFF;
          if ( v1201 != v1200 )
          {
            v1202 = *((unsigned int *)v59 + 4);
            v1203 = *((_QWORD *)v59 + 1);
            if ( *((_DWORD *)v59 + 4) )
            {
              v1186 = 64LL;
              if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
              {
                v1204 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v1205 = v1203 & 0xFFFFFFFFFFFFF000uLL;
                v1206 = (v1203 + v1202 - 1) | 0xFFF;
                v1207 = (v1203 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v1208 = v1204;
                  while ( 1 )
                  {
                    v1209 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v16 + 1112))(v1205, 0LL);
                    if ( v1209 != -1073741267 )
                      break;
                    if ( v1204 > 1u )
                      goto LABEL_1983;
                    v1208 = v1204;
                    __writecr8(v1204);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v1209 < 0 )
                    break;
LABEL_1983:
                  v1205 += 4096LL;
                  v1207 += 4096LL;
                  if ( v1207 == v1206 )
                    goto LABEL_1984;
                }
                __writecr8(v1208);
                v59 = (char *)v1549;
                v1200 = v1549[5];
              }
            }
            if ( !*(_DWORD *)(v16 + 2240) )
            {
              *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v1200 ^ (unsigned __int64)v1201;
              v1215 = *((_QWORD *)v59 + 1);
              if ( !*(_DWORD *)(v16 + 2240) )
              {
LABEL_1995:
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *(int *)v59;
                *(_QWORD *)(v16 + 2272) = v1215;
                *(_DWORD *)(v16 + 2240) = 1;
                __b9(v16, 0LL, v1203, v1186);
              }
            }
          }
        }
        else
        {
LABEL_1997:
          v1216 = (const char *)*((_QWORD *)v59 + 1);
          v1217 = *((unsigned int *)v59 + 4);
          v1186 = (__int64)v1216;
          *(_DWORD *)(v16 + 2032) += v1217;
          v1218 = v1216;
          v1219 = *(_DWORD *)(v16 + 2012);
          for ( i8 = *(_QWORD *)(v16 + 2016); v1218 < &v1216[v1217]; v1218 += 64 )
            _mm_prefetch(v1218, 0);
          v1221 = *(_QWORD *)(v16 + 2016);
          v1222 = (unsigned int)v1217 >> 7;
          if ( (unsigned int)v1217 >> 7 )
          {
            do
            {
              v1223 = 8LL;
              do
              {
                v1224 = v1221 ^ *(_QWORD *)v1186;
                v1225 = *(_QWORD *)(v1186 + 8);
                v1186 += 16LL;
                v1221 = __ROL8__(__ROL8__(v1224, v1219) ^ v1225, v1219);
                --v1223;
              }
              while ( v1223 );
              v1226 = __ROL8__(i8 ^ (v1186 - (_QWORD)v1216), 17) ^ i8 ^ (v1186 - (_QWORD)v1216);
              v1698 = ((unsigned __int64)v1226 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1219 = ((unsigned __int8)(v1226 ^ v1698) ^ (unsigned __int8)v1219) & 0x3F;
              if ( !v1219 )
                LOBYTE(v1219) = 1;
              --v1222;
            }
            while ( v1222 );
            v16 = v1550;
          }
          v1203 = v1217 & 0x7F;
          if ( (unsigned int)v1203 >= 8 )
          {
            v1227 = (unsigned __int64)(unsigned int)v1203 >> 3;
            do
            {
              v1221 = __ROL8__(*(_QWORD *)v1186 ^ v1221, v1219);
              v1186 += 8LL;
              v1203 = (unsigned int)(v1203 - 8);
              --v1227;
            }
            while ( v1227 );
          }
          if ( (_DWORD)v1203 )
          {
            do
            {
              v1228 = *(unsigned __int8 *)v1186++;
              v1221 = __ROL8__(v1228 ^ v1221, v1219);
              v1203 = (unsigned int)(v1203 - 1);
            }
            while ( (_DWORD)v1203 );
            v16 = v1550;
          }
          for ( i9 = v1221; ; LODWORD(v1221) = i9 ^ v1221 )
          {
            i9 >>= 31;
            if ( !i9 )
              break;
          }
          v1230 = v1221 & 0x7FFFFFFF;
          if ( v1230 != *((_DWORD *)v59 + 5) )
          {
            if ( !*(_DWORD *)v59 && *((_DWORD *)v59 + 6) )
              v64 = 1;
            v1231 = *((unsigned int *)v59 + 4);
            v1232 = *((_QWORD *)v59 + 1);
            if ( *((_DWORD *)v59 + 4) )
            {
              v1203 = 64LL;
              if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
              {
                v1233 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v1234 = v1232 & 0xFFFFFFFFFFFFF000uLL;
                v1780 = (v1232 + v1231 - 1) | 0xFFF;
                v1235 = (v1232 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v1208 = v1233;
                  while ( 1 )
                  {
                    v1236 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(v16 + 1112))(
                              v1234,
                              0LL,
                              v1203,
                              v1186);
                    if ( v1236 != -1073741267 )
                      break;
                    if ( v64 )
                      goto LABEL_2030;
                    if ( v1233 > 1u )
                      goto LABEL_2028;
                    v1208 = v1233;
                    __writecr8(v1233);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v1236 < 0 )
                    break;
LABEL_2028:
                  v1234 += 4096LL;
                  v1235 += 4096LL;
                  if ( v1235 == v1780 )
                  {
LABEL_1984:
                    __writecr8(v1208);
                    goto LABEL_1985;
                  }
                }
LABEL_2030:
                __writecr8(v1208);
                v59 = (char *)v1549;
              }
            }
            if ( !*(_DWORD *)(v16 + 2240) )
            {
              *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = *((unsigned int *)v59 + 5) ^ (unsigned __int64)v1230;
              v1215 = *((_QWORD *)v59 + 1);
              if ( !*(_DWORD *)(v16 + 2240) )
                goto LABEL_1995;
            }
          }
        }
LABEL_1985:
        v49 = (unsigned __int64)v1549;
        if ( (v1549[8] & 1) == 0 )
          goto LABEL_147;
        v1210 = *((_QWORD *)v1549 + 3);
        v1211 = (*(__int64 (__fastcall **)(__int64))(v16 + 488))(v1210);
        v1212 = (_DWORD *)(v1211 + *(unsigned __int16 *)(v1211 + 20) + 24LL);
        v49 = 5LL * *(unsigned __int16 *)(v1211 + 6);
        v1555 = (__int64)&v1212[10 * *(unsigned __int16 *)(v1211 + 6)];
        if ( v1212 == (_DWORD *)v1555 )
          goto LABEL_147;
        v1213 = *(_DWORD *)(v16 + 2028);
        if ( !v1213 )
        {
          *(_DWORD *)(v16 + 2028) = 4096;
          v1213 = 4096;
        }
        if ( v1210 == *(_QWORD *)(v16 + 1472) || v1210 == *(_QWORD *)(v16 + 1480) )
        {
          v1214 = 1;
          v1779 = 1;
        }
        else
        {
          v1779 = 0;
          v1214 = 1;
        }
        while ( 2 )
        {
          v49 = (unsigned int)v1212[4];
          v1237 = v1212[2];
          v1238 = v1212[3];
          if ( (unsigned int)v49 <= v1237 )
            v49 = v1237;
          v1239 = (v49 + v1238 + 4095) & 0xFFFFF000;
          if ( v1213 >= v1239 )
            goto LABEL_2042;
          if ( (v1212[9] & 0x2000000) != 0 )
            goto LABEL_2041;
          v1240 = *v1212;
          if ( *v1212 == 1414090313 )
          {
            if ( v1212[1] == 1195525195 )
              goto LABEL_2041;
            goto LABEL_2052;
          }
          if ( v1240 == 1162297680 )
          {
            v1242 = *((_WORD *)v1212 + 2);
            v49 = 30839LL;
            if ( v1242 == 30839 )
              goto LABEL_2041;
            v49 = 29303LL;
            if ( v1242 == 29303 )
              goto LABEL_2041;
            v49 = 30583LL;
            if ( v1242 == 30583 )
              goto LABEL_2041;
          }
          else
          {
LABEL_2052:
            if ( v1240 == 1095914053 && *((_WORD *)v1212 + 2) == 16724 )
              goto LABEL_2041;
          }
          v49 = BugCheckParameter2;
          if ( BugCheckParameter2 )
          {
            v1243 = *(char **)(BugCheckParameter2 + 2296);
            *((_QWORD *)&v1631 + 1) = *(_QWORD *)(BugCheckParameter2 + 2304);
            v1632 = *(_OWORD *)(BugCheckParameter2 + 2312);
            *(_QWORD *)&v1631 = v1243;
          }
          else
          {
            v1631 = *(_OWORD *)VfExcludeSections;
            v1243 = VfExcludeSections[0];
            v1632 = *(_OWORD *)off_140C091F8;
          }
          v1244 = 7;
          v1245 = (unsigned __int8 *)v1212;
          while ( 1 )
          {
            v1246 = *v1245++;
            v1247 = (unsigned __int8)*v1243++;
            if ( v1246 != v1247 )
              break;
            if ( !--v1244 )
              goto LABEL_2041;
          }
          v1248 = (__int64 *)*((_QWORD *)&v1631 + 1);
          v1249 = 8;
          v1250 = (unsigned __int64 *)v1212;
          do
          {
            v49 = *v1250++;
            v1251 = *v1248++;
            if ( v49 != v1251 )
              goto LABEL_2068;
            v1249 -= 8;
          }
          while ( v1249 >= 8 );
          if ( !v1249 )
            goto LABEL_2041;
          while ( 1 )
          {
            v1252 = *(unsigned __int8 *)v1250;
            v1250 = (unsigned __int64 *)((char *)v1250 + 1);
            v1253 = *(unsigned __int8 *)v1248;
            v1248 = (__int64 *)((char *)v1248 + 1);
            if ( v1252 != v1253 )
              break;
            if ( !--v1249 )
              goto LABEL_2041;
          }
LABEL_2068:
          v1254 = (unsigned __int8 *)v1632;
          v1255 = 4;
          v1256 = (unsigned __int8 *)v1212;
          while ( 1 )
          {
            v1257 = *v1256++;
            v1258 = *v1254++;
            if ( v1257 != v1258 )
              break;
            if ( !--v1255 )
              goto LABEL_2041;
          }
          v1259 = (unsigned __int8 *)*((_QWORD *)&v1632 + 1);
          v1260 = 6;
          v1261 = (unsigned __int8 *)v1212;
          while ( 1 )
          {
            v1262 = *v1261++;
            v1263 = *v1259++;
            if ( v1262 != v1263 )
              break;
            if ( !--v1260 )
              goto LABEL_2041;
          }
          v1264 = v1212[9];
          if ( v1264 < 0 || (v1264 & 0x20000000) == 0 )
          {
LABEL_2041:
            v1213 = v1239;
LABEL_2042:
            v1241 = BugCheckParameter2;
            goto LABEL_2043;
          }
          if ( v1779 && *v1212 != 778396769 && *v1212 != 1162297680 )
            v1214 = 0;
          v1241 = BugCheckParameter2;
          if ( v1213 < v1238 )
            v1213 = v1238;
LABEL_2085:
          v1265 = v1210 + v1213;
          if ( (*(_BYTE *)(v1241 + 2115) & 4) != 0 )
          {
            v49 = 0xFFFFFFFFLL;
            __asm { xbegin  $+6 }
            __asm { xend }
            ++*(_DWORD *)(v1241 + 2052);
            *(_DWORD *)(v1241 + 2032) += 256;
LABEL_2095:
            v1268 = *(_DWORD *)(v1241 + 2036);
            v1213 += 4096;
            if ( v1213 >= v1239 )
            {
              if ( *(_DWORD *)(v1241 + 2032) >= v1268 )
                goto LABEL_2044;
LABEL_2043:
              v1212 += 10;
              v1214 = 1;
              if ( v1212 == (_DWORD *)v1555 )
              {
LABEL_2044:
                v16 = v1550;
                if ( v1212 == (_DWORD *)v1555 && v1213 >= v1239 )
                  *(_DWORD *)(v1241 + 2028) = 0;
                else
                  *(_DWORD *)(v1241 + 2028) = v1213;
                goto LABEL_147;
              }
              continue;
            }
            if ( *(_DWORD *)(v1241 + 2032) >= v1268 )
              goto LABEL_2044;
            goto LABEL_2085;
          }
          break;
        }
        if ( v1214 )
        {
          v1266 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(v1241 + 1088))(
                    &v1661,
                    v1210 + v1213,
                    v1241,
                    0LL);
          v1267 = 0LL;
          if ( v1266 < 0 )
          {
            if ( v1266 == -1073741819 )
            {
              v49 = (unsigned __int64)v1549;
              if ( (v1549[8] & 4) == 0 || (int)v1212[9] < 0 )
              {
                v1241 = BugCheckParameter2;
                if ( *(_DWORD *)(BugCheckParameter2 + 2240) )
                  goto LABEL_2095;
                *(_QWORD *)(BugCheckParameter2 + 2248) = BugCheckParameter2 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v1241 + 2256) = v49 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v1241 + 2264) = *(int *)v49;
                *(_QWORD *)(v1241 + 2272) = v1265;
                *(_DWORD *)(v1241 + 2240) = 1;
                __b9(v1241, 0LL, v1241, 0LL);
              }
            }
            v1241 = BugCheckParameter2;
            goto LABEL_2095;
          }
        }
        else
        {
          v1661 = 0LL;
          v1663 = 0;
          v1665 = 4096;
          v1662 = 8 * ((((unsigned __int64)(v1265 & 0xFFF) + 0x1FFF) >> 12) + 6);
          v1664 = v1265 & 0xFFFFFFFFFFFFF000uLL;
          v1666 = v1265 & 0xFFF;
          v1667 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(v1241 + 1096))(v1210 + v1213) >> 12;
        }
        v1269 = BugCheckParameter2;
        ++*(_DWORD *)(BugCheckParameter2 + 2056);
        *(_QWORD *)(v1269 + 2608) = v1664 + v1666;
        *(_QWORD *)(v1269 + 2600) = v1549;
        v1270 = KeGetCurrentIrql();
        __writecr8(2uLL);
        RtlInitMinimalBarrier(v1269 + 2568, **(unsigned int **)(v1269 + 1488), 0LL, v1267);
        v1241 = (*(__int64 (__fastcall **)(ULONG_PTR))(BugCheckParameter2 + 1080))(BugCheckParameter2 + *(unsigned int *)(BugCheckParameter2 + 1980));
        BugCheckParameter2 = v1241;
        __writecr8(v1270);
        if ( v1214 )
        {
          (*(void (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(v1241 + 1104))(&v1661, v1271, v1241, 0LL);
          v1241 = BugCheckParameter2;
        }
        *(_DWORD *)(v1241 + 2032) += 81920;
        goto LABEL_2095;
      }
LABEL_2105:
      if ( !*(_DWORD *)(v16 + 2028) )
      {
        if ( v69 == 12 )
        {
          if ( !*(_QWORD *)(v16 + 2376) )
          {
            *(_DWORD *)(v16 + 2028) = 0;
            goto LABEL_2187;
          }
          v1272 = *(_DWORD *)(v16 + 2396);
          *(_DWORD *)(v16 + 2396) = v1272 ^ ((unsigned __int8)v1272 ^ (unsigned __int8)(8 * v1272)) & 0x20;
          if ( (((unsigned __int8)v1272 ^ ((unsigned __int8)v1272 ^ (unsigned __int8)(8 * v1272)) & 0x20) & 4) != 0 )
          {
            v1273 = *((_QWORD *)v59 + 1) & 0xFFFFFFFFFFFFF000uLL;
            v1274 = ((*((_DWORD *)v59 + 2) & 0xFFF) + (unsigned __int64)*((unsigned int *)v59 + 4) + 4095) >> 12;
            if ( !v1274 )
              goto LABEL_2187;
            do
            {
              --v1274;
              if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v16 + 672))(v1273) && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *(int *)v59;
                *(_QWORD *)(v16 + 2272) = v1273;
                *(_DWORD *)(v16 + 2240) = 1;
                __b9(v16, 0LL, v1275, v1276);
              }
              *(_DWORD *)(v16 + 2032) += 256;
              v1273 += 4096LL;
            }
            while ( v1274 );
LABEL_2186:
            v69 = v1755;
            goto LABEL_2187;
          }
          v1277 = (const char *)*((_QWORD *)v59 + 1);
          v1278 = *((unsigned int *)v59 + 4);
          v1279 = (__int64)v1277;
          *(_DWORD *)(v16 + 2032) += v1278;
          v1280 = v1277;
          v1281 = *(_DWORD *)(v16 + 2012);
          for ( i10 = *(_QWORD *)(v16 + 2016); v1280 < &v1277[v1278]; v1280 += 64 )
            _mm_prefetch(v1280, 0);
          v1283 = *(_QWORD *)(v16 + 2016);
          v1284 = (unsigned int)v1278 >> 7;
          if ( (unsigned int)v1278 >> 7 )
          {
            do
            {
              v1285 = 8LL;
              do
              {
                v1286 = v1283 ^ *(_QWORD *)v1279;
                v1287 = *(_QWORD *)(v1279 + 8);
                v1279 += 16LL;
                v1283 = __ROL8__(__ROL8__(v1286, v1281) ^ v1287, v1281);
                --v1285;
              }
              while ( v1285 );
              v1288 = __ROL8__(i10 ^ (v1279 - (_QWORD)v1277), 17) ^ i10 ^ (v1279 - (_QWORD)v1277);
              v1699 = ((unsigned __int64)v1288 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1281 = ((unsigned __int8)(v1699 ^ v1288) ^ (unsigned __int8)v1281) & 0x3F;
              if ( !v1281 )
                LOBYTE(v1281) = 1;
              --v1284;
            }
            while ( v1284 );
            v16 = v1550;
          }
          v1289 = v1278 & 0x7F;
          if ( v1289 >= 8 )
          {
            v1290 = (unsigned __int64)v1289 >> 3;
            do
            {
              v1283 = __ROL8__(*(_QWORD *)v1279 ^ v1283, v1281);
              v1279 += 8LL;
              v1289 -= 8;
              --v1290;
            }
            while ( v1290 );
          }
          if ( v1289 )
          {
            do
            {
              v1291 = *(unsigned __int8 *)v1279++;
              v1283 = __ROL8__(v1291 ^ v1283, v1281);
              --v1289;
            }
            while ( v1289 );
            v16 = v1550;
          }
          for ( i11 = v1283; ; LODWORD(v1283) = i11 ^ v1283 )
          {
            i11 >>= 31;
            if ( !i11 )
              break;
          }
          v1293 = *((_DWORD *)v59 + 5);
          v1294 = v1283 & 0x7FFFFFFF;
          if ( v1294 == v1293 )
            goto LABEL_2186;
          v1295 = *((unsigned int *)v59 + 4);
          v1296 = *((_QWORD *)v59 + 1);
          if ( *((_DWORD *)v59 + 4) )
          {
            v1279 = 64LL;
            if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
            {
              v1297 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1298 = v1296 & 0xFFFFFFFFFFFFF000uLL;
              v1299 = (v1296 + v1295 - 1) | 0xFFF;
              v1300 = (v1296 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v1301 = v1297;
                while ( 1 )
                {
                  v1302 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v16 + 1112))(v1298, 0LL);
                  if ( v1302 != -1073741267 )
                    break;
                  if ( v1297 > 1u )
                    goto LABEL_2143;
                  v1301 = v1297;
                  __writecr8(v1297);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1302 < 0 )
                  break;
LABEL_2143:
                v1298 += 4096LL;
                v1300 += 4096LL;
                if ( v1300 == v1299 )
                  goto LABEL_2144;
              }
              __writecr8(v1301);
              v59 = (char *)v1549;
              v1293 = v1549[5];
            }
          }
          if ( *(_DWORD *)(v16 + 2240) )
            goto LABEL_2186;
          v1303 = v1293;
        }
        else
        {
          v1304 = (const char *)*((_QWORD *)v59 + 1);
          v1305 = *((unsigned int *)v59 + 4);
          v1279 = (__int64)v1304;
          *(_DWORD *)(v16 + 2032) += v1305;
          v1306 = v1304;
          v1307 = *(_DWORD *)(v16 + 2012);
          for ( i12 = *(_QWORD *)(v16 + 2016); v1306 < &v1304[v1305]; v1306 += 64 )
            _mm_prefetch(v1306, 0);
          v1309 = *(_QWORD *)(v16 + 2016);
          v1310 = (unsigned int)v1305 >> 7;
          if ( (unsigned int)v1305 >> 7 )
          {
            do
            {
              v1311 = 8LL;
              do
              {
                v1312 = v1309 ^ *(_QWORD *)v1279;
                v1313 = *(_QWORD *)(v1279 + 8);
                v1279 += 16LL;
                v1309 = __ROL8__(__ROL8__(v1312, v1307) ^ v1313, v1307);
                --v1311;
              }
              while ( v1311 );
              v1314 = __ROL8__(i12 ^ (v1279 - (_QWORD)v1304), 17) ^ i12 ^ (v1279 - (_QWORD)v1304);
              v1700 = ((unsigned __int64)v1314 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1307 = ((unsigned __int8)v1700 ^ (unsigned __int8)(v1314 ^ v1307)) & 0x3F;
              if ( !v1307 )
                LOBYTE(v1307) = 1;
              --v1310;
            }
            while ( v1310 );
            v16 = v1550;
          }
          v1296 = v1305 & 0x7F;
          if ( (unsigned int)v1296 >= 8 )
          {
            v1315 = (unsigned __int64)(unsigned int)v1296 >> 3;
            do
            {
              v1309 = __ROL8__(*(_QWORD *)v1279 ^ v1309, v1307);
              v1279 += 8LL;
              v1296 = (unsigned int)(v1296 - 8);
              --v1315;
            }
            while ( v1315 );
          }
          if ( (_DWORD)v1296 )
          {
            do
            {
              v1316 = *(unsigned __int8 *)v1279++;
              v1309 = __ROL8__(v1316 ^ v1309, v1307);
              v1296 = (unsigned int)(v1296 - 1);
            }
            while ( (_DWORD)v1296 );
            v16 = v1550;
          }
          for ( i13 = v1309; ; LODWORD(v1309) = i13 ^ v1309 )
          {
            i13 >>= 31;
            if ( !i13 )
              break;
          }
          v1294 = v1309 & 0x7FFFFFFF;
          if ( v1294 == *((_DWORD *)v59 + 5) )
            goto LABEL_2186;
          if ( !*(_DWORD *)v59 && *((_DWORD *)v59 + 6) )
            v64 = 1;
          v1318 = *((unsigned int *)v59 + 4);
          v1319 = *((_QWORD *)v59 + 1);
          if ( *((_DWORD *)v59 + 4) )
          {
            v1296 = 64LL;
            if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
            {
              v1320 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1321 = v1319 & 0xFFFFFFFFFFFFF000uLL;
              v1565 = (v1319 + v1318 - 1) | 0xFFF;
              v1322 = (v1319 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v1301 = v1320;
                while ( 1 )
                {
                  v1323 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(v16 + 1112))(
                            v1321,
                            0LL,
                            v1296,
                            v1279);
                  if ( v1323 != -1073741267 )
                    break;
                  if ( v64 )
                    goto LABEL_2181;
                  if ( v1320 > 1u )
                    goto LABEL_2179;
                  v1301 = v1320;
                  __writecr8(v1320);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1323 < 0 )
                  break;
LABEL_2179:
                v1321 += 4096LL;
                v1322 += 4096LL;
                if ( v1322 == v1565 )
                {
LABEL_2144:
                  __writecr8(v1301);
                  goto LABEL_2186;
                }
              }
LABEL_2181:
              __writecr8(v1301);
              v59 = (char *)v1549;
            }
          }
          if ( *(_DWORD *)(v16 + 2240) )
            goto LABEL_2186;
          v1303 = *((unsigned int *)v59 + 5);
        }
        *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v1294 ^ v1303;
        v1324 = *((_QWORD *)v59 + 1);
        if ( !*(_DWORD *)(v16 + 2240) )
        {
          *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v16 + 2264) = *(int *)v59;
          *(_QWORD *)(v16 + 2272) = v1324;
          *(_DWORD *)(v16 + 2240) = 1;
          __b9(v16, 0LL, v1296, v1279);
        }
        goto LABEL_2186;
      }
LABEL_2187:
      v1325 = v1549;
      v1326 = *(unsigned int *)(v16 + 2028);
      v49 = (unsigned int)v1549[4];
      v1327 = &v1549[v1326 + 12];
      v1555 = *((_QWORD *)v1549 + 1);
      v1557 = (unsigned int *)v1327;
      v1328 = (unsigned int *)(v1555 + 12 * v1326);
      v1558 = v1328;
      v1329 = (unsigned int *)(v1555 + 12 * (v49 / 0xC));
      v1563 = v1329;
      if ( v1328 == v1329 )
        goto LABEL_2261;
      while ( 2 )
      {
        if ( *v1327 >= 0 )
        {
          v1330 = *v1328;
          v1331 = v1330 + *((_QWORD *)v1325 + 4);
          v1332 = v1328[1] - v1330;
          v1565 = v1331;
          if ( v69 == 43 )
          {
            v1348 = sub_140AD0678(v16, v1331, v1332);
            *(_DWORD *)(v16 + 2032) += 8 * v1332;
            v1347 = v1348;
            if ( (*(_DWORD *)(v16 + 2396) & 0x800) != 0 )
            {
              v1349 = (_BYTE *)(v1331 - 6);
              v1350 = (char *)(v1331 - 6 + 5);
              v1351 = *v1350;
              if ( *(_BYTE *)(v1331 - 6) != 76
                || v1349[1] != 0x87
                || v1349[2]
                || v1349[3] != 0x98
                || v1349[4] != 0xC3
                || v1351 != -112 && v1351 != -15 )
              {
                goto LABEL_2553;
              }
              v1352 = *(volatile signed __int32 **)(v16 + 1208);
              while ( 1 )
              {
                _disable();
                if ( !_interlockedbittestandset(v1352, (*(_DWORD *)(v16 + 2392) >> 10) & 0x1F) )
                  break;
                _enable();
                _mm_pause();
              }
              v1353 = *(struct _KPRCB **)(v16 + 2216);
              v1354 = 38LL;
              v1355 = 304;
              v1356 = v1353;
              do
              {
                *(_QWORD *)&v1356->MxCsr = 0LL;
                v1355 -= 8;
                v1356 = (struct _KPRCB *)((char *)v1356 + 8);
                --v1354;
              }
              while ( v1354 );
              if ( v1355 )
              {
                v1354 = 0xFFFFFFFFLL;
                do
                {
                  LOBYTE(v1356->MxCsr) = 0;
                  v1356 = (struct _KPRCB *)((char *)v1356 + 1);
                  --v1355;
                }
                while ( v1355 );
              }
              *(_OWORD *)&v1353->NextThread = *(_OWORD *)(v16 + 2064);
              *(_OWORD *)&v1353->NestingLevel = *(_OWORD *)(v16 + 2080);
              *(_OWORD *)&v1353->ProcessorState.SpecialRegisters.KernelDr0 = *(_OWORD *)(v16 + 2096);
              v1633 = 303;
              v1634 = v1353;
              LOWORD(v1353->NextThread) = v16 + 2132;
              v1357 = (v16 + 2132) >> 16;
              v1702 = v16 + 2132;
              HIWORD(v1353->NextThread) = v1357;
              LODWORD(v1353->IdleThread) = (v16 + 2132) >> 32;
              __sidt(v1658);
              __lidt(&v1633);
              *v1350 = -15;
              if ( *v1350 != -15 )
                goto LABEL_2232;
              if ( (*(_DWORD *)(v16 + 2396) & 0x20000) == 0 )
              {
                v1353 = KeGetCurrentPrcb();
                v1357 = v16 - 0x5C5FC0A76E374B18LL;
                **(_QWORD **)(v16 + 1176) = v16 - 0x5C5FC0A76E374B18LL;
                **(_QWORD **)(v16 + 1184) = v1353;
                **(_QWORD **)(v16 + 1192) = v1331;
                **(_QWORD **)(v16 + 1200) = 275LL;
              }
              ((void (__fastcall *)(unsigned __int64, struct _KPRCB *, __int64, __int64))(v1331 - 6 + 5))(
                v1357,
                v1353,
                v1354,
                1LL);
              if ( (*(_DWORD *)(v16 + 2396) & 0x20000) == 0 )
              {
                **(_QWORD **)(v16 + 1176) = 0xA3A03F5891C8B4E8uLL;
                **(_QWORD **)(v16 + 1184) = 0LL;
                **(_QWORD **)(v16 + 1192) = 0LL;
                **(_QWORD **)(v16 + 1200) = 0LL;
              }
              if ( *v1350 == -15 )
              {
                *v1350 = -112;
                v1339 = *v1350 == -112;
              }
              else
              {
LABEL_2232:
                v1339 = 0LL;
              }
              __lidt(v1658);
              v1333 = *(_QWORD *)(v16 + 1208);
              _InterlockedAnd((volatile signed __int32 *)v1333, ~(1 << ((*(_DWORD *)(v16 + 2392) >> 10) & 0x1F)));
              _enable();
              if ( !(_DWORD)v1339 )
              {
LABEL_2553:
                if ( !*(_DWORD *)(v16 + 2240) )
                {
                  v1358 = v1549;
                  *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v16 + 2256) = (char *)v1358 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v16 + 2264) = *v1358;
                  *(_QWORD *)(v16 + 2272) = v1349;
                  *(_DWORD *)(v16 + 2240) = 1;
                  __b9(v16, 0LL, v1333, v1339);
                }
              }
              v1328 = v1558;
              v1329 = v1563;
            }
          }
          else
          {
            *(_DWORD *)(v16 + 2032) += v1332;
            v1333 = v1331;
            v1334 = *(_DWORD *)(v16 + 2012);
            v1335 = (const char *)v1331;
            v1336 = *(_QWORD *)(v16 + 2016);
            v1337 = v1331 + v1332;
            if ( v1331 < v1337 )
            {
              do
              {
                _mm_prefetch(v1335, 0);
                v1335 += 64;
              }
              while ( (unsigned __int64)v1335 < v1337 );
            }
            v1338 = *(_QWORD *)(v16 + 2016);
            v1339 = v1332 >> 7;
            if ( (_DWORD)v1339 )
            {
              do
              {
                v1340 = 8LL;
                do
                {
                  v1341 = v1338 ^ *(_QWORD *)v1333;
                  v1342 = *(_QWORD *)(v1333 + 8);
                  v1333 += 16LL;
                  v1338 = __ROL8__(__ROL8__(v1341, v1334) ^ v1342, v1334);
                  --v1340;
                }
                while ( v1340 );
                v1343 = __ROL8__(v1336 ^ (v1333 - v1331), 17) ^ v1336 ^ (v1333 - v1331);
                v1701 = ((unsigned __int64)v1343 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v1334 = ((unsigned __int8)v1701 ^ (unsigned __int8)(v1343 ^ v1334)) & 0x3F;
                if ( !v1334 )
                  LOBYTE(v1334) = 1;
                v66 = (_DWORD)v1339 == 1;
                v1339 = (unsigned int)(v1339 - 1);
              }
              while ( !v66 );
              v16 = v1550;
              v1327 = (int *)v1557;
            }
            v1344 = v1332 & 0x7F;
            if ( v1344 >= 8 )
            {
              v1339 = (unsigned __int64)(v1332 & 0x7F) >> 3;
              do
              {
                v1338 = __ROL8__(*(_QWORD *)v1333 ^ v1338, v1334);
                v1333 += 8LL;
                v1344 -= 8;
                --v1339;
              }
              while ( v1339 );
              v1329 = v1563;
            }
            if ( v1344 )
            {
              do
              {
                v1345 = *(unsigned __int8 *)v1333++;
                v1338 = __ROL8__(v1345 ^ v1338, v1334);
                --v1344;
              }
              while ( v1344 );
              v16 = v1550;
              v1327 = (int *)v1557;
            }
            for ( i14 = v1338; ; LODWORD(v1338) = i14 ^ v1338 )
            {
              i14 >>= 31;
              if ( !i14 )
                break;
            }
            v1347 = v1338 & 0x7FFFFFFF;
          }
          v49 = (unsigned int)*v1327;
          if ( v1347 != (*v1327 & 0x7FFFFFFF) )
          {
            v1359 = v1332;
            if ( v1332 )
            {
              v1333 = 64LL;
              if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
              {
                v1360 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v1361 = v1331 & 0xFFFFFFFFFFFFF000uLL;
                v1362 = (v1359 + v1331 - 1) | 0xFFF;
                v1363 = (v1331 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v1364 = v1360;
                  while ( 1 )
                  {
                    v1365 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v16 + 1112))(v1361, 0LL);
                    if ( v1365 != -1073741267 )
                      break;
                    if ( v1360 > 1u )
                      goto LABEL_2247;
                    v1364 = v1360;
                    __writecr8(v1360);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v1365 < 0 )
                    break;
LABEL_2247:
                  v1361 += 4096LL;
                  v1363 += 4096LL;
                  if ( v1363 == v1362 )
                  {
                    __writecr8(v1364);
                    v1327 = (int *)v1557;
                    goto LABEL_2249;
                  }
                }
                __writecr8(v1364);
                v1327 = (int *)v1557;
                v1331 = v1565;
                v49 = *v1557;
              }
            }
            v1367 = (unsigned int)v49;
            LODWORD(v1367) = v49 & 0x7FFFFFFF;
            if ( !*(_DWORD *)(v16 + 2240) )
            {
              v1368 = v1347;
              v1325 = v1549;
              v49 = v1367 ^ v1368;
              *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v49;
              if ( !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = (char *)v1325 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v1325;
                *(_QWORD *)(v16 + 2272) = v1331;
                *(_DWORD *)(v16 + 2240) = 1;
                __b9(v16, 0LL, v1333, v1339);
              }
              v1328 = v1558;
              v1329 = v1563;
              goto LABEL_2251;
            }
LABEL_2249:
            v1329 = v1563;
            v1328 = v1558;
          }
          v1325 = v1549;
        }
LABEL_2251:
        ++v1327;
        v1328 += 3;
        v1557 = (unsigned int *)v1327;
        v1558 = v1328;
        v1366 = v1328 == v1329;
        if ( v1328 >= v1329 )
          goto LABEL_2254;
        v69 = v1755;
        if ( *(_DWORD *)(v16 + 2032) >= *(_DWORD *)(v16 + 2036) )
        {
          v1366 = v1328 == v1329;
LABEL_2254:
          if ( !v1366 )
          {
            *(_DWORD *)(v16 + 2028) = ((__int64)v1328 - v1555) / 12;
            goto LABEL_147;
          }
LABEL_2261:
          v1369 = *(_QWORD *)(v16 + 1304);
          v1370 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          (*(void (__fastcall **)(__int64))(v16 + 320))(v1369);
          v1372 = **(unsigned int ***)(v16 + 1512);
          v1373 = v1372 + 4;
          v1374 = *((_BYTE *)v1372 + 12);
          v1375 = (unsigned __int64)&v1372[6 * *v1372 + 4];
          do
          {
            v1376 = 24LL;
            v1377 = (__int64 *)(v1325 + 6);
            v1378 = v1373;
            do
            {
              v1379 = *(_QWORD *)v1378;
              v1378 += 2;
              v1380 = *v1377++;
              if ( v1379 != v1380 )
                goto LABEL_2269;
              v1376 = (unsigned int)(v1376 - 8);
            }
            while ( (unsigned int)v1376 >= 8 );
            if ( !(_DWORD)v1376 )
              break;
            while ( 1 )
            {
              v1371 = *(unsigned __int8 *)v1378;
              v1378 = (unsigned int *)((char *)v1378 + 1);
              v1381 = *(unsigned __int8 *)v1377;
              v1377 = (__int64 *)((char *)v1377 + 1);
              if ( v1371 != v1381 )
                break;
              v66 = (_DWORD)v1376 == 1;
              v1376 = (unsigned int)(v1376 - 1);
              if ( v66 )
                goto LABEL_2270;
            }
LABEL_2269:
            v1373 += 6;
          }
          while ( (unsigned __int64)v1373 < v1375 );
LABEL_2270:
          v16 = v1550;
          (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v1550 + 384))(
            *(_QWORD *)(v1550 + 1304),
            v1371,
            v1376,
            v1377);
          __writecr8(v1370);
          if ( !v1374 )
            goto LABEL_2554;
          v49 = 16LL;
          if ( (*(_DWORD *)(v16 + 2396) & 0x10) != 0 && !*(_DWORD *)(v16 + 2240) )
          {
            *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v16 + 2256) = (char *)v1325 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v16 + 2264) = *v1325;
            *(_QWORD *)(v16 + 2272) = 1LL;
            *(_DWORD *)(v16 + 2240) = 1;
            __b9(v16, 0LL, v1382, v1383);
          }
          if ( *((_QWORD *)v1325 + 3) != 1LL )
          {
LABEL_2554:
            if ( v1373 == (unsigned int *)v1375 && !*(_DWORD *)(v16 + 2240) )
            {
              *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v16 + 2256) = (char *)v1325 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v16 + 2264) = *v1325;
              *(_QWORD *)(v16 + 2272) = v1373;
              *(_DWORD *)(v16 + 2240) = 1;
              __b9(v16, 0LL, v1382, v1383);
            }
          }
LABEL_1747:
          *(_DWORD *)(v16 + 2028) = 0;
          goto LABEL_147;
        }
        continue;
      }
    }
    if ( v69 == 28 )
    {
      v750 = *((unsigned int *)v59 + 4);
      if ( (_DWORD)v750 )
      {
        v798 = (_QWORD *)*((_QWORD *)v59 + 1);
        *(_DWORD *)(v16 + 2032) += v750;
        v799 = v798;
        v800 = *(_DWORD *)(v16 + 2012);
        v801 = (const char *)v798;
        v802 = *(_QWORD *)(v16 + 2016);
        if ( v798 < (_QWORD *)((char *)v798 + v750) )
        {
          do
          {
            _mm_prefetch(v801, 0);
            v801 += 64;
          }
          while ( v801 < (const char *)v798 + v750 );
        }
        v803 = *(_QWORD *)(v16 + 2016);
        v804 = (unsigned int)v750 >> 7;
        if ( (unsigned int)v750 >> 7 )
        {
          do
          {
            v805 = 8LL;
            do
            {
              v806 = v803 ^ *v799;
              v807 = v799[1];
              v799 += 2;
              v803 = __ROL8__(__ROL8__(v806, v800) ^ v807, v800);
              --v805;
            }
            while ( v805 );
            v808 = __ROL8__(v802 ^ ((char *)v799 - (char *)v798), 17) ^ v802 ^ ((char *)v799 - (char *)v798);
            v1686 = (v808 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v800 = ((unsigned __int8)(v808 ^ v1686) ^ (unsigned __int8)v800) & 0x3F;
            if ( !v800 )
              LOBYTE(v800) = 1;
            --v804;
          }
          while ( v804 );
          v16 = v1550;
        }
        v809 = v750 & 0x7F;
        if ( (unsigned int)v809 >= 8 )
        {
          v810 = (unsigned __int64)(unsigned int)v809 >> 3;
          do
          {
            v803 = __ROL8__(*v799++ ^ v803, v800);
            v809 = (unsigned int)(v809 - 8);
            --v810;
          }
          while ( v810 );
        }
        if ( (_DWORD)v809 )
        {
          do
          {
            v811 = *(unsigned __int8 *)v799;
            v799 = (_QWORD *)((char *)v799 + 1);
            v803 = __ROL8__(v811 ^ v803, v800);
            v809 = (unsigned int)(v809 - 1);
          }
          while ( (_DWORD)v809 );
          v16 = v1550;
        }
        for ( i15 = v803; ; LODWORD(v803) = i15 ^ v803 )
        {
          i15 >>= 31;
          if ( !i15 )
            break;
        }
        v813 = v803 & 0x7FFFFFFF;
        if ( v813 != *((_DWORD *)v59 + 5) )
        {
          if ( !*(_DWORD *)v59 && *((_DWORD *)v59 + 6) )
            v64 = 1;
          v814 = *((unsigned int *)v59 + 4);
          v815 = *((_QWORD *)v59 + 1);
          if ( *((_DWORD *)v59 + 4) )
          {
            v809 = 64LL;
            if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
            {
              v816 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v817 = v815 & 0xFFFFFFFFFFFFF000uLL;
              v1768 = (v815 + v814 - 1) | 0xFFF;
              v818 = (v815 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v819 = v816;
                while ( 1 )
                {
                  v820 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v16 + 1112))(
                           v817,
                           0LL,
                           v809,
                           v799);
                  if ( v820 != -1073741267 )
                    break;
                  if ( v64 )
                    goto LABEL_1343;
                  if ( v816 > 1u )
                    goto LABEL_1324;
                  v819 = v816;
                  __writecr8(v816);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v820 < 0 )
                  break;
LABEL_1324:
                v817 += 4096LL;
                v818 += 4096LL;
                if ( v818 == v1768 )
                {
                  __writecr8(v819);
                  v59 = (char *)v1549;
                  goto LABEL_1326;
                }
              }
LABEL_1343:
              __writecr8(v819);
              v59 = (char *)v1549;
            }
          }
          if ( !*(_DWORD *)(v16 + 2240) )
          {
            *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = *((unsigned int *)v59 + 5) ^ (unsigned __int64)v813;
            v833 = *((_QWORD *)v59 + 1);
            if ( !*(_DWORD *)(v16 + 2240) )
            {
              *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v16 + 2264) = *(int *)v59;
              *(_QWORD *)(v16 + 2272) = v833;
              *(_DWORD *)(v16 + 2240) = 1;
              __b9(v16, 0LL, v809, v799);
            }
          }
        }
LABEL_1326:
        v821 = 0;
        v1579 = *((_QWORD *)v59 + 1) - 112LL;
        v779 = *(unsigned int **)(v1579 + 80);
        if ( v779 )
          v821 = *v779;
        *(_DWORD *)(v16 + 2032) += v821;
        v822 = v779;
        v823 = *(_DWORD *)(v16 + 2012);
        v824 = (const char *)v779;
        v825 = *(_QWORD *)(v16 + 2016);
        v49 = (unsigned __int64)v779 + v821;
        if ( (unsigned __int64)v779 < v49 )
        {
          do
          {
            _mm_prefetch(v824, 0);
            v824 += 64;
          }
          while ( (unsigned __int64)v824 < v49 );
        }
        v57 = *(_QWORD *)(v16 + 2016);
        v826 = v821 >> 7;
        if ( v821 >> 7 )
        {
          do
          {
            v827 = 8LL;
            do
            {
              v828 = v57 ^ *(_QWORD *)v822;
              v829 = *((_QWORD *)v822 + 1);
              v822 += 4;
              v57 = __ROL8__(__ROL8__(v828, v823) ^ v829, v823);
              --v827;
            }
            while ( v827 );
            v49 = __ROL8__(v825 ^ ((char *)v822 - (char *)v779), 17) ^ v825 ^ ((char *)v822 - (char *)v779);
            v1687 = (v49 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v823 = ((unsigned __int8)v49 ^ (unsigned __int8)(v1687 ^ v823)) & 0x3F;
            if ( !v823 )
              v823 = 1;
            --v826;
          }
          while ( v826 );
          v16 = v1550;
        }
        v58 = v821 & 0x7F;
        if ( (unsigned int)v58 >= 8 )
        {
          v830 = (unsigned __int64)(unsigned int)v58 >> 3;
          do
          {
            v49 = v823;
            v57 = __ROL8__(*(_QWORD *)v822 ^ v57, v823);
            v822 += 2;
            v58 = (unsigned int)(v58 - 8);
            --v830;
          }
          while ( v830 );
        }
        for ( ; (_DWORD)v58; v58 = (unsigned int)(v58 - 1) )
        {
          v831 = *(unsigned __int8 *)v822;
          v49 = v823;
          v822 = (unsigned int *)((char *)v822 + 1);
          v57 = __ROL8__(v831 ^ v57, v823);
        }
        for ( i16 = v57 >> 31; i16; i16 >>= 31 )
          v57 = (unsigned int)i16 ^ (unsigned int)v57;
        v834 = *((unsigned int *)v59 + 11);
        LODWORD(v57) = v57 & 0x7FFFFFFF;
        if ( (_DWORD)v57 == (_DWORD)v834 || *(_DWORD *)(v16 + 2240) )
          goto LABEL_147;
        v49 = v834 ^ (unsigned int)v57;
        *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v49;
      }
      else
      {
        v1650 = v59 + 48;
        v751 = *((_WORD *)v59 + 20);
        v1548 = &v1579;
        v1649[0] = v751;
        v1649[1] = v751;
        v752 = *(_QWORD *)(v16 + 1256);
        v753 = *(int (__fastcall **)(_WORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, __int64 *))(v16 + 472);
        LOBYTE(v1547) = 0;
        if ( v753(v1649, 0LL, 0LL, 0LL, v752, v1547, 0LL, &v1579) < 0 )
          goto LABEL_147;
        if ( (*(_DWORD *)(v1579 + 16) & 0x10) == 0 )
        {
          v754 = v1579;
          goto LABEL_1216;
        }
        (*(void (__fastcall **)(_QWORD, char *))(v16 + 496))(*(_QWORD *)(v16 + 472), v1746);
        if ( v1747 )
        {
          v755 = *(__int64 (**)(void))(v16 + 488);
          v50 = v1747;
          v1585 = v1747;
          v756 = v755();
          if ( v756 )
          {
            v53 = *(_DWORD *)(v756 + 80);
            v1576 = v53;
          }
        }
        (*(void (__fastcall **)(_QWORD, char *))(v16 + 496))(*((_QWORD *)v59 + 3), v1748);
        if ( v1749 && (v757 = *(__int64 (**)(void))(v16 + 488), v52 = v1749, v1593 = v1749, (v758 = v757()) != 0) )
        {
          v759 = *(_DWORD *)(v758 + 80);
          v1573 = v759;
        }
        else
        {
          v759 = v1573;
        }
        if ( !_bittest((const signed __int32 *)(v16 + 2392), 0x1Eu) )
        {
          *((_QWORD *)v59 + 1) = v1579 + 112;
          *((_DWORD *)v59 + 4) = 224;
        }
        v754 = v1579;
        v760 = 0;
        v761 = v53;
        v57 = 0LL;
        do
        {
          v58 = *(_QWORD *)(v1579 + 8LL * v760 + 112);
          if ( !v53 || v58 < v50 || v58 > v53 + v50 - 1 )
          {
            if ( !v759 || (v57 = v52 + v759 - 1LL, v58 < v52) || v58 > v57 )
            {
              if ( _bittest((const signed __int32 *)(v16 + 2392), 0x1Eu) )
              {
                v794 = *(_QWORD **)(v16 + 2632);
                v795 = 48;
                v57 = 6LL;
                do
                {
                  v795 -= 8;
                  *v794 = *(_QWORD *)v59;
                  v59 += 8;
                  ++v794;
                  --v57;
                }
                while ( v57 );
                if ( v795 )
                {
                  do
                  {
                    v796 = *v59++;
                    *(_BYTE *)v794 = v796;
                    v794 = (_QWORD *)((char *)v794 + 1);
                    --v795;
                  }
                  while ( v795 );
                  v16 = v1550;
                }
                v59 = *(char **)(v16 + 2632);
              }
              *((_QWORD *)v59 + 4) = v58;
              v797 = *(_QWORD *)(v16 + 1384);
              *(_QWORD *)v797 = v59;
              *(_DWORD *)(v797 + 16) = 48;
              goto LABEL_443;
            }
            v57 = 0LL;
          }
          ++v760;
        }
        while ( v760 < 0x1Cu );
        if ( _bittest((const signed __int32 *)(v16 + 2392), 0x1Eu) )
        {
LABEL_1216:
          (*(void (__fastcall **)(__int64))(v16 + 464))(v754);
          goto LABEL_147;
        }
        v762 = (_QWORD *)*((_QWORD *)v59 + 1);
        v763 = *((unsigned int *)v59 + 4);
        v764 = v762;
        *(_DWORD *)(v16 + 2032) += v763;
        v765 = (const char *)v762;
        v766 = *(_DWORD *)(v16 + 2012);
        v767 = *(_QWORD *)(v16 + 2016);
        if ( v762 < (_QWORD *)((char *)v762 + v763) )
        {
          do
          {
            _mm_prefetch(v765, 0);
            v765 += 64;
          }
          while ( v765 < (const char *)v762 + v763 );
        }
        v57 = *(_QWORD *)(v16 + 2016);
        v768 = (unsigned int)v763 >> 7;
        if ( (unsigned int)v763 >> 7 )
        {
          do
          {
            v769 = 8LL;
            do
            {
              v770 = v57 ^ *v764;
              v771 = v764[1];
              v764 += 2;
              v57 = __ROL8__(__ROL8__(v770, v766) ^ v771, v766);
              --v769;
            }
            while ( v769 );
            v772 = __ROL8__(v767 ^ ((char *)v764 - (char *)v762), 17) ^ v767 ^ ((char *)v764 - (char *)v762);
            v1684 = (v772 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v766 = ((unsigned __int8)(v772 ^ v1684) ^ (unsigned __int8)v766) & 0x3F;
            if ( !v766 )
              LOBYTE(v766) = 1;
            --v768;
          }
          while ( v768 );
          v16 = v1550;
          v50 = v1585;
        }
        v773 = v763 & 0x7F;
        if ( v773 >= 8 )
        {
          v774 = (unsigned __int64)v773 >> 3;
          do
          {
            v57 = __ROL8__(*v764++ ^ v57, v766);
            v773 -= 8;
            --v774;
          }
          while ( v774 );
        }
        v775 = 0;
        if ( v773 )
        {
          do
          {
            v776 = *(unsigned __int8 *)v764;
            v764 = (_QWORD *)((char *)v764 + 1);
            v57 = __ROL8__(v776 ^ v57, v766);
            --v773;
          }
          while ( v773 );
          v50 = v1585;
        }
        for ( i17 = v57; ; v57 = (unsigned int)i17 ^ (unsigned int)v57 )
        {
          i17 >>= 31;
          if ( !i17 )
            break;
        }
        LODWORD(v57) = v57 & 0x7FFFFFFF;
        v778 = 0;
        *((_DWORD *)v59 + 5) = v57;
        v779 = *(unsigned int **)(v1579 + 80);
        if ( !v779 || (v778 = *v779, v58 = (*v779 - 8) >> 3, !(_DWORD)v58) )
        {
LABEL_1264:
          *(_DWORD *)(v16 + 2032) += v778;
          v780 = v779;
          v781 = *(_DWORD *)(v16 + 2012);
          v782 = (const char *)v779;
          v783 = *(_QWORD *)(v16 + 2016);
          v49 = (unsigned __int64)v779 + v778;
          if ( (unsigned __int64)v779 < v49 )
          {
            do
            {
              _mm_prefetch(v782, 0);
              v782 += 64;
            }
            while ( (unsigned __int64)v782 < v49 );
          }
          v784 = *(_QWORD *)(v16 + 2016);
          v785 = v778 >> 7;
          if ( v778 >> 7 )
          {
            do
            {
              v786 = 8LL;
              do
              {
                v787 = v784 ^ *(_QWORD *)v780;
                v788 = *((_QWORD *)v780 + 1);
                v780 += 4;
                v784 = __ROL8__(__ROL8__(v787, v781) ^ v788, v781);
                --v786;
              }
              while ( v786 );
              v49 = __ROL8__(v783 ^ ((char *)v780 - (char *)v779), 17) ^ v783 ^ ((char *)v780 - (char *)v779);
              v1685 = (v49 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v781 = ((unsigned __int8)(v49 ^ v1685) ^ (unsigned __int8)v781) & 0x3F;
              if ( !v781 )
                v781 = 1;
              --v785;
            }
            while ( v785 );
            v16 = v1550;
          }
          v789 = v778 & 0x7F;
          if ( v789 >= 8 )
          {
            v790 = (unsigned __int64)v789 >> 3;
            do
            {
              v49 = v781;
              v784 = __ROL8__(*(_QWORD *)v780 ^ v784, v781);
              v780 += 2;
              v789 -= 8;
              --v790;
            }
            while ( v790 );
          }
          for ( ; v789; --v789 )
          {
            v791 = *(unsigned __int8 *)v780;
            v49 = v781;
            v780 = (unsigned int *)((char *)v780 + 1);
            v784 = __ROL8__(v791 ^ v784, v781);
          }
          for ( i18 = v784 >> 31; i18; i18 >>= 31 )
            LODWORD(v784) = i18 ^ v784;
          *((_DWORD *)v59 + 11) = v784 & 0x7FFFFFFF;
          goto LABEL_147;
        }
        while ( 1 )
        {
          v49 = *(_QWORD *)&v779[2 * v775 + 2];
          if ( v49 && (!v761 || v49 < v50 || v49 > v50 + v761 - 1) )
          {
            if ( !v1573 )
              break;
            v57 = v1573 + v1593 - 1;
            if ( v49 < v1593 || v49 > v57 )
              break;
          }
          if ( ++v775 >= (unsigned int)v58 )
            goto LABEL_1264;
        }
        *((_QWORD *)v59 + 4) = v49;
        v793 = *(_QWORD *)(v16 + 1384);
        *(_QWORD *)v793 = v59;
        *(_DWORD *)(v793 + 16) = 48;
      }
      if ( *(_DWORD *)(v16 + 2240) )
        goto LABEL_147;
      *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
      *(_QWORD *)(v16 + 2264) = *(int *)v59;
      *(_QWORD *)(v16 + 2272) = v779;
      goto LABEL_1132;
    }
    if ( v69 > 12 )
    {
      if ( v69 <= 14 )
      {
        if ( v69 == 14 )
        {
          if ( !*(_QWORD *)(v16 + 2376) )
            goto LABEL_1747;
          v49 = *(unsigned int *)(v16 + 2396);
          if ( ((*(_DWORD *)(v16 + 2396) >> 2) & 1) != 0 )
            goto LABEL_1747;
          if ( *(_DWORD *)(v16 + 2028) )
          {
            v49 = ((unsigned int)v49 >> 5) & 1;
            if ( (_DWORD)v49 )
              goto LABEL_1747;
          }
          else
          {
            *(_DWORD *)(v16 + 2396) = v49 ^ ((unsigned __int8)v49 ^ (unsigned __int8)(8 * v49)) & 0x20;
          }
        }
        v713 = (_QWORD *)*((_QWORD *)v59 + 1);
        v714 = *((unsigned int *)v59 + 4);
        v715 = v713;
        *(_DWORD *)(v16 + 2032) += v714;
        v716 = (const char *)v713;
        v717 = *(_DWORD *)(v16 + 2012);
        v718 = *(_QWORD *)(v16 + 2016);
        v49 = (unsigned __int64)v713 + v714;
        if ( v713 < (_QWORD *)((char *)v713 + v714) )
        {
          do
          {
            _mm_prefetch(v716, 0);
            v716 += 64;
          }
          while ( (unsigned __int64)v716 < v49 );
        }
        v719 = *(_QWORD *)(v16 + 2016);
        v720 = (unsigned int)v714 >> 7;
        if ( (unsigned int)v714 >> 7 )
        {
          do
          {
            v721 = 8LL;
            do
            {
              v722 = v719 ^ *v715;
              v723 = v715[1];
              v715 += 2;
              v719 = __ROL8__(__ROL8__(v722, v717) ^ v723, v717);
              --v721;
            }
            while ( v721 );
            v49 = __ROL8__(v718 ^ ((char *)v715 - (char *)v713), 17) ^ v718 ^ ((char *)v715 - (char *)v713);
            v1683 = (v49 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v717 = ((unsigned __int8)(v49 ^ v1683) ^ (unsigned __int8)v717) & 0x3F;
            if ( !v717 )
              v717 = 1;
            --v720;
          }
          while ( v720 );
          v16 = v1550;
        }
        v724 = v714 & 0x7F;
        if ( (unsigned int)v724 >= 8 )
        {
          v725 = (unsigned __int64)(unsigned int)v724 >> 3;
          do
          {
            v49 = v717;
            v719 = __ROL8__(*v715++ ^ v719, v717);
            v724 = (unsigned int)(v724 - 8);
            --v725;
          }
          while ( v725 );
        }
        if ( (_DWORD)v724 )
        {
          do
          {
            v726 = *(unsigned __int8 *)v715;
            v49 = v717;
            v715 = (_QWORD *)((char *)v715 + 1);
            v719 = __ROL8__(v726 ^ v719, v717);
            v724 = (unsigned int)(v724 - 1);
          }
          while ( (_DWORD)v724 );
          v16 = v1550;
        }
        for ( i19 = v719; ; LODWORD(v719) = i19 ^ v719 )
        {
          i19 >>= 31;
          if ( !i19 )
            break;
        }
        v728 = v719 & 0x7FFFFFFF;
        if ( v728 == *((_DWORD *)v59 + 5) )
          goto LABEL_1187;
        _InterlockedOr(v1546, 0);
        if ( (*((_DWORD *)v59 + 6) & 1) != 0 )
        {
          LOBYTE(v49) = **(_BYTE **)(v16 + 1368);
          if ( (_BYTE)v49 )
            goto LABEL_1187;
        }
        v49 = *((unsigned int *)v59 + 4);
        v729 = *((_QWORD *)v59 + 1);
        if ( *((_DWORD *)v59 + 4) )
        {
          v724 = 64LL;
          if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
          {
            v730 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v731 = v729 & 0xFFFFFFFFFFFFF000uLL;
            v732 = (v729 + v49 - 1) | 0xFFF;
            v733 = (v729 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v734 = v730;
              while ( 1 )
              {
                v735 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v16 + 1112))(
                         v731,
                         0LL,
                         v724,
                         v715);
                if ( v735 != -1073741267 )
                  break;
                if ( v730 > 1u )
                  goto LABEL_1181;
                v734 = v730;
                __writecr8(v730);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v735 < 0 )
                break;
LABEL_1181:
              v731 += 4096LL;
              v733 += 4096LL;
              if ( v733 == v732 )
              {
                __writecr8(v734);
                v59 = (char *)v1549;
LABEL_1187:
                if ( !_bittest((const signed __int32 *)(v16 + 2392), 0x1Eu) )
                  goto LABEL_147;
                v736 = *((unsigned int *)v59 + 4);
                if ( !(_DWORD)v736 )
                  goto LABEL_147;
                sub_1403F966C(v16, *((_QWORD *)v59 + 1), v736, v1726);
                v737 = 16LL;
                v738 = (__int64 *)(v59 + 28);
                v739 = (unsigned __int64 *)v1726;
                do
                {
                  v49 = *v739++;
                  v740 = *v738++;
                  if ( v49 != v740 )
                    goto LABEL_1196;
                  v737 = (unsigned int)(v737 - 8);
                }
                while ( (unsigned int)v737 >= 8 );
                if ( !(_DWORD)v737 )
                  goto LABEL_1211;
                while ( 1 )
                {
                  v741 = *(unsigned __int8 *)v739;
                  v739 = (unsigned __int64 *)((char *)v739 + 1);
                  v742 = *(unsigned __int8 *)v738;
                  v738 = (__int64 *)((char *)v738 + 1);
                  if ( v741 != v742 )
                    break;
                  v66 = (_DWORD)v737 == 1;
                  v737 = (unsigned int)(v737 - 1);
                  if ( v66 )
                    goto LABEL_1211;
                }
LABEL_1196:
                _InterlockedOr(v1546, 0);
                if ( (*((_DWORD *)v59 + 6) & 1) == 0 || (LOBYTE(v49) = **(_BYTE **)(v16 + 1368), !(_BYTE)v49) )
                {
                  v743 = *((unsigned int *)v59 + 4);
                  v49 = *((_QWORD *)v59 + 1);
                  if ( *((_DWORD *)v59 + 4) )
                  {
                    v737 = 64LL;
                    if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
                    {
                      v744 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v745 = v49 & 0xFFFFFFFFFFFFF000uLL;
                      v746 = (v49 + v743 - 1) | 0xFFF;
                      v747 = (v49 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      while ( 1 )
                      {
                        v748 = v744;
                        while ( 1 )
                        {
                          v749 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64 *))(v16 + 1112))(
                                   v745,
                                   0LL,
                                   v737,
                                   v738);
                          if ( v749 != -1073741267 )
                            break;
                          if ( v744 > 1u )
                            goto LABEL_1206;
                          v748 = v744;
                          __writecr8(v744);
                          KeGetCurrentIrql();
                          __writecr8(2uLL);
                        }
                        if ( v749 < 0 )
                          break;
LABEL_1206:
                        v745 += 4096LL;
                        v747 += 4096LL;
                        if ( v747 == v746 )
                        {
                          __writecr8(v748);
                          goto LABEL_1211;
                        }
                      }
                      __writecr8(v748);
                      v49 = *((_QWORD *)v59 + 1);
                    }
                  }
                  if ( !*(_DWORD *)(v16 + 2240) )
                  {
                    *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v16 + 2264) = *(int *)v59;
                    *(_QWORD *)(v16 + 2272) = v49;
                    *(_DWORD *)(v16 + 2240) = 1;
                    __b9(v16, 0LL, v737, v738);
                  }
                }
LABEL_1211:
                v167 = 16 * *((_DWORD *)v59 + 4);
LABEL_349:
                *(_DWORD *)(v16 + 2032) += v167;
                goto LABEL_147;
              }
            }
            __writecr8(v734);
            v59 = (char *)v1549;
          }
        }
        if ( !*(_DWORD *)(v16 + 2240) )
        {
          *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = *((unsigned int *)v59 + 5) ^ (unsigned __int64)v728;
          v49 = *((_QWORD *)v59 + 1);
          if ( !*(_DWORD *)(v16 + 2240) )
          {
            *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v16 + 2264) = *(int *)v59;
            *(_QWORD *)(v16 + 2272) = v49;
            *(_DWORD *)(v16 + 2240) = 1;
            __b9(v16, 0LL, v724, v715);
          }
        }
        goto LABEL_1187;
      }
      if ( v69 == 15 )
      {
        if ( *(_DWORD *)(v16 + 2336) == 11 )
        {
          *(_DWORD *)(v16 + 2032) += 256;
          v705 = *(_QWORD *)(v16 + 1376);
          v706 = (*(__int64 (__fastcall **)(__int64))(v16 + 712))(v705);
          if ( v706 )
          {
            v707 = (*(__int64 (__fastcall **)(__int64))(v16 + 720))(v706);
            v710 = *((_QWORD *)v59 + 3);
            v711 = v707;
            if ( v710 )
            {
              if ( v710 != v707 && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *(int *)v59;
                *(_QWORD *)(v16 + 2272) = v707;
                *(_DWORD *)(v16 + 2240) = 1;
                __b9(v16, 0LL, v708, v709);
              }
            }
            else
            {
              v712 = *(_QWORD *)(v16 + 2368);
              if ( (!*(_DWORD *)(v16 + 2364) || v707 < v712 || v707 > v712 + *(unsigned int *)(v16 + 2364) - 1LL)
                && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *(int *)v59;
                *(_QWORD *)(v16 + 2272) = v707;
                *(_DWORD *)(v16 + 2240) = 1;
                __b9(v16, 0LL, v708, v709);
              }
              *((_QWORD *)v59 + 3) = v711;
            }
            (*(void (__fastcall **)(__int64, __int64))(v16 + 728))(v705, v706);
          }
        }
        goto LABEL_147;
      }
      if ( v69 != 21 )
      {
        if ( v69 != 24 )
        {
          if ( v69 != 25 )
          {
            if ( v69 == 26 )
            {
              if ( (*(_DWORD *)(v16 + 2040) & 1) == 0 )
              {
                v280 = 0;
                v281 = *(unsigned int **)(v16 + 1408);
                v282 = *(_QWORD *)(v16 + 1312);
                v1553 = *(_QWORD *)(v16 + 1416);
                v283 = *(void (**)(void))(v16 + 360);
                v1762 = 0;
                v1557 = v281;
                v283();
                if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 || (v284 = *(_DWORD *)(v16 + 2328), v284 >= 7) )
                {
                  (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 280))(*(_QWORD *)(v16 + 2504), 0LL);
                  v285 = 0x80;
                }
                else
                {
                  v285 = 1 << v284;
                }
                (*(void (__fastcall **)(__int64, _QWORD))(v16 + 296))(v282, 0LL);
                v286 = *(volatile signed __int8 ***)(v16 + 1272);
                v287 = *v286;
                if ( *v286 != (volatile signed __int8 *)v286 )
                {
                  do
                  {
                    _InterlockedOr8(&v287[*(_QWORD *)(v16 + 1672) - *(_QWORD *)(v16 + 1696)], v285);
                    v287 = *(volatile signed __int8 **)v287;
                    ++v280;
                  }
                  while ( v287 != (volatile signed __int8 *)v286 );
                  v281 = v1557;
                  v1762 = v280;
                }
                (*(void (__fastcall **)(unsigned int *, _QWORD))(v16 + 296))(v281, 0LL);
                v289 = *(_QWORD ***)(v16 + 1400);
                v290 = *v289;
                if ( *v289 != v289 )
                {
                  v291 = v1553;
                  v292 = v1549;
                  do
                  {
                    v293 = (char *)v290 - *(_QWORD *)(v16 + 1808);
                    if ( v293 != (char *)v291 )
                    {
                      v294 = *(_QWORD *)(v16 + 1672);
                      v295 = v294;
                      v296 = *(_QWORD *)&v293[*(_QWORD *)(v16 + 1800)];
                      if ( (v285 & *(_BYTE *)(v296 + v294)) == 0
                        && (*(_DWORD *)(v296 + *(_QWORD *)(v16 + 1680)) & *(_DWORD *)(v16 + 1704)) != 0
                        && !*(_DWORD *)(v16 + 2240) )
                      {
                        *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v16 + 2256) = (char *)v292 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v16 + 2264) = *v292;
                        *(_QWORD *)(v16 + 2272) = v296;
                        *(_DWORD *)(v16 + 2240) = 1;
                        __b9(v16, 0LL, v294, v288);
                        v295 = *(_QWORD *)(v16 + 1672);
                      }
                      _InterlockedAnd8((volatile signed __int8 *)(v296 + v295), ~v285);
                      v291 = v1553;
                    }
                    v290 = (_QWORD *)*v290;
                  }
                  while ( v290 != v289 );
                  v280 = v1762;
                  v281 = v1557;
                }
                (*(void (__fastcall **)(unsigned int *, _QWORD))(v16 + 304))(v281, 0LL);
                if ( v285 == 0x80 )
                  (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 288))(*(_QWORD *)(v16 + 2504), 0LL);
                (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 304))(*(_QWORD *)(v16 + 1312), 0LL);
                (*(void (**)(void))(v16 + 368))();
                *(_DWORD *)(v16 + 2032) += v280 << 8;
              }
              goto LABEL_147;
            }
            if ( v69 == 27 )
            {
              if ( (*(_DWORD *)(v16 + 2040) & 1) == 0 )
                goto LABEL_147;
              v258 = *(_QWORD *)(v16 + 1408);
              v259 = *(unsigned int **)(v16 + 1416);
              v260 = *(void (**)(void))(v16 + 360);
              v261 = *(_QWORD *)(v16 + 1312);
              v1555 = v258;
              v1557 = v259;
              v1551 = 0;
              v260();
              if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 || (v262 = *(_DWORD *)(v16 + 2328), v262 >= 7) )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 280))(*(_QWORD *)(v16 + 2504), 0LL);
                LOBYTE(v7) = 0x80;
              }
              else
              {
                LOBYTE(v7) = 1 << v262;
              }
              v263 = *(void (__fastcall **)(__int64, _QWORD))(v16 + 296);
              LODWORD(v1552) = v7;
              v263(v261, 0LL);
              (*(void (__fastcall **)(__int64, _QWORD))(v16 + 296))(v258, 0LL);
              v264 = *(unsigned __int64 **)(v16 + 1400);
              v265 = 0LL;
              v1553 = 0LL;
              v266 = *v264;
              if ( (unsigned __int64 *)*v264 != v264 )
              {
                do
                {
                  if ( (unsigned int *)(v266 - 24) != v259 )
                  {
                    v267 = *(_QWORD *)(v266 - 24 + *(_QWORD *)(v16 + 1800));
                    if ( (*(_DWORD *)(v267 + *(_QWORD *)(v16 + 1680)) & *(_DWORD *)(v16 + 1704)) == 0 )
                    {
                      v268 = *(_QWORD *)(v266 - 24 + *(_QWORD *)(v16 + 1800));
                      if ( v265 )
                        v268 = 1LL;
                      v265 = v268;
                    }
                    _InterlockedOr8((volatile signed __int8 *)(v267 + *(_QWORD *)(v16 + 1672)), v7);
                  }
                  v266 = *(_QWORD *)v266;
                }
                while ( (unsigned __int64 *)v266 != v264 );
                v1553 = v265;
              }
              v269 = *(_QWORD ***)(v16 + 1272);
              v270 = *v269;
              if ( *v269 != v269 )
              {
                v271 = v1551;
                v266 = (unsigned __int8)v7;
                v272 = ~(_BYTE)v7;
                v273 = v1557;
                v1761 = v266;
                do
                {
                  v274 = (char *)v270 - *(_QWORD *)(v16 + 1696);
                  v275 = *(_QWORD *)(v16 + 1672);
                  if ( (v274[v275] & (unsigned int)v266) == 0 )
                  {
                    v276 = *(unsigned int **)&v274[*(_QWORD *)(v16 + 1688)];
                    if ( v276 && v276 != v273 && !*(_DWORD *)(v16 + 2240) )
                    {
                      v277 = v1549;
                      *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v16 + 2256) = (char *)v277 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v16 + 2264) = *v277;
                      *(_QWORD *)(v16 + 2272) = v274;
                      *(_DWORD *)(v16 + 2240) = 1;
                      __b9(v16, 0LL, v276, v264);
                      v275 = *(_QWORD *)(v16 + 1672);
                    }
                    v266 = v1761;
                  }
                  _InterlockedAnd8(&v274[v275], v272);
                  v270 = (_QWORD *)*v270;
                  ++v271;
                }
                while ( v270 != v269 );
                LOBYTE(v7) = (_BYTE)v1552;
                v259 = v1557;
                v1551 = v271;
                v265 = v1553;
              }
              if ( v265 )
              {
                if ( v265 == 1 )
                {
                  v278 = *(_QWORD ***)(v16 + 1400);
                  for ( i20 = *v278; i20 != v278; i20 = (_QWORD *)*i20 )
                  {
                    v266 = (unsigned __int64)(i20 - 3);
                    if ( i20 - 3 != (_QWORD *)v259 )
                    {
                      v266 = *(_QWORD *)(v266 + *(_QWORD *)(v16 + 1800));
                      _InterlockedAnd8((volatile signed __int8 *)(v266 + *(_QWORD *)(v16 + 1672)), ~(_BYTE)v7);
                    }
                  }
                }
                else
                {
                  _InterlockedAnd8((volatile signed __int8 *)(*(_QWORD *)(v16 + 1672) + v265), ~(_BYTE)v7);
                }
              }
              (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64))(v16 + 304))(v1555, 0LL, v266);
              if ( (_BYTE)v7 == 0x80 )
                (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 288))(*(_QWORD *)(v16 + 2504), 0LL);
              (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 304))(*(_QWORD *)(v16 + 1312), 0LL);
              (*(void (**)(void))(v16 + 368))();
              v192 = v1551;
LABEL_384:
              v167 = v192 << 8;
              goto LABEL_349;
            }
            goto LABEL_2296;
          }
          v297 = *(_QWORD ***)(v16 + 1288);
          v298 = *(__int64 (**)(void))(v16 + 872);
          v1555 = (__int64)v297;
          v1763 = 0;
          v1567 = v298();
          _disable();
          v299 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v16 + 1560));
          _enable();
          (*(void (__fastcall **)(__int64))(v16 + 344))(v299);
          LOBYTE(v300) = 1;
          (*(void (__fastcall **)(_QWORD, __int64))(v16 + 224))(*(_QWORD *)(v16 + 1296), v300);
          v301 = 0;
          v302 = **(unsigned int ***)(v16 + 1512);
          v303 = *v302;
          v1553 = (__int64)(v302 + 4);
          v1557 = &v302[6 * v303 + 4];
          if ( *((_BYTE *)v302 + 12) )
          {
            v304 = *v297;
            LODWORD(v303) = 0;
            while ( v304 != v297 )
            {
              v304 = (_QWORD *)*v304;
              LODWORD(v303) = v303 + 1;
            }
          }
          v305 = *(unsigned int *)(v16 + 2008);
          v306 = __rdtsc();
          v307 = __ROR8__(v306, 3);
          v1720 = ((v307 ^ v306) * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v308 = ((unsigned __int16)v1720 ^ (unsigned __int16)(8193 * (v307 ^ v306))) & 0x7FF;
          v309 = __rdtsc();
          v310 = (__ROR8__(v309, 3) ^ v309) * (unsigned __int128)0x7010008004002001uLL;
          v1721 = *((_QWORD *)&v310 + 1);
          v311 = (*((_QWORD *)&v310 + 1) ^ (unsigned __int64)v310) % (unsigned int)(v308 + 1);
          v312 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v16 + 232))(
                   66LL,
                   (unsigned int)(v308 + 8 * v303),
                   v305);
          v315 = 0LL;
          v316 = v312;
          if ( !v312 )
          {
            ++*(_DWORD *)(v16 + 2528);
LABEL_566:
            v1613 = 0LL;
            goto LABEL_587;
          }
          v317 = v311;
          v318 = (unsigned __int64 *)v312;
          if ( (unsigned int)v311 >= 8 )
          {
            v319 = (unsigned __int64)(unsigned int)v311 >> 3;
            do
            {
              v320 = __rdtsc();
              v317 -= 8;
              v321 = (__ROR8__(v320, 3) ^ v320) * (unsigned __int128)0x7010008004002001uLL;
              v1736 = *((_QWORD *)&v321 + 1);
              v313 = v321 ^ *((_QWORD *)&v321 + 1);
              *v318++ = v313;
              --v319;
            }
            while ( v319 );
            v16 = v1550;
            v297 = (_QWORD **)v1555;
          }
          if ( v317 )
          {
            v322 = __rdtsc();
            v323 = (__ROR8__(v322, 3) ^ v322) * (unsigned __int128)0x7010008004002001uLL;
            v1741 = *((_QWORD *)&v323 + 1);
            v313 = v323 ^ *((_QWORD *)&v323 + 1);
            do
            {
              *(_BYTE *)v318 = v313;
              v318 = (unsigned __int64 *)((char *)v318 + 1);
              v313 >>= 8;
              --v317;
            }
            while ( v317 );
          }
          v324 = v308 - v311;
          v314 = v316 + (unsigned int)v311 + (unsigned __int64)(unsigned int)(8 * v303);
          if ( v324 >= 8 )
          {
            v325 = (unsigned __int64)v324 >> 3;
            do
            {
              v326 = __rdtsc();
              v324 -= 8;
              v327 = (__ROR8__(v326, 3) ^ v326) * (unsigned __int128)0x7010008004002001uLL;
              v1742 = *((_QWORD *)&v327 + 1);
              v313 = v327 ^ *((_QWORD *)&v327 + 1);
              *(_QWORD *)v314 = v313;
              v314 += 8LL;
              --v325;
            }
            while ( v325 );
          }
          v315 = 0LL;
          if ( v324 )
          {
            v328 = __rdtsc();
            v329 = (__ROR8__(v328, 3) ^ v328) * (unsigned __int128)0x7010008004002001uLL;
            v1669 = *((_QWORD *)&v329 + 1);
            v313 = v329 ^ *((_QWORD *)&v329 + 1);
            do
            {
              *(_BYTE *)v314++ = v313;
              v313 >>= 8;
              --v324;
            }
            while ( v324 );
          }
          v330 = (unsigned int)v311 + v316;
          v1613 = v316;
          if ( !v330 )
            goto LABEL_566;
          v331 = *v297;
          while ( v331 != v297 )
          {
            v332 = *(_QWORD *)((char *)v331 + *(_QWORD *)(v16 + 1824) - *(_QWORD *)(v16 + 1816));
            if ( !(*(unsigned int (__fastcall **)(__int64))(v16 + 664))(v332) && v301 < (unsigned int)v303 )
            {
              v333 = v301++;
              *(_QWORD *)(v330 + 8 * v333) = v332;
            }
            v331 = (_QWORD *)*v331;
            ++v1763;
          }
          (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, __int64))(v16 + 904))(v330, v301, v314, v315);
          v334 = v1553;
          v335 = v1557;
LABEL_574:
          v336 = *(_QWORD *)(v334 + 8);
          if ( (*(unsigned int (__fastcall **)(unsigned __int64))(v16 + 664))(v336) )
            goto LABEL_586;
          v313 = v301 - 1;
          v314 = 0LL;
          if ( (v313 & 0x80000000) != 0LL )
          {
LABEL_584:
            if ( !*(_DWORD *)(v16 + 2240) )
            {
              v338 = v1549;
              *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v16 + 2256) = (char *)v338 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v16 + 2264) = *v338;
              *(_QWORD *)(v16 + 2272) = v336;
              *(_DWORD *)(v16 + 2240) = 1;
              __b9(v16, 0LL, v314, v315);
            }
            goto LABEL_586;
          }
          while ( 1 )
          {
            v337 = ((int)v313 + (int)v314) >> 1;
            if ( v336 >= *(_QWORD *)(v330 + 8LL * v337) )
            {
              if ( v336 <= *(_QWORD *)(v330 + 8LL * v337) )
              {
                if ( (int)v313 < (int)v314 )
                  goto LABEL_584;
LABEL_586:
                v334 += 24LL;
                if ( v334 >= (unsigned __int64)v335 )
                {
LABEL_587:
                  (*(void (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64, __int64))(v16 + 264))(
                    *(_QWORD *)(v16 + 1296),
                    v313,
                    v314,
                    v315);
                  (*(void (**)(void))(v16 + 352))();
                  (*(void (__fastcall **)(__int64))(v16 + 880))(v1567);
                  if ( v1613 )
                  {
                    *(_DWORD *)(v16 + 2032) += v1763 << 9;
                    (*(void (__fastcall **)(__int64))(v16 + 240))(v1613);
                  }
                  goto LABEL_147;
                }
                goto LABEL_574;
              }
              v314 = (unsigned int)(v337 + 1);
            }
            else
            {
              if ( !v337 )
                goto LABEL_584;
              v313 = (unsigned int)(v337 - 1);
            }
            if ( (int)v313 < (int)v314 )
              goto LABEL_584;
          }
        }
        if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 && (*(_DWORD *)(v16 + 2396) & 0x1000) == 0 )
        {
          v339 = __rdtsc();
          v340 = (__ROR8__(v339, 3) ^ v339) * (unsigned __int128)0x7010008004002001uLL;
          v1670 = *((_QWORD *)&v340 + 1);
          *(_DWORD *)(v16 + 2028) = ((unsigned __int64)v340 ^ *((_QWORD *)&v340 + 1)) % 5;
        }
LABEL_592:
        v341 = *(_DWORD *)(v16 + 2028);
        if ( !v341 )
        {
          v690 = v59;
          v1626 = 0LL;
          for ( i21 = 0; ; ++i21 )
          {
            v698 = (*(__int64 (__fastcall **)(__int64 *))(v16 + 752))(&v1626);
            if ( !v698 )
              break;
            if ( !(*(__int64 (__fastcall **)(__int64, char *))(v16 + 504))(v698, v1682) )
            {
              if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
              {
                v693 = *(_QWORD **)(v16 + 2632);
                v694 = 48;
                v691 = 6LL;
                do
                {
                  v694 -= 8;
                  *v693 = *(_QWORD *)v690;
                  v690 += 8;
                  ++v693;
                  --v691;
                }
                while ( v691 );
                if ( v694 )
                {
                  do
                  {
                    v695 = *v690++;
                    *(_BYTE *)v693 = v695;
                    v693 = (_QWORD *)((char *)v693 + 1);
                    --v694;
                  }
                  while ( v694 );
                  v16 = v1550;
                }
                v690 = *(char **)(v16 + 2632);
              }
              *((_QWORD *)v690 + 3) = v698;
              v696 = *(_QWORD *)(v16 + 1384);
              *(_QWORD *)v696 = v690;
              *(_DWORD *)(v696 + 16) = 48;
              v697 = *(_QWORD *)(v16 + 1384);
              *(_QWORD *)(v697 + 8) = v698;
              *(_DWORD *)(v697 + 20) = 4096;
              if ( !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v690 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *(int *)v690;
                *(_QWORD *)(v16 + 2272) = 3LL;
                *(_DWORD *)(v16 + 2240) = 1;
                __b9(v16, 0LL, v691, v692);
              }
            }
          }
          goto LABEL_1119;
        }
        v342 = v341 - 1;
        if ( !v342 )
        {
          v680 = v59;
          v1622 = 0LL;
          i21 = 0;
          v681 = KeGetCurrentIrql();
          __writecr8(0xCuLL);
          for ( i22 = (*(__int64 (__fastcall **)(__int64 *))(v16 + 760))(&v1622);
                i22;
                i22 = (*(__int64 (__fastcall **)(__int64 *))(v16 + 760))(&v1622) )
          {
            ++i21;
            if ( !(*(__int64 (__fastcall **)(__int64, char *))(v16 + 504))(i22, v1681) )
            {
              if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
              {
                v685 = *(_QWORD **)(v16 + 2632);
                v686 = 48;
                v683 = 6LL;
                do
                {
                  v686 -= 8;
                  *v685 = *(_QWORD *)v680;
                  v680 += 8;
                  ++v685;
                  --v683;
                }
                while ( v683 );
                if ( v686 )
                {
                  do
                  {
                    v687 = *v680++;
                    *(_BYTE *)v685 = v687;
                    v685 = (_QWORD *)((char *)v685 + 1);
                    --v686;
                  }
                  while ( v686 );
                  v16 = v1550;
                }
                v680 = *(char **)(v16 + 2632);
              }
              *((_QWORD *)v680 + 3) = i22;
              v688 = *(_QWORD *)(v16 + 1384);
              *(_QWORD *)v688 = v680;
              *(_DWORD *)(v688 + 16) = 48;
              v689 = *(_QWORD *)(v16 + 1384);
              *(_QWORD *)(v689 + 8) = i22;
              *(_DWORD *)(v689 + 20) = 4096;
              if ( !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v680 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *(int *)v680;
                *(_QWORD *)(v16 + 2272) = 4LL;
                *(_DWORD *)(v16 + 2240) = 1;
                __b9(v16, 0LL, v683, v684);
              }
            }
          }
          __writecr8(v681);
          goto LABEL_1119;
        }
        v343 = v342 - 1;
        if ( !v343 )
        {
          v669 = v59;
          v670 = 0LL;
          i21 = 0;
          while ( 1 )
          {
            v1588 = 0;
            while ( 1 )
            {
              do
              {
                v671 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64 *))(v16 + 744))(v64, &v1588, &v1614);
                v58 = 0LL;
                if ( !v671 )
                  goto LABEL_1091;
                v673 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD))(v16 + 712))(
                         v1614,
                         v672,
                         v57,
                         0LL);
              }
              while ( !v673 );
              ++i21;
              v674 = (*(__int64 (__fastcall **)(__int64))(v16 + 720))(v673);
              v675 = (*(__int64 (__fastcall **)(__int64, char *))(v16 + 504))(v674, v1680);
              v58 = 0LL;
              if ( !v675 )
                break;
              (*(void (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD))(v16 + 728))(v1614, v673, v57, 0LL);
            }
            if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
            {
              v49 = *(_QWORD *)(v16 + 2632);
              v676 = 48;
              v57 = 6LL;
              do
              {
                v676 -= 8;
                *(_QWORD *)v49 = *(_QWORD *)v669;
                v669 += 8;
                v49 += 8LL;
                --v57;
              }
              while ( v57 );
              if ( v676 )
              {
                do
                {
                  v677 = *v669++;
                  *(_BYTE *)v49++ = v677;
                  --v676;
                }
                while ( v676 );
                v16 = v1550;
              }
              v669 = *(char **)(v16 + 2632);
            }
            *((_QWORD *)v669 + 3) = v674;
            v678 = *(_QWORD *)(v16 + 1384);
            *(_QWORD *)v678 = v669;
            *(_DWORD *)(v678 + 16) = 48;
            v679 = *(_QWORD *)(v16 + 1384);
            *(_QWORD *)(v679 + 8) = v674;
            *(_DWORD *)(v679 + 20) = 4096;
            if ( !*(_DWORD *)(v16 + 2240) )
            {
              *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v16 + 2256) = v669 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v16 + 2264) = *(int *)v669;
              *(_QWORD *)(v16 + 2272) = v670;
              *(_DWORD *)(v16 + 2240) = 1;
              __b9(v16, 0LL, v57, 0LL);
              v58 = 0LL;
            }
LABEL_1091:
            ++v64;
            ++v670;
            if ( v64 >= 3 )
              goto LABEL_1119;
          }
        }
        v49 = (unsigned int)(v343 - 1);
        if ( (_DWORD)v49 )
        {
          v49 = (unsigned int)(v49 - 1);
          if ( !(_DWORD)v49 )
          {
            v355 = *(__int64 (__fastcall **)(_QWORD))(v16 + 776);
            i21 = 0;
            v1556 = 0;
            v356 = v355(0LL);
            if ( v356 )
            {
              v357 = (char *)v1549;
              do
              {
                v1630 = 0LL;
                v358 = v357;
                v359 = 1;
                v360 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v16 + 768))(v356, &v1630);
                if ( v360 )
                {
                  do
                  {
                    ++v359;
                    if ( !(*(__int64 (__fastcall **)(__int64, char *))(v16 + 504))(v360, v1672) )
                    {
                      if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
                      {
                        v362 = *(_QWORD **)(v16 + 2632);
                        v363 = 48;
                        v361 = 6LL;
                        do
                        {
                          v363 -= 8;
                          *v362 = *(_QWORD *)v358;
                          v358 += 8;
                          ++v362;
                          --v361;
                        }
                        while ( v361 );
                        if ( v363 )
                        {
                          do
                          {
                            v364 = *v358++;
                            *(_BYTE *)v362 = v364;
                            v362 = (_QWORD *)((char *)v362 + 1);
                            --v363;
                          }
                          while ( v363 );
                          v16 = v1550;
                        }
                        v358 = *(char **)(v16 + 2632);
                      }
                      *((_QWORD *)v358 + 3) = v360;
                      *((_QWORD *)v358 + 4) = v356;
                      v365 = *(_QWORD *)(v16 + 1384);
                      *(_QWORD *)v365 = v358;
                      *(_DWORD *)(v365 + 16) = 48;
                      v366 = *(_QWORD *)(v16 + 1384);
                      *(_QWORD *)(v366 + 8) = v360;
                      *(_DWORD *)(v366 + 20) = 4096;
                      if ( !*(_DWORD *)(v16 + 2240) )
                      {
                        *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v16 + 2256) = v358 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v16 + 2264) = *(int *)v358;
                        *(_QWORD *)(v16 + 2272) = 6LL;
                        *(_DWORD *)(v16 + 2240) = 1;
                        __b9(v16, 0LL, v361, 1LL);
                      }
                    }
                    v360 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v16 + 768))(v356, &v1630);
                  }
                  while ( v360 );
                  i21 = v1556;
                  v357 = (char *)v1549;
                }
                v367 = *(__int64 (__fastcall **)(__int64))(v16 + 776);
                i21 += v359;
                v1556 = i21;
                v356 = v367(v356);
              }
              while ( v356 );
            }
            goto LABEL_1119;
          }
          if ( (_DWORD)v49 == 1 )
          {
            v344 = v59;
            v1783 = -1;
            i21 = 0;
            v346 = 0;
            v347 = 0LL;
            do
            {
              v1629 = 0LL;
              while ( (*(unsigned int (__fastcall **)(_QWORD, __int64 *, char *, __int64 *))(v16 + 1056))(
                        v346,
                        &v1629,
                        &v1783,
                        &v1591) )
              {
                ++i21;
                if ( !(*(__int64 (__fastcall **)(__int64, char *))(v16 + 504))(v1591, v1671) )
                {
                  if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
                  {
                    v350 = *(_QWORD **)(v16 + 2632);
                    v351 = 48;
                    v348 = 6LL;
                    do
                    {
                      v351 -= 8;
                      *v350 = *(_QWORD *)v344;
                      v344 += 8;
                      ++v350;
                      --v348;
                    }
                    while ( v348 );
                    if ( v351 )
                    {
                      do
                      {
                        v352 = *v344++;
                        *(_BYTE *)v350 = v352;
                        v350 = (_QWORD *)((char *)v350 + 1);
                        --v351;
                      }
                      while ( v351 );
                      v16 = v1550;
                    }
                    v344 = *(char **)(v16 + 2632);
                  }
                  *((_QWORD *)v344 + 3) = v1591;
                  v353 = *(_QWORD *)(v16 + 1384);
                  *(_QWORD *)v353 = v344;
                  *(_DWORD *)(v353 + 16) = 48;
                  v354 = *(_QWORD *)(v16 + 1384);
                  *(_QWORD *)(v354 + 8) = v1591;
                  *(_DWORD *)(v354 + 20) = 4096;
                  if ( !*(_DWORD *)(v16 + 2240) )
                  {
                    *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v16 + 2256) = v344 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v16 + 2264) = *(int *)v344;
                    *(_QWORD *)(v16 + 2272) = v347;
                    *(_DWORD *)(v16 + 2240) = 1;
                    __b9(v16, 0LL, v348, v349);
                  }
                }
              }
              ++v346;
              ++v347;
            }
            while ( v346 < 3 );
            goto LABEL_1119;
          }
          *(_DWORD *)(v16 + 2028) = 0;
          goto LABEL_1122;
        }
        v368 = *(ULONG_PTR **)(v16 + 1224);
        v1577 = (_BYTE *)v16;
        v1556 = 0;
        v369 = *v368;
        v1557 = (unsigned int *)*v368;
        if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
        {
          i21 = 0;
          goto LABEL_1119;
        }
        v370 = v1549;
        v371 = *((_QWORD *)v1549 + 5);
        if ( v371 )
        {
          v1556 = 1;
          if ( v369 != v371 )
          {
            *((_QWORD *)v1549 + 3) = v369;
            v372 = *(_QWORD *)(v16 + 1384);
            *(_QWORD *)v372 = v370;
            *(_DWORD *)(v372 + 16) = 48;
            v373 = *(_QWORD *)(v16 + 1384);
            *(_QWORD *)(v373 + 8) = v369;
            *(_DWORD *)(v373 + 20) = 4096;
            if ( !*(_DWORD *)(v16 + 2240) )
            {
              *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v16 + 2256) = (char *)v370 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v16 + 2264) = *v370;
              *(_QWORD *)(v16 + 2272) = 5LL;
              *(_DWORD *)(v16 + 2240) = 1;
              __b9(v16, 0LL, v57, v58);
            }
          }
          goto LABEL_1075;
        }
        if ( !v369 )
          goto LABEL_1075;
        v374 = *(__int64 (__fastcall **)(ULONG_PTR, char *))(v16 + 496);
        v1556 = 1;
        v1574 = (_BYTE *)v16;
        v375 = v374(v369, v1738);
        v376 = v1739;
        v377 = 0;
        v378 = v1740;
        v379 = (_DWORD *)v375;
        v1558 = (unsigned int *)v375;
        v1764 = v1740;
        v1564 = v1740;
        BugCheckParameter2 = v1739;
        if ( !v1739 )
        {
          if ( (*(_DWORD *)(v16 + 2392) & 0x200000) == 0 )
          {
            v1610 = 664797184;
            KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v369, 5uLL, 0LL);
          }
          v49 = 3221225595LL;
          goto LABEL_1072;
        }
        v380 = 4;
        v1589 = 0LL;
        v381 = &v1590;
        v382 = 0xFFFFFFFFLL;
        v383 = 1LL;
        do
        {
          *(_BYTE *)v381 = 0;
          v381 = (int *)((char *)v381 + 1);
          --v380;
        }
        while ( v380 );
        v384 = 0;
        if ( !*(_DWORD *)(v16 + 2004) )
        {
LABEL_680:
          v1575 = 0LL;
          goto LABEL_681;
        }
        LODWORD(v383) = v1590;
        LODWORD(v58) = HIDWORD(v1589);
        v385 = v1589;
        while ( 1 )
        {
          v386 = v16;
          if ( *(_QWORD *)(v16 + 2624) )
            v386 = *(_QWORD *)(v16 + 2624);
          v382 = v386 + *(unsigned int *)(v386 + 2000);
          if ( v385 && (unsigned int)v58 <= v384 )
          {
            v377 = v58;
            v382 = v386 + (unsigned int)v383;
          }
          if ( v377 != v384 )
            break;
LABEL_673:
          LODWORD(v1589) = 1;
          v383 = (unsigned int)(v382 - v386);
          HIDWORD(v1589) = v377;
          v1590 = v382 - v386;
          v385 = 1;
          v394 = *(int *)v382;
          v58 = v377;
          if ( (unsigned int)v394 <= 0x2B
            && (v395 = 0x80000001002LL, _bittest64(&v395, v394))
            && *(_DWORD **)(v382 + 8) == v379
            && *(_DWORD *)(v382 + 16) == v378
            || (unsigned int)(v394 - 33) <= 1 && *(_QWORD *)(v382 + 32) == v376 )
          {
            v1575 = (_DWORD *)v382;
            if ( v382 )
            {
              v49 = 3221225742LL;
              goto LABEL_1072;
            }
LABEL_681:
            v396 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64))(v16 + 664))(v369, v383, v382);
            v397 = *(char ***)(v16 + 1288);
            v398 = v396;
            v1562 = v396;
            LODWORD(v1552) = v1564;
            _disable();
            v399 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v16 + 1560));
            _enable();
            (*(void (__fastcall **)(__int64))(v16 + 344))(v399);
            LOBYTE(v400) = 1;
            (*(void (__fastcall **)(_QWORD, __int64))(v16 + 224))(*(_QWORD *)(v16 + 1296), v400);
            v401 = *v397;
            if ( *v397 != (char *)v397 )
            {
              v402 = *(_QWORD *)(v16 + 1816);
              while ( 1 )
              {
                v403 = *(_QWORD *)&v401[*(_QWORD *)(v16 + 1824) - v402];
                if ( v376 >= v403 && v376 < v403 + *(unsigned int *)&v401[*(_QWORD *)(v16 + 1832) - v402] )
                  break;
                v401 = *(char **)v401;
                if ( v401 == (char *)v397 )
                  goto LABEL_690;
              }
              (*(void (__fastcall **)(char *, __int64))(v16 + 208))(&v401[-v402], 1LL);
            }
LABEL_690:
            (*(void (__fastcall **)(_QWORD))(v16 + 264))(*(_QWORD *)(v16 + 1296));
            (*(void (**)(void))(v16 + 352))();
            if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
            {
              v49 = (unsigned int)sub_140AD6FD0(&v1577, v376, 9LL);
              goto LABEL_1072;
            }
            v405 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, int *))(v16 + 480);
            v1656 = 0LL;
            v1618[4] = 0;
            LOBYTE(v404) = 1;
            v1653 = v405(v376, v404, 0LL, &v1564);
            v406 = v1564 & (unsigned int)-(v1653 != 0);
            v1564 = v406;
            v407 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, int *))(v16 + 480);
            v1618[1] = v406;
            LOBYTE(v406) = 1;
            v408 = v407(v376, v406, 12LL, &v1564);
            v409 = v408;
            v1563 = (unsigned int *)v408;
            v1654 = v408;
            LOBYTE(v409) = 1;
            v1564 &= -(v408 != 0);
            v410 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, int *))(v16 + 480);
            LODWORD(v1566) = v1564;
            v1618[2] = v1564;
            v1655 = v410(v376, v409, 10LL, &v1564);
            v1564 &= -(v1655 != 0);
            v411 = *(__int64 (__fastcall **)(ULONG_PTR))(v16 + 488);
            v1618[3] = v1564;
            v412 = v411(v376);
            if ( !v412 )
            {
              if ( (*(_DWORD *)(v16 + 2392) & 0x200000) == 0 )
              {
                v1615 = 664797184;
                KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v376, 7uLL, 0LL);
              }
              if ( !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = 0LL;
                *(_QWORD *)(v16 + 2264) = 271LL;
                *(_QWORD *)(v16 + 2272) = v376;
                *(_DWORD *)(v16 + 2240) = 1;
                __b9(v16, 0LL, v413, v58);
              }
              v49 = 3221225595LL;
              goto LABEL_1072;
            }
            v414 = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(v16 + 1160))(v376, &v1644);
            v415 = *(unsigned int *)(v16 + 2284);
            v1657 = v414;
            v1618[5] = v1644;
            v1618[0] = *(_DWORD *)(v412 + 84);
            LODWORD(v414) = v398;
            v416 = *(unsigned int *)(v16 + 1964);
            v1652 = v376;
            v417 = (_DWORD)v414 != 0 ? 0xB : 0;
            v418 = v416 + 288;
            v1765 = v417;
            if ( (unsigned int)(v416 + 288) <= *(_DWORD *)(v16 + 2532) )
            {
              v419 = v16;
              v1553 = v16;
              *(_DWORD *)(v16 + 1964) = v418;
            }
            else
            {
              v1553 = sub_140ACFC24(v16, v418, v415);
              v419 = v1553;
              if ( !v1553 )
              {
                v1574 = 0LL;
                v49 = 3221225626LL;
                goto LABEL_1072;
              }
              v420 = *(_DWORD *)(v16 + 2392);
              if ( (v420 & 4) == 0 )
              {
                v421 = *(_DWORD *)(v16 + 1964);
                v422 = *(_QWORD *)(v16 + 1936);
                v598 = (v420 & 0x20000000) != 0;
                v423 = (_QWORD *)v16;
                v424 = v598 ? *(_DWORD *)(v16 + 2284) : 0;
                if ( v421 >= 8 )
                {
                  v425 = (unsigned __int64)v421 >> 3;
                  do
                  {
                    *v423 = 0LL;
                    v421 -= 8;
                    ++v423;
                    --v425;
                  }
                  while ( v425 );
                }
                for ( ; v421; --v421 )
                {
                  *(_BYTE *)v423 = 0;
                  v423 = (_QWORD *)((char *)v423 + 1);
                }
                v426 = *(_DWORD *)(v419 + 2284);
                *(_DWORD *)(v419 + 2284) = v424;
                if ( v424 == 3 )
                {
                  (*(void (__fastcall **)(__int64))(v419 + 856))(v422);
                }
                else if ( (*(_DWORD *)(v419 + 2392) & 0x10000000) != 0 || !v424 )
                {
                  (*(void (__fastcall **)(__int64))(v419 + 240))(v422);
                }
                else
                {
                  (*(void (__fastcall **)(__int64, _QWORD))(v419 + 536))(v422 - 8, *(_QWORD *)(v422 - 8));
                }
                *(_DWORD *)(v419 + 2284) = v426;
              }
              *(_DWORD *)(v419 + 2392) &= ~4u;
              v417 = v1765;
            }
            v427 = v419 + v416;
            *(_DWORD *)(v419 + 2004) += 6;
            v428 = &v1652;
            v1621 = v419 + v416;
            v429 = v1618;
            v1575 = (_DWORD *)(v419 + v416);
            v1567 = 6LL;
            do
            {
              v430 = *v429;
              v431 = 6LL;
              v432 = (_QWORD *)*v428;
              v433 = 48;
              v1551 = *v429;
              v434 = (_QWORD *)v427;
              do
              {
                *v434 = 0LL;
                v433 -= 8;
                ++v434;
                --v431;
              }
              while ( v431 );
              for ( ; v433; --v433 )
              {
                *(_BYTE *)v434 = 0;
                v434 = (_QWORD *)((char *)v434 + 1);
              }
              *(_DWORD *)v427 = v417;
              *(_QWORD *)(v427 + 8) = v432;
              v435 = v432;
              *(_DWORD *)(v427 + 16) = v430;
              v436 = (const char *)v432;
              *(_DWORD *)(v419 + 2032) += v430;
              v437 = *(_DWORD *)(v419 + 2012);
              v438 = *(_QWORD *)(v419 + 2016);
              if ( v432 < (_QWORD *)((char *)v432 + v430) )
              {
                do
                {
                  _mm_prefetch(v436, 0);
                  v436 += 64;
                }
                while ( v436 < (const char *)v432 + v430 );
              }
              v439 = *(_QWORD *)(v419 + 2016);
              v440 = (unsigned int)v430 >> 7;
              if ( (unsigned int)v430 >> 7 )
              {
                do
                {
                  v441 = 8LL;
                  do
                  {
                    v442 = v439 ^ *v435;
                    v443 = v435[1];
                    v435 += 2;
                    v439 = __ROL8__(__ROL8__(v442, v437) ^ v443, v437);
                    --v441;
                  }
                  while ( v441 );
                  v444 = __ROL8__(v438 ^ ((char *)v435 - (char *)v432), 17) ^ v438 ^ ((char *)v435 - (char *)v432);
                  v1673 = (v444 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v437 = ((unsigned __int8)v1673 ^ (unsigned __int8)(v444 ^ v437)) & 0x3F;
                  if ( !v437 )
                    LOBYTE(v437) = 1;
                  --v440;
                }
                while ( v440 );
                v419 = v1553;
                LODWORD(v430) = v1551;
              }
              v445 = v430 & 0x7F;
              if ( v445 >= 8 )
              {
                v446 = (unsigned __int64)(v430 & 0x7F) >> 3;
                do
                {
                  v439 = __ROL8__(*v435++ ^ v439, v437);
                  v445 -= 8;
                  --v446;
                }
                while ( v446 );
              }
              if ( v445 )
              {
                do
                {
                  v447 = *(unsigned __int8 *)v435;
                  v435 = (_QWORD *)((char *)v435 + 1);
                  v439 = __ROL8__(v447 ^ v439, v437);
                  --v445;
                }
                while ( v445 );
                v419 = v1553;
              }
              for ( i23 = v439 >> 31; i23; i23 >>= 31 )
                v439 = (unsigned int)i23 ^ (unsigned int)v439;
              v417 = v1765;
              LODWORD(v439) = v439 & 0x7FFFFFFF;
              *(_DWORD *)(v427 + 20) = v439;
              ++v429;
              *(_DWORD *)(v419 + 2032) += v430;
              ++v428;
              v427 = v1621 + 48;
              v66 = v1567-- == 1;
              v1621 += 48LL;
            }
            while ( !v66 );
            v449 = v1575;
            v450 = BugCheckParameter2;
            v16 = v1550;
            v451 = v1562;
            *v1575 = 44;
            *((_QWORD *)v449 + 3) = v450;
            if ( (*(_DWORD *)(v419 + 2392) & 0x10200000) != 0 )
            {
              if ( !v451 )
                goto LABEL_746;
            }
            else if ( !v451 )
            {
              if ( (*(_DWORD *)(v419 + 2396) & 0x8000) != 0 )
              {
                v449[8] |= 1u;
                if ( (unsigned int)sub_140AD0CE4(v419, v450, v439, v1765) )
                  v449[8] |= 4u;
              }
LABEL_746:
              v1574 = (_BYTE *)v419;
              v1577 = (_BYTE *)v419;
              v452 = sub_140ACF0E0(
                       (unsigned int)&v1574,
                       (_DWORD)v1558,
                       (_DWORD)v1552,
                       v450,
                       v451,
                       9,
                       (__int64)&v1581,
                       (__int64)&v1617);
              v49 = (unsigned int)v452;
              if ( v452 < 0 )
                goto LABEL_1071;
              v453 = v1574;
              v454 = v1617 - v1581;
              v1575 = &v1574[(_QWORD)v1575 - v419];
              v455 = (_QWORD *)(v450 + v1581);
              v456 = v1575 + 48;
              v457 = 48;
              v458 = v1575 + 48;
              v459 = 6LL;
              do
              {
                *v458 = 0LL;
                v457 -= 8;
                ++v458;
                --v459;
              }
              while ( v459 );
              for ( ; v457; --v457 )
              {
                *(_BYTE *)v458 = 0;
                v458 = (_QWORD *)((char *)v458 + 1);
              }
              v460 = v455;
              *v456 = v1765;
              v461 = (const char *)v455;
              *((_QWORD *)v456 + 1) = v455;
              v456[4] = v454;
              *((_DWORD *)v453 + 508) += v454;
              v462 = *((_DWORD *)v453 + 503);
              v463 = *((_QWORD *)v453 + 252);
              v464 = (unsigned __int64)v455 + v454;
              if ( (unsigned __int64)v455 < v464 )
              {
                do
                {
                  _mm_prefetch(v461, 0);
                  v461 += 64;
                }
                while ( (unsigned __int64)v461 < v464 );
              }
              v465 = *((_QWORD *)v453 + 252);
              v466 = v454 >> 7;
              if ( v454 >> 7 )
              {
                do
                {
                  v467 = 8LL;
                  do
                  {
                    v468 = v465 ^ *v460;
                    v469 = v460[1];
                    v460 += 2;
                    v465 = __ROL8__(__ROL8__(v468, v462) ^ v469, v462);
                    --v467;
                  }
                  while ( v467 );
                  v470 = __ROL8__(v463 ^ ((char *)v460 - (char *)v455), 17) ^ v463 ^ ((char *)v460 - (char *)v455);
                  v1674 = (v470 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v462 = ((unsigned __int8)v1674 ^ (unsigned __int8)(v470 ^ v462)) & 0x3F;
                  if ( !v462 )
                    LOBYTE(v462) = 1;
                  --v466;
                }
                while ( v466 );
                v16 = v1550;
                v451 = v1562;
              }
              v58 = v454 & 0x7F;
              if ( (unsigned int)v58 >= 8 )
              {
                v471 = (unsigned __int64)(unsigned int)v58 >> 3;
                do
                {
                  v465 = __ROL8__(*v460++ ^ v465, v462);
                  v58 = (unsigned int)(v58 - 8);
                  --v471;
                }
                while ( v471 );
                v16 = v1550;
              }
              if ( (_DWORD)v58 )
              {
                do
                {
                  v472 = *(unsigned __int8 *)v460;
                  v460 = (_QWORD *)((char *)v460 + 1);
                  v465 = __ROL8__(v472 ^ v465, v462);
                  v58 = (unsigned int)(v58 - 1);
                }
                while ( (_DWORD)v58 );
                v16 = v1550;
              }
              for ( i24 = v465; ; v465 = (unsigned int)i24 ^ (unsigned int)v465 )
              {
                i24 >>= 31;
                if ( !i24 )
                  break;
              }
              LODWORD(v465) = v465 & 0x7FFFFFFF;
              v456[5] = v465;
              v474 = v1575;
              v1575[60] = 48;
              if ( v474[64] )
              {
                v465 = 4294967294LL;
                v474[66] = v474[66] & 0xFFFFFFFE | (v451 != 0);
              }
              v1577 = v453;
              v1592 = v1575 + 24;
              v475 = (v451 != 0) + 13;
              if ( v1575 == (_DWORD *)-96LL )
              {
                v476 = *((unsigned int *)v453 + 491);
                v477 = v476 + 48;
                if ( (unsigned int)(v476 + 48) <= *((_DWORD *)v453 + 633) )
                {
                  v478 = v453;
                  *((_DWORD *)v453 + 491) = v477;
                }
                else
                {
                  v478 = (_BYTE *)sub_140ACFC24(v453, v477, *((unsigned int *)v453 + 571));
                  if ( !v478 )
                    goto LABEL_775;
                  v479 = *((_DWORD *)v453 + 598);
                  if ( (v479 & 4) == 0 )
                  {
                    v480 = *((_DWORD *)v453 + 491);
                    v481 = *((_QWORD *)v453 + 242);
                    v482 = (v479 & 0x20000000) != 0 ? *((_DWORD *)v453 + 571) : 0;
                    if ( v480 >= 8 )
                    {
                      v483 = (unsigned __int64)v480 >> 3;
                      do
                      {
                        *(_QWORD *)v453 = 0LL;
                        v480 -= 8;
                        v453 += 8;
                        --v483;
                      }
                      while ( v483 );
                    }
                    for ( ; v480; --v480 )
                      *v453++ = 0;
                    v484 = *((_DWORD *)v478 + 571);
                    *((_DWORD *)v478 + 571) = v482;
                    if ( v482 == 3 )
                    {
                      (*((void (__fastcall **)(__int64))v478 + 107))(v481);
                    }
                    else if ( (*((_DWORD *)v478 + 598) & 0x10000000) != 0 || !v482 )
                    {
                      (*((void (__fastcall **)(__int64))v478 + 30))(v481);
                    }
                    else
                    {
                      (*((void (__fastcall **)(__int64, _QWORD))v478 + 67))(v481 - 8, *(_QWORD *)(v481 - 8));
                    }
                    *((_DWORD *)v478 + 571) = v484;
                  }
                  *((_DWORD *)v478 + 598) &= ~4u;
                }
                ++*((_DWORD *)v478 + 501);
                v485 = &v478[v476];
                v1646 = v485;
                v486 = v485;
                v487 = 48;
                v488 = 6LL;
                do
                {
                  *v486 = 0LL;
                  v487 -= 8;
                  ++v486;
                  --v488;
                }
                while ( v488 );
                for ( ; v487; --v487 )
                {
                  *(_BYTE *)v486 = 0;
                  v486 = (_QWORD *)((char *)v486 + 1);
                }
                v489 = (const char *)v1563;
                *(_DWORD *)v485 = v475;
                v58 = (unsigned __int64)v489;
                v490 = (unsigned int)v1566;
                *((_QWORD *)v485 + 1) = v489;
                *((_DWORD *)v485 + 4) = v490;
                *((_DWORD *)v478 + 508) += v490;
                v491 = *((_DWORD *)v478 + 503);
                v492 = *((_QWORD *)v478 + 252);
                if ( v489 < &v489[v490] )
                {
                  v493 = v489;
                  do
                  {
                    _mm_prefetch(v493, 0);
                    v493 += 64;
                  }
                  while ( v493 < &v489[v490] );
                }
                v465 = *((_QWORD *)v478 + 252);
                v494 = (unsigned int)v490 >> 7;
                if ( (unsigned int)v490 >> 7 )
                {
                  do
                  {
                    v495 = 8LL;
                    do
                    {
                      v496 = v465 ^ *(_QWORD *)v58;
                      v497 = *(_QWORD *)(v58 + 8);
                      v58 += 16LL;
                      v465 = __ROL8__(__ROL8__(v496, v491) ^ v497, v491);
                      --v495;
                    }
                    while ( v495 );
                    v498 = __ROL8__(v492 ^ (v58 - (_QWORD)v489), 17) ^ v492 ^ (v58 - (_QWORD)v489);
                    v1675 = (v498 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v491 = ((unsigned __int8)v1675 ^ (unsigned __int8)(v498 ^ v491)) & 0x3F;
                    if ( !v491 )
                      LOBYTE(v491) = 1;
                    --v494;
                  }
                  while ( v494 );
                  v16 = v1550;
                  v451 = v1562;
                }
                v499 = v490 & 0x7F;
                if ( v499 >= 8 )
                {
                  v500 = (unsigned __int64)(v490 & 0x7F) >> 3;
                  do
                  {
                    v465 = __ROL8__(*(_QWORD *)v58 ^ v465, v491);
                    v58 += 8LL;
                    v499 -= 8;
                    --v500;
                  }
                  while ( v500 );
                }
                if ( v499 )
                {
                  do
                  {
                    v501 = *(unsigned __int8 *)v58++;
                    v465 = __ROL8__(v501 ^ v465, v491);
                    --v499;
                  }
                  while ( v499 );
                  v16 = v1550;
                }
                for ( i25 = v465; ; v465 = (unsigned int)i25 ^ (unsigned int)v465 )
                {
                  i25 >>= 31;
                  if ( !i25 )
                    break;
                }
                LODWORD(v465) = v465 & 0x7FFFFFFF;
                *((_DWORD *)v485 + 5) = v465;
                v1592 = v1646;
                *((_DWORD *)v478 + 508) += v490;
              }
              else
              {
                v489 = (const char *)v1563;
                v478 = v453;
                v1575[24] = v475;
                LODWORD(v490) = v1566;
              }
              if ( (*((_DWORD *)v478 + 598) & 0x40000000) != 0 && (_DWORD)v490 )
                sub_1403F966C(v478, v489, (unsigned int)v490, v1592 + 7);
              v503 = 4294967294LL;
              v1577 = v478;
              v1592[6] = 0;
              v1592[6] |= 1u;
              v504 = v1575;
              v1575[36] = 35;
              v504[46] = v504[46] & 0xFFFFFFFE | (v451 != 0);
              if ( v504[40] >= 0x94u )
              {
                v505 = BugCheckParameter2;
                v506 = *((_QWORD *)v504 + 19);
                v507 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, unsigned __int64, unsigned __int64))v478 + 61))(
                         BugCheckParameter2,
                         4294967294LL,
                         v465,
                         v58);
                if ( v507 )
                {
                  v465 = v505 + *(unsigned int *)(v507 + 80);
                  v503 = v504[46] | 2u;
                  v504[46] = v503;
                  v508 = v503;
                  v509 = *(_QWORD **)(v506 + 112);
                  if ( (unsigned __int64)v509 >= v505 && (unsigned __int64)v509 < v465 )
                  {
                    v508 = v503 | 4;
                    *((_QWORD *)v504 + 21) = *v509;
                    v504[46] = v503 | 4;
                  }
                  v510 = *(_QWORD **)(v506 + 120);
                  if ( (unsigned __int64)v510 >= v505 && (unsigned __int64)v510 < v465 )
                  {
                    *((_QWORD *)v504 + 22) = *v510;
                    v504[46] = v508 | 8;
                  }
                  goto LABEL_828;
                }
LABEL_775:
                v1574 = 0LL;
LABEL_776:
                v49 = 3221225626LL;
                goto LABEL_1071;
              }
LABEL_828:
              v66 = (*((_DWORD *)v478 + 598) & 0x400000) == 0;
              v1574 = v478;
              if ( v66 )
                goto LABEL_1070;
              v511 = BugCheckParameter2;
              v512 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, unsigned __int64, unsigned __int64))v478 + 61))(
                       BugCheckParameter2,
                       v503,
                       v465,
                       v58);
              v1565 = v512;
              v514 = v512;
              if ( !v512 )
                goto LABEL_830;
              v515 = *(unsigned __int16 *)(v512 + 6);
              v1766 = v515;
              v58 = (unsigned int)v1552 / 0xCuLL;
              v1555 = v58;
              if ( !(_WORD)v515 )
              {
                if ( (*((_DWORD *)v478 + 598) & 0x200000) == 0 )
                {
                  v1616 = 664797184;
                  KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v511, 0LL, 0LL);
                }
                goto LABEL_833;
              }
              v516 = v1558;
              v1551 = v515;
              v517 = v515;
              v518 = 0;
              v1563 = &v1558[3 * (unsigned int)v58];
              v519 = *(unsigned __int16 *)(v512 + 20);
              LODWORD(v1570) = 0;
              v1553 = v519 + v514 + 24;
              v520 = (_DWORD *)v1553;
              v58 = 1LL;
              v1567 = v1553;
              do
              {
                v521 = v520[4];
                v513 = (unsigned int)v520[3];
                if ( v521 <= v520[2] )
                  v521 = v520[2];
                LODWORD(v1566) = v520[3];
                v522 = v513 + v521;
                if ( v518 )
                {
                  if ( v522 < *(_DWORD *)(v1553 + 40LL * (v518 - 1) + 12) )
                  {
                    if ( (*((_DWORD *)v478 + 598) & 0x200000) == 0 )
                    {
                      v1611 = 664797184;
                      KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v511, 1uLL, 0LL);
                    }
                    if ( !*((_DWORD *)v478 + 560) )
                    {
                      *((_QWORD *)v478 + 281) = v478 - 0x5C5FC0A76E374B18LL;
                      *((_QWORD *)v478 + 282) = 0LL;
                      *((_QWORD *)v478 + 283) = 271LL;
                      *((_QWORD *)v478 + 284) = v511;
                      *((_DWORD *)v478 + 560) = 1;
LABEL_835:
                      __b9(v478, 0LL, v513, v58);
                    }
LABEL_830:
                    v49 = 3221225595LL;
                    goto LABEL_1071;
                  }
                  v518 = (unsigned int)v1570;
                }
                if ( v516 != v1563 )
                {
                  do
                  {
                    v523 = v516[1];
                    if ( *v516 >= v522 || v523 <= (unsigned int)v513 )
                      break;
                    if ( *v516 < (unsigned int)v513 || v523 > v522 )
                    {
                      if ( (*((_DWORD *)v478 + 598) & 0x200000) == 0 )
                      {
                        v1606 = 664797184;
                        KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v511, 2uLL, 0LL);
                      }
LABEL_833:
                      if ( !*((_DWORD *)v478 + 560) )
                      {
                        *((_QWORD *)v478 + 281) = v478 - 0x5C5FC0A76E374B18LL;
                        *((_QWORD *)v478 + 282) = 0LL;
                        *((_QWORD *)v478 + 283) = 271LL;
                        *((_QWORD *)v478 + 284) = v511;
                        *((_DWORD *)v478 + 560) = 1;
                        goto LABEL_835;
                      }
                      goto LABEL_830;
                    }
                    v524 = v516[2];
                    v1676 = v516;
                    if ( (v524 & 1) != 0 || (*(_BYTE *)(v524 + v511) & 0x20) != 0 )
                    {
                      v525 = v520[4];
                      v526 = v520[3];
                      if ( v525 <= v520[2] )
                        v525 = v520[2];
                      v527 = v526 + v525;
                      v528 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, __int64, unsigned __int64))v478
                                              + 129))(
                                               v516,
                                               BugCheckParameter2,
                                               v513,
                                               v58);
                      v530 = v528;
                      if ( *v528 < v526 || v528[1] > v527 )
                      {
                        v531 = BugCheckParameter2;
                        if ( (*((_DWORD *)v478 + 598) & 0x200000) == 0 )
                        {
                          v1607 = 664797184;
                          KeBugCheckEx(
                            __ROR4__(664797184, 149),
                            0xAuLL,
                            BugCheckParameter2,
                            ((_DWORD)v528 - (_DWORD)BugCheckParameter2) | 0x80000000,
                            0LL);
                        }
                        if ( !*((_DWORD *)v478 + 560) )
                        {
                          *((_QWORD *)v478 + 281) = v478 - 0x5C5FC0A76E374B18LL;
                          *((_QWORD *)v478 + 282) = 0LL;
                          *((_QWORD *)v478 + 283) = 271LL;
                          *((_QWORD *)v478 + 284) = v531;
                          *((_DWORD *)v478 + 560) = 1;
                          __b9(v478, 0LL, v531, v529);
                        }
                      }
                      v532 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v478 + 130))(
                                               v530,
                                               BugCheckParameter2,
                                               BugCheckParameter2 + *v530);
                      if ( *v532 >= v526 && v532[1] <= v527 )
                      {
                        v511 = BugCheckParameter2;
                      }
                      else
                      {
                        v511 = BugCheckParameter2;
                        v534 = ((_DWORD)v532 - BugCheckParameter2) | 0x80000000;
                        if ( (*((_DWORD *)v478 + 598) & 0x200000) == 0 )
                        {
                          v1608 = 664797184;
                          KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, BugCheckParameter2, v534, 0LL);
                        }
                        if ( !*((_DWORD *)v478 + 560) )
                        {
                          *((_QWORD *)v478 + 281) = v478 - 0x5C5FC0A76E374B18LL;
                          *((_QWORD *)v478 + 282) = 0LL;
                          *((_QWORD *)v478 + 283) = 271LL;
                          *((_QWORD *)v478 + 284) = v511;
                          *((_DWORD *)v478 + 560) = 1;
                          __b9(v478, 0LL, v533, v58);
                        }
                      }
                      v520 = (_DWORD *)v1567;
                      v513 = (unsigned int)v1566;
                    }
                    v516 += 3;
                  }
                  while ( v516 != v1563 );
                  v518 = (unsigned int)v1570;
                  v58 = 1LL;
                  v517 = v1551;
                }
                ++v518;
                v520 += 10;
                LODWORD(v1570) = v518;
                v1567 = (__int64)v520;
              }
              while ( v518 < v517 );
              v58 = v1555;
              v535 = v1565;
              v536 = (_DWORD *)v1553;
              if ( v516 != v1563 )
              {
                if ( (*((_DWORD *)v478 + 598) & 0x200000) == 0 )
                {
                  v1605 = 664797184;
                  KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v511, 3uLL, 0LL);
                }
                goto LABEL_833;
              }
              if ( (_DWORD)v1555 )
                v537 = (v1555 + 6) & 0xFFFFFFF8;
              else
                v537 = 0;
              v538 = *((unsigned int *)v478 + 491);
              v539 = v538 + v537 + 24 * (v517 + 2);
              if ( v539 <= *((_DWORD *)v478 + 633) )
              {
                v540 = v478;
                v1566 = (__int64)v478;
                *((_DWORD *)v478 + 491) = v539;
                goto LABEL_894;
              }
              v1566 = sub_140ACFC24(v478, v539, *((unsigned int *)v478 + 571));
              v540 = (_BYTE *)v1566;
              if ( !v1566 )
                goto LABEL_776;
              v541 = *((_DWORD *)v478 + 598);
              if ( (v541 & 4) == 0 )
              {
                v542 = *((_DWORD *)v478 + 491);
                v543 = *((_QWORD *)v478 + 242);
                v544 = (v541 & 0x20000000) != 0 ? *((_DWORD *)v478 + 571) : 0;
                if ( v542 >= 8 )
                {
                  v545 = (unsigned __int64)v542 >> 3;
                  do
                  {
                    *(_QWORD *)v478 = 0LL;
                    v542 -= 8;
                    v478 += 8;
                    --v545;
                  }
                  while ( v545 );
                }
                for ( ; v542; --v542 )
                  *v478++ = 0;
                v546 = *((_DWORD *)v540 + 571);
                *((_DWORD *)v540 + 571) = v544;
                if ( v544 == 3 )
                {
                  (*((void (__fastcall **)(__int64))v540 + 107))(v543);
                }
                else if ( (*((_DWORD *)v540 + 598) & 0x10000000) != 0 || !v544 )
                {
                  (*((void (__fastcall **)(__int64))v540 + 30))(v543);
                }
                else
                {
                  (*((void (__fastcall **)(__int64, _QWORD))v540 + 67))(v543 - 8, *(_QWORD *)(v543 - 8));
                }
                v540 = (_BYTE *)v1566;
                *(_DWORD *)(v1566 + 2284) = v546;
              }
              *((_DWORD *)v540 + 598) &= ~4u;
              v58 = v1555;
              v517 = v1551;
LABEL_894:
              v547 = &v540[v538];
              ++*((_DWORD *)v540 + 501);
              v548 = &v540[v538];
              v1641 = &v540[v538];
              v549 = 48;
              v550 = 6LL;
              do
              {
                *v548 = 0LL;
                v549 -= 8;
                ++v548;
                --v550;
              }
              while ( v550 );
              for ( ; v549; --v549 )
              {
                *(_BYTE *)v548 = 0;
                v548 = (_QWORD *)((char *)v548 + 1);
              }
              v551 = v1558;
              *(_DWORD *)v547 = 30;
              *((_QWORD *)v547 + 1) = v551;
              *((_DWORD *)v547 + 4) = 0;
              v552 = *((_QWORD *)v540 + 252);
              for ( i26 = v552; ; LODWORD(v552) = i26 ^ v552 )
              {
                i26 >>= 31;
                if ( !i26 )
                  break;
              }
              *((_DWORD *)v547 + 5) = v552 & 0x7FFFFFFF;
              v478 = v540;
              v1587 = v1641;
              v1574 = v540;
              *((_QWORD *)v1641 + 3) = BugCheckParameter2;
              *((_DWORD *)v1587 + 8) = *(_DWORD *)(v535 + 80);
              *((_DWORD *)v1587 + 9) = (_DWORD)v1552;
              v554 = v1562 != 0;
              *((_WORD *)v1587 + 20) = v1766;
              *((_WORD *)v1587 + 21) = *((_WORD *)v1587 + 21) & 0xFFFE | v554;
              v1570 = v1587 + 48;
              if ( (_DWORD)v58 )
                v555 = (unsigned __int64)&v1587[(((unsigned int)(v58 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
              else
                v555 = (unsigned __int64)(v1587 + 48);
              v556 = *((unsigned __int16 *)v1587 + 20);
              v1552 = (unsigned int *)v555;
              v557 = v555 + 24 * v556;
              v1565 = v557;
              if ( (_DWORD)v58 )
                v558 = v1558 + 3;
              else
                v558 = v1563;
              v1567 = (__int64)v558;
              if ( v517 )
              {
                v559 = v517;
                v560 = (_DWORD *)(v555 + 8);
                v561 = 0;
                v58 = 0x80000000LL;
                do
                {
                  v562 = 2LL;
                  do
                  {
                    *(v560 - 2) = 0;
                    *(v560 - 1) = 0;
                    *v560 = 0x80000000;
                    v560 += 3;
                    --v562;
                  }
                  while ( v562 );
                  --v559;
                }
                while ( v559 );
                v16 = v1550;
              }
              else
              {
                v561 = 0;
              }
              if ( v555 != v557 )
              {
                while ( 2 )
                {
                  v563 = 0;
                  v1767 = 0;
                  if ( (v536[9] & 0x2000000) != 0 )
                    goto LABEL_918;
                  v564 = *v536;
                  if ( *v536 == 1414090313 )
                  {
                    if ( v536[1] == 1195525195 )
                      goto LABEL_918;
LABEL_924:
                    if ( v564 != 1095914053 || *((_WORD *)v536 + 2) != 16724 )
                      goto LABEL_926;
LABEL_918:
                    v563 = 1;
                    v1767 = 1;
                  }
                  else
                  {
                    if ( v564 != 1162297680 )
                      goto LABEL_924;
                    v565 = *((_WORD *)v536 + 2);
                    if ( v565 == 30839 || v565 == 29303 || v565 == 30583 )
                      goto LABEL_918;
LABEL_926:
                    v566 = 7;
                    v567 = (unsigned __int8 *)*((_QWORD *)v540 + 287);
                    v568 = (unsigned __int8 *)v536;
                    v569 = (__int64 *)*((_QWORD *)v540 + 288);
                    v1753 = v567;
                    v570 = *(unsigned __int8 **)(v1566 + 2312);
                    v571 = *(unsigned __int8 **)(v1566 + 2320);
                    while ( 1 )
                    {
                      v572 = *v568++;
                      v573 = *v567++;
                      if ( v572 != v573 )
                        break;
                      if ( !--v566 )
                        goto LABEL_945;
                    }
                    v574 = 8;
                    v575 = (__int64 *)v536;
                    do
                    {
                      v576 = *v575++;
                      v577 = *v569++;
                      if ( v576 != v577 )
                      {
                        v561 = 0;
                        goto LABEL_938;
                      }
                      v574 -= 8;
                    }
                    while ( v574 >= 8 );
                    v561 = 0;
                    if ( v574 )
                    {
                      while ( 1 )
                      {
                        v578 = *(unsigned __int8 *)v575;
                        v575 = (__int64 *)((char *)v575 + 1);
                        v579 = *(unsigned __int8 *)v569;
                        v569 = (__int64 *)((char *)v569 + 1);
                        if ( v578 != v579 )
                          break;
                        if ( !--v574 )
                          goto LABEL_945;
                      }
LABEL_938:
                      v580 = 4;
                      v581 = (unsigned __int8 *)v536;
                      while ( 1 )
                      {
                        v582 = *v581++;
                        v583 = *v570++;
                        if ( v582 != v583 )
                          break;
                        if ( !--v580 )
                          goto LABEL_945;
                      }
                      v584 = 6;
                      v585 = (unsigned __int8 *)v536;
                      while ( 1 )
                      {
                        v586 = *v585++;
                        v587 = *v571++;
                        if ( v586 != v587 )
                          break;
                        if ( !--v584 )
                          goto LABEL_945;
                      }
                    }
                    else
                    {
LABEL_945:
                      v563 = 1;
                      v1767 = 1;
                      v561 = 0;
                    }
                    v540 = (_BYTE *)v1566;
                  }
                  v588 = v536[9];
                  if ( v588 < 0 )
                  {
                    v563 = 1;
                    v1767 = 1;
                    goto LABEL_950;
                  }
                  if ( v563 )
                  {
LABEL_950:
                    if ( *v536 == 1414090313 && v536[1] == 1195525195 )
                    {
                      if ( (*((_DWORD *)v540 + 599) & 0x2000) != 0 )
                        v563 = 0;
                      v1767 = v563;
                    }
                  }
                  v589 = BugCheckParameter2;
                  if ( (*((_DWORD *)v540 + 599) & 0x4000) != 0
                    && (v588 & 0x20000000) != 0
                    && (BugCheckParameter2 == *((_QWORD *)v540 + 184) || BugCheckParameter2 == *((_QWORD *)v540 + 185)) )
                  {
                    v563 = 1;
                    v1767 = 1;
                  }
                  v590 = v536[4];
                  v591 = (unsigned int)v536[3];
                  v592 = v1563;
                  if ( v590 <= v536[2] )
                    v590 = v536[2];
                  v593 = v1558;
                  v594 = v591 + v590;
                  v1562 = v536[3];
                  v595 = v591;
                  v1551 = v594;
                  if ( v1558 == v1563 )
                  {
                    v597 = 0;
                    v598 = (_DWORD)v591 != 0;
                  }
                  else
                  {
                    v596 = *v1558;
                    v597 = v1558[1];
                    v598 = *v1558 < (unsigned int)v591;
                    if ( *v1558 > (unsigned int)v591 )
                    {
                      if ( v1558[1] > v594 )
                        goto LABEL_994;
                      if ( v563 )
                        goto LABEL_996;
                      v599 = v1552;
                      v600 = BugCheckParameter2 + v591;
                      v601 = &v1652;
                      v589 = v596 - (unsigned int)v591;
                      v595 = *v1558;
                      *v1552 = v591;
                      v602 = v600 + v589;
                      v599[1] = v596;
                      v603 = v1618;
                      do
                      {
                        if ( v600 < *v601 + *v603 && v602 > *v601 )
                        {
                          v561 = 0;
                          goto LABEL_993;
                        }
                        ++v561;
                        ++v601;
                        ++v603;
                      }
                      while ( v561 < 6 );
                      v604 = v1566;
                      v605 = (_QWORD *)v600;
                      *(_DWORD *)(v1566 + 2032) += v589;
                      v606 = *(_DWORD *)(v604 + 2012);
                      v607 = *(_QWORD *)(v604 + 2016);
                      v608 = (const char *)v600;
                      if ( v600 < v602 )
                      {
                        do
                        {
                          _mm_prefetch(v608, 0);
                          v608 += 64;
                        }
                        while ( (unsigned __int64)v608 < v602 );
                      }
                      v609 = v607;
                      v610 = (unsigned int)v589 >> 7;
                      if ( (unsigned int)v589 >> 7 )
                      {
                        do
                        {
                          v611 = 8LL;
                          do
                          {
                            v612 = v609 ^ *v605;
                            v613 = v605[1];
                            v605 += 2;
                            v609 = __ROL8__(__ROL8__(v612, v606) ^ v613, v606);
                            --v611;
                          }
                          while ( v611 );
                          v614 = __ROL8__(v607 ^ ((unsigned __int64)v605 - v600), 17) ^ v607 ^ ((unsigned __int64)v605
                                                                                              - v600);
                          v1677 = (v614 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                          v606 = ((unsigned __int8)v1677 ^ (unsigned __int8)(v614 ^ v606)) & 0x3F;
                          if ( !v606 )
                            LOBYTE(v606) = 1;
                          --v610;
                        }
                        while ( v610 );
                        v16 = v1550;
                        LODWORD(v591) = v1562;
                      }
                      v589 &= 0x7Fu;
                      if ( (unsigned int)v589 >= 8 )
                      {
                        v615 = (unsigned __int64)(unsigned int)v589 >> 3;
                        do
                        {
                          v609 = __ROL8__(*v605++ ^ v609, v606);
                          v589 = (unsigned int)(v589 - 8);
                          --v615;
                        }
                        while ( v615 );
                      }
                      if ( (_DWORD)v589 )
                      {
                        do
                        {
                          v616 = *(unsigned __int8 *)v605;
                          v605 = (_QWORD *)((char *)v605 + 1);
                          v609 = __ROL8__(v616 ^ v609, v606);
                          v589 = (unsigned int)(v589 - 1);
                        }
                        while ( (_DWORD)v589 );
                        v16 = v1550;
                      }
                      v617 = v609 >> 31;
                      v561 = 0;
                      while ( v617 )
                      {
                        LODWORD(v609) = v617 ^ v609;
                        v617 >>= 31;
                      }
                      v594 = v1551;
                      v563 = v1767;
                      v1552[2] = v609 & 0x7FFFFFFF;
LABEL_993:
                      v593 = v1558;
                      v592 = v1563;
                      v540 = (_BYTE *)v1566;
LABEL_994:
                      if ( v597 <= v594 && v593 != v592 )
                      {
LABEL_996:
                        v618 = (unsigned int *)v1567;
                        v619 = *(_DWORD *)(v1567 + 4);
                        if ( v619 <= v594 )
                        {
                          v620 = v1570;
                          while ( v618 != v592 )
                          {
                            if ( v563 )
                            {
                              v621 = 0x80;
                            }
                            else
                            {
                              v622 = v593[1];
                              v595 = *v618;
                              if ( *v618 < (unsigned int)v622 )
                              {
                                if ( (*((_DWORD *)v540 + 598) & 0x200000) == 0 )
                                {
                                  v1612 = 664797184;
                                  KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, BugCheckParameter2, 6uLL, 0LL);
                                }
                                if ( !*((_DWORD *)v540 + 560) )
                                {
                                  v623 = BugCheckParameter2;
                                  *((_QWORD *)v540 + 281) = v540 - 0x5C5FC0A76E374B18LL;
                                  *((_QWORD *)v540 + 282) = 0LL;
                                  *((_QWORD *)v540 + 283) = 271LL;
                                  *((_QWORD *)v540 + 284) = v623;
                                  *((_DWORD *)v540 + 560) = 1;
                                  __b9(v540, 0LL, v592, v589);
                                  v561 = 0;
                                }
                              }
                              v624 = v1618;
                              v625 = BugCheckParameter2 + v622;
                              v626 = &v1652;
                              v589 = v595 - (unsigned int)v622;
                              v627 = BugCheckParameter2 + v622 + v589;
                              do
                              {
                                if ( v625 < *v626 + *v624 && v627 > *v626 )
                                  goto LABEL_1030;
                                ++v561;
                                ++v626;
                                ++v624;
                              }
                              while ( v561 < 6 );
                              if ( (unsigned int)v589 < 4 )
                              {
LABEL_1030:
                                v561 = 0;
                                v621 = 0x80;
                              }
                              else
                              {
                                v628 = v1566;
                                v629 = (_QWORD *)v625;
                                *(_DWORD *)(v1566 + 2032) += v589;
                                v630 = *(_DWORD *)(v628 + 2012);
                                v631 = *(_QWORD *)(v628 + 2016);
                                v632 = (const char *)v625;
                                if ( v625 < v627 )
                                {
                                  do
                                  {
                                    _mm_prefetch(v632, 0);
                                    v632 += 64;
                                  }
                                  while ( (unsigned __int64)v632 < v627 );
                                }
                                v633 = v631;
                                v634 = (unsigned int)v589 >> 7;
                                if ( (unsigned int)v589 >> 7 )
                                {
                                  do
                                  {
                                    v635 = 8LL;
                                    do
                                    {
                                      v636 = v633 ^ *v629;
                                      v637 = v629[1];
                                      v629 += 2;
                                      v633 = __ROL8__(__ROL8__(v636, v630) ^ v637, v630);
                                      --v635;
                                    }
                                    while ( v635 );
                                    v638 = __ROL8__(v631 ^ ((unsigned __int64)v629 - v625), 17) ^ v631 ^ ((unsigned __int64)v629 - v625);
                                    v1678 = (v638 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                                    v630 = ((unsigned __int8)v1678 ^ (unsigned __int8)(v638 ^ v630)) & 0x3F;
                                    if ( !v630 )
                                      LOBYTE(v630) = 1;
                                    --v634;
                                  }
                                  while ( v634 );
                                  v16 = v1550;
                                }
                                v589 &= 0x7Fu;
                                if ( (unsigned int)v589 >= 8 )
                                {
                                  v639 = (unsigned __int64)(unsigned int)v589 >> 3;
                                  do
                                  {
                                    v633 = __ROL8__(*v629++ ^ v633, v630);
                                    v589 = (unsigned int)(v589 - 8);
                                    --v639;
                                  }
                                  while ( v639 );
                                }
                                v561 = 0;
                                if ( (_DWORD)v589 )
                                {
                                  do
                                  {
                                    v640 = *(unsigned __int8 *)v629;
                                    v629 = (_QWORD *)((char *)v629 + 1);
                                    v633 = __ROL8__(v640 ^ v633, v630);
                                    v589 = (unsigned int)(v589 - 1);
                                  }
                                  while ( (_DWORD)v589 );
                                  v16 = v1550;
                                }
                                for ( i27 = v633; ; LOBYTE(v633) = i27 ^ v633 )
                                {
                                  i27 >>= 7;
                                  if ( !i27 )
                                    break;
                                }
                                v563 = v1767;
                                v621 = v633 & 0x7F;
                                v618 = (unsigned int *)v1567;
                              }
                              v593 = v1558;
                              v594 = v1551;
                              v620 = v1570;
                            }
                            *v620 = v621;
                            v593 += 3;
                            v618 += 3;
                            v1558 = v593;
                            v592 = v1563;
                            v620 = ++v1570;
                            v1567 = (__int64)v618;
                            if ( v618 != v1563 )
                              v619 = v618[1];
                            if ( v619 > v594 )
                              break;
                            v540 = (_BYTE *)v1566;
                          }
                        }
                        LODWORD(v591) = v1562;
                      }
LABEL_1036:
                      v642 = v1552;
                      if ( !v563 && v595 != v594 )
                      {
                        v643 = BugCheckParameter2;
                        v644 = v1618;
                        v1552[3] = v595;
                        v645 = &v1652;
                        v642[4] = v594;
                        v646 = v642[3];
                        v647 = v594 - v646;
                        v648 = v646 + v643;
                        v649 = v648 + v594 - (unsigned int)v646;
                        do
                        {
                          if ( v648 < *v645 + *v644 && v649 > *v645 )
                          {
                            v561 = 0;
                            goto LABEL_1062;
                          }
                          ++v561;
                          ++v645;
                          ++v644;
                        }
                        while ( v561 < 6 );
                        v650 = v1566;
                        v651 = (_QWORD *)v648;
                        *(_DWORD *)(v1566 + 2032) += v647;
                        v652 = *(_DWORD *)(v650 + 2012);
                        v653 = *(_QWORD *)(v650 + 2016);
                        v654 = (const char *)v648;
                        if ( v648 < v649 )
                        {
                          do
                          {
                            _mm_prefetch(v654, 0);
                            v654 += 64;
                          }
                          while ( (unsigned __int64)v654 < v649 );
                        }
                        v655 = v653;
                        v656 = v647 >> 7;
                        if ( v647 >> 7 )
                        {
                          do
                          {
                            v657 = 8LL;
                            do
                            {
                              v658 = v655 ^ *v651;
                              v659 = v651[1];
                              v651 += 2;
                              v655 = __ROL8__(__ROL8__(v658, v652) ^ v659, v652);
                              --v657;
                            }
                            while ( v657 );
                            v660 = __ROL8__(v653 ^ ((unsigned __int64)v651 - v648), 17) ^ v653 ^ ((unsigned __int64)v651
                                                                                                - v648);
                            v1679 = (v660 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                            v652 = ((unsigned __int8)(v660 ^ v1679) ^ (unsigned __int8)v652) & 0x3F;
                            if ( !v652 )
                              LOBYTE(v652) = 1;
                            --v656;
                          }
                          while ( v656 );
                          v16 = v1550;
                          v642 = v1552;
                        }
                        v661 = v647 & 0x7F;
                        if ( v661 >= 8 )
                        {
                          v662 = (unsigned __int64)v661 >> 3;
                          do
                          {
                            v655 = __ROL8__(*v651++ ^ v655, v652);
                            v661 -= 8;
                            --v662;
                          }
                          while ( v662 );
                        }
                        if ( v661 )
                        {
                          do
                          {
                            v663 = *(unsigned __int8 *)v651;
                            v651 = (_QWORD *)((char *)v651 + 1);
                            v655 = __ROL8__(v663 ^ v655, v652);
                            --v661;
                          }
                          while ( v661 );
                          LODWORD(v591) = v1562;
                        }
                        v664 = v655 >> 31;
                        v561 = 0;
                        while ( v664 )
                        {
                          LODWORD(v655) = v664 ^ v655;
                          v664 >>= 31;
                        }
                        v594 = v1551;
                        v642[5] = v655 & 0x7FFFFFFF;
                      }
LABEL_1062:
                      v58 = (unsigned __int64)v1558;
                      if ( v1558 != v1563 && *v1558 >= (unsigned int)v591 && v1558[1] <= v594 )
                      {
                        v665 = v1567;
                        if ( (unsigned int *)v1567 != v1563 )
                        {
                          v666 = v1570;
                          *v1570 = 0x80;
                          v1570 = v666 + 1;
                          v1567 = v665 + 12;
                        }
                        v58 += 12LL;
                        v1558 = (unsigned int *)v58;
                      }
                      v540 = (_BYTE *)v1566;
                      v536 = (_DWORD *)(v1553 + 40);
                      v1552 = v642 + 6;
                      v1553 += 40LL;
                      if ( v642 + 6 == (unsigned int *)v1565 )
                      {
                        v478 = v1574;
                        goto LABEL_1070;
                      }
                      continue;
                    }
                  }
                  break;
                }
                if ( !v598 )
                  goto LABEL_994;
                goto LABEL_1036;
              }
LABEL_1070:
              v1577 = v478;
              v49 = 0LL;
LABEL_1071:
              v369 = (ULONG_PTR)v1557;
LABEL_1072:
              v57 = 0x80000000LL;
              v667 = &v1577[-v16];
              v16 = (ULONG_PTR)v1577;
              v668 = (char *)v1549 + (_QWORD)v667;
              v1550 = (ULONG_PTR)v1577;
              v1549 = (int *)((char *)v1549 + (_QWORD)v667);
              if ( (int)(v49 + 0x80000000) < 0 || (_DWORD)v49 == -1073741554 )
                *((_QWORD *)v668 + 5) = v369;
LABEL_1075:
              i21 = v1556;
LABEL_1119:
              *(_DWORD *)(v16 + 2032) += i21 << 12;
              v699 = *(_DWORD *)(v16 + 2032);
              ++*(_DWORD *)(v16 + 2028);
              if ( v699 < *(_DWORD *)(v16 + 2036) )
              {
                v59 = (char *)v1549;
                v64 = 0;
                goto LABEL_592;
              }
LABEL_1122:
              v1550 = v16;
              goto LABEL_147;
            }
            v449[8] |= 2u;
            goto LABEL_746;
          }
          ++v384;
          v377 = 0;
          if ( v384 >= *(_DWORD *)(v16 + 2004) )
            goto LABEL_680;
        }
        v387 = v384 - v377;
        v377 = v384;
        while ( 2 )
        {
          v388 = *(_DWORD *)v382;
          if ( *(int *)v382 > 12 )
          {
            if ( v388 == 28 )
            {
              v393 = *(unsigned __int16 *)(v382 + 40);
              goto LABEL_670;
            }
            if ( v388 == 30 )
            {
              v392 = (((*(_DWORD *)(v382 + 36) != 0 ? *(_DWORD *)(v382 + 36) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                   + 24 * (*(unsigned __int16 *)(v382 + 40) + 2);
              goto LABEL_671;
            }
            if ( v388 <= 32 )
              goto LABEL_667;
            if ( v388 <= 34 )
            {
              v392 = 20
                   * (unsigned int)(((*(_DWORD *)(v382 + 32) & 0xFFF)
                                   + (unsigned __int64)*(unsigned int *)(v382 + 40)
                                   + 4095) >> 12)
                   + 48;
              goto LABEL_671;
            }
            if ( v388 != 43 )
              goto LABEL_667;
          }
          else if ( v388 != 12 )
          {
            v389 = v388 - 1;
            if ( v389 )
            {
              v390 = v389 - 6;
              if ( !v390 )
              {
                v392 = (unsigned int)(24 * (*(_DWORD *)(v382 + 24) + 2));
                goto LABEL_671;
              }
              v391 = v390 - 1;
              if ( v391 )
              {
                if ( v391 == 2 )
                {
                  v392 = (unsigned int)(16 * (*(_DWORD *)(v382 + 28) + 3));
                  goto LABEL_671;
                }
LABEL_667:
                v392 = 48LL;
LABEL_671:
                v382 += v392;
                if ( !--v387 )
                {
                  v16 = v1550;
                  v378 = v1764;
                  v376 = BugCheckParameter2;
                  v379 = v1558;
                  v369 = (ULONG_PTR)v1557;
                  goto LABEL_673;
                }
                continue;
              }
              v393 = *(unsigned __int16 *)(v382 + 32);
LABEL_670:
              v392 = (v393 + 55) & 0xFFFFFFF8;
              goto LABEL_671;
            }
          }
          break;
        }
        v392 = 4 * (*(_DWORD *)(v382 + 16) / 0xCu) + 48;
        goto LABEL_671;
      }
      v700 = *((_DWORD *)v59 + 10);
      (*(void (__fastcall **)(_BYTE *, _QWORD))(v16 + 400))(v1724, *((unsigned int *)v59 + 11));
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(v16 + 448))(v1724, v1743);
      v66 = v700 == 0;
      v701 = __readcr4();
      if ( v66 )
        v701 = __readcr0();
      v702 = v1743;
LABEL_1126:
      (*(void (__fastcall **)(_BYTE *))(v16 + 392))(v702);
      v703 = *((_QWORD *)v59 + 4);
      v57 = v701 & *((_QWORD *)v59 + 3);
      if ( v57 == v703 )
        goto LABEL_147;
      v49 = *((_QWORD *)v59 + 5);
      if ( *(_DWORD *)(v16 + 2240) )
        goto LABEL_147;
      *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v57 ^ v703;
LABEL_1129:
      if ( *(_DWORD *)(v16 + 2240) )
        goto LABEL_147;
      *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
      v704 = *(int *)v59;
LABEL_1131:
      *(_QWORD *)(v16 + 2264) = v704;
      *(_QWORD *)(v16 + 2272) = v49;
      goto LABEL_1132;
    }
    switch ( v69 )
    {
      case 12:
        if ( !*(_QWORD *)(v16 + 2376) )
          goto LABEL_1747;
        v233 = *(unsigned int *)(v16 + 2028);
        v234 = *(_DWORD *)(v16 + 2396);
        if ( (_DWORD)v233 )
        {
          v49 = v234;
          if ( (((unsigned __int8)v234 ^ (unsigned __int8)(v234 >> 3)) & 4) != 0 )
            goto LABEL_1747;
        }
        else
        {
          LODWORD(v49) = v234 ^ ((unsigned __int8)v234 ^ (unsigned __int8)(8 * v234)) & 0x20;
          *(_DWORD *)(v16 + 2396) = v49;
        }
        if ( (v49 & 4) != 0 )
        {
          v235 = *((_QWORD *)v59 + 4);
          if ( v235 )
          {
            LOWORD(v236) = v233 + v235;
            v237 = (unsigned int)(*((_DWORD *)v59 + 10) - v233);
            v238 = v235 + v233;
          }
          else
          {
            v236 = *((_DWORD *)v59 + 2);
            v237 = *((unsigned int *)v59 + 4);
            v238 = *((_QWORD *)v59 + 1);
          }
          v49 = v236 & 0xFFF;
          v239 = (v49 + v237 + 4095) >> 12;
          v240 = v238 & 0xFFFFFFFFFFFFF000uLL;
          while ( v239 )
          {
            --v239;
            if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v16 + 672))(v240) && !*(_DWORD *)(v16 + 2240) )
            {
              *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v16 + 2264) = *(int *)v59;
              *(_QWORD *)(v16 + 2272) = v240;
              *(_DWORD *)(v16 + 2240) = 1;
              __b9(v16, 0LL, v241, v242);
            }
            v240 += 4096LL;
            v243 = *(_DWORD *)(v16 + 2032) + 256;
            *(_DWORD *)(v16 + 2032) = v243;
            if ( v235 )
            {
              *(_DWORD *)(v16 + 2028) += 4096;
              if ( v243 >= *(_DWORD *)(v16 + 2036) )
                goto LABEL_462;
            }
          }
          if ( v235 )
          {
LABEL_462:
            if ( !v239 )
              *(_DWORD *)(v16 + 2028) = 0;
          }
          if ( *(_DWORD *)(v16 + 2028) )
            goto LABEL_147;
          v244 = *(_QWORD *)(v16 + 1304);
          v245 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          (*(void (__fastcall **)(__int64))(v16 + 320))(v244);
          v247 = **(unsigned int ***)(v16 + 1512);
          v248 = v247 + 4;
          v249 = *((_BYTE *)v247 + 12);
          v250 = (unsigned __int64)&v247[6 * *v247 + 4];
          do
          {
            v251 = 24LL;
            v252 = (__int64 *)(v59 + 24);
            v253 = v248;
            do
            {
              v254 = *(_QWORD *)v253;
              v253 += 2;
              v255 = *v252++;
              if ( v254 != v255 )
                goto LABEL_473;
              v251 = (unsigned int)(v251 - 8);
            }
            while ( (unsigned int)v251 >= 8 );
            if ( !(_DWORD)v251 )
              break;
            while ( 1 )
            {
              v246 = *(unsigned __int8 *)v253;
              v253 = (unsigned int *)((char *)v253 + 1);
              v256 = *(unsigned __int8 *)v252;
              v252 = (__int64 *)((char *)v252 + 1);
              if ( v246 != v256 )
                break;
              v66 = (_DWORD)v251 == 1;
              v251 = (unsigned int)(v251 - 1);
              if ( v66 )
                goto LABEL_474;
            }
LABEL_473:
            v248 += 6;
          }
          while ( (unsigned __int64)v248 < v250 );
LABEL_474:
          v16 = v1550;
          (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v1550 + 384))(
            *(_QWORD *)(v1550 + 1304),
            v246,
            v251,
            v252);
          __writecr8(v245);
          if ( v249 )
          {
            v49 = 16LL;
            if ( (*(_DWORD *)(v16 + 2396) & 0x10) != 0 && !*(_DWORD *)(v16 + 2240) )
            {
              *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v16 + 2264) = *(int *)v59;
              *(_QWORD *)(v16 + 2272) = 1LL;
              *(_DWORD *)(v16 + 2240) = 1;
              __b9(v16, 0LL, v57, v58);
            }
            if ( *((_QWORD *)v59 + 3) == 1LL )
              goto LABEL_147;
          }
          if ( v248 != (unsigned int *)v250 || *(_DWORD *)(v16 + 2240) )
            goto LABEL_147;
          v257 = v16 - 0x5C5FC0A76E374B18LL;
          goto LABEL_482;
        }
        goto LABEL_2105;
      case 0:
        v215 = (const char *)*((_QWORD *)v59 + 1);
        v216 = *((unsigned int *)v59 + 4);
        v58 = (unsigned __int64)v215;
        *(_DWORD *)(v16 + 2032) += v216;
        v217 = v215;
        v218 = *(_DWORD *)(v16 + 2012);
        v219 = *(_QWORD *)(v16 + 2016);
        v49 = (unsigned __int64)&v215[v216];
        if ( v215 < &v215[v216] )
        {
          do
          {
            _mm_prefetch(v217, 0);
            v217 += 64;
          }
          while ( (unsigned __int64)v217 < v49 );
        }
        v220 = *(_QWORD *)(v16 + 2016);
        v221 = (unsigned int)v216 >> 7;
        if ( (unsigned int)v216 >> 7 )
        {
          do
          {
            v222 = 8LL;
            do
            {
              v223 = *(_QWORD *)(v58 + 8) ^ __ROL8__(*(_QWORD *)v58 ^ v220, v218);
              v58 += 16LL;
              v220 = __ROL8__(v223, v218);
              --v222;
            }
            while ( v222 );
            v49 = __ROL8__(v219 ^ (v58 - (_QWORD)v215), 17) ^ v219 ^ (v58 - (_QWORD)v215);
            v1719 = (v49 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v218 = ((unsigned __int8)v1719 ^ (unsigned __int8)(v49 ^ v218)) & 0x3F;
            if ( !v218 )
              v218 = 1;
            --v221;
          }
          while ( v221 );
          v16 = v1550;
        }
        v57 = v216 & 0x7F;
        if ( (unsigned int)v57 >= 8 )
        {
          v224 = (unsigned __int64)(unsigned int)v57 >> 3;
          do
          {
            v49 = v218;
            v220 = __ROL8__(*(_QWORD *)v58 ^ v220, v218);
            v58 += 8LL;
            v57 = (unsigned int)(v57 - 8);
            --v224;
          }
          while ( v224 );
        }
        for ( ; (_DWORD)v57; v57 = (unsigned int)(v57 - 1) )
        {
          v225 = *(unsigned __int8 *)v58;
          v49 = v218;
          ++v58;
          v220 = __ROL8__(v225 ^ v220, v218);
        }
        for ( i28 = v220; ; LODWORD(v220) = i28 ^ v220 )
        {
          i28 >>= 31;
          if ( !i28 )
            break;
        }
        v227 = v220 & 0x7FFFFFFF;
        if ( v227 == *((_DWORD *)v59 + 5) )
          goto LABEL_147;
        if ( !*(_DWORD *)v59 && *((_DWORD *)v59 + 6) )
          v64 = 1;
        v49 = *((unsigned int *)v59 + 4);
        v228 = *((_QWORD *)v59 + 1);
        if ( *((_DWORD *)v59 + 4) )
        {
          v57 = 64LL;
          if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
          {
            v229 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v230 = v228 & 0xFFFFFFFFFFFFF000uLL;
            v1760 = (v228 + v49 - 1) | 0xFFF;
            v231 = (v228 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v96 = v229;
              while ( 1 )
              {
                v232 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(v16 + 1112))(
                         v230,
                         0LL,
                         v57,
                         v58);
                if ( v232 != -1073741267 )
                  break;
                if ( v64 )
                  goto LABEL_440;
                if ( v229 > 1u )
                  goto LABEL_438;
                v96 = v229;
                __writecr8(v229);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v232 < 0 )
                break;
LABEL_438:
              v230 += 4096LL;
              v231 += 4096LL;
              if ( v231 == v1760 )
                goto LABEL_229;
            }
LABEL_440:
            __writecr8(v96);
            v59 = (char *)v1549;
          }
        }
        if ( *(_DWORD *)(v16 + 2240) )
          goto LABEL_147;
        *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = *((unsigned int *)v59 + 5) ^ (unsigned __int64)v227;
LABEL_443:
        v49 = *((_QWORD *)v59 + 1);
        if ( *(_DWORD *)(v16 + 2240) )
          goto LABEL_147;
        *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v16 + 2264) = *(int *)v59;
        *(_QWORD *)(v16 + 2272) = v49;
        goto LABEL_1132;
      case 1:
        goto LABEL_2105;
    }
    v49 = (unsigned int)(v69 - 4);
    switch ( v69 )
    {
      case 4:
        if ( (*(_DWORD *)(v16 + 2040) & 1) == 0 )
        {
          v193 = *(void (**)(void))(v16 + 360);
          v194 = 0;
          v195 = *(_QWORD *)(v16 + 1312);
          LODWORD(v1552) = 0;
          v193();
          if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 || (v196 = *(_DWORD *)(v16 + 2328), v196 >= 7) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 280))(*(_QWORD *)(v16 + 2504), 0LL);
            v197 = 0x80;
          }
          else
          {
            v197 = 1 << v196;
          }
          v1759 = v197;
          (*(void (__fastcall **)(__int64, _QWORD))(v16 + 296))(v195, 0LL);
          v200 = *(_QWORD ***)(v16 + 1272);
          v201 = *v200;
          if ( *v200 != v200 )
          {
            do
            {
              v202 = (unsigned __int64)v201 - *(_QWORD *)(v16 + 1696);
              if ( v197 != 0x80
                && (v197 & *(_BYTE *)(v202 + *(_QWORD *)(v16 + 1672))) != 0
                && (*(_DWORD *)(v202 + *(_QWORD *)(v16 + 1680)) & *(_DWORD *)(v16 + 1704)) != 0
                && !*(_DWORD *)(v16 + 2240) )
              {
                v203 = v1549;
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = (char *)v203 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v203;
                *(_QWORD *)(v16 + 2272) = v202 | 1;
                *(_DWORD *)(v16 + 2240) = 1;
                __b9(v16, 0LL, v198, v199);
              }
              _InterlockedOr8((volatile signed __int8 *)(v202 + *(_QWORD *)(v16 + 1672)), v197);
              v201 = (_QWORD *)*v201;
              ++v194;
            }
            while ( v201 != v200 );
            LODWORD(v1552) = v194;
          }
          v204 = *(_QWORD *)(v16 + 1240);
          v1555 = KeGetCurrentIrql();
          __writecr8(0xCuLL);
          (*(void (__fastcall **)(__int64, _BYTE *))(v16 + 312))(v204, v1751);
          v207 = *(_QWORD ***)(v16 + 1232);
          v208 = *v207;
          if ( *v207 != v207 )
          {
            v209 = v197;
            v210 = v197;
            v211 = v1549;
            v212 = ~v209;
            do
            {
              v213 = *(_QWORD *)(v16 + 1672);
              v214 = (char *)v208 - *(_QWORD *)(v16 + 1664);
              if ( (v214[v213] & v210) == 0 && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = (char *)v211 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v211;
                *(_QWORD *)(v16 + 2272) = v214;
                *(_DWORD *)(v16 + 2240) = 1;
                __b9(v16, 0LL, v205, v206);
                v213 = *(_QWORD *)(v16 + 1672);
              }
              _InterlockedAnd8(&v214[v213], v212);
              v208 = (_QWORD *)*v208;
            }
            while ( v208 != v207 );
            v197 = v1759;
            v194 = (int)v1552;
          }
          (*(void (__fastcall **)(_BYTE *))(v16 + 376))(v1751);
          __writecr8((unsigned __int8)v1555);
          if ( v197 == 0x80 )
            (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 288))(*(_QWORD *)(v16 + 2504), 0LL);
          (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 304))(*(_QWORD *)(v16 + 1312), 0LL);
          (*(void (**)(void))(v16 + 368))();
          *(_DWORD *)(v16 + 2032) += v194 << 8;
        }
        goto LABEL_147;
      case 5:
        v49 = *(unsigned int *)(v16 + 2040);
        if ( (v49 & 1) == 0 )
          goto LABEL_147;
        if ( _bittest((const signed __int32 *)(v16 + 2392), 0x1Eu) )
        {
          v168 = __rdtsc();
          v169 = (__ROR8__(v168, 3) ^ v168) * (unsigned __int128)0x7010008004002001uLL;
          v1718 = *((_QWORD *)&v169 + 1);
          v1758 = ((unsigned __int64)v169 ^ *((_QWORD *)&v169 + 1)) == 3
                                                                     * (((unsigned __int64)v169 ^ *((_QWORD *)&v169 + 1))
                                                                      / 3);
        }
        else
        {
          v1758 = (v49 & 3) == 3;
        }
        v170 = *(void (**)(void))(v16 + 360);
        v171 = 0;
        v172 = *(_QWORD *)(v16 + 1312);
        LODWORD(v1552) = 0;
        v170();
        if ( _bittest((const signed __int32 *)(v16 + 2392), 0x1Eu) || (v173 = *(_DWORD *)(v16 + 2328), v173 >= 7) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 280))(*(_QWORD *)(v16 + 2504), 0LL);
          v174 = 0x80;
        }
        else
        {
          v174 = 1 << v173;
        }
        (*(void (__fastcall **)(__int64, _QWORD))(v16 + 296))(v172, 0LL);
        v175 = *(volatile signed __int8 ***)(v16 + 1272);
        v176 = *v175;
        if ( *v175 != (volatile signed __int8 *)v175 )
        {
          do
          {
            _InterlockedOr8(&v176[*(_QWORD *)(v16 + 1672) - *(_QWORD *)(v16 + 1696)], v174);
            v176 = *(volatile signed __int8 **)v176;
            ++v171;
          }
          while ( v176 != (volatile signed __int8 *)v175 );
          LODWORD(v1552) = v171;
        }
        v177 = 4LL;
        v178 = **(_QWORD **)(v16 + 1320);
        v179 = *(unsigned int *)(*(_QWORD *)(v16 + 1792) + v178);
        while ( 1 )
        {
          v180 = (__int64 *)(*(__int64 (__fastcall **)(__int64, unsigned __int64))(v16 + 248))(v178, v177);
          v182 = 0LL;
          v183 = v180;
          if ( v180 )
            break;
LABEL_380:
          v177 += 4LL;
          if ( v177 >= v179 )
          {
            if ( v174 == 0x80 )
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(v16 + 288))(
                *(_QWORD *)(v16 + 2504),
                0LL,
                v181,
                v182);
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(v16 + 304))(
              *(_QWORD *)(v16 + 1312),
              0LL,
              v181,
              v182);
            (*(void (**)(void))(v16 + 368))();
            v192 = (v179 >> 2) + (_DWORD)v1552;
            goto LABEL_384;
          }
        }
        v184 = (_BYTE *)((*v180 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
        v185 = *v184 & 0x7F;
        if ( v185 == 3 )
        {
          v181 = *(_QWORD *)(v16 + 1672);
          v186 = v181;
          if ( (v174 & v184[v181]) == 0
            && (*(_DWORD *)&v184[*(_QWORD *)(v16 + 1680)] & *(_DWORD *)(v16 + 1704)) != 0
            && !*(_DWORD *)(v16 + 2240) )
          {
            v187 = v1549;
            *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v16 + 2256) = (char *)v187 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v16 + 2264) = *v187;
            *(_QWORD *)(v16 + 2272) = v184;
            *(_DWORD *)(v16 + 2240) = 1;
            __b9(v16, 0LL, v181, 0LL);
            v186 = *(_QWORD *)(v16 + 1672);
          }
          _InterlockedAnd8(&v184[v186], ~v174);
          goto LABEL_379;
        }
        if ( v185 == 6 )
        {
          if ( v1758 )
          {
            v188 = *(_QWORD *)(v16 + 1616);
            v189 = *(_QWORD *)&v184[v188 + 32];
            if ( (v189 == *(_QWORD *)(v16 + 784) || v189 == *(_QWORD *)(v16 + 792))
              && *(_QWORD *)&v184[v188 + 48] == *(_QWORD *)(v16 + 800) )
            {
              v190 = *(_QWORD *)&v184[v188 + 40] == *(_QWORD *)(v16 + 808);
              goto LABEL_376;
            }
            goto LABEL_377;
          }
        }
        else
        {
          v190 = v185 == 0;
LABEL_376:
          if ( !v190 )
          {
LABEL_377:
            if ( !*(_DWORD *)(v16 + 2240) )
            {
              v191 = v1549;
              *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v16 + 2256) = (char *)v191 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v16 + 2264) = *v191;
              *(_QWORD *)(v16 + 2272) = v184;
              *(_DWORD *)(v16 + 2240) = 1;
              __b9(v16, 0LL, v181, 0LL);
            }
          }
        }
LABEL_379:
        (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v16 + 272))(v178, v183, v181, v182);
        goto LABEL_380;
      case 7:
        (*(void (__fastcall **)(_BYTE *, _QWORD))(v16 + 400))(v1722, *((unsigned int *)v59 + 7));
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(v16 + 448))(v1722, v1723);
        for ( i29 = 0; i29 < *((_DWORD *)v59 + 6); ++i29 )
        {
          v160 = *(unsigned int *)&v59[24 * i29 + 64];
          if ( (*(_BYTE *)(v16 + 2115) & 2) != 0
            && (_DWORD)v160 == -1073741694
            && KeGetPcr()->Prcb.Number == *(_DWORD *)(v16 + 2232) )
          {
            v161 = *(_QWORD *)(v16 + 2224);
          }
          else
          {
            v161 = __readmsr(v160);
          }
          v162 = *(_QWORD *)&v59[24 * i29 + 48];
          v163 = *(_QWORD *)&v59[24 * i29 + 56];
          v164 = v162 & v161;
          if ( v164 == v163 )
          {
            if ( (*(_DWORD *)(v16 + 2396) & 0x200) != 0 && v162 == -1 )
              __writemsr(v160, v164);
          }
          else
          {
            v165 = v160 | ((unsigned __int64)*((unsigned int *)v59 + 7) << 32);
            if ( !*(_DWORD *)(v16 + 2240) )
            {
              v166 = v164 ^ v163;
              *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v166;
              if ( !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *(int *)v59;
                *(_QWORD *)(v16 + 2272) = v165;
                *(_DWORD *)(v16 + 2240) = 1;
                __b9(v16, 0LL, v165, v166);
              }
            }
          }
        }
        (*(void (__fastcall **)(_BYTE *))(v16 + 392))(v1723);
        v167 = *((_DWORD *)v59 + 6) << 15;
        goto LABEL_349;
      case 8:
        v130 = *((_QWORD *)v59 + 3);
        v131 = *((_WORD *)v59 + 17);
        if ( *(_WORD *)(v130 + *(_QWORD *)(v16 + 1728) + *(_QWORD *)(v16 + 1776)) != v131 && !*(_DWORD *)(v16 + 2240) )
        {
          *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v16 + 2264) = *(int *)v59;
          *(_QWORD *)(v16 + 2272) = v130;
          *(_DWORD *)(v16 + 2240) = 1;
          __b9(v16, 0LL, v57, v58);
          v131 = *((_WORD *)v59 + 17);
        }
        if ( (v131 & *(_WORD *)(v16 + 1784)) == 0
          && *(_QWORD *)(v130 + *(_QWORD *)(v16 + 1736)) != v130 + *(_QWORD *)(v16 + 1736)
          && !*(_DWORD *)(v16 + 2240) )
        {
          *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v16 + 2264) = *(int *)v59;
          *(_QWORD *)(v16 + 2272) = v130;
          *(_DWORD *)(v16 + 2240) = 1;
          __b9(v16, 0LL, v57, v58);
        }
        v132 = (_QWORD *)*((_QWORD *)v59 + 1);
        v133 = *((unsigned int *)v59 + 4);
        v134 = v132;
        *(_DWORD *)(v16 + 2032) += v133;
        v135 = (const char *)v132;
        v136 = *(_DWORD *)(v16 + 2012);
        v137 = *(_QWORD *)(v16 + 2016);
        if ( v132 < (_QWORD *)((char *)v132 + v133) )
        {
          do
          {
            _mm_prefetch(v135, 0);
            v135 += 64;
          }
          while ( v135 < (const char *)v132 + v133 );
        }
        v138 = *(_QWORD *)(v16 + 2016);
        v139 = (unsigned int)v133 >> 7;
        if ( (unsigned int)v133 >> 7 )
        {
          do
          {
            v140 = 8LL;
            do
            {
              v141 = v134[1] ^ __ROL8__(*v134 ^ v138, v136);
              v134 += 2;
              v138 = __ROL8__(v141, v136);
              --v140;
            }
            while ( v140 );
            v142 = (__ROL8__(v137 ^ ((char *)v134 - (char *)v132), 17) ^ v137 ^ (unsigned __int64)((char *)v134
                                                                                                 - (char *)v132))
                 * (unsigned __int128)0x7010008004002001uLL;
            v1717 = *((_QWORD *)&v142 + 1);
            v136 = (BYTE8(v142) ^ (unsigned __int8)(v142 ^ v136)) & 0x3F;
            if ( !v136 )
              LOBYTE(v136) = 1;
            --v139;
          }
          while ( v139 );
          v16 = v1550;
        }
        v143 = v133 & 0x7F;
        if ( (unsigned int)v143 >= 8 )
        {
          v144 = (unsigned __int64)(unsigned int)v143 >> 3;
          do
          {
            v138 = __ROL8__(*v134++ ^ v138, v136);
            v143 = (unsigned int)(v143 - 8);
            --v144;
          }
          while ( v144 );
        }
        for ( ; (_DWORD)v143; v143 = (unsigned int)(v143 - 1) )
        {
          v145 = *(unsigned __int8 *)v134;
          v134 = (_QWORD *)((char *)v134 + 1);
          v138 = __ROL8__(v145 ^ v138, v136);
        }
        for ( i30 = v138; ; LODWORD(v138) = i30 ^ v138 )
        {
          i30 >>= 31;
          if ( !i30 )
            break;
        }
        v147 = v138 & 0x7FFFFFFF;
        if ( v147 == *((_DWORD *)v59 + 5) )
          goto LABEL_325;
        if ( !*(_DWORD *)v59 && *((_DWORD *)v59 + 6) )
          v64 = 1;
        v148 = *((unsigned int *)v59 + 4);
        v149 = *((_QWORD *)v59 + 1);
        if ( *((_DWORD *)v59 + 4) )
        {
          v143 = 64LL;
          if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
          {
            v150 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v151 = v149 & 0xFFFFFFFFFFFFF000uLL;
            v1757 = (v149 + v148 - 1) | 0xFFF;
            v152 = (v149 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v153 = v150;
              while ( 1 )
              {
                v154 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v16 + 1112))(
                         v151,
                         0LL,
                         v143,
                         v134);
                if ( v154 != -1073741267 )
                  break;
                if ( v64 )
                  goto LABEL_330;
                if ( v150 > 1u )
                  goto LABEL_323;
                v153 = v150;
                __writecr8(v150);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v154 < 0 )
                break;
LABEL_323:
              v151 += 4096LL;
              v152 += 4096LL;
              if ( v152 == v1757 )
              {
                __writecr8(v153);
                v59 = (char *)v1549;
LABEL_325:
                v1648 = v59 + 48;
                v1647[0] = *((_WORD *)v59 + 16);
                LOBYTE(v1547) = 0;
                v1647[1] = v1647[0];
                if ( (*(int (__fastcall **)(_WORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, __int64 *))(v16 + 472))(
                       v1647,
                       0LL,
                       0LL,
                       0LL,
                       *(_QWORD *)(v16 + 1248),
                       v1547,
                       0LL,
                       &v1623) >= 0 )
                {
                  v157 = v1623;
                  if ( v1623 != *((_QWORD *)v59 + 3) && !*(_DWORD *)(v16 + 2240) )
                  {
                    *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v16 + 2264) = *(int *)v59;
                    *(_QWORD *)(v16 + 2272) = v157;
                    *(_DWORD *)(v16 + 2240) = 1;
                    __b9(v16, 0LL, v155, v156);
                  }
                  (*(void (**)(void))(v16 + 464))();
                }
                goto LABEL_147;
              }
            }
LABEL_330:
            __writecr8(v153);
            v59 = (char *)v1549;
          }
        }
        if ( !*(_DWORD *)(v16 + 2240) )
        {
          *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = *((unsigned int *)v59 + 5) ^ (unsigned __int64)v147;
          v158 = *((_QWORD *)v59 + 1);
          if ( !*(_DWORD *)(v16 + 2240) )
          {
            *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v16 + 2264) = *(int *)v59;
            *(_QWORD *)(v16 + 2272) = v158;
            *(_DWORD *)(v16 + 2240) = 1;
            __b9(v16, 0LL, v143, v134);
          }
        }
        goto LABEL_325;
    }
    v49 = (unsigned int)(v69 - 10);
    if ( v69 == 10 )
    {
      if ( *((_DWORD *)v59 + 6) )
      {
        if ( !*(_QWORD *)(v16 + 2376) )
          goto LABEL_242;
        v49 = *(unsigned int *)(v16 + 2396);
        if ( (v49 & 4) != 0 )
          goto LABEL_242;
        v99 = *(_DWORD *)(v16 + 2028);
        if ( v99 )
        {
          if ( (v49 & 0x20) != 0 )
            goto LABEL_242;
        }
        else
        {
          *(_DWORD *)(v16 + 2396) = v49 ^ ((unsigned __int8)v49 ^ (unsigned __int8)(8 * v49)) & 0x20;
        }
      }
      else
      {
        v99 = *(_DWORD *)(v16 + 2028);
      }
      v101 = (unsigned int *)&v59[16 * v99 + 48];
      v102 = (unsigned __int64)&v59[16 * *((unsigned int *)v59 + 7) + 48];
      v1756 = v102;
      do
      {
        if ( (*v101 & 0x80000000) != 0 )
          goto LABEL_275;
        v103 = *((_QWORD *)v101 + 1);
        v104 = v101[1];
        v105 = (_QWORD *)v103;
        *(_DWORD *)(v16 + 2032) += v104;
        v106 = (const char *)v103;
        v107 = *(_DWORD *)(v16 + 2012);
        v108 = (unsigned int)v104;
        v109 = *(_QWORD *)(v16 + 2016);
        v1553 = v103;
        if ( v103 < v104 + v103 )
        {
          do
          {
            _mm_prefetch(v106, 0);
            v106 += 64;
          }
          while ( (unsigned __int64)v106 < v104 + v103 );
        }
        v110 = v109;
        v111 = (unsigned int)v104 >> 7;
        if ( (unsigned int)v104 >> 7 )
        {
          do
          {
            v112 = 8LL;
            do
            {
              v113 = v110 ^ *v105;
              v114 = v105[1];
              v105 += 2;
              v110 = __ROL8__(__ROL8__(v113, v107) ^ v114, v107);
              --v112;
            }
            while ( v112 );
            v115 = __ROL8__(v109 ^ ((unsigned __int64)v105 - v103), 17) ^ v109 ^ ((unsigned __int64)v105 - v103);
            v1716 = (v115 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v107 = ((unsigned __int8)v1716 ^ (unsigned __int8)(v115 ^ v107)) & 0x3F;
            if ( !v107 )
              LOBYTE(v107) = 1;
            --v111;
          }
          while ( v111 );
          v16 = v1550;
          v102 = v1756;
        }
        v116 = v104 & 0x7F;
        if ( (unsigned int)v116 >= 8 )
        {
          v117 = (unsigned __int64)(unsigned int)v116 >> 3;
          do
          {
            v110 = __ROL8__(*v105++ ^ v110, v107);
            v116 = (unsigned int)(v116 - 8);
            --v117;
          }
          while ( v117 );
        }
        if ( (_DWORD)v116 )
        {
          do
          {
            v118 = *(unsigned __int8 *)v105;
            v105 = (_QWORD *)((char *)v105 + 1);
            v110 = __ROL8__(v118 ^ v110, v107);
            v116 = (unsigned int)(v116 - 1);
          }
          while ( (_DWORD)v116 );
          v16 = v1550;
        }
        for ( i31 = v110; ; LODWORD(v110) = i31 ^ v110 )
        {
          i31 >>= 31;
          if ( !i31 )
            break;
        }
        v49 = *v101;
        v120 = v110 & 0x7FFFFFFF;
        if ( v120 == (*v101 & 0x7FFFFFFF) )
          goto LABEL_275;
        if ( v108 && (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
        {
          v121 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v122 = v103 & 0xFFFFFFFFFFFFF000uLL;
          v1555 = (v108 + v103 - 1) | 0xFFF;
          v123 = (v103 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 1 )
          {
            v124 = v121;
            while ( 1 )
            {
              v125 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v16 + 1112))(
                       v122,
                       0LL,
                       v116,
                       v105);
              if ( v125 != -1073741267 )
                break;
              if ( v121 > 1u )
                goto LABEL_273;
              v124 = v121;
              __writecr8(v121);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v125 < 0 )
              break;
LABEL_273:
            v122 += 4096LL;
            v123 += 4096LL;
            if ( v123 == v1555 )
            {
              __writecr8(v124);
              v102 = v1756;
              goto LABEL_275;
            }
          }
          __writecr8(v124);
          v49 = *v101;
          v103 = v1553;
          v102 = v1756;
        }
        v128 = (unsigned int)v49;
        LODWORD(v128) = v49 & 0x7FFFFFFF;
        if ( *(_DWORD *)(v16 + 2240) )
        {
LABEL_275:
          v126 = v1549;
        }
        else
        {
          v129 = v120;
          v126 = v1549;
          v49 = v128 ^ v129;
          *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v49;
          if ( !*(_DWORD *)(v16 + 2240) )
          {
            *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v16 + 2256) = (char *)v126 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v16 + 2264) = *v126;
            *(_QWORD *)(v16 + 2272) = v103;
            *(_DWORD *)(v16 + 2240) = 1;
            __b9(v16, 0LL, v116, v105);
          }
        }
        v101 += 4;
        v127 = v101 == (unsigned int *)v102;
        if ( (unsigned __int64)v101 >= v102 )
          goto LABEL_279;
      }
      while ( *(_DWORD *)(v16 + 2032) < *(_DWORD *)(v16 + 2036) );
      v127 = v101 == (unsigned int *)v102;
LABEL_279:
      if ( !v127 )
      {
        v100 = ((char *)v101 - (char *)(v126 + 12)) >> 4;
        goto LABEL_281;
      }
LABEL_242:
      LODWORD(v100) = 0;
LABEL_281:
      *(_DWORD *)(v16 + 2028) = v100;
      goto LABEL_147;
    }
    if ( v69 != 11 )
      goto LABEL_2296;
    if ( !*(_QWORD *)(v16 + 2376) )
      goto LABEL_1747;
    if ( *(_DWORD *)(v16 + 2028) )
    {
      v49 = *(unsigned int *)(v16 + 2396);
      if ( (((unsigned __int8)v49 ^ (unsigned __int8)(*(_DWORD *)(v16 + 2396) >> 3)) & 4) != 0 )
        goto LABEL_1747;
    }
    else
    {
      LODWORD(v49) = *(_DWORD *)(v16 + 2396) ^ ((unsigned __int8)*(_DWORD *)(v16 + 2396) ^ (unsigned __int8)(8 * *(_DWORD *)(v16 + 2396))) & 0x20;
      *(_DWORD *)(v16 + 2396) = v49;
    }
    if ( (v49 & 4) != 0 )
    {
      v49 = *((_DWORD *)v59 + 2) & 0xFFF;
      v70 = *((_QWORD *)v59 + 1) & 0xFFFFFFFFFFFFF000uLL;
      v71 = (v49 + *((unsigned int *)v59 + 4) + 4095LL) >> 12;
      while ( v71 )
      {
        --v71;
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v16 + 672))(v70) && !*(_DWORD *)(v16 + 2240) )
        {
          *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v16 + 2264) = *(int *)v59;
          *(_QWORD *)(v16 + 2272) = v70;
          *(_DWORD *)(v16 + 2240) = 1;
          __b9(v16, 0LL, v72, v73);
        }
        v70 += 4096LL;
        *(_DWORD *)(v16 + 2032) += 256;
      }
      goto LABEL_147;
    }
    v74 = (const char *)*((_QWORD *)v59 + 1);
    v75 = *((unsigned int *)v59 + 4);
    v76 = (__int64)v74;
    *(_DWORD *)(v16 + 2032) += v75;
    v77 = v74;
    v78 = *(_DWORD *)(v16 + 2012);
    v79 = *(_QWORD *)(v16 + 2016);
    v49 = (unsigned __int64)&v74[v75];
    if ( v74 < &v74[v75] )
    {
      do
      {
        _mm_prefetch(v77, 0);
        v77 += 64;
      }
      while ( (unsigned __int64)v77 < v49 );
    }
    v80 = *(_QWORD *)(v16 + 2016);
    v81 = (unsigned int)v75 >> 7;
    if ( (unsigned int)v75 >> 7 )
    {
      do
      {
        v82 = 8LL;
        do
        {
          v83 = v80 ^ *(_QWORD *)v76;
          v84 = *(_QWORD *)(v76 + 8);
          v76 += 16LL;
          v80 = __ROL8__(__ROL8__(v83, v78) ^ v84, v78);
          --v82;
        }
        while ( v82 );
        v49 = __ROL8__(v79 ^ (v76 - (_QWORD)v74), 17) ^ v79 ^ (v76 - (_QWORD)v74);
        v1715 = (v49 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v78 = ((unsigned __int8)v1715 ^ (unsigned __int8)(v49 ^ v78)) & 0x3F;
        if ( !v78 )
          v78 = 1;
        --v81;
      }
      while ( v81 );
      v16 = v1550;
    }
    v85 = v75 & 0x7F;
    if ( v85 >= 8 )
    {
      v86 = (unsigned __int64)v85 >> 3;
      do
      {
        v49 = v78;
        v80 = __ROL8__(*(_QWORD *)v76 ^ v80, v78);
        v76 += 8LL;
        v85 -= 8;
        --v86;
      }
      while ( v86 );
    }
    if ( v85 )
    {
      do
      {
        v87 = *(unsigned __int8 *)v76;
        v49 = v78;
        ++v76;
        v80 = __ROL8__(v87 ^ v80, v78);
        --v85;
      }
      while ( v85 );
      v16 = v1550;
    }
    for ( i32 = v80; ; LODWORD(v80) = i32 ^ v80 )
    {
      i32 >>= 31;
      if ( !i32 )
        break;
    }
    v89 = *((_DWORD *)v59 + 5);
    v90 = v80 & 0x7FFFFFFF;
    if ( v90 != v89 )
    {
      v49 = *((unsigned int *)v59 + 4);
      v91 = *((_QWORD *)v59 + 1);
      if ( *((_DWORD *)v59 + 4) )
      {
        v76 = 64LL;
        if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
        {
          v92 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v93 = v91 & 0xFFFFFFFFFFFFF000uLL;
          v94 = (v91 + v49 - 1) | 0xFFF;
          v95 = (v91 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v96 = v92;
            while ( 1 )
            {
              v97 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v16 + 1112))(v93, 0LL);
              if ( v97 != -1073741267 )
                break;
              if ( v92 > 1u )
                goto LABEL_228;
              v96 = v92;
              __writecr8(v92);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v97 < 0 )
            {
              __writecr8(v96);
              v59 = (char *)v1549;
              v89 = v1549[5];
              goto LABEL_231;
            }
LABEL_228:
            v93 += 4096LL;
            v95 += 4096LL;
            if ( v95 != v94 )
              continue;
            break;
          }
LABEL_229:
          __writecr8(v96);
          goto LABEL_147;
        }
      }
LABEL_231:
      if ( *(_DWORD *)(v16 + 2240) )
        goto LABEL_147;
      *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v89 ^ (unsigned __int64)v90;
      v49 = *((_QWORD *)v59 + 1);
      v98 = *(_DWORD *)(v16 + 2240) == 0;
LABEL_233:
      if ( v98 )
      {
        *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v16 + 2264) = *(int *)v59;
        *(_QWORD *)(v16 + 2272) = v49;
        *(_DWORD *)(v16 + 2240) = 1;
        __b9(v16, 0LL, v91, v76);
      }
    }
LABEL_147:
    v47 = 0xFFFFFFFFLL;
    v65 = v1568;
    if ( *(_DWORD *)(v16 + 2028) )
      v65 = v1568 - 1;
    v51 = v65 + 1;
    v66 = *(_DWORD *)(v16 + 2240) == 0;
    v7 = 1;
    v1568 = v51;
    if ( !v66 || *(_DWORD *)(v16 + 2032) >= *(_DWORD *)(v16 + 2036) )
    {
      LODWORD(v49) = v1568;
      goto LABEL_2473;
    }
    v50 = v1585;
    v52 = v1593;
    v53 = v1576;
  }
  ++*(_DWORD *)(v16 + 2040);
  LODWORD(v49) = 0;
  if ( *(_DWORD *)(v16 + 2336) != 11 || (v1506 = *(_DWORD *)(v16 + 2392), (v1506 & 1) != 0) )
  {
LABEL_2473:
    v12 = (__int64)v1572;
    v2 = a2;
    v13 = v1578;
  }
  else
  {
    v13 = v1578;
    v2 = a2;
    v12 = (__int64)v1572;
    if ( *(_DWORD *)(v16 + 2360) == -1 )
      *(_DWORD *)(v16 + 2360) = 0;
    else
      *(_DWORD *)(v16 + 2392) = v1506 | 1;
  }
LABEL_2474:
  *(_DWORD *)(v16 + 2024) = v49;
  if ( v1569 )
  {
    v1507 = *(_QWORD *)(*(_QWORD *)(v16 + 1656)
                      + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v16 + 1560))
                      + *(_QWORD *)(v16 + 1624));
    (*(void (__fastcall **)(_BYTE *))(v16 + 392))(v1735);
    (*(void (__fastcall **)(_BYTE *))(v16 + 1072))(v1750);
    (*(void (__fastcall **)(__int64))(v16 + 920))(v1507);
    (*(void (__fastcall **)(__int64))(v16 + 936))(v1507);
  }
  if ( v1584 && ((*(_DWORD *)(v16 + 2392) & 0x8000) != 0 || !*(_DWORD *)(v16 + 2240)) )
  {
    v1508 = *(_QWORD *)(v16 + 2376);
    *(_QWORD *)(v16 + 2376) = 0LL;
    (*(void (__fastcall **)(__int64, _BYTE *))(v16 + 648))(v1508, v1750);
    v1509 = *(_DWORD *)(v16 + 2392);
    if ( (v1509 & 1) != 0 )
    {
      *(_DWORD *)(v16 + 2392) = v1509 & 0xFFFFFFFE;
      v1508 = (*(__int64 (__fastcall **)(__int64))(v16 + 624))(v1508);
      if ( v1508 )
      {
        *(_DWORD *)(v16 + 2360) = (*(__int64 (__fastcall **)(__int64))(v16 + 656))(v1508);
        goto LABEL_2484;
      }
      *(_DWORD *)(v16 + 2360) = -1;
    }
    else if ( v1508 )
    {
LABEL_2484:
      (*(void (__fastcall **)(__int64))(v16 + 632))(v1508);
    }
  }
  if ( *(_DWORD *)(v13 + 2240) )
  {
    v1510 = *(_QWORD *)(v13 + 2264);
    v1511 = *(_QWORD *)(v13 + 2272);
    v1512 = *(_QWORD *)(v13 + 2256);
    v1513 = *(_QWORD *)(v13 + 2248);
    v1555 = v1511;
    v1565 = v1512;
    v1594 = v1513;
    if ( KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v1514 = KeGetCurrentPrcb();
    v1515 = 0LL;
    v1516 = *(_QWORD *)((char *)&v1514->MxCsr + *(_QWORD *)(v13 + 1544));
    v1517 = *(_QWORD *)((char *)&v1514->MxCsr + *(_QWORD *)(v13 + 1560));
    if ( !*((_BYTE *)&v1514->MxCsr + *(_QWORD *)(v13 + 1552))
      || (unsigned __int64)&v1625 > v1516
      || (unsigned __int64)&v1625 < v1516 - 24576 )
    {
      v1516 = *(_QWORD *)(v1517 + *(_QWORD *)(v13 + 1608));
    }
    if ( (*(_DWORD *)(v13 + 2392) & 0x8000000) == 0 )
    {
      v1518 = __readcr0();
      __writecr0(v1518 & 0xFFFFFFFFFFFEFFFFuLL);
      v1519 = v1572;
      v1520 = 0;
      v1521 = v1572 + 169;
      v1522 = (unsigned __int64)&v1572[*((unsigned int *)&v1572[168].Next + 2) + 169];
      v1523 = (_QWORD *)v1522;
      if ( *((_DWORD *)&v1572[168].Next + 3) )
      {
        do
        {
          *(_QWORD *)*v1523 = v1523[1];
          v1524 = __readcr4();
          if ( (v1524 & 0x20080) != 0 )
          {
            __writecr4(v1524 ^ 0x80);
            __writecr4(v1524);
          }
          else
          {
            v1525 = __readcr3();
            __writecr3(v1525);
          }
          v1523 += 2;
          ++v1520;
        }
        while ( v1520 < *((_DWORD *)&v1519[168].Next + 3) );
        LODWORD(v1511) = v1555;
      }
      if ( (unsigned __int64)v1521 < v1522 )
      {
        do
        {
          v1526 = *((unsigned int *)&v1521->Next + 2);
          v1527 = v1523;
          Next = (char *)v1521->Next;
          v1529 = v1526;
          if ( (unsigned int)v1526 >= 8 )
          {
            v1515 = (unsigned __int64)(unsigned int)v1526 >> 3;
            do
            {
              v1529 -= 8;
              *(_QWORD *)Next = *v1527++;
              Next += 8;
              --v1515;
            }
            while ( v1515 );
          }
          if ( v1529 )
          {
            v1530 = Next - (char *)v1527;
            do
            {
              *((_BYTE *)v1527 + v1530) = *(_BYTE *)v1527;
              v1527 = (_QWORD *)((char *)v1527 + 1);
              --v1529;
            }
            while ( v1529 );
          }
          v1523 = (_QWORD *)((char *)v1523 + v1526);
          ++v1521;
        }
        while ( (unsigned __int64)v1521 < v1522 );
        LODWORD(v1511) = v1555;
        LODWORD(v1512) = v1565;
        v1519 = v1572;
      }
      **((_BYTE **)&v1519[34].Next + 1) = -61;
      __writecr0(v1518);
      LODWORD(v1513) = v1594;
      v13 = v1578;
    }
    v1538 = *(_DWORD *)(v13 + 2288);
    if ( v1538 )
    {
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v1538 = *(_DWORD *)(v13 + 2288);
      }
      if ( v1538 )
      {
        v1539 = v1538 - 1;
        if ( v1539 )
        {
          v1540 = v1539 - 1;
          if ( v1540 )
          {
            v1541 = v1540 - 1;
            if ( v1541 )
            {
              v1542 = v1541 - 1;
              if ( v1542 )
              {
                if ( v1542 == 1 )
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v13 + 1560)),
                    (*(_DWORD *)(v13 + 2392) >> 10) & 0x1F);
                else
                  _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v13 + 1424) + 832LL), 1uLL);
              }
              else
              {
                _interlockedbittestandset(
                  *(volatile signed __int32 **)(*(_QWORD *)(v13 + 1656)
                                              + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v13 + 1560))
                                              + *(_QWORD *)(v13 + 1624)),
                  (*(_DWORD *)(v13 + 2392) >> 10) & 0x1F);
              }
              goto LABEL_2548;
            }
            v1543 = *(volatile signed __int32 **)(v13 + 1336);
          }
          else
          {
            v1543 = *(volatile signed __int32 **)(v13 + 1328);
          }
        }
        else
        {
          v1543 = *(volatile signed __int32 **)(v13 + 1312);
        }
        _interlockedbittestandset64(v1543, 0LL);
      }
    }
LABEL_2548:
    *(_QWORD *)(v1517 + *(_QWORD *)(v13 + 1632)) = v1515;
    *(_QWORD *)(v1517 + *(_QWORD *)(v13 + 1648)) = v1515;
    SdbpCheckDll(265, v1513, v1512, v1511, v1510, *(_QWORD *)(v13 + 328), v1516);
    __debugbreak();
  }
  if ( *(_DWORD *)(v13 + 2028) || *(_DWORD *)(v13 + 2024) )
  {
    v1531 = -1073741802;
    *(_DWORD *)v2 = *(_DWORD *)(v13 + 2024);
    *(_DWORD *)(v2 + 4) = *(_DWORD *)(v13 + 2028);
  }
  else
  {
    v1531 = *(_QWORD *)(v2 + 8) == 0LL ? 0xC0000225 : 0;
  }
  if ( v1594 == 2744 )
    ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&Lookaside, (PVOID)v12);
  else
    ExFreePoolWithTag((PVOID)v12, v47);
  return v1531;
}
