/*
 * XREFs of ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C019138C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C018F684 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000903C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000C2B4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0039C84 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0039D30 (-SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0039DD4 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003A3F8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C003A9C0 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0133E18 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiGetPnpRegistryKeyName @ 0x1C0174C10 (DpiGetPnpRegistryKeyName.c)
 *     ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C020CECC (-DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ.c)
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0213D90 (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0216CAC (-InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiEnablePowerManagement @ 0x1C02C69EC (DpiEnablePowerManagement.c)
 */

__int64 __fastcall DXGADAPTER::InitializePowerManagement(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  unsigned int v7; // r15d
  bool v8; // cc
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int16 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  char *v15; // rax
  __int16 v16; // r9
  _WORD *v17; // rax
  bool v18; // zf
  __int64 v19; // rcx
  unsigned int v20; // esi
  unsigned int v21; // r12d
  __int64 v22; // rax
  DXGADAPTER *v23; // rcx
  __int64 v24; // r8
  int AdapterInfo; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  SIZE_T v28; // rax
  PVOID v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rax
  _QWORD *v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned int v38; // r14d
  unsigned int v39; // edi
  __int64 v40; // r13
  __int64 v41; // rax
  int v42; // edx
  unsigned int v43; // eax
  __int64 v44; // r12
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int16 v50; // dx
  __int64 v51; // rdx
  __int64 v52; // rdi
  unsigned int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rcx
  void *v59; // rcx
  char *v60; // rdx
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rcx
  unsigned int v68; // ecx
  SIZE_T v69; // rax
  PVOID v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  unsigned int v79; // edx
  __int64 j; // r8
  __int64 v81; // r10
  __int64 v82; // r9
  unsigned int v83; // edx
  __int64 v84; // rax
  __int64 v85; // rdi
  int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r14
  int v90; // eax
  __int64 v91; // rax
  unsigned int v92; // ecx
  __int64 v93; // rdx
  __int64 v94; // rax
  void *v95; // rcx
  unsigned int v96; // r12d
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // rcx
  __int64 v100; // rax
  unsigned int v101; // r9d
  __int64 v102; // r14
  unsigned int v103; // edi
  __int64 v104; // r11
  unsigned int v105; // r10d
  ADAPTER_RENDER *v106; // rcx
  int v107; // eax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rax
  ADAPTER_DISPLAY *v111; // rcx
  int v112; // eax
  __int64 v113; // rdx
  __int64 v114; // rcx
  _QWORD *v115; // r13
  int v116; // eax
  __int64 v117; // rdx
  __int64 v118; // rcx
  ULONG TimeIncrement; // eax
  __int64 v120; // rcx
  unsigned __int64 v121; // r8
  __int64 v122; // rax
  unsigned __int64 v123; // rtt
  __int64 v124; // rdx
  __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rax
  unsigned __int64 v134; // rtt
  __int64 v135; // rax
  unsigned __int64 v136; // rtt
  __int64 v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rax
  unsigned __int64 v140; // rtt
  __int64 v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rax
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rcx
  __int64 v151; // rax
  __int64 v152; // rcx
  __int64 v153; // rax
  __int64 v154; // rcx
  __int64 v155; // rax
  __int64 v156; // rcx
  __int64 v157; // rax
  unsigned int v158; // r12d
  __int64 v159; // r14
  __int64 v160; // rdi
  DXGADAPTER *v161; // rdx
  int v162; // ecx
  int v163; // ecx
  int v164; // ecx
  int v165; // ecx
  int v166; // ecx
  int v167; // ecx
  unsigned int v168; // edx
  DXGADAPTER *v169; // rcx
  __int64 v170; // r8
  DXGADAPTER **v171; // rcx
  __int64 v172; // rax
  DXGADAPTER **v173; // rcx
  unsigned __int64 v174; // rcx
  unsigned int v175; // eax
  unsigned __int64 *v176; // rdx
  __int64 v177; // r8
  unsigned __int64 v178; // rax
  bool v179; // cf
  unsigned __int64 *v180; // rdx
  unsigned int v181; // eax
  unsigned int v182; // edx
  __int64 v183; // r8
  __int64 v184; // rcx
  __int64 v185; // rax
  __int64 v186; // r8
  struct _SLIST_ENTRY *v187; // rdi
  __int64 v188; // r15
  NTSTATUS v189; // eax
  __int64 v190; // rdx
  __int64 v191; // rcx
  int v192; // eax
  __int64 v193; // rdx
  __int64 v194; // rcx
  PCLIENT_ID ClientId; // [rsp+28h] [rbp-E0h]
  char v196; // [rsp+48h] [rbp-C0h]
  unsigned int v197; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v198; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v199; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v200; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v201; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v202; // [rsp+68h] [rbp-A0h] BYREF
  int v203; // [rsp+6Ch] [rbp-9Ch] BYREF
  BOOL v204; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v205; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v206; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v207; // [rsp+7Ch] [rbp-8Ch]
  unsigned int v208; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v209; // [rsp+84h] [rbp-84h] BYREF
  void *i; // [rsp+88h] [rbp-80h] BYREF
  int v211; // [rsp+90h] [rbp-78h] BYREF
  int v212; // [rsp+94h] [rbp-74h] BYREF
  int v213; // [rsp+98h] [rbp-70h] BYREF
  int v214; // [rsp+9Ch] [rbp-6Ch] BYREF
  unsigned int v215; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v216; // [rsp+A4h] [rbp-64h] BYREF
  unsigned int v217; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v218; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v219; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v220; // [rsp+B4h] [rbp-54h] BYREF
  unsigned int v221; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v222; // [rsp+BCh] [rbp-4Ch] BYREF
  unsigned int v223; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v224; // [rsp+C4h] [rbp-44h] BYREF
  unsigned int v225; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v226; // [rsp+CCh] [rbp-3Ch] BYREF
  unsigned int v227; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v228; // [rsp+D4h] [rbp-34h] BYREF
  unsigned int v229; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v230; // [rsp+DCh] [rbp-2Ch] BYREF
  int v231; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v232; // [rsp+E4h] [rbp-24h] BYREF
  unsigned int v233; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v234; // [rsp+ECh] [rbp-1Ch] BYREF
  unsigned int v235; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v236; // [rsp+F4h] [rbp-14h] BYREF
  unsigned int v237; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v238; // [rsp+FCh] [rbp-Ch] BYREF
  unsigned int v239; // [rsp+100h] [rbp-8h] BYREF
  unsigned int v240; // [rsp+104h] [rbp-4h] BYREF
  unsigned int v241; // [rsp+108h] [rbp+0h] BYREF
  int v242; // [rsp+10Ch] [rbp+4h] BYREF
  int v243; // [rsp+110h] [rbp+8h] BYREF
  int v244; // [rsp+114h] [rbp+Ch] BYREF
  int v245; // [rsp+118h] [rbp+10h] BYREF
  int v246; // [rsp+11Ch] [rbp+14h] BYREF
  int v247; // [rsp+120h] [rbp+18h] BYREF
  int v248; // [rsp+124h] [rbp+1Ch] BYREF
  int v249; // [rsp+128h] [rbp+20h] BYREF
  int v250; // [rsp+12Ch] [rbp+24h] BYREF
  int v251; // [rsp+130h] [rbp+28h] BYREF
  int v252; // [rsp+134h] [rbp+2Ch] BYREF
  int v253; // [rsp+138h] [rbp+30h] BYREF
  int v254; // [rsp+13Ch] [rbp+34h] BYREF
  int v255; // [rsp+140h] [rbp+38h] BYREF
  int v256; // [rsp+144h] [rbp+3Ch] BYREF
  int v257; // [rsp+148h] [rbp+40h] BYREF
  int v258; // [rsp+14Ch] [rbp+44h] BYREF
  int v259; // [rsp+150h] [rbp+48h] BYREF
  int v260; // [rsp+154h] [rbp+4Ch] BYREF
  int v261; // [rsp+158h] [rbp+50h] BYREF
  int v262; // [rsp+15Ch] [rbp+54h] BYREF
  int v263; // [rsp+160h] [rbp+58h] BYREF
  int v264; // [rsp+164h] [rbp+5Ch] BYREF
  int v265; // [rsp+168h] [rbp+60h] BYREF
  int v266; // [rsp+16Ch] [rbp+64h] BYREF
  int v267; // [rsp+170h] [rbp+68h] BYREF
  int v268; // [rsp+174h] [rbp+6Ch] BYREF
  int v269; // [rsp+178h] [rbp+70h] BYREF
  int v270; // [rsp+17Ch] [rbp+74h] BYREF
  int v271; // [rsp+180h] [rbp+78h] BYREF
  int v272; // [rsp+184h] [rbp+7Ch] BYREF
  int v273; // [rsp+188h] [rbp+80h] BYREF
  int v274; // [rsp+18Ch] [rbp+84h] BYREF
  int v275; // [rsp+190h] [rbp+88h] BYREF
  int v276; // [rsp+194h] [rbp+8Ch] BYREF
  int v277; // [rsp+198h] [rbp+90h] BYREF
  int v278; // [rsp+19Ch] [rbp+94h] BYREF
  int v279; // [rsp+1A0h] [rbp+98h] BYREF
  int v280; // [rsp+1A4h] [rbp+9Ch] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v282; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v283; // [rsp+208h] [rbp+100h]
  __int64 v284; // [rsp+218h] [rbp+110h] BYREF
  int v285; // [rsp+220h] [rbp+118h]
  const wchar_t *v286; // [rsp+228h] [rbp+120h]
  BOOL *v287; // [rsp+230h] [rbp+128h]
  int v288; // [rsp+238h] [rbp+130h]
  int *v289; // [rsp+240h] [rbp+138h]
  int v290; // [rsp+248h] [rbp+140h]
  __int64 v291; // [rsp+250h] [rbp+148h]
  int v292; // [rsp+258h] [rbp+150h]
  __int128 v293; // [rsp+260h] [rbp+158h]
  __int128 v294; // [rsp+270h] [rbp+168h]
  __int64 v295; // [rsp+280h] [rbp+178h]
  __int64 v296; // [rsp+288h] [rbp+180h] BYREF
  int v297; // [rsp+290h] [rbp+188h]
  const wchar_t *v298; // [rsp+298h] [rbp+190h]
  __int64 *v299; // [rsp+2A0h] [rbp+198h]
  int v300; // [rsp+2A8h] [rbp+1A0h]
  int *v301; // [rsp+2B0h] [rbp+1A8h]
  int v302; // [rsp+2B8h] [rbp+1B0h]
  __int64 v303; // [rsp+2C0h] [rbp+1B8h]
  int v304; // [rsp+2C8h] [rbp+1C0h]
  const wchar_t *v305; // [rsp+2D0h] [rbp+1C8h]
  unsigned int *v306; // [rsp+2D8h] [rbp+1D0h]
  int v307; // [rsp+2E0h] [rbp+1D8h]
  int *v308; // [rsp+2E8h] [rbp+1E0h]
  int v309; // [rsp+2F0h] [rbp+1E8h]
  __int64 v310; // [rsp+2F8h] [rbp+1F0h]
  int v311; // [rsp+300h] [rbp+1F8h]
  const wchar_t *v312; // [rsp+308h] [rbp+200h]
  unsigned int *v313; // [rsp+310h] [rbp+208h]
  int v314; // [rsp+318h] [rbp+210h]
  int *v315; // [rsp+320h] [rbp+218h]
  int v316; // [rsp+328h] [rbp+220h]
  __int64 v317; // [rsp+330h] [rbp+228h]
  int v318; // [rsp+338h] [rbp+230h]
  const wchar_t *v319; // [rsp+340h] [rbp+238h]
  unsigned int *v320; // [rsp+348h] [rbp+240h]
  int v321; // [rsp+350h] [rbp+248h]
  int *v322; // [rsp+358h] [rbp+250h]
  int v323; // [rsp+360h] [rbp+258h]
  __int64 v324; // [rsp+368h] [rbp+260h]
  int v325; // [rsp+370h] [rbp+268h]
  const wchar_t *v326; // [rsp+378h] [rbp+270h]
  unsigned int *v327; // [rsp+380h] [rbp+278h]
  int v328; // [rsp+388h] [rbp+280h]
  int *v329; // [rsp+390h] [rbp+288h]
  int v330; // [rsp+398h] [rbp+290h]
  __int64 v331; // [rsp+3A0h] [rbp+298h]
  int v332; // [rsp+3A8h] [rbp+2A0h]
  const wchar_t *v333; // [rsp+3B0h] [rbp+2A8h]
  unsigned int *v334; // [rsp+3B8h] [rbp+2B0h]
  int v335; // [rsp+3C0h] [rbp+2B8h]
  int *v336; // [rsp+3C8h] [rbp+2C0h]
  int v337; // [rsp+3D0h] [rbp+2C8h]
  __int64 v338; // [rsp+3D8h] [rbp+2D0h]
  int v339; // [rsp+3E0h] [rbp+2D8h]
  const wchar_t *v340; // [rsp+3E8h] [rbp+2E0h]
  unsigned int *v341; // [rsp+3F0h] [rbp+2E8h]
  int v342; // [rsp+3F8h] [rbp+2F0h]
  int *v343; // [rsp+400h] [rbp+2F8h]
  int v344; // [rsp+408h] [rbp+300h]
  __int64 v345; // [rsp+410h] [rbp+308h]
  int v346; // [rsp+418h] [rbp+310h]
  const wchar_t *v347; // [rsp+420h] [rbp+318h]
  unsigned int *v348; // [rsp+428h] [rbp+320h]
  int v349; // [rsp+430h] [rbp+328h]
  int *v350; // [rsp+438h] [rbp+330h]
  int v351; // [rsp+440h] [rbp+338h]
  __int64 v352; // [rsp+448h] [rbp+340h]
  int v353; // [rsp+450h] [rbp+348h]
  const wchar_t *v354; // [rsp+458h] [rbp+350h]
  unsigned int *v355; // [rsp+460h] [rbp+358h]
  int v356; // [rsp+468h] [rbp+360h]
  int *v357; // [rsp+470h] [rbp+368h]
  int v358; // [rsp+478h] [rbp+370h]
  __int64 v359; // [rsp+480h] [rbp+378h]
  int v360; // [rsp+488h] [rbp+380h]
  const wchar_t *v361; // [rsp+490h] [rbp+388h]
  unsigned int *v362; // [rsp+498h] [rbp+390h]
  int v363; // [rsp+4A0h] [rbp+398h]
  int *v364; // [rsp+4A8h] [rbp+3A0h]
  int v365; // [rsp+4B0h] [rbp+3A8h]
  __int64 v366; // [rsp+4B8h] [rbp+3B0h]
  int v367; // [rsp+4C0h] [rbp+3B8h]
  const wchar_t *v368; // [rsp+4C8h] [rbp+3C0h]
  int *v369; // [rsp+4D0h] [rbp+3C8h]
  int v370; // [rsp+4D8h] [rbp+3D0h]
  int *v371; // [rsp+4E0h] [rbp+3D8h]
  int v372; // [rsp+4E8h] [rbp+3E0h]
  __int64 v373; // [rsp+4F0h] [rbp+3E8h]
  int v374; // [rsp+4F8h] [rbp+3F0h]
  const wchar_t *v375; // [rsp+500h] [rbp+3F8h]
  unsigned int *v376; // [rsp+508h] [rbp+400h]
  int v377; // [rsp+510h] [rbp+408h]
  int *v378; // [rsp+518h] [rbp+410h]
  int v379; // [rsp+520h] [rbp+418h]
  __int64 v380; // [rsp+528h] [rbp+420h]
  int v381; // [rsp+530h] [rbp+428h]
  const wchar_t *v382; // [rsp+538h] [rbp+430h]
  int *v383; // [rsp+540h] [rbp+438h]
  int v384; // [rsp+548h] [rbp+440h]
  int *v385; // [rsp+550h] [rbp+448h]
  int v386; // [rsp+558h] [rbp+450h]
  __int64 v387; // [rsp+560h] [rbp+458h]
  int v388; // [rsp+568h] [rbp+460h]
  const wchar_t *v389; // [rsp+570h] [rbp+468h]
  unsigned int *v390; // [rsp+578h] [rbp+470h]
  int v391; // [rsp+580h] [rbp+478h]
  int *v392; // [rsp+588h] [rbp+480h]
  int v393; // [rsp+590h] [rbp+488h]
  __int64 v394; // [rsp+598h] [rbp+490h]
  int v395; // [rsp+5A0h] [rbp+498h]
  const wchar_t *v396; // [rsp+5A8h] [rbp+4A0h]
  unsigned int *v397; // [rsp+5B0h] [rbp+4A8h]
  int v398; // [rsp+5B8h] [rbp+4B0h]
  int *v399; // [rsp+5C0h] [rbp+4B8h]
  int v400; // [rsp+5C8h] [rbp+4C0h]
  __int64 v401; // [rsp+5D0h] [rbp+4C8h]
  int v402; // [rsp+5D8h] [rbp+4D0h]
  const wchar_t *v403; // [rsp+5E0h] [rbp+4D8h]
  unsigned int *v404; // [rsp+5E8h] [rbp+4E0h]
  int v405; // [rsp+5F0h] [rbp+4E8h]
  int *v406; // [rsp+5F8h] [rbp+4F0h]
  int v407; // [rsp+600h] [rbp+4F8h]
  __int64 v408; // [rsp+608h] [rbp+500h]
  int v409; // [rsp+610h] [rbp+508h]
  const wchar_t *v410; // [rsp+618h] [rbp+510h]
  unsigned int *v411; // [rsp+620h] [rbp+518h]
  int v412; // [rsp+628h] [rbp+520h]
  int *v413; // [rsp+630h] [rbp+528h]
  int v414; // [rsp+638h] [rbp+530h]
  __int64 v415; // [rsp+640h] [rbp+538h]
  int v416; // [rsp+648h] [rbp+540h]
  const wchar_t *v417; // [rsp+650h] [rbp+548h]
  unsigned int *v418; // [rsp+658h] [rbp+550h]
  int v419; // [rsp+660h] [rbp+558h]
  int *v420; // [rsp+668h] [rbp+560h]
  int v421; // [rsp+670h] [rbp+568h]
  __int64 v422; // [rsp+678h] [rbp+570h]
  int v423; // [rsp+680h] [rbp+578h]
  const wchar_t *v424; // [rsp+688h] [rbp+580h]
  unsigned int *v425; // [rsp+690h] [rbp+588h]
  int v426; // [rsp+698h] [rbp+590h]
  int *v427; // [rsp+6A0h] [rbp+598h]
  int v428; // [rsp+6A8h] [rbp+5A0h]
  __int64 v429; // [rsp+6B0h] [rbp+5A8h]
  int v430; // [rsp+6B8h] [rbp+5B0h]
  const wchar_t *v431; // [rsp+6C0h] [rbp+5B8h]
  unsigned int *v432; // [rsp+6C8h] [rbp+5C0h]
  int v433; // [rsp+6D0h] [rbp+5C8h]
  int *v434; // [rsp+6D8h] [rbp+5D0h]
  int v435; // [rsp+6E0h] [rbp+5D8h]
  __int64 v436; // [rsp+6E8h] [rbp+5E0h]
  int v437; // [rsp+6F0h] [rbp+5E8h]
  const wchar_t *v438; // [rsp+6F8h] [rbp+5F0h]
  unsigned int *v439; // [rsp+700h] [rbp+5F8h]
  int v440; // [rsp+708h] [rbp+600h]
  int *v441; // [rsp+710h] [rbp+608h]
  int v442; // [rsp+718h] [rbp+610h]
  __int64 v443; // [rsp+720h] [rbp+618h]
  int v444; // [rsp+728h] [rbp+620h]
  const wchar_t *v445; // [rsp+730h] [rbp+628h]
  int *v446; // [rsp+738h] [rbp+630h]
  int v447; // [rsp+740h] [rbp+638h]
  int *v448; // [rsp+748h] [rbp+640h]
  int v449; // [rsp+750h] [rbp+648h]
  __int64 v450; // [rsp+758h] [rbp+650h]
  int v451; // [rsp+760h] [rbp+658h]
  const wchar_t *v452; // [rsp+768h] [rbp+660h]
  int *v453; // [rsp+770h] [rbp+668h]
  int v454; // [rsp+778h] [rbp+670h]
  int *v455; // [rsp+780h] [rbp+678h]
  int v456; // [rsp+788h] [rbp+680h]
  __int64 v457; // [rsp+790h] [rbp+688h]
  int v458; // [rsp+798h] [rbp+690h]
  const wchar_t *v459; // [rsp+7A0h] [rbp+698h]
  int *v460; // [rsp+7A8h] [rbp+6A0h]
  int v461; // [rsp+7B0h] [rbp+6A8h]
  int *v462; // [rsp+7B8h] [rbp+6B0h]
  int v463; // [rsp+7C0h] [rbp+6B8h]
  __int64 v464; // [rsp+7C8h] [rbp+6C0h]
  int v465; // [rsp+7D0h] [rbp+6C8h]
  const wchar_t *v466; // [rsp+7D8h] [rbp+6D0h]
  unsigned int *v467; // [rsp+7E0h] [rbp+6D8h]
  int v468; // [rsp+7E8h] [rbp+6E0h]
  int *v469; // [rsp+7F0h] [rbp+6E8h]
  int v470; // [rsp+7F8h] [rbp+6F0h]
  __int64 v471; // [rsp+800h] [rbp+6F8h]
  int v472; // [rsp+808h] [rbp+700h]
  const wchar_t *v473; // [rsp+810h] [rbp+708h]
  unsigned int *v474; // [rsp+818h] [rbp+710h]
  int v475; // [rsp+820h] [rbp+718h]
  int *v476; // [rsp+828h] [rbp+720h]
  int v477; // [rsp+830h] [rbp+728h]
  __int64 v478; // [rsp+838h] [rbp+730h]
  int v479; // [rsp+840h] [rbp+738h]
  const wchar_t *v480; // [rsp+848h] [rbp+740h]
  unsigned int *v481; // [rsp+850h] [rbp+748h]
  int v482; // [rsp+858h] [rbp+750h]
  int *v483; // [rsp+860h] [rbp+758h]
  int v484; // [rsp+868h] [rbp+760h]
  __int64 v485; // [rsp+870h] [rbp+768h]
  int v486; // [rsp+878h] [rbp+770h]
  const wchar_t *v487; // [rsp+880h] [rbp+778h]
  unsigned int *v488; // [rsp+888h] [rbp+780h]
  int v489; // [rsp+890h] [rbp+788h]
  int *v490; // [rsp+898h] [rbp+790h]
  int v491; // [rsp+8A0h] [rbp+798h]
  __int64 v492; // [rsp+8A8h] [rbp+7A0h]
  int v493; // [rsp+8B0h] [rbp+7A8h]
  const wchar_t *v494; // [rsp+8B8h] [rbp+7B0h]
  unsigned int *v495; // [rsp+8C0h] [rbp+7B8h]
  int v496; // [rsp+8C8h] [rbp+7C0h]
  int *v497; // [rsp+8D0h] [rbp+7C8h]
  int v498; // [rsp+8D8h] [rbp+7D0h]
  __int64 v499; // [rsp+8E0h] [rbp+7D8h]
  int v500; // [rsp+8E8h] [rbp+7E0h]
  const wchar_t *v501; // [rsp+8F0h] [rbp+7E8h]
  unsigned int *v502; // [rsp+8F8h] [rbp+7F0h]
  int v503; // [rsp+900h] [rbp+7F8h]
  int *v504; // [rsp+908h] [rbp+800h]
  int v505; // [rsp+910h] [rbp+808h]
  __int64 v506; // [rsp+918h] [rbp+810h]
  int v507; // [rsp+920h] [rbp+818h]
  const wchar_t *v508; // [rsp+928h] [rbp+820h]
  unsigned int *v509; // [rsp+930h] [rbp+828h]
  int v510; // [rsp+938h] [rbp+830h]
  int *v511; // [rsp+940h] [rbp+838h]
  int v512; // [rsp+948h] [rbp+840h]
  __int64 v513; // [rsp+950h] [rbp+848h]
  int v514; // [rsp+958h] [rbp+850h]
  const wchar_t *v515; // [rsp+960h] [rbp+858h]
  unsigned int *v516; // [rsp+968h] [rbp+860h]
  int v517; // [rsp+970h] [rbp+868h]
  int *v518; // [rsp+978h] [rbp+870h]
  int v519; // [rsp+980h] [rbp+878h]
  __int64 v520; // [rsp+988h] [rbp+880h]
  int v521; // [rsp+990h] [rbp+888h]
  const wchar_t *v522; // [rsp+998h] [rbp+890h]
  unsigned int *v523; // [rsp+9A0h] [rbp+898h]
  int v524; // [rsp+9A8h] [rbp+8A0h]
  int *v525; // [rsp+9B0h] [rbp+8A8h]
  int v526; // [rsp+9B8h] [rbp+8B0h]
  __int64 v527; // [rsp+9C0h] [rbp+8B8h]
  int v528; // [rsp+9C8h] [rbp+8C0h]
  const wchar_t *v529; // [rsp+9D0h] [rbp+8C8h]
  unsigned int *v530; // [rsp+9D8h] [rbp+8D0h]
  int v531; // [rsp+9E0h] [rbp+8D8h]
  int *v532; // [rsp+9E8h] [rbp+8E0h]
  int v533; // [rsp+9F0h] [rbp+8E8h]
  __int64 v534; // [rsp+9F8h] [rbp+8F0h]
  int v535; // [rsp+A00h] [rbp+8F8h]
  const wchar_t *v536; // [rsp+A08h] [rbp+900h]
  unsigned int *v537; // [rsp+A10h] [rbp+908h]
  int v538; // [rsp+A18h] [rbp+910h]
  int *v539; // [rsp+A20h] [rbp+918h]
  int v540; // [rsp+A28h] [rbp+920h]
  __int64 v541; // [rsp+A30h] [rbp+928h]
  int v542; // [rsp+A38h] [rbp+930h]
  const wchar_t *v543; // [rsp+A40h] [rbp+938h]
  unsigned int *v544; // [rsp+A48h] [rbp+940h]
  int v545; // [rsp+A50h] [rbp+948h]
  int *v546; // [rsp+A58h] [rbp+950h]
  int v547; // [rsp+A60h] [rbp+958h]
  __int64 v548; // [rsp+A68h] [rbp+960h]
  int v549; // [rsp+A70h] [rbp+968h]
  const wchar_t *v550; // [rsp+A78h] [rbp+970h]
  unsigned int *v551; // [rsp+A80h] [rbp+978h]
  int v552; // [rsp+A88h] [rbp+980h]
  int *v553; // [rsp+A90h] [rbp+988h]
  int v554; // [rsp+A98h] [rbp+990h]
  __int64 v555; // [rsp+AA0h] [rbp+998h]
  int v556; // [rsp+AA8h] [rbp+9A0h]
  const wchar_t *v557; // [rsp+AB0h] [rbp+9A8h]
  unsigned int *v558; // [rsp+AB8h] [rbp+9B0h]
  int v559; // [rsp+AC0h] [rbp+9B8h]
  int *v560; // [rsp+AC8h] [rbp+9C0h]
  int v561; // [rsp+AD0h] [rbp+9C8h]
  __int64 v562; // [rsp+AD8h] [rbp+9D0h]
  int v563; // [rsp+AE0h] [rbp+9D8h]
  const wchar_t *v564; // [rsp+AE8h] [rbp+9E0h]
  unsigned int *v565; // [rsp+AF0h] [rbp+9E8h]
  int v566; // [rsp+AF8h] [rbp+9F0h]
  int *v567; // [rsp+B00h] [rbp+9F8h]
  int v568; // [rsp+B08h] [rbp+A00h]
  __int64 v569; // [rsp+B10h] [rbp+A08h]
  int v570; // [rsp+B18h] [rbp+A10h]
  __int128 v571; // [rsp+B20h] [rbp+A18h]
  __int128 v572; // [rsp+B30h] [rbp+A28h]
  __int64 v573; // [rsp+B40h] [rbp+A38h]
  _DWORD v574[64]; // [rsp+B48h] [rbp+A40h] BYREF
  unsigned __int16 v575[264]; // [rsp+C48h] [rbp+B40h] BYREF

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0pt_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &Dxgk_PowerManagementSupport,
      a3,
      this,
      *((unsigned __int8 *)this + 2533));
  if ( !*((_BYTE *)this + 2533) )
  {
    v4 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v4 + 24) = 4567LL;
LABEL_5:
    WdLogEvent5_WdWarning(v4);
    return 0LL;
  }
  v261 = 3;
  v280 = -1;
  v208 = -1;
  v242 = 2000;
  v245 = 35000;
  v217 = 35000;
  LODWORD(v6) = 0;
  v209 = 2000;
  v247 = 50000;
  v7 = 0;
  v220 = 50000;
  v248 = 100000;
  v221 = 100000;
  v253 = 300000;
  v239 = 300000;
  v254 = 17000;
  v238 = 17000;
  v249 = 200;
  v214 = 200;
  v250 = 200;
  v218 = 200;
  v252 = 100;
  v251 = 100;
  v255 = 25000;
  v240 = 25000;
  v257 = 300;
  v200 = 300;
  v258 = 700;
  v206 = 700;
  v259 = 900;
  v201 = 900;
  v260 = 500;
  v205 = 500;
  v266 = 140000;
  v227 = 140000;
  v267 = 200000;
  v229 = 200000;
  v268 = 250000;
  v230 = 250000;
  v269 = 250000;
  v236 = 250000;
  v246 = 2000;
  v219 = 2000;
  v256 = 2000;
  v222 = 2000;
  v270 = 10000;
  v224 = 10000;
  v243 = 80;
  v215 = 80;
  v244 = 15000;
  v216 = 15000;
  v213 = 3;
  v262 = 0;
  v211 = 0;
  v263 = 0;
  v212 = 0;
  v264 = 80;
  v223 = 80;
  v265 = 80000;
  v225 = 80000;
  v8 = *((_DWORD *)this + 649) < 2400;
  v273 = 15000;
  v271 = 60000;
  v226 = 60000;
  v272 = 60000;
  v228 = 60000;
  v274 = 30000;
  v233 = 30000;
  v277 = 30000;
  v241 = 30000;
  v232 = 15000;
  v276 = 15000;
  v235 = 15000;
  v278 = 80000;
  v237 = 80000;
  v275 = 80;
  v234 = 80;
  v231 = 1;
  v204 = 1;
  v203 = 1;
  LODWORD(v198) = 1;
  v202 = 0;
  v197 = 0;
  if ( v8 )
  {
    v286 = L"UseSelfRefreshVRAMInS3";
    v285 = 288;
    v288 = 67108868;
    v287 = &v204;
    v284 = 0LL;
    v289 = &v231;
    v290 = 4;
    v295 = 0LL;
    v291 = 0LL;
    v292 = 0;
    v293 = 0LL;
    v294 = 0LL;
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Power", &v284, 0LL, 0LL);
  }
  else
  {
    v204 = (*((_DWORD *)this + 515) & 0x1000) == 0;
  }
  v296 = 0LL;
  v298 = L"EnableRuntimePowerManagement";
  v299 = &v198;
  v301 = &v203;
  v305 = L"DisableDevicePowerRequired";
  v306 = &v197;
  v308 = (int *)&v202;
  v312 = L"DefaultLatencyToleranceOther";
  v313 = &v208;
  v315 = &v280;
  v319 = L"DefaultExpectedResidency";
  v320 = &v209;
  v322 = &v242;
  v326 = L"DefaultLatencyToleranceIdle0";
  v327 = &v215;
  v329 = &v243;
  v333 = L"DefaultLatencyToleranceIdle1";
  v334 = &v216;
  v336 = &v244;
  v340 = L"DefaultLatencyToleranceNoContext";
  v341 = &v217;
  v343 = &v245;
  v347 = L"DefaultLatencyToleranceIdle0MonitorOff";
  v348 = &v219;
  v350 = &v246;
  v297 = 288;
  v300 = 67108868;
  v302 = 4;
  v303 = 0LL;
  v304 = 288;
  v307 = 67108868;
  v309 = 4;
  v310 = 0LL;
  v311 = 288;
  v314 = 67108868;
  v316 = 4;
  v317 = 0LL;
  v318 = 288;
  v321 = 67108868;
  v323 = 4;
  v324 = 0LL;
  v325 = 288;
  v328 = 67108868;
  v330 = 4;
  v331 = 0LL;
  v332 = 288;
  v335 = 67108868;
  v337 = 4;
  v338 = 0LL;
  v339 = 288;
  v342 = 67108868;
  v344 = 4;
  v345 = 0LL;
  v346 = 288;
  v349 = 67108868;
  v351 = 4;
  v352 = 0LL;
  v353 = 288;
  v354 = L"DefaultLatencyToleranceIdle1MonitorOff";
  v355 = &v220;
  v357 = &v247;
  v361 = L"DefaultLatencyToleranceNoContextMonitorOff";
  v362 = &v221;
  v364 = &v248;
  v368 = L"DefaultLatencyToleranceTimerPeriod";
  v369 = &v214;
  v371 = &v249;
  v375 = L"DefaultIdleThresholdIdle0";
  v376 = &v218;
  v378 = &v250;
  v382 = L"DefaultIdleThresholdIdle0MonitorOff";
  v383 = &v251;
  v385 = &v252;
  v389 = L"MonitorLatencyTolerance";
  v390 = &v239;
  v392 = &v253;
  v396 = L"MonitorRefreshLatencyTolerance";
  v397 = &v238;
  v399 = &v254;
  v403 = L"DefaultPowerNotRequiredTimeout";
  v404 = &v240;
  v406 = &v255;
  v356 = 67108868;
  v358 = 4;
  v359 = 0LL;
  v360 = 288;
  v363 = 67108868;
  v365 = 4;
  v366 = 0LL;
  v367 = 288;
  v370 = 67108868;
  v372 = 4;
  v373 = 0LL;
  v374 = 288;
  v377 = 67108868;
  v379 = 4;
  v380 = 0LL;
  v381 = 288;
  v384 = 67108868;
  v386 = 4;
  v387 = 0LL;
  v388 = 288;
  v391 = 67108868;
  v393 = 4;
  v394 = 0LL;
  v395 = 288;
  v398 = 67108868;
  v400 = 4;
  v401 = 0LL;
  v402 = 288;
  v405 = 67108868;
  v407 = 4;
  v408 = 0LL;
  v409 = 288;
  v412 = 67108868;
  v410 = L"DefaultActiveIdleThreshold";
  v411 = &v222;
  v413 = &v256;
  v417 = L"ulow";
  v418 = &v200;
  v420 = &v257;
  v424 = L"uhigh";
  v425 = &v206;
  v427 = &v258;
  v431 = L"uglitch";
  v432 = &v201;
  v434 = &v259;
  v438 = L"uideal";
  v439 = &v205;
  v441 = &v260;
  v445 = L"lowdebounce";
  v446 = &v213;
  v448 = &v261;
  v452 = L"EnablePODebounce";
  v453 = &v211;
  v455 = &v262;
  v459 = L"DisablePStateManagement";
  v460 = &v212;
  v462 = &v263;
  v414 = 4;
  v415 = 0LL;
  v416 = 288;
  v419 = 67108868;
  v421 = 4;
  v422 = 0LL;
  v423 = 288;
  v426 = 67108868;
  v428 = 4;
  v429 = 0LL;
  v430 = 288;
  v433 = 67108868;
  v435 = 4;
  v436 = 0LL;
  v437 = 288;
  v440 = 67108868;
  v442 = 4;
  v443 = 0LL;
  v444 = 288;
  v447 = 67108868;
  v449 = 4;
  v450 = 0LL;
  v451 = 288;
  v454 = 67108868;
  v456 = 4;
  v457 = 0LL;
  v458 = 288;
  v461 = 67108868;
  v463 = 4;
  v464 = 0LL;
  v465 = 288;
  v466 = L"DefaultD3TransitionLatencyActivelyUsed";
  v467 = &v223;
  v469 = &v264;
  v473 = L"DefaultD3TransitionLatencyIdleShortTime";
  v474 = &v225;
  v476 = &v265;
  v480 = L"DefaultD3TransitionLatencyIdleLongTime";
  v481 = &v227;
  v483 = &v266;
  v487 = L"DefaultD3TransitionLatencyIdleVeryLongTime";
  v488 = &v229;
  v490 = &v267;
  v494 = L"DefaultD3TransitionLatencyIdleNoContext";
  v495 = &v230;
  v497 = &v268;
  v501 = L"DefaultD3TransitionLatencyIdleMonitorOff";
  v502 = &v236;
  v504 = &v269;
  v508 = L"DefaultD3TransitionIdleShortTimeThreshold";
  v509 = &v224;
  v511 = &v270;
  v515 = L"DefaultD3TransitionIdleLongTimeThreshold";
  v516 = &v226;
  v518 = &v271;
  v522 = L"DefaultD3TransitionIdleVeryLongTimeThreshold";
  v468 = 67108868;
  v470 = 4;
  v471 = 0LL;
  v472 = 288;
  v475 = 67108868;
  v477 = 4;
  v478 = 0LL;
  v479 = 288;
  v482 = 67108868;
  v484 = 4;
  v485 = 0LL;
  v486 = 288;
  v489 = 67108868;
  v491 = 4;
  v492 = 0LL;
  v493 = 288;
  v496 = 67108868;
  v498 = 4;
  v499 = 0LL;
  v500 = 288;
  v503 = 67108868;
  v505 = 4;
  v506 = 0LL;
  v507 = 288;
  v510 = 67108868;
  v512 = 4;
  v513 = 0LL;
  v514 = 288;
  v517 = 67108868;
  v519 = 4;
  v520 = 0LL;
  v521 = 288;
  v524 = 67108868;
  v523 = &v228;
  v528 = 288;
  v525 = &v272;
  v531 = 67108868;
  v529 = L"DefaultLatencyToleranceMemory";
  v535 = 288;
  v530 = &v232;
  v532 = &v273;
  v536 = L"DefaultLatencyToleranceMemoryNoContext";
  v537 = &v233;
  v539 = &v274;
  v543 = L"DefaultMemoryRefreshLatencyToleranceActivelyUsed";
  v544 = &v234;
  v546 = &v275;
  v550 = L"DefaultMemoryRefreshLatencyToleranceIdleShortTime";
  v551 = &v235;
  v553 = &v276;
  v557 = L"DefaultMemoryRefreshLatencyToleranceNoContext";
  v558 = &v241;
  v560 = &v277;
  v564 = L"DefaultMemoryRefreshLatencyToleranceMonitorOff";
  v565 = &v237;
  v567 = &v278;
  v538 = 67108868;
  v542 = 288;
  v545 = 67108868;
  v549 = 288;
  v552 = 67108868;
  v556 = 288;
  v559 = 67108868;
  v563 = 288;
  v566 = 67108868;
  v573 = 0LL;
  v526 = 4;
  v527 = 0LL;
  v533 = 4;
  v534 = 0LL;
  v540 = 4;
  v541 = 0LL;
  v547 = 4;
  v548 = 0LL;
  v554 = 4;
  v555 = 0LL;
  v561 = 4;
  v562 = 0LL;
  v568 = 4;
  v569 = 0LL;
  v570 = 0;
  v571 = 0LL;
  v572 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v296, 0LL, 0LL);
  if ( *((int *)this + 649) < 2400 )
  {
    v11 = *((_QWORD *)this + 27);
    i = 0LL;
    if ( (int)DpiGetPnpRegistryKeyName(v11, 2LL, (__int64 *)&i) >= 0
      && (int)RtlStringCbCopyW(v575, 0x208uLL, *((size_t **)i + 1)) >= 0 )
    {
      v12 = v575;
      v9 = 260LL;
      do
      {
        if ( !*v12 )
          break;
        ++v12;
        --v9;
      }
      while ( v9 );
      v13 = v9 ? 260 - v9 : 0LL;
      if ( v9 )
      {
        v9 = (__int64)&v575[v13];
        v14 = 260 - v13;
        if ( 260 != v13 )
        {
          v10 = 2147483646LL;
          v15 = (char *)L"\\DxgkSettings" - v9;
          do
          {
            if ( !v10 )
              break;
            v16 = *(_WORD *)&v15[v9];
            if ( !v16 )
              break;
            *(_WORD *)v9 = v16;
            --v10;
            v9 += 2LL;
            --v14;
          }
          while ( v14 );
        }
        v17 = (_WORD *)(v9 - 2);
        if ( v14 )
          v17 = (_WORD *)v9;
        *v17 = 0;
        if ( v14 )
        {
          v284 = 0LL;
          v285 = 288;
          v286 = L"UseSelfRefreshVRAMInS3";
          v288 = 67108868;
          v287 = &v204;
          v290 = 4;
          v289 = &v231;
          v291 = 0LL;
          v295 = 0LL;
          v292 = 0;
          v293 = 0LL;
          v294 = 0LL;
          RtlQueryRegistryValuesEx(0LL, v575, &v284, 0LL, 0LL);
        }
      }
    }
  }
  if ( !(_DWORD)v198 )
    return 0LL;
  v18 = !v204;
  *((_BYTE *)this + 204) = v197 != 0;
  *((_BYTE *)this + 207) = !v18;
  v19 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
  v20 = *(_DWORD *)(*(_QWORD *)(v19 + 40) + 28LL);
  if ( v20 < 0x5019 || *((int *)this + 582) < 0x2000 )
    v21 = 1;
  else
    v21 = *((_DWORD *)this + 70);
  v203 = v21;
  LODWORD(v199) = 0;
  if ( v21 )
  {
    v22 = 0LL;
    do
    {
      *(_QWORD *)&ObjectAttributes.Attributes = &v574[v22];
      memset(&ObjectAttributes, 0, 24);
      ObjectAttributes.Length = 6;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      LODWORD(ObjectAttributes.SecurityDescriptor) = 4;
      if ( DXGADAPTER::IsDxgmms2(this) && v20 >= 0x5019 )
      {
        LODWORD(ObjectAttributes.ObjectName) = 4;
        ObjectAttributes.RootDirectory = &v199;
      }
      AdapterInfo = DXGADAPTER::DdiQueryAdapterInfo(v23, (struct _DXGKARG_QUERYADAPTERINFO *)&ObjectAttributes, v24);
      v6 = AdapterInfo;
      if ( AdapterInfo < 0 )
      {
        v26 = WdLogNewEntry5_WdError(v19, v9);
        *(_QWORD *)(v26 + 24) = this;
        *(_QWORD *)(v26 + 32) = v6;
        WdLogEvent5_WdError(v26);
        return (unsigned int)v6;
      }
      v7 += v574[(unsigned int)v199];
      v22 = (unsigned int)(v199 + 1);
      LODWORD(v199) = v22;
    }
    while ( (unsigned int)v22 < v21 );
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    LODWORD(ClientId) = v6;
    McTemplateK0pqq_EtwWriteTransfer(v19, &Dxgk_PowerManagementComponents, v10, this, ClientId, v7);
  }
  if ( (int)v6 < 0 )
    return 0LL;
  if ( !v7 )
  {
    v4 = WdLogNewEntry5_WdWarning(v19, v9, v10);
    *(_QWORD *)(v4 + 24) = 4779LL;
    goto LABEL_5;
  }
  if ( v7 > 0xFFFF )
  {
    v27 = WdLogNewEntry5_WdError(v19, v9);
    *(_QWORD *)(v27 + 24) = v7;
    WdLogEvent5_WdError(v27);
    LODWORD(v6) = -1073741811;
    goto LABEL_226;
  }
  *((_DWORD *)this + 736) = v7;
  v28 = 520LL * v7;
  if ( !is_mul_ok(v7, 0x208uLL) )
    v28 = -1LL;
  v29 = operator new[](v28, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 350) = v29;
  if ( !v29
    || (memset(v29, 0, 520LL * v7), v34 = operator new[](312 * v7 + 160, 0x4B677844u, PagedPool), (v35 = v34) == 0LL) )
  {
    v55 = WdLogNewEntry5_WdLowResource(v31, v30, v32, v33);
    *(_QWORD *)(v55 + 24) = this;
    WdLogEvent5_WdLowResource(v55);
    LODWORD(v6) = -1073741801;
    goto LABEL_226;
  }
  memset(v34, 0, 312 * v7 + 160);
  *(_DWORD *)v35 = 3;
  v35[8] = DxgkPowerRuntimeDeviceDirectedPowerUpCallback;
  v35[1] = 2LL;
  v35[9] = DxgkPowerRuntimeDeviceDirectedPowerDownCallback;
  *((_DWORD *)v35 + 24) = v7;
  v35[4] = DxgkPowerRuntimeComponentIdleStateCallback;
  v38 = 0;
  v35[11] = this;
  v35[2] = DxgkPowerRuntimeComponentActiveCallback;
  v35[3] = DxgkPowerRuntimeComponentIdleCallback;
  v35[5] = DxgkPowerRuntimeDevicePowerRequiredCallback;
  v35[6] = DxgkPowerRuntimeDevicePowerNotRequiredCallback;
  v35[7] = DxgkPowerRuntimeControlCallback;
  memset(&v282, 0, sizeof(v282));
  v39 = 0;
  v282.Type = DXGKQAITYPE_POWERCOMPONENTINFO;
  v40 = (__int64)&v35[7 * v7 + 13];
  v282.InputDataSize = 4;
  v202 = 0;
  v282.OutputDataSize = 336;
  i = (void *)(v40 + 192LL * v7);
  v41 = 0LL;
  v197 = 0;
  if ( !v21 )
    goto LABEL_108;
  v42 = 0;
  LODWORD(v198) = 0;
  do
  {
    v36 = (unsigned int)v41;
    *((_WORD *)this + v41 + 1408) = v38;
    v43 = 0;
    v283 = v36;
    v207 = 0;
    if ( !v574[v36] )
      goto LABEL_107;
    do
    {
      v44 = 7LL * v38;
      v279 = v42 + v43;
      v282.pInputData = &v279;
      v45 = *((_QWORD *)this + 350) + 8LL;
      v199 = 520LL * v38;
      v282.pOutputData = (void *)(v45 + v199);
      v46 = DXGADAPTER::DdiQueryAdapterInfo(this, &v282, v37);
      v6 = v46;
      if ( v46 < 0 )
      {
        v78 = WdLogNewEntry5_WdError(v48, v47);
        *(_QWORD *)(v78 + 24) = v38;
        *(_QWORD *)(v78 + 32) = v6;
LABEL_139:
        WdLogEvent5_WdError(v78);
        goto LABEL_225;
      }
      v49 = v199;
      v50 = v207;
      *(_DWORD *)(v199 + *((_QWORD *)this + 350)) = v38;
      *(_WORD *)(v49 + *((_QWORD *)this + 350) + 4) = v50;
      v51 = v197;
      *(_WORD *)(v49 + *((_QWORD *)this + 350) + 6) = v197;
      v52 = v49 + *((_QWORD *)this + 350);
      HIDWORD(v35[v44 + 16]) = *(_DWORD *)(v52 + 8);
      if ( (unsigned int)(*(_DWORD *)(v52 + 8) - 1) > 7 )
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdError(v49, v51);
        v76[3] = v38;
        v77 = *(unsigned int *)(v52 + 8);
        v76[5] = 0LL;
        goto LABEL_134;
      }
      *(_OWORD *)&v35[v44 + 13] = *(_OWORD *)(v52 + 220);
      *(_BYTE *)(v52 + 275) = 0;
      v53 = *(_DWORD *)(v52 + 216);
      if ( v53 >= 0x20 )
      {
        v54 = WdLogNewEntry5_WdError(v49, v51);
        *(_QWORD *)(v54 + 32) = 2LL;
        goto LABEL_131;
      }
      if ( (v53 & 4) != 0 )
        v35[v44 + 15] |= 1uLL;
      if ( !v211 )
        v35[v44 + 15] |= 2uLL;
      if ( (*(_DWORD *)(v52 + 216) & 0x10) != 0 )
      {
        if ( ((*(_DWORD *)(v52 + 208) - 3) & 0xFFFFFFFB) != 0 )
        {
          v54 = WdLogNewEntry5_WdError(v49, v51);
          *(_QWORD *)(v54 + 32) = 4930LL;
          goto LABEL_131;
        }
        if ( *(_DWORD *)(v52 + 8) != 2 )
        {
          v54 = WdLogNewEntry5_WdError(v49, v51);
          *(_QWORD *)(v54 + 32) = 4936LL;
          goto LABEL_131;
        }
        if ( *(_QWORD *)(v52 + 40) )
        {
          v54 = WdLogNewEntry5_WdError(v49, v51);
          *(_QWORD *)(v54 + 32) = 4942LL;
          goto LABEL_131;
        }
        if ( *(_DWORD *)(v52 + 276) )
        {
          v54 = WdLogNewEntry5_WdError(v49, v51);
          *(_QWORD *)(v54 + 32) = 4948LL;
LABEL_131:
          *(_QWORD *)(v54 + 24) = v38;
          WdLogEvent5_WdError(v54);
          LODWORD(v6) = -1073741811;
          goto LABEL_225;
        }
      }
      if ( *(_DWORD *)(v52 + 276) > 0x10u )
      {
LABEL_128:
        v54 = WdLogNewEntry5_WdError(v49, v51);
        *(_QWORD *)(v54 + 32) = 3LL;
        goto LABEL_131;
      }
      v56 = *(_DWORD *)(v52 + 208);
      if ( v56 == 4 )
      {
        if ( *((_DWORD *)this + 738) != -1 )
        {
          v54 = WdLogNewEntry5_WdError(v49, v51);
          *(_QWORD *)(v54 + 32) = 4996LL;
          goto LABEL_131;
        }
        *((_DWORD *)this + 738) = v38;
      }
      else if ( v56 == 6 )
      {
        if ( *((_DWORD *)this + 737) == -1 )
        {
          v58 = *((_QWORD *)this + 350) + v49;
          *((_QWORD *)this + 395) = v58;
          *((_DWORD *)this + 737) = v38;
          if ( *(_DWORD *)(v52 + 8) == 2 )
          {
            *((_BYTE *)this + 3240) = 1;
          }
          else if ( *(_DWORD *)(v52 + 8) > 2u )
          {
            v54 = WdLogNewEntry5_WdError(v58, v51);
            *(_QWORD *)(v54 + 32) = 4986LL;
            goto LABEL_131;
          }
        }
        else
        {
          v57 = WdLogNewEntry5_WdWarning(v49, v51, 0LL);
          *(_QWORD *)(v57 + 24) = v38;
          *(_QWORD *)(v57 + 32) = 4970LL;
          WdLogEvent5_WdWarning(v57);
        }
      }
      v59 = i;
      LODWORD(v35[v44 + 18]) = *(_DWORD *)(v52 + 276);
      memmove(v59, (const void *)(v52 + 280), 4LL * *(unsigned int *)(v52 + 276));
      v60 = (char *)i;
      v61 = 0LL;
      v35[v44 + 19] = i;
      v62 = *(unsigned int *)(v52 + 276);
      v35[v44 + 17] = v40;
      for ( i = &v60[4 * v62]; (unsigned int)v61 < *(_DWORD *)(v52 + 8); v61 = (unsigned int)(v61 + 1) )
      {
        v37 = 3 * v61;
        v63 = *(_QWORD *)(v52 + 24 * v61 + 16);
        *(_QWORD *)v40 = v63;
        v49 = *(_QWORD *)(v52 + 24 * v61 + 24);
        *(_QWORD *)(v40 + 8) = v49;
        v51 = *(unsigned int *)(v52 + 24 * v61 + 32);
        *(_DWORD *)(v40 + 16) = v51;
        if ( *(_QWORD *)(v52 + 24 * v61 + 16) == -1LL )
          v63 = -1LL;
        *(_QWORD *)v40 = v63;
        if ( *(_QWORD *)(v52 + 24 * v61 + 24) == -1LL )
          v49 = -1LL;
        *(_QWORD *)(v40 + 8) = v49;
        if ( *(_DWORD *)(v52 + 24 * v61 + 32) == -1 )
          v51 = 0xFFFFFFFFLL;
        *(_DWORD *)(v40 + 16) = v51;
        if ( (_DWORD)v61 )
        {
          v64 = *(unsigned int *)(v52 + 24 * v61 + 32);
          if ( (_DWORD)v64 != -1 )
          {
            v65 = *(unsigned int *)(v52 + 24 * ((unsigned int)(v61 - 1) + 1LL) + 8);
            if ( (_DWORD)v65 != -1 && (unsigned int)v64 > (unsigned int)v65 )
            {
              v54 = WdLogNewEntry5_WdError(v65, v64);
              *(_QWORD *)(v54 + 32) = 5LL;
              goto LABEL_131;
            }
          }
          v66 = *(_QWORD *)(v52 + 24 * v61 + 16);
          if ( v66 != -1LL )
          {
            v67 = *(_QWORD *)(v52 + 24LL * (unsigned int)(v61 - 1) + 16);
            if ( v67 != -1LL && v66 < v67 )
            {
              v54 = WdLogNewEntry5_WdError(v67, v66);
              *(_QWORD *)(v54 + 32) = 6LL;
              goto LABEL_131;
            }
          }
        }
        else
        {
          if ( ((*(_QWORD *)(v52 + 16) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0
            || ((*(_QWORD *)(v52 + 24) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          {
            goto LABEL_128;
          }
          if ( !*(_DWORD *)(v52 + 24 * v61 + 32) )
          {
            v54 = WdLogNewEntry5_WdError(v49, v51);
            *(_QWORD *)(v54 + 32) = 4LL;
            goto LABEL_131;
          }
        }
        v40 += 24LL;
      }
      v42 = v198;
      v68 = v202 + 1;
      if ( *(_DWORD *)(v52 + 208) )
        v68 = v202;
      v43 = v207 + 1;
      v39 = v68;
      v202 = v68;
      v36 = v283;
      ++v38;
      v207 = v43;
    }
    while ( v43 < v574[v283] );
    v21 = v203;
    v202 = v39;
LABEL_107:
    v42 += 0x10000;
    v41 = v197 + 1;
    LODWORD(v198) = v42;
    v197 = v41;
  }
  while ( (unsigned int)v41 < v21 );
LABEL_108:
  if ( *((_DWORD *)this + 738) == -1 && !*((_BYTE *)this + 3240) )
    *((_QWORD *)this + 395) = 0LL;
  if ( *((int *)this + 649) < 1300 || !v39 || v212 )
    goto LABEL_166;
  if ( v200 > 0x3E8
    || (v36 = v206, v206 > 0x3E8)
    || v201 > 0x3E8
    || v205 > 0x3E8
    || v200 >= v205
    || v205 >= v206
    || v206 >= v201 )
  {
    v76 = (_QWORD *)WdLogNewEntry5_WdError(v36, 1000LL);
    v76[3] = v200;
    v76[4] = v206;
    v76[5] = v201;
    v76[6] = v205;
    goto LABEL_136;
  }
  v282.Type = DXGKQAITYPE_POWERCOMPONENTPSTATEINFO;
  v69 = 248LL * v39;
  v282.OutputDataSize = 136;
  if ( !is_mul_ok(v39, 0xF8uLL) )
    v69 = -1LL;
  v70 = operator new[](v69, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 500) = v70;
  *((_DWORD *)this + 1002) = v39;
  if ( !v70 )
  {
    v75 = WdLogNewEntry5_WdLowResource(v72, v71, v73, v74);
    *(_QWORD *)(v75 + 24) = this;
    WdLogEvent5_WdLowResource(v75);
    LODWORD(v6) = -1073741801;
    goto LABEL_225;
  }
  memset(v70, 0, 248LL * v39);
  v79 = 0;
  for ( j = 0LL; v79 < *((_DWORD *)this + 736); ++v79 )
  {
    v81 = *((_QWORD *)this + 350);
    v82 = 520LL * v79;
    if ( !*(_DWORD *)(v82 + v81 + 208) )
    {
      *(_QWORD *)(v82 + v81 + 512) = *((_QWORD *)this + 500) + 248LL * (unsigned int)j;
      j = (unsigned int)(j + 1);
    }
  }
  v83 = 0;
  *((_DWORD *)this + 1054) = v201;
  *((_DWORD *)this + 1055) = v206;
  *((_DWORD *)this + 1056) = v200;
  *((_DWORD *)this + 1057) = v205;
  *((_DWORD *)this + 1058) = v213;
  LODWORD(v199) = 0;
  v84 = 0LL;
  while ( 2 )
  {
    v85 = *(_QWORD *)(520 * v84 + *((_QWORD *)this + 350) + 512);
    if ( !v85 )
    {
LABEL_148:
      LODWORD(v199) = ++v83;
      v84 = v83;
      if ( v83 >= v7 )
        goto LABEL_155;
      continue;
    }
    break;
  }
  v282.pOutputData = *(void **)(520 * v84 + *((_QWORD *)this + 350) + 512);
  v282.pInputData = &v199;
  v86 = DXGADAPTER::DdiQueryAdapterInfo(this, &v282, j);
  v89 = v86;
  if ( v86 >= 0 )
  {
    v90 = v199;
    *(_QWORD *)(v85 + 136) = this;
    *(_DWORD *)(v85 + 144) = v90;
    *(_QWORD *)(v85 + 152) = v85;
    KeInitializeSpinLock((PKSPIN_LOCK)(v85 + 160));
    *(_BYTE *)(v85 + 240) = 0;
    *(_DWORD *)(v85 + 244) = -1;
    v83 = v199;
    goto LABEL_148;
  }
  v91 = WdLogNewEntry5_WdTrace(v88, v87);
  *(_QWORD *)(v91 + 24) = (unsigned int)v199;
  v92 = 0;
  for ( *(_QWORD *)(v91 + 32) = v89; v92 < *((_DWORD *)this + 736); ++v92 )
  {
    v93 = 520LL * v92;
    v94 = *((_QWORD *)this + 350);
    if ( !*(_DWORD *)(v93 + v94 + 208) )
      *(_QWORD *)(v93 + v94 + 512) = 0LL;
  }
  v95 = (void *)*((_QWORD *)this + 500);
  *((_DWORD *)this + 1002) = 0;
  operator delete[](v95);
  *((_QWORD *)this + 500) = 0LL;
LABEL_155:
  v96 = *((_DWORD *)this + 1002);
  v97 = 0LL;
  if ( v96 )
  {
    v98 = *((_QWORD *)this + 500);
    while ( 1 )
    {
      v99 = (unsigned int)v97;
      v100 = 248LL * (unsigned int)v97;
      v101 = *(_DWORD *)(v100 + v98);
      v102 = *(unsigned int *)(v100 + v98 + 144);
      if ( v101 > 0x20 )
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)v97, v97);
        v76[3] = v102;
        goto LABEL_136;
      }
      v103 = 0;
      if ( v101 )
        break;
LABEL_165:
      v97 = (unsigned int)(v97 + 1);
      if ( (unsigned int)v97 >= v96 )
        goto LABEL_166;
    }
    v104 = 62LL * (unsigned int)v97;
    while ( 1 )
    {
      v105 = *(_DWORD *)(v98 + 4 * (v104 + v103) + 4);
      if ( !v105 )
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdError(v99, v97);
        v77 = v103;
        v76[3] = v102;
        goto LABEL_134;
      }
      if ( v103 )
      {
        v99 = v104 + v103 - 1;
        if ( v105 > *(_DWORD *)(v98 + 4 * v99 + 4) )
          break;
      }
      if ( ++v103 >= v101 )
        goto LABEL_165;
    }
    v76 = (_QWORD *)WdLogNewEntry5_WdError(v99, v97);
    v77 = v103;
    v76[3] = v102;
    v76[5] = v103 - 1;
LABEL_134:
    v76[4] = v77;
LABEL_136:
    WdLogEvent5_WdError(v76);
    LODWORD(v6) = -1073741811;
    goto LABEL_225;
  }
LABEL_166:
  v106 = (ADAPTER_RENDER *)*((_QWORD *)this + 338);
  *((_DWORD *)this + 808) = v214;
  if ( v106 )
  {
    v107 = ADAPTER_RENDER::InitializePowerManagement(v106);
    v6 = v107;
    if ( v107 < 0 )
    {
      v110 = WdLogNewEntry5_WdError(v109, v108);
      *(_QWORD *)(v110 + 32) = 7LL;
      goto LABEL_224;
    }
  }
  v111 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 337);
  if ( v111 )
  {
    v112 = ADAPTER_DISPLAY::InitializePowerManagement(v111);
    v6 = v112;
    if ( v112 < 0 )
    {
      v110 = WdLogNewEntry5_WdError(v114, v113);
      *(_QWORD *)(v110 + 32) = 8LL;
      goto LABEL_224;
    }
  }
  v115 = (_QWORD *)((char *)this + 2808);
  v116 = PoFxRegisterDevice(*((_QWORD *)this + 27), v35, (char *)this + 2808);
  v6 = v116;
  if ( v116 < 0 )
  {
    v78 = WdLogNewEntry5_WdError(v118, v117);
    *(_QWORD *)(v78 + 24) = v6;
    goto LABEL_139;
  }
  KeInitializeEvent((PRKEVENT)((char *)this + 2968), SynchronizationEvent, 0);
  *((_BYTE *)this + 3236) = 0;
  *((_QWORD *)this + 407) = (char *)this + 3248;
  *((_QWORD *)this + 406) = (char *)this + 3248;
  TimeIncrement = KeQueryTimeIncrement();
  v120 = v215;
  v121 = TimeIncrement;
  *((_QWORD *)this + 377) = 0LL;
  *((_QWORD *)this + 379) = 0LL;
  *((_QWORD *)this + 383) = 0LL;
  *((_QWORD *)this + 385) = 0LL;
  *((_QWORD *)this + 374) = 10 * v120;
  v122 = v217;
  *((_QWORD *)this + 376) = 10LL * v216;
  v123 = 10000LL * v218;
  *((_QWORD *)this + 378) = 10 * v122;
  v124 = (unsigned int)(v123 / v121);
  v125 = v219;
  *((_QWORD *)this + 375) = v124;
  *((_QWORD *)this + 381) = v124;
  v126 = 5 * v125;
  v127 = v220;
  *((_QWORD *)this + 380) = 2 * v126;
  v128 = 5 * v127;
  v129 = v221;
  *((_QWORD *)this + 382) = 2 * v128;
  v130 = 5 * v129;
  v131 = v222;
  *((_QWORD *)this + 384) = 2 * v130;
  *((_QWORD *)this + 386) = (char *)this + 2992;
  v132 = 5 * v131;
  v133 = v223;
  *((_QWORD *)this + 418) = 2 * v132;
  v134 = 10000LL * v224;
  *((_QWORD *)this + 387) = 10 * v133;
  v135 = v225;
  *((_QWORD *)this + 388) = (unsigned int)(v134 / v121);
  v136 = 10000LL * v226;
  *((_QWORD *)this + 389) = 10 * v135;
  v137 = v227;
  *((_QWORD *)this + 390) = (unsigned int)(v136 / v121);
  v138 = 5 * v137;
  v139 = 10000LL * v228;
  *((_QWORD *)this + 391) = 2 * v138;
  v140 = v139;
  v141 = v229;
  *((_QWORD *)this + 392) = (unsigned int)(v140 / v121);
  *((_QWORD *)this + 394) = 0LL;
  v196 = 0;
  v142 = 5 * v141;
  v143 = v230;
  *((_QWORD *)this + 393) = 2 * v142;
  v144 = 5 * v143;
  v145 = v236;
  *((_QWORD *)this + 396) = 2 * v144;
  v146 = 5 * v145;
  v147 = v232;
  *((_QWORD *)this + 397) = 2 * v146;
  v148 = 5 * v147;
  v149 = v233;
  *((_QWORD *)this + 398) = 2 * v148;
  v150 = 5 * v149;
  v151 = v234;
  *((_QWORD *)this + 399) = 2 * v150;
  v152 = 5 * v151;
  v153 = v235;
  *((_QWORD *)this + 400) = 2 * v152;
  v154 = 5 * v153;
  v155 = v241;
  *((_QWORD *)this + 401) = 2 * v154;
  v156 = 5 * v155;
  v157 = v237;
  *((_QWORD *)this + 402) = 2 * v156;
  *((_QWORD *)this + 403) = 10 * v157;
  *((_QWORD *)this + 412) = (char *)this + 3288;
  *((_QWORD *)this + 411) = (char *)this + 3288;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 417);
  v158 = 0;
  while ( 2 )
  {
    v159 = *((_QWORD *)this + 350);
    v160 = 520LL * v158;
    v161 = (DXGADAPTER *)(v160 + v159 + 424);
    *(_BYTE *)(v160 + v159 + 356) = 1;
    *(_OWORD *)v161 = 0LL;
    v162 = *(_DWORD *)(v160 + v159 + 208);
    if ( !v162 )
    {
      *(_BYTE *)(v160 + v159 + 357) = 1;
      v173 = (DXGADAPTER **)*((_QWORD *)this + 416);
      if ( *v173 != (DXGADAPTER *)((char *)this + 3320) )
LABEL_228:
        __fastfail(3u);
      *((_QWORD *)v161 + 1) = v173;
      *(_QWORD *)v161 = (char *)this + 3320;
      *v173 = v161;
      v174 = 0LL;
      *((_QWORD *)this + 416) = v161;
      v175 = *(_DWORD *)(v160 + v159 + 8);
      if ( v175 > 1 )
      {
        v176 = (unsigned __int64 *)(v160 + v159 + 40);
        v177 = v175 - 1;
        do
        {
          v178 = v174;
          v174 = *v176;
          v179 = v178 < *v176;
          v176 += 3;
          if ( !v179 )
            v174 = v178;
          --v177;
        }
        while ( v177 );
      }
      *(_DWORD *)(v160 + v159 + 388) = 1;
      v180 = (unsigned __int64 *)((char *)this + 2992);
      v181 = 0;
      while ( *v180 < v174 )
      {
        ++v181;
        v180 += 2;
        if ( v181 >= 2 )
          goto LABEL_206;
      }
      *(_DWORD *)(v160 + v159 + 388) = v181;
LABEL_206:
      v182 = *(_DWORD *)(v160 + v159 + 4);
      *(_DWORD *)(v160 + v159 + 384) = 2;
      DXGADAPTER::SetPowerComponentLatencyCB(this, v182, *(_QWORD *)(*((_QWORD *)this + 386) + 32LL));
      ++*((_DWORD *)this + 740);
      goto LABEL_207;
    }
    v163 = v162 - 1;
    if ( !v163 )
    {
      v172 = v239;
      goto LABEL_194;
    }
    v164 = v163 - 1;
    if ( !v164 )
    {
      v172 = v238;
LABEL_194:
      v168 = *(_DWORD *)(v160 + v159 + 4);
      v170 = 10 * v172;
      v169 = this;
      goto LABEL_186;
    }
    v165 = v164 - 1;
    if ( v165 )
    {
      v166 = v165 - 1;
      if ( v166 )
      {
        v167 = v166 - 2;
        if ( v167 )
        {
          if ( v167 == 1 )
          {
            v196 = 1;
            if ( (*(_DWORD *)(v160 + v159 + 216) & 0x10) != 0 )
            {
              *(_BYTE *)(v160 + v159 + 360) = 1;
              *(_BYTE *)(v160 + v159 + 356) = 0;
              *(_DWORD *)(v160 + v159 + 344) = 1;
            }
          }
          else
          {
            v168 = *(_DWORD *)(v160 + v159 + 4);
            v169 = this;
            if ( v208 == -1 )
              v170 = -1LL;
            else
              v170 = 10LL * v208;
LABEL_186:
            DXGADAPTER::SetPowerComponentLatencyCB(v169, v168, v170);
          }
        }
      }
    }
    else
    {
      v171 = (DXGADAPTER **)*((_QWORD *)this + 414);
      if ( *v171 != (DXGADAPTER *)((char *)this + 3304) )
        goto LABEL_228;
      *(_QWORD *)v161 = (char *)this + 3304;
      *((_QWORD *)v161 + 1) = v171;
      *v171 = v161;
      *((_QWORD *)this + 414) = v161;
      if ( (*(_DWORD *)(v160 + v159 + 216) & 0x10) != 0 )
        *(_BYTE *)(v160 + v159 + 360) = 1;
    }
LABEL_207:
    if ( v209 == -1 )
      v183 = -1LL;
    else
      v183 = 10000LL * v209;
    DXGADAPTER::SetPowerComponentResidencyCB(this, *(_DWORD *)(v160 + v159 + 4), v183);
    KeInitializeSpinLock((PKSPIN_LOCK)(v160 + v159 + 504));
    if ( *(_DWORD *)(v160 + v159 + 8) <= 1u || (v184 = *(_QWORD *)(v160 + v159 + 48), v184 == -1) )
    {
      v185 = *((_QWORD *)this + 418);
    }
    else
    {
      v185 = *((_QWORD *)this + 418);
      if ( v184 > v185 )
        v185 = *(_QWORD *)(v160 + v159 + 48);
    }
    ++v158;
    *(_QWORD *)(v160 + v159 + 496) = v185;
    if ( v158 < v7 )
      continue;
    break;
  }
  DXGADAPTER::UpdateLatencyTolerances(this);
  PoFxSetDeviceIdleTimeout(*v115, 10LL * v240);
  if ( *((_DWORD *)this + 81) == 1297040209 && *((_DWORD *)this + 582) == 4608 )
  {
    KeInitializeEvent((PRKEVENT)((char *)this + 3488), SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)((char *)this + 3512), SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)((char *)this + 3536), SynchronizationEvent, 0);
    KeInitializeSpinLock((PKSPIN_LOCK)this + 445);
    *((_QWORD *)this + 448) = (char *)this + 3576;
    *((_QWORD *)this + 447) = (char *)this + 3576;
    InitializeSListHead((PSLIST_HEADER)this + 225);
    v187 = (struct _SLIST_ENTRY *)((char *)this + 3632);
    v188 = 8LL;
    do
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 225, v187);
      v187 += 2;
      --v188;
    }
    while ( v188 );
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v189 = PsCreateSystemThread(
             (PHANDLE)this + 452,
             0x1FFFFFu,
             &ObjectAttributes,
             0LL,
             0LL,
             DXGADAPTER::PowerRuntimeComponentIdleStateCallbackThread,
             this);
    v6 = v189;
    if ( v189 < 0 )
    {
      v78 = WdLogNewEntry5_WdError(v191, v190);
      *(_QWORD *)(v78 + 24) = v6;
      *(_QWORD *)(v78 + 32) = 8LL;
      goto LABEL_139;
    }
  }
  LOBYTE(v186) = v196;
  v192 = DpiEnablePowerManagement(*((_QWORD *)this + 27), *v115, v186);
  v6 = v192;
  if ( v192 >= 0 )
  {
    operator delete[](v35);
    return 0LL;
  }
  DXGADAPTER::DestroySerializeFStateTransitWorker(this);
  v110 = WdLogNewEntry5_WdError(v194, v193);
  *(_QWORD *)(v110 + 32) = 9LL;
LABEL_224:
  *(_QWORD *)(v110 + 24) = v6;
  WdLogEvent5_WdError(v110);
LABEL_225:
  operator delete[](v35);
LABEL_226:
  if ( *((_QWORD *)this + 351) )
  {
    PoFxUnregisterDevice();
    *((_QWORD *)this + 351) = 0LL;
  }
  return (unsigned int)v6;
}
