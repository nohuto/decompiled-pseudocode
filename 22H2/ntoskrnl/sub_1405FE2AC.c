/*
 * XREFs of sub_1405FE2AC @ 0x1405FE2AC
 * Callers:
 *     Callout @ 0x140686B10 (Callout.c)
 * Callees:
 *     SeAccessCheck @ 0x140206720 (SeAccessCheck.c)
 *     RtlULongLongAdd @ 0x14024CF90 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x14024CFB0 (RtlUIntAdd.c)
 *     RtlLengthSid @ 0x140347A80 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memcmp @ 0x1403D22E0 (memcmp.c)
 *     ZwQuerySystemInformation @ 0x1403FA0E0 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     sub_1405BFC50 @ 0x1405BFC50 (sub_1405BFC50.c)
 *     sub_1405C022C @ 0x1405C022C (sub_1405C022C.c)
 *     sub_1405FD540 @ 0x1405FD540 (sub_1405FD540.c)
 *     RtlCreateSecurityDescriptor @ 0x140603560 (RtlCreateSecurityDescriptor.c)
 *     sub_140663AB0 @ 0x140663AB0 (sub_140663AB0.c)
 *     sub_140663C80 @ 0x140663C80 (sub_140663C80.c)
 *     sub_140663D40 @ 0x140663D40 (sub_140663D40.c)
 *     sub_140665550 @ 0x140665550 (sub_140665550.c)
 *     sub_1406655D0 @ 0x1406655D0 (sub_1406655D0.c)
 *     sub_140665F30 @ 0x140665F30 (sub_140665F30.c)
 *     sub_140665FA0 @ 0x140665FA0 (sub_140665FA0.c)
 *     sub_140666290 @ 0x140666290 (sub_140666290.c)
 *     sub_1406680E0 @ 0x1406680E0 (sub_1406680E0.c)
 *     sub_140668150 @ 0x140668150 (sub_140668150.c)
 *     sub_14066A1E0 @ 0x14066A1E0 (sub_14066A1E0.c)
 *     sub_14066A290 @ 0x14066A290 (sub_14066A290.c)
 *     sub_14066C3F0 @ 0x14066C3F0 (sub_14066C3F0.c)
 *     sub_14066C420 @ 0x14066C420 (sub_14066C420.c)
 *     sub_14066C450 @ 0x14066C450 (sub_14066C450.c)
 *     sub_14066C480 @ 0x14066C480 (sub_14066C480.c)
 *     sub_14066F790 @ 0x14066F790 (sub_14066F790.c)
 *     sub_14066F8F0 @ 0x14066F8F0 (sub_14066F8F0.c)
 *     sub_14066FC30 @ 0x14066FC30 (sub_14066FC30.c)
 *     sub_1406706B0 @ 0x1406706B0 (sub_1406706B0.c)
 *     sub_140674680 @ 0x140674680 (sub_140674680.c)
 *     sub_1406761D0 @ 0x1406761D0 (sub_1406761D0.c)
 *     sub_140676D30 @ 0x140676D30 (sub_140676D30.c)
 *     sub_1406777A0 @ 0x1406777A0 (sub_1406777A0.c)
 *     sub_140677B10 @ 0x140677B10 (sub_140677B10.c)
 *     sub_14067E1F0 @ 0x14067E1F0 (sub_14067E1F0.c)
 *     sub_14067F3C0 @ 0x14067F3C0 (sub_14067F3C0.c)
 *     sub_140680070 @ 0x140680070 (sub_140680070.c)
 *     SPCallServerHandleIsAppLicensed @ 0x140697B60 (SPCallServerHandleIsAppLicensed.c)
 *     SPCallServerHandleClepKdf @ 0x140699A90 (SPCallServerHandleClepKdf.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x140699F08 (SPCallServerHandleGetAppPolicyValue.c)
 *     sub_14069D720 @ 0x14069D720 (sub_14069D720.c)
 *     SPCallServerHandleUpdatePolicies @ 0x1406A41E8 (SPCallServerHandleUpdatePolicies.c)
 *     SPCallServerHandleAuthenticateCaller @ 0x1406A4864 (SPCallServerHandleAuthenticateCaller.c)
 *     SeCaptureSubjectContext @ 0x1406CE8F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     RtlpAddKnownAce @ 0x1406D5220 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D92C0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406D9330 (RtlCreateAcl.c)
 *     SPCallServerHandleFileIntegrityUpdate @ 0x1407288C4 (SPCallServerHandleFileIntegrityUpdate.c)
 *     SPCallServerHandleFileIntegrityQuery @ 0x140728EE4 (SPCallServerHandleFileIntegrityQuery.c)
 *     SPCallServerHandleFileUsnQuery @ 0x14072940C (SPCallServerHandleFileUsnQuery.c)
 *     SPCallServerHandleCheckLicense @ 0x14072BA98 (SPCallServerHandleCheckLicense.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x14078CC7C (SPCallServerHandleWaitForDisplayWindow.c)
 *     sub_14095F0C4 @ 0x14095F0C4 (sub_14095F0C4.c)
 *     sub_14095F4C0 @ 0x14095F4C0 (sub_14095F4C0.c)
 *     sub_14095F934 @ 0x14095F934 (sub_14095F934.c)
 *     sub_14095FCDC @ 0x14095FCDC (sub_14095FCDC.c)
 *     sub_14095FF3C @ 0x14095FF3C (sub_14095FF3C.c)
 *     sub_1409602E0 @ 0x1409602E0 (sub_1409602E0.c)
 *     sub_140960910 @ 0x140960910 (sub_140960910.c)
 *     sub_140960FA4 @ 0x140960FA4 (sub_140960FA4.c)
 *     sub_1409613A0 @ 0x1409613A0 (sub_1409613A0.c)
 *     sub_140961C08 @ 0x140961C08 (sub_140961C08.c)
 *     sub_14096207C @ 0x14096207C (sub_14096207C.c)
 *     sub_14096208C @ 0x14096208C (sub_14096208C.c)
 *     sub_14096232C @ 0x14096232C (sub_14096232C.c)
 *     sub_140962940 @ 0x140962940 (sub_140962940.c)
 *     sub_140962DA8 @ 0x140962DA8 (sub_140962DA8.c)
 *     sub_14096300C @ 0x14096300C (sub_14096300C.c)
 *     sub_140963144 @ 0x140963144 (sub_140963144.c)
 *     sub_1409633A8 @ 0x1409633A8 (sub_1409633A8.c)
 *     sub_140963860 @ 0x140963860 (sub_140963860.c)
 *     sub_140963AC0 @ 0x140963AC0 (sub_140963AC0.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1405FE2AC(unsigned int *a1, unsigned int a2, unsigned int a3, _QWORD *a4, __int64 a5)
{
  _QWORD *v6; // rbx
  UINT *v7; // r13
  void *v8; // rdi
  const void **v9; // r15
  void *v10; // r12
  unsigned int *v11; // r14
  int Acl; // esi
  SIZE_T v13; // r13
  unsigned int *v14; // rcx
  unsigned int *v15; // r9
  SIZE_T v16; // r12
  unsigned int *v17; // rcx
  unsigned int v18; // r9d
  unsigned int *v19; // r8
  unsigned int v20; // r10d
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  unsigned int *PoolWithTag; // rax
  unsigned int *v24; // rbx
  _QWORD *v25; // rbx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  UINT *v29; // rcx
  void *v30; // rax
  PVOID v31; // rax
  const void *v32; // r13
  PVOID v33; // rax
  void *v34; // r12
  unsigned int v35; // eax
  unsigned int v36; // edi
  PVOID v37; // rax
  void *v38; // rcx
  void *v39; // rcx
  void *v40; // rcx
  size_t v41; // rdx
  __int64 *v42; // rbx
  unsigned int v43; // r8d
  unsigned int v44; // r9d
  int v45; // r13d
  __int64 v46; // rbx
  char v47; // r12
  unsigned __int8 v48; // di
  PVOID v49; // rax
  UINT v50; // r11d
  unsigned __int8 *v51; // rdx
  ULONGLONG v52; // rcx
  bool v53; // zf
  unsigned int v54; // r12d
  UINT v55; // r10d
  int v56; // r9d
  char v57; // r8
  int v58; // eax
  __int64 v59; // r15
  unsigned __int8 *v60; // rbx
  unsigned __int8 *v61; // rax
  ULONGLONG v62; // rdx
  __int64 v63; // rcx
  int v64; // eax
  __int64 v65; // rcx
  int v66; // eax
  UINT v67; // r13d
  int v68; // edx
  unsigned int v69; // ebx
  unsigned int v70; // eax
  UINT v71; // ecx
  _BYTE *v72; // r8
  ULONGLONG v73; // r10
  char v74; // r9
  UINT v75; // r13d
  unsigned __int8 *v76; // rsi
  UINT v77; // r14d
  int v78; // edi
  unsigned __int8 *v79; // r11
  int v80; // edx
  int v81; // r8d
  int v82; // eax
  int v83; // r12d
  UINT v84; // edx
  unsigned int v85; // r13d
  int v86; // r12d
  int v87; // r13d
  int v88; // r12d
  int v89; // r13d
  int v90; // r12d
  int v91; // r13d
  __int64 v92; // r15
  int v93; // r12d
  ULONGLONG v94; // rdx
  int v95; // r13d
  unsigned int v96; // r12d
  unsigned __int8 *v97; // rbx
  unsigned int v98; // r13d
  unsigned __int8 *v99; // rax
  int v100; // r12d
  __int64 v101; // rcx
  int v102; // eax
  __int64 v103; // rcx
  int v104; // eax
  _BYTE *v105; // r11
  int v106; // r12d
  int v107; // r13d
  int v108; // r12d
  int v109; // r13d
  int v110; // r12d
  int v111; // r13d
  int v112; // r12d
  int v113; // r13d
  PVOID v114; // r8
  unsigned __int64 i; // rax
  int v116; // ebx
  UINT v117; // edi
  UINT v118; // r11d
  SIZE_T v119; // rsi
  char *v120; // rbx
  unsigned __int64 v121; // rdx
  size_t v122; // r9
  PVOID v123; // r13
  int v124; // r8d
  char *v125; // rcx
  unsigned int v126; // eax
  char *v127; // r10
  void *v128; // rcx
  void *v129; // rcx
  void *v130; // rcx
  void *v131; // rcx
  void *v132; // rcx
  void *v133; // rcx
  int v135; // edx
  unsigned int *v136; // rax
  unsigned int *v137; // rax
  int v138; // edx
  __int64 v139; // r8
  unsigned int *v140; // rcx
  SIZE_T v141; // r13
  unsigned int *v142; // rcx
  unsigned int *v143; // rax
  unsigned int *v144; // rax
  unsigned int j; // edx
  __int64 v146; // r8
  unsigned int *v147; // rcx
  unsigned int v148; // ecx
  unsigned int *v149; // r8
  size_t v150; // rax
  _OWORD *v151; // rax
  __int64 v152; // rdx
  size_t v153; // r8
  __int64 v154; // rcx
  _OWORD *v155; // rbx
  void *v156; // rax
  PVOID v157; // rax
  SIZE_T v158; // rax
  PVOID v159; // rax
  void *v160; // rcx
  void *v161; // rcx
  void *v162; // rcx
  int IsAppLicensed; // eax
  __int64 v164; // rsi
  ULONG v165; // ebx
  ULONG v166; // ebx
  ULONG v167; // ebx
  ACL *v168; // rax
  ACL *v169; // r13
  BOOLEAN v170; // bl
  const void *v171; // rbx
  int v172; // eax
  __int64 v173; // rsi
  ULONG v174; // ebx
  ULONG v175; // ebx
  ULONG v176; // ebx
  ACL *v177; // rax
  __int64 v178; // rdx
  __int64 v179; // r8
  ACL *v180; // r13
  BOOLEAN v181; // bl
  const void *v182; // rbx
  const void *v183; // rbx
  int updated; // eax
  int v185; // eax
  bool v186; // sf
  UINT v187; // eax
  int v188; // ebx
  unsigned int v189; // r11d
  _DWORD *v190; // rcx
  _QWORD *v191; // r10
  int v192; // r13d
  unsigned int *v193; // rcx
  int v194; // ebx
  unsigned int v195; // r13d
  unsigned int v196; // r10d
  unsigned int v197; // ebx
  void *v198; // rax
  PVOID v199; // rax
  int v200; // eax
  int v201; // ebx
  NTSTATUS v202; // eax
  UINT v203; // r9d
  int v204; // ecx
  UINT v205; // r10d
  NTSTATUS v206; // eax
  UINT v207; // r9d
  unsigned int *v208; // rcx
  unsigned int v209; // ebx
  unsigned int v210; // r10d
  int v211; // r11d
  unsigned int v212; // r11d
  void *v213; // rax
  PVOID v214; // rax
  PVOID v215; // rax
  UINT *v216; // r9
  UINT v217; // r10d
  int v218; // ecx
  int *v219; // rax
  NTSTATUS v220; // eax
  UINT v221; // r9d
  UINT *v222; // r10
  int v223; // ebx
  UINT v224; // edx
  NTSTATUS v225; // eax
  UINT v226; // r9d
  ULONGLONG v227; // r10
  unsigned int v228; // r11d
  _DWORD *v229; // r10
  _QWORD *v230; // rax
  const void *v231; // rbx
  __int64 v232; // r8
  const void *v233; // rbx
  _DWORD *v234; // rbx
  unsigned int v235; // r9d
  void *v236; // rcx
  void *v237; // rcx
  __int64 *v238; // rdi
  int v239; // ecx
  ULONGLONG v240; // r13
  int v241; // edx
  __int64 v242; // rdi
  unsigned __int8 v243; // bl
  unsigned __int64 k; // rcx
  PVOID v245; // rax
  unsigned __int8 *v246; // rdx
  ULONGLONG v247; // rcx
  unsigned int v248; // esi
  int v249; // edi
  UINT v250; // r9d
  UINT v251; // r10d
  int v252; // r8d
  char v253; // r11
  int v254; // eax
  ULONGLONG v255; // rdx
  unsigned __int8 *v256; // rax
  unsigned __int8 *v257; // r12
  int v258; // r13d
  __int64 v259; // r15
  __int64 v260; // rcx
  int v261; // eax
  __int64 v262; // rcx
  int v263; // eax
  UINT v264; // r8d
  unsigned int v265; // eax
  UINT v266; // ecx
  int v267; // edx
  _BYTE *v268; // r9
  ULONGLONG v269; // r11
  char v270; // r10
  int v271; // r8d
  ULONGLONG v272; // r9
  ULONGLONG v273; // r10
  unsigned __int8 *v274; // r14
  __int64 v275; // rdx
  unsigned __int8 *v276; // rdi
  int v277; // r13d
  int v278; // r12d
  UINT v279; // r12d
  int v280; // esi
  int v281; // r13d
  unsigned __int8 *v282; // rax
  int v283; // r15d
  __int64 v284; // r14
  __int64 v285; // rcx
  int v286; // eax
  __int64 v287; // rcx
  int v288; // eax
  unsigned int v289; // esi
  int v290; // r15d
  int v291; // esi
  int v292; // r15d
  int v293; // esi
  int v294; // esi
  UINT v295; // r8d
  int v296; // esi
  int v297; // r8d
  _BYTE *v298; // rcx
  int v299; // esi
  int v300; // edi
  UINT v301; // esi
  UINT v302; // r8d
  int v303; // esi
  int v304; // r8d
  int v305; // esi
  int v306; // r8d
  int v307; // esi
  int v308; // r8d
  void *v309; // r12
  __int64 v310; // rdi
  PVOID v311; // rax
  PVOID v312; // rbx
  UINT v313; // edx
  UINT v314; // r9d
  void *v315; // r11
  void *v316; // rdi
  _DWORD *v317; // rcx
  _DWORD *v318; // rax
  void *v319; // rbx
  NTSTATUS v320; // eax
  SIZE_T v321; // rcx
  NTSTATUS v322; // eax
  SIZE_T v323; // rcx
  NTSTATUS v324; // eax
  void *v325; // [rsp+50h] [rbp-B0h]
  UINT *v326; // [rsp+58h] [rbp-A8h]
  unsigned __int8 *v327; // [rsp+60h] [rbp-A0h]
  void *Src; // [rsp+70h] [rbp-90h] BYREF
  UINT uAddend; // [rsp+78h] [rbp-88h] BYREF
  PVOID v330[2]; // [rsp+80h] [rbp-80h] BYREF
  PVOID v331[2]; // [rsp+90h] [rbp-70h] BYREF
  ULONGLONG v332; // [rsp+A0h] [rbp-60h] BYREF
  SIZE_T ullAddend; // [rsp+A8h] [rbp-58h] BYREF
  UINT v334[2]; // [rsp+B0h] [rbp-50h] BYREF
  UINT uAugend[2]; // [rsp+B8h] [rbp-48h] BYREF
  ULONGLONG v336; // [rsp+C0h] [rbp-40h] BYREF
  ULONGLONG ullAugend; // [rsp+C8h] [rbp-38h] BYREF
  ULONGLONG pullResult; // [rsp+D0h] [rbp-30h] BYREF
  UINT puResult; // [rsp+D8h] [rbp-28h] BYREF
  UINT v340; // [rsp+DCh] [rbp-24h]
  int v341; // [rsp+E0h] [rbp-20h]
  SIZE_T NumberOfBytes; // [rsp+E8h] [rbp-18h] BYREF
  UINT v343; // [rsp+F0h] [rbp-10h] BYREF
  UINT v344; // [rsp+F4h] [rbp-Ch] BYREF
  UINT v345; // [rsp+F8h] [rbp-8h]
  unsigned int v346; // [rsp+FCh] [rbp-4h]
  unsigned int v347; // [rsp+100h] [rbp+0h]
  UINT v348; // [rsp+104h] [rbp+4h]
  size_t v349; // [rsp+108h] [rbp+8h]
  void *v350; // [rsp+110h] [rbp+10h]
  PVOID v351; // [rsp+118h] [rbp+18h]
  unsigned int v352; // [rsp+120h] [rbp+20h]
  NTSTATUS AccessStatus; // [rsp+124h] [rbp+24h] BYREF
  UINT v354; // [rsp+128h] [rbp+28h]
  UINT v355; // [rsp+12Ch] [rbp+2Ch]
  const void **v356; // [rsp+130h] [rbp+30h]
  int v357; // [rsp+138h] [rbp+38h] BYREF
  PVOID P; // [rsp+140h] [rbp+40h]
  NTSTATUS v359; // [rsp+148h] [rbp+48h] BYREF
  UINT v360; // [rsp+14Ch] [rbp+4Ch]
  size_t Size[2]; // [rsp+150h] [rbp+50h] BYREF
  unsigned int *v362; // [rsp+160h] [rbp+60h]
  unsigned int v363; // [rsp+168h] [rbp+68h]
  void *v364; // [rsp+170h] [rbp+70h]
  void *v365; // [rsp+178h] [rbp+78h]
  ACCESS_MASK GrantedAccess; // [rsp+180h] [rbp+80h] BYREF
  PVOID v367; // [rsp+188h] [rbp+88h]
  ULONG ReturnLength; // [rsp+190h] [rbp+90h] BYREF
  ACCESS_MASK v369; // [rsp+194h] [rbp+94h] BYREF
  ULONG v370; // [rsp+198h] [rbp+98h] BYREF
  int v371; // [rsp+19Ch] [rbp+9Ch]
  ULONG v372; // [rsp+1A0h] [rbp+A0h] BYREF
  int v373; // [rsp+1A8h] [rbp+A8h]
  ULONGLONG v374[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 SystemInformation; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v376; // [rsp+1C8h] [rbp+C8h] BYREF
  _QWORD *v377; // [rsp+1D0h] [rbp+D0h]
  unsigned int *v378; // [rsp+1D8h] [rbp+D8h]
  __int64 v379; // [rsp+1E0h] [rbp+E0h]
  __int64 v380; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned __int64 v381; // [rsp+1F0h] [rbp+F0h]
  unsigned int v382; // [rsp+1F8h] [rbp+F8h]
  int v383; // [rsp+1FCh] [rbp+FCh]
  int v384; // [rsp+200h] [rbp+100h]
  unsigned int *v385; // [rsp+208h] [rbp+108h]
  _QWORD *v386; // [rsp+210h] [rbp+110h]
  __int64 v387; // [rsp+218h] [rbp+118h]
  _QWORD *v388; // [rsp+220h] [rbp+120h]
  __int64 v389; // [rsp+228h] [rbp+128h]
  int v390; // [rsp+230h] [rbp+130h]
  int v391; // [rsp+234h] [rbp+134h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+238h] [rbp+138h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+258h] [rbp+158h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+278h] [rbp+178h] BYREF
  __int64 v395; // [rsp+298h] [rbp+198h]
  _OWORD v396[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v397; // [rsp+2C0h] [rbp+1C0h]
  unsigned int *v398; // [rsp+2C8h] [rbp+1C8h]
  size_t v399; // [rsp+2D0h] [rbp+1D0h]
  __int64 v400; // [rsp+2D8h] [rbp+1D8h]
  __int64 v401; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int64 v402; // [rsp+2E8h] [rbp+1E8h] BYREF

  v388 = a4;
  v346 = a3;
  v389 = a5;
  v326 = 0LL;
  v6 = 0LL;
  v345 = 0;
  v7 = 0LL;
  v327 = 0LL;
  v8 = 0LL;
  v340 = 0;
  v9 = 0LL;
  v381 = 0LL;
  v10 = 0LL;
  v356 = 0LL;
  v11 = 0LL;
  v325 = 0LL;
  v355 = 0;
  v352 = 0;
  v385 = 0LL;
  v363 = 0;
  *(_OWORD *)v331 = 0LL;
  *(_OWORD *)v330 = 0LL;
  if ( a2 < 4 )
  {
    Acl = -1073741762;
    goto LABEL_175;
  }
  v13 = *a1;
  v14 = a1 + 1;
  Src = a1 + 1;
  if ( a1 + 1 >= a1 )
  {
    if ( a2 - 4 < (unsigned int)v13 )
    {
LABEL_5:
      Acl = -1073741762;
      v7 = 0LL;
      goto LABEL_175;
    }
    v15 = (unsigned int *)((char *)v14 + v13);
    v362 = (unsigned int *)((char *)v14 + v13);
    if ( (unsigned int *)((char *)v14 + v13) >= v14 && (unsigned int)v13 < 0xFFFFFFFC )
    {
      if ( a2 - ((_DWORD)v13 + 4) < 4 )
        goto LABEL_5;
      v16 = *v15;
      v17 = v15 + 1;
      if ( v15 + 1 < v15 )
        goto LABEL_630;
      v18 = v13 + 8;
      if ( (int)v13 + 8 < (unsigned int)(v13 + 4) )
        goto LABEL_630;
      if ( a2 - v18 < (unsigned int)v16 )
      {
LABEL_12:
        Acl = -1073741762;
LABEL_631:
        v7 = 0LL;
        v10 = 0LL;
        goto LABEL_175;
      }
      v19 = (unsigned int *)((char *)v17 + v16);
      if ( (unsigned int *)((char *)v17 + v16) < v17 )
        goto LABEL_630;
      v20 = v16 + v18;
      if ( (unsigned int)v16 + v18 < v18 )
        goto LABEL_630;
      if ( a2 - v20 < 4 )
        goto LABEL_12;
      v21 = *v19;
      LODWORD(NumberOfBytes) = *v19;
      v350 = v19 + 1;
      if ( v19 + 1 < v19 )
        goto LABEL_630;
      v22 = v20 + 4;
      if ( v20 + 4 < v20 )
        goto LABEL_630;
      if ( a2 - v22 < v21 )
        goto LABEL_12;
      if ( v21 + v22 < v22 )
      {
LABEL_630:
        Acl = -1073741675;
        v8 = 0LL;
        goto LABEL_631;
      }
      if ( a2 != v21 + v22 || (_DWORD)v16 + (_DWORD)v13 + v21 + 12LL != a2 )
        goto LABEL_12;
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
      v24 = PoolWithTag;
      if ( !PoolWithTag )
      {
        Acl = -1073741801;
        goto LABEL_24;
      }
      *(_OWORD *)PoolWithTag = 0LL;
      *((_OWORD *)PoolWithTag + 1) = 0LL;
      *((_OWORD *)PoolWithTag + 2) = 0LL;
      v30 = Src;
      Acl = 0;
      if ( Src )
      {
        *v24 = v13;
        if ( (_DWORD)v13 )
        {
          v31 = ExAllocatePoolWithTag(PagedPool, v13, 0x20534C53u);
          if ( v31 )
            *((_QWORD *)v24 + 1) = v31;
          else
            Acl = -1073741801;
          v30 = Src;
        }
        else
        {
          Acl = -1073741762;
        }
        if ( Acl < 0 )
          goto LABEL_59;
        memmove(*((void **)v24 + 1), v30, v13);
      }
      v32 = v362 + 1;
      if ( v362 == (unsigned int *)-4LL )
      {
        v24[4] = 0;
        *((_QWORD *)v24 + 3) = 0LL;
      }
      else
      {
        v24[4] = v16;
        if ( !(_DWORD)v16 )
        {
LABEL_48:
          Acl = -1073741762;
          goto LABEL_59;
        }
        v33 = ExAllocatePoolWithTag(PagedPool, v16, 0x20534C53u);
        if ( !v33 )
          goto LABEL_50;
        *((_QWORD *)v24 + 3) = v33;
        Acl = 0;
        memmove(v33, v32, v16);
      }
      v34 = v350;
      if ( v350 )
      {
        v35 = NumberOfBytes;
        v24[8] = NumberOfBytes;
        if ( !v35 )
          goto LABEL_48;
        v36 = v35;
        v37 = ExAllocatePoolWithTag(PagedPool, v35, 0x20534C53u);
        if ( !v37 )
        {
LABEL_50:
          Acl = -1073741801;
          goto LABEL_59;
        }
        *((_QWORD *)v24 + 5) = v37;
        Acl = 0;
        memmove(v37, v34, v36);
      }
      else
      {
        v24[8] = 0;
        *((_QWORD *)v24 + 5) = 0LL;
      }
      v11 = v24;
      v24 = 0LL;
LABEL_59:
      if ( v24 )
      {
        v38 = (void *)*((_QWORD *)v24 + 1);
        if ( v38 )
        {
          ExFreePoolWithTag(v38, 0x20534C53u);
          *((_QWORD *)v24 + 1) = 0LL;
        }
        v39 = (void *)*((_QWORD *)v24 + 3);
        if ( v39 )
        {
          ExFreePoolWithTag(v39, 0x20534C53u);
          *((_QWORD *)v24 + 3) = 0LL;
        }
        v40 = (void *)*((_QWORD *)v24 + 5);
        if ( v40 )
        {
          ExFreePoolWithTag(v40, 0x20534C53u);
          *((_QWORD *)v24 + 5) = 0LL;
        }
        ExFreePoolWithTag(v24, 0x20534C53u);
      }
LABEL_24:
      v25 = 0LL;
      if ( Acl < 0 )
      {
        v25 = v11;
        v11 = 0LL;
      }
      v362 = v11;
      if ( v25 )
      {
        v26 = (void *)v25[1];
        if ( v26 )
        {
          ExFreePoolWithTag(v26, 0x20534C53u);
          v25[1] = 0LL;
        }
        v27 = (void *)v25[3];
        if ( v27 )
        {
          ExFreePoolWithTag(v27, 0x20534C53u);
          v25[3] = 0LL;
        }
        v28 = (void *)v25[5];
        if ( v28 )
        {
          ExFreePoolWithTag(v28, 0x20534C53u);
          v25[5] = 0LL;
        }
        ExFreePoolWithTag(v25, 0x20534C53u);
      }
      v6 = v11;
      if ( Acl < 0 )
        goto LABEL_173;
      v344 = 0;
      v29 = 0LL;
      v351 = 0LL;
      Acl = 0;
      if ( v11 )
      {
        v350 = (void *)*((_QWORD *)v11 + 1);
        if ( v350 )
        {
          v41 = *v11;
          if ( (_DWORD)v41 )
          {
            v42 = (__int64 *)*((_QWORD *)v11 + 5);
            if ( v42 )
            {
              v43 = v11[8];
              if ( v43 )
              {
                NumberOfBytes = *((_QWORD *)v11 + 3);
                if ( NumberOfBytes )
                {
                  v44 = v11[4];
                  if ( v44 )
                  {
                    v45 = -1;
                    Size[0] = v41;
                    LODWORD(ullAddend) = 0;
                    v334[0] = -1;
                    if ( v43 != 8 || v44 != 160 || v41 <= 8 )
                      goto LABEL_128;
                    v46 = *v42;
                    v47 = v41 - 8;
                    *(_QWORD *)v334 = v41 - 8;
                    v48 = 0;
                    v49 = ExAllocatePoolWithTag(PagedPool, v41 - 8, 0x20534C53u);
                    v50 = 0;
                    P = v49;
                    if ( !v49 )
                    {
                      v29 = (UINT *)v351;
                      goto LABEL_128;
                    }
                    v51 = (unsigned __int8 *)v350;
                    v52 = (ULONGLONG)v49;
                    v332 = (ULONGLONG)v49;
                    v53 = (v47 & 7) == 0;
                    v401 = v46;
                    v336 = v47 & 7;
                    v54 = 0;
                    ullAugend = (ULONGLONG)v350;
                    uAddend = 0;
                    if ( v53 )
                    {
                      uAugend[0] = -1;
                      v75 = 0;
                    }
                    else
                    {
                      uAugend[0] = 0;
                      v55 = 0;
                      v56 = 0;
                      if ( (_DWORD)v336 )
                      {
                        v57 = 56;
                        do
                        {
                          v58 = *v51++;
                          if ( v56 >= 4 )
                            v55 |= v58 << v57;
                          else
                            v50 |= v58 << (v57 - 32);
                          ++v56;
                          v57 -= 8;
                        }
                        while ( v56 < (int)v336 );
                        uAddend = v50;
                        uAugend[0] = v55;
                        ullAugend = (ULONGLONG)v51;
                      }
                      v59 = 30LL;
                      v60 = (unsigned __int8 *)(NumberOfBytes + 126);
                      v61 = (unsigned __int8 *)(NumberOfBytes + 158);
                      v62 = 16LL;
                      Src = (void *)(NumberOfBytes + 158);
                      pullResult = 16LL;
                      do
                      {
                        v63 = v61[1];
                        if ( (unsigned __int8)v63 < 0x1Fu )
                        {
                          v64 = funcs_1405FE846[v63](v59 + 1, *(v60 - 2), *(v60 - 1), *v60, v60[1], (__int64)&v401, v54);
                          v62 = pullResult;
                          v45 ^= v64;
                          v61 = (unsigned __int8 *)Src;
                        }
                        v65 = *v61;
                        if ( (unsigned __int8)v65 < 0x1Fu )
                        {
                          v66 = funcs_1405FE846[v65](
                                  v59,
                                  *(v60 - 6),
                                  *(v60 - 5),
                                  *(v60 - 4),
                                  *(v60 - 3),
                                  (__int64)&v401,
                                  v45);
                          v62 = pullResult;
                          v54 ^= v66;
                          v61 = (unsigned __int8 *)Src;
                        }
                        v61 -= 2;
                        v59 -= 2LL;
                        v60 -= 8;
                        Src = v61;
                        pullResult = --v62;
                      }
                      while ( v62 );
                      v54 ^= uAddend;
                      v67 = uAugend[0] ^ v45;
                      v68 = 0;
                      v69 = v336;
                      v9 = 0LL;
                      v70 = v54;
                      v71 = v67;
                      v48 = 0;
                      if ( (_DWORD)v336 )
                      {
                        v72 = (_BYTE *)v332;
                        do
                        {
                          v73 = (ULONGLONG)(v72 + 1);
                          if ( v68 >= 4 )
                          {
                            v71 = __ROL4__(v71, 8);
                            v74 = v71;
                          }
                          else
                          {
                            v70 = __ROL4__(v70, 8);
                            v74 = v70;
                          }
                          ++v68;
                          *v72++ = v74;
                        }
                        while ( v68 < (int)v69 );
                        v52 = v73;
                        v332 = v73;
                      }
                      else
                      {
                        v52 = v332;
                      }
                      v51 = (unsigned __int8 *)ullAugend;
                      if ( v69 > 4 )
                      {
                        v75 = v67 >> (8 * (8 - v69)) << (8 * (8 - v69));
LABEL_104:
                        LODWORD(v46) = v401;
                        v52 = v332;
                        goto LABEL_107;
                      }
                      v75 = 0;
                      if ( v69 < 4 )
                      {
                        v54 = v54 >> (8 * (4 - v69)) << (8 * (4 - v69));
                        goto LABEL_104;
                      }
                      LODWORD(v46) = v401;
                    }
LABEL_107:
                    ullAugend = *(_QWORD *)v334 >> 3;
                    if ( *(_QWORD *)v334 >> 3 )
                    {
                      v76 = v51 + 2;
                      v77 = uAugend[0];
                      v78 = uAddend;
                      v79 = (unsigned __int8 *)(NumberOfBytes + 158);
                      pullResult = NumberOfBytes + 126;
                      v336 = v52 + 7;
                      for ( v374[0] = NumberOfBytes + 158; ; v79 = (unsigned __int8 *)v374[0] )
                      {
                        v80 = v76[2] << 8;
                        v81 = (unsigned __int16)v46;
                        v82 = v76[3];
                        v83 = (v76[1] | ((*v76 | ((*(v76 - 1) | (*(v76 - 2) << 8)) << 8)) << 8)) ^ v54;
                        LODWORD(NumberOfBytes) = v76[1] | ((*v76 | ((*(v76 - 1) | (*(v76 - 2) << 8)) << 8)) << 8);
                        v84 = v76[5] | ((v76[4] | ((v82 | v80) << 8)) << 8);
                        *(_QWORD *)uAugend = v76 + 8;
                        v343 = v84;
                        v85 = v83 ^ v46 ^ HIDWORD(v401) ^ v84 ^ v75;
                        v86 = (v85 >> 8) ^ (WORD2(v401) * (WORD1(v401) ^ v85)) ^ v83;
                        v87 = (WORD1(v401) * __ROR4__(HIDWORD(v401) - v86, 11) - __ROR4__(v86, 12)) ^ v85;
                        v88 = ((unsigned __int16)v46 * __ROL4__(v87 ^ HIDWORD(v401), 8) - __ROL4__(v87, 2)) ^ v86;
                        v89 = __ROR4__(v88, 9) ^ (HIWORD(v401) * __ROR4__(v88 - v46, 4)) ^ v87;
                        v90 = (__ROR4__(v89, 4) + WORD2(v401) * __ROR4__(v46 - v89, 10)) ^ v88;
                        v91 = (WORD1(v401) * __ROL4__(HIWORD(v401) ^ v90, 4) - __ROR4__(v90, 16)) ^ v89;
                        v92 = 30LL;
                        v93 = ((unsigned __int16)v46 * (WORD1(v401) ^ v91) - __ROR4__(v91, 7)) ^ v90;
                        v94 = 16LL;
                        v95 = (v93 - v46 - HIWORD(v401)) ^ v91;
                        v332 = 16LL;
                        v96 = __ROR4__(v95, 11) ^ (WORD2(v401) * __ROR4__(v46 - v95, 9)) ^ v93;
                        v97 = (unsigned __int8 *)pullResult;
                        v98 = (WORD1(v401) * (v96 - WORD2(v401)) - (v96 >> 13)) ^ v95;
                        v99 = v79;
                        Src = v79;
                        v100 = (v98 >> 15) ^ (v81 * __ROL4__(v98 - WORD2(v401), 3)) ^ v96;
                        do
                        {
                          v101 = v99[1];
                          if ( (unsigned __int8)v101 < 0x1Fu )
                          {
                            v102 = funcs_1405FE846[v101](
                                     v92 + 1,
                                     *(v97 - 2),
                                     *(v97 - 1),
                                     *v97,
                                     v97[1],
                                     (__int64)&v401,
                                     v100);
                            v94 = v332;
                            v98 ^= v102;
                            v99 = (unsigned __int8 *)Src;
                          }
                          v103 = *v99;
                          if ( (unsigned __int8)v103 < 0x1Fu )
                          {
                            v104 = funcs_1405FE846[v103](
                                     v92,
                                     *(v97 - 6),
                                     *(v97 - 5),
                                     *(v97 - 4),
                                     *(v97 - 3),
                                     (__int64)&v401,
                                     v98);
                            v94 = v332;
                            v100 ^= v104;
                            v99 = (unsigned __int8 *)Src;
                          }
                          v99 -= 2;
                          v92 -= 2LL;
                          v97 -= 8;
                          Src = v99;
                          v332 = --v94;
                        }
                        while ( v94 );
                        v105 = (_BYTE *)v336;
                        v106 = v78 ^ v100;
                        v76 = *(unsigned __int8 **)uAugend;
                        v107 = v77 ^ v98;
                        v78 = NumberOfBytes;
                        v77 = v343;
                        *(_BYTE *)(v336 - 4) = v106;
                        *v105 = v107;
                        v108 = __ROR4__(v106, 8);
                        *(v105 - 5) = v108;
                        v109 = __ROR4__(v107, 8);
                        *(v105 - 1) = v109;
                        v110 = __ROR4__(v108, 8);
                        *(v105 - 6) = v110;
                        v111 = __ROR4__(v109, 8);
                        *(v105 - 2) = v111;
                        v112 = __ROR4__(v110, 8);
                        v113 = __ROR4__(v111, 8);
                        *(v105 - 7) = v112;
                        *(v105 - 3) = v113;
                        v75 = __ROR4__(v113, 8);
                        v54 = __ROR4__(v112, 8);
                        v53 = ullAugend-- == 1;
                        v336 = (ULONGLONG)(v105 + 8);
                        if ( v53 )
                          break;
                        LODWORD(v46) = v401;
                      }
                      v48 = 0;
                      Acl = v344;
                      v11 = v362;
                      v9 = v356;
                    }
                    v114 = P;
                    for ( i = 0LL; i < *(_QWORD *)v334; ++i )
                      v48 ^= *((_BYTE *)P + i);
                    if ( v48 == *(_QWORD *)((char *)v350 + *(_QWORD *)v334) )
                    {
                      v29 = (UINT *)P;
                      v117 = v334[0];
                      v116 = ullAddend;
                      v114 = 0LL;
                      v351 = P;
                    }
                    else
                    {
                      v29 = (UINT *)v351;
                      v116 = -1073425151;
                      v117 = Size[0];
                    }
                    if ( v114 )
                    {
                      ExFreePoolWithTag(v114, 0x20534C53u);
                      v29 = (UINT *)v351;
                    }
                    if ( v116 >= 0 )
                    {
                      v7 = v29;
                      v326 = v29;
                      v29 = 0LL;
                      v345 = v117;
                      v351 = 0LL;
                      goto LABEL_129;
                    }
LABEL_128:
                    v117 = v345;
                    Acl = -1073741823;
                    v7 = 0LL;
LABEL_129:
                    if ( v29 )
                    {
                      ExFreePoolWithTag(v29, 0x20534C53u);
                      v117 = v345;
                      v351 = 0LL;
                    }
                    v6 = v11;
                    if ( Acl < 0 )
                      goto LABEL_173;
                    if ( v117 < 4 )
                      goto LABEL_133;
                    v118 = *v7;
                    uAddend = *v7;
                    if ( v7 + 1 < v7 )
                    {
                      Acl = -1073741675;
                      goto LABEL_174;
                    }
                    if ( v117 - 4 < 4 )
                    {
LABEL_133:
                      Acl = -1073741762;
                      goto LABEL_174;
                    }
                    v119 = v7[1];
                    v120 = (char *)(v7 + 2);
                    if ( v7 + 2 < v7 + 1 )
                      goto LABEL_141;
                    if ( v117 - 8 < (unsigned int)v119 )
                    {
                      Acl = -1073741762;
LABEL_139:
                      v6 = v11;
                      goto LABEL_174;
                    }
                    if ( (unsigned int)v119 >= 0xFFFFFFF8 )
                    {
LABEL_141:
                      Acl = -1073741675;
                      goto LABEL_139;
                    }
                    v121 = (unsigned __int64)&v120[v119];
                    v122 = v7[1];
                    if ( (char *)v7 + v117 < &v120[v119] || v117 - 8LL - v119 >= 8 )
                    {
                      Acl = -1073741762;
LABEL_159:
                      v6 = v11;
                      if ( Acl >= 0 )
                      {
                        if ( v331[1] && LODWORD(v331[0]) )
                        {
                          v135 = *(_DWORD *)v331[1];
                          if ( (char *)v331[1] + 4 < v331[1] )
                          {
                            Acl = -1073741675;
                          }
                          else
                          {
                            v383 = *(_DWORD *)v331[1];
                            v136 = 0LL;
                            if ( v135 )
                              v136 = (unsigned int *)((char *)v331[1] + 4);
                            v398 = v136;
                            Acl = 0;
                            if ( v135 != 4 )
                            {
                              Acl = -1073741789;
                              goto LABEL_209;
                            }
                            v352 = *v136;
                          }
                        }
                        else
                        {
                          Acl = -1073741811;
                        }
                        if ( Acl >= 0 )
                        {
                          if ( v331[1] && LODWORD(v331[0]) > 1 )
                          {
                            v137 = (unsigned int *)v331[1];
                            v138 = 0;
                            do
                            {
                              v139 = *v137;
                              v140 = v137 + 1;
                              if ( v137 + 1 < v137
                                || (v137 = (unsigned int *)((char *)v140 + v139),
                                    (unsigned int *)((char *)v140 + v139) < v140) )
                              {
                                Acl = -1073741675;
                                goto LABEL_209;
                              }
                              ++v138;
                            }
                            while ( !v138 );
                            v141 = *v137;
                            v142 = v137 + 1;
                            if ( v137 + 1 >= v137 )
                            {
                              v363 = *v137;
                              v143 = 0LL;
                              if ( (_DWORD)v141 )
                                v143 = v142;
                              Src = v143;
                              v385 = v143;
                              if ( LODWORD(v331[0]) <= 2 )
                              {
                                Acl = -1073741811;
                                goto LABEL_627;
                              }
                              v144 = (unsigned int *)v331[1];
                              for ( j = 0; j < 2; ++j )
                              {
                                v146 = *v144;
                                v147 = v144 + 1;
                                if ( v144 + 1 < v144 )
                                  goto LABEL_626;
                                v144 = (unsigned int *)((char *)v147 + v146);
                                if ( (unsigned int *)((char *)v147 + v146) < v147 )
                                  goto LABEL_626;
                              }
                              v148 = *v144;
                              v149 = v144 + 1;
                              LODWORD(ullAddend) = *v144;
                              if ( v144 + 1 < v144 )
                                goto LABEL_626;
                              v382 = v148;
                              v150 = 0LL;
                              if ( v148 )
                                v150 = (size_t)v149;
                              Size[0] = v150;
                              v399 = v150;
                              v151 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
                              v154 = 0LL;
                              v155 = v151;
                              if ( !v151 )
                              {
                                Acl = -1073741801;
                                LODWORD(v141) = 0;
                                goto LABEL_261;
                              }
                              *v151 = 0LL;
                              v151[1] = 0LL;
                              v151[2] = 0LL;
                              Acl = 0;
                              v156 = Src;
                              if ( Src )
                              {
                                *((_DWORD *)v155 + 4) = v141;
                                if ( (_DWORD)v141 )
                                {
                                  v157 = ExAllocatePoolWithTag(PagedPool, v141, 0x20534C53u);
                                  if ( v157 )
                                    *((_QWORD *)v155 + 3) = v157;
                                  else
                                    Acl = -1073741801;
                                  v156 = Src;
                                }
                                else
                                {
                                  Acl = -1073741762;
                                }
                                v153 = v141;
                                LODWORD(v141) = 0;
                                if ( Acl >= 0 )
                                {
                                  memmove(*((void **)v155 + 3), v156, v153);
                                  goto LABEL_244;
                                }
LABEL_253:
                                if ( v155 )
                                {
                                  v160 = (void *)*((_QWORD *)v155 + 1);
                                  if ( v160 )
                                  {
                                    ExFreePoolWithTag(v160, 0x20534C53u);
                                    *((_QWORD *)v155 + 1) = 0LL;
                                  }
                                  v161 = (void *)*((_QWORD *)v155 + 3);
                                  if ( v161 )
                                  {
                                    ExFreePoolWithTag(v161, 0x20534C53u);
                                    *((_QWORD *)v155 + 3) = 0LL;
                                  }
                                  v162 = (void *)*((_QWORD *)v155 + 5);
                                  if ( v162 )
                                  {
                                    ExFreePoolWithTag(v162, 0x20534C53u);
                                    *((_QWORD *)v155 + 5) = 0LL;
                                  }
                                  ExFreePoolWithTag(v155, 0x20534C53u);
                                }
LABEL_261:
                                v6 = v11;
                                if ( Acl < 0 )
                                  goto LABEL_173;
                                if ( v352 <= 0x6A )
                                {
                                  if ( v352 == 106 )
                                  {
                                    IsAppLicensed = sub_1409613A0(v331, v9, v153, v330);
                                    goto LABEL_401;
                                  }
                                  if ( v352 > 0x17 )
                                  {
                                    switch ( v352 )
                                    {
                                      case 0x18u:
                                        IsAppLicensed = SPCallServerHandleFileIntegrityQuery(v331, v152, v153, v330);
                                        break;
                                      case 0x64u:
                                        IsAppLicensed = sub_140963144(v331, v9, v153, v330);
                                        break;
                                      case 0x65u:
                                        IsAppLicensed = sub_140962DA8(v331, v9, v153, v330);
                                        break;
                                      case 0x66u:
                                        IsAppLicensed = sub_14096207C(v154);
                                        break;
                                      case 0x67u:
                                        IsAppLicensed = sub_1409602E0(v331, v9, v153, v330);
                                        break;
                                      case 0x68u:
                                        IsAppLicensed = sub_14096232C(v331, v9, v153, v330);
                                        break;
                                      case 0x69u:
                                        IsAppLicensed = sub_140961C08(v331, v9, v153, v330);
                                        break;
                                      default:
                                        goto LABEL_400;
                                    }
                                    goto LABEL_401;
                                  }
                                  if ( v352 == 23 )
                                  {
                                    v173 = qword_140D2D4A8;
                                    v369 = 0;
                                    memset(v396, 0, sizeof(v396));
                                    v397 = 0LL;
                                    v359 = 0;
                                    memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
                                    Src = (void *)qword_140D2D4A8;
                                    v174 = RtlLengthSid(*(PSID *)(qword_140D2D4A8 + 392));
                                    v175 = RtlLengthSid(*(PSID *)(v173 + 384)) + v174;
                                    v176 = RtlLengthSid(*(PSID *)(v173 + 272)) + 32 + v175;
                                    v177 = (ACL *)ExAllocatePoolWithTag(PagedPool, v176, 0x20534C53u);
                                    v180 = v177;
                                    if ( v177 )
                                    {
                                      Acl = RtlCreateAcl(v177, v176, 2u);
                                      if ( Acl >= 0 )
                                      {
                                        Acl = RtlpAddKnownAce(v180, *((void **)Src + 48), 0);
                                        if ( Acl >= 0 )
                                        {
                                          Acl = RtlpAddKnownAce(v180, *((void **)Src + 49), 0);
                                          if ( Acl >= 0 )
                                          {
                                            Acl = RtlpAddKnownAce(v180, *((void **)Src + 34), 0);
                                            if ( Acl >= 0 )
                                            {
                                              Acl = RtlCreateSecurityDescriptor(v396, 1u);
                                              if ( Acl >= 0 )
                                              {
                                                Acl = RtlSetDaclSecurityDescriptor(v396, 1u, v180, 0);
                                                if ( Acl >= 0 )
                                                {
                                                  SeCaptureSubjectContext(&SubjectSecurityContext);
                                                  v181 = SeAccessCheck(
                                                           v396,
                                                           &SubjectSecurityContext,
                                                           0,
                                                           0x20u,
                                                           0,
                                                           0LL,
                                                           (PGENERIC_MAPPING)&IopFileMapping,
                                                           1,
                                                           &v369,
                                                           &v359);
                                                  SeReleaseSubjectContext(&SubjectSecurityContext);
                                                  if ( !v181 )
                                                    Acl = v359;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      ExFreePoolWithTag(v180, 0x20534C53u);
                                      if ( Acl >= 0 )
                                      {
                                        v370 = 0;
                                        v376 = 8LL;
                                        ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v376, 8u, &v370);
                                        if ( v11[4] != 160 )
                                          goto LABEL_311;
                                        v182 = (const void *)*((_QWORD *)v11 + 3);
                                        if ( (memcmp(qword_1409872B0, v182, 0xA0uLL)
                                           || *((_DWORD *)v9 + 4) != 160
                                           || memcmp(qword_140987710, v9[3], 0xA0uLL)
                                           || v11[8] != 8
                                           || **((_QWORD **)v11 + 5) != 0x35DCEB18766AABAALL
                                           || *((_DWORD *)v9 + 8) != 8
                                           || *(_QWORD *)v9[5] != 0x14CEA8BAE086077CLL)
                                          && (memcmp(qword_140987A30, v182, 0xA0uLL)
                                           || *((_DWORD *)v9 + 4) != 160
                                           || memcmp(qword_140987B70, v9[3], 0xA0uLL)
                                           || v11[8] != 8
                                           || **((_QWORD **)v11 + 5) != 0xF10D668DB2BB8BB9uLL
                                           || *((_DWORD *)v9 + 8) != 8
                                           || *(_QWORD *)v9[5] != 0x768DFD321621EA95LL) )
                                        {
                                          v183 = (const void *)*((_QWORD *)v11 + 3);
                                          if ( (memcmp(qword_140987C10, v183, 0xA0uLL)
                                             || *((_DWORD *)v9 + 4) != 160
                                             || memcmp(sub_140987170, v9[3], 0xA0uLL)
                                             || v11[8] != 8
                                             || **((_QWORD **)v11 + 5) != 0xA10B922F1A2F2A8AuLL
                                             || *((_DWORD *)v9 + 8) != 8
                                             || *(_QWORD *)v9[5] != 0xC349B50B0A716A96uLL)
                                            && (memcmp(qword_1409875D0, v183, 0xA0uLL)
                                             || *((_DWORD *)v9 + 4) != 160
                                             || memcmp(qword_140987990, v9[3], 0xA0uLL)
                                             || v11[8] != 8
                                             || **((_QWORD **)v11 + 5) != 0xA6723CF736811074uLL
                                             || *((_DWORD *)v9 + 8) != 8
                                             || *(_QWORD *)v9[5] != 0x7511056E178DA076LL) )
                                          {
                                            goto LABEL_311;
                                          }
                                        }
                                        v357 = 0;
                                        Acl = 0;
                                        updated = QueryUpdateFileEaAllowedExt(&v357);
                                        if ( updated == -1073741637 || (Acl = updated, updated >= 0) && v357 != 1 )
                                        {
                                          v185 = Acl;
                                          if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 7) == 0 )
                                            v185 = -2147024891;
                                          Acl = v185;
                                        }
                                      }
                                    }
                                    else
                                    {
                                      Acl = -1073741801;
                                    }
                                    v6 = v11;
                                    if ( Acl >= 0 )
                                    {
                                      IsAppLicensed = SPCallServerHandleFileIntegrityUpdate(v331, v178, v179, v330);
                                      goto LABEL_401;
                                    }
                                    goto LABEL_173;
                                  }
                                  if ( !v352 )
                                  {
                                    IsAppLicensed = sub_1405FD540((__int64)v331, v9, v346, (__int64)v330);
                                    goto LABEL_401;
                                  }
                                  if ( v352 != 1 )
                                  {
                                    switch ( v352 )
                                    {
                                      case 2u:
                                        IsAppLicensed = SPCallServerHandleAuthenticateCaller(v154, v9, v346, v330);
                                        break;
                                      case 4u:
                                        IsAppLicensed = sub_14095F934(v331, v9, v153, v330);
                                        break;
                                      case 5u:
                                        IsAppLicensed = SPCallServerHandleWaitForDisplayWindow(v331, v9, v153, v330);
                                        break;
                                      case 6u:
                                        IsAppLicensed = sub_140963860(v331, v9, v153, v330);
                                        break;
                                      case 7u:
                                        IsAppLicensed = sub_14096208C(v331, v9, v153, v330);
                                        break;
                                      case 0x16u:
                                        IsAppLicensed = SPCallServerHandleFileUsnQuery(v331, v152, v153, v330);
                                        break;
                                      default:
LABEL_400:
                                        IsAppLicensed = sub_14096300C(v154, v330);
                                        break;
                                    }
LABEL_401:
                                    v186 = IsAppLicensed < 0;
                                    Acl = IsAppLicensed;
LABEL_402:
                                    if ( !v186 )
                                    {
                                      v381 = __rdtsc();
                                      puResult = 8;
                                      Acl = RtlUIntAdd(8u, HIDWORD(v330[0]), &puResult);
                                      if ( Acl >= 0 )
                                      {
                                        v187 = (puResult + 7) & 0xFFFFFFF8;
                                        if ( v187 >= puResult )
                                        {
                                          puResult = (puResult + 7) & 0xFFFFFFF8;
                                          if ( v187 )
                                          {
                                            v234 = ExAllocatePoolWithTag(PagedPool, v187, 0x20534C53u);
                                            if ( v234 )
                                            {
                                              Src = v234;
                                              *v234 = v330[0];
                                              Acl = RtlULongLongAdd((ULONGLONG)v234, 4uLL, (ULONGLONG *)&Src);
                                              if ( Acl >= 0 )
                                              {
                                                v236 = Src;
                                                *(_DWORD *)Src = HIDWORD(v330[0]);
                                                Acl = RtlULongLongAdd((ULONGLONG)v236, v235, (ULONGLONG *)&Src);
                                                if ( Acl >= 0 )
                                                {
                                                  v237 = Src;
                                                  *(_QWORD *)((char *)v234 + puResult - 8) = v381;
                                                  memmove(v237, v330[1], HIDWORD(v330[0]));
                                                  v327 = (unsigned __int8 *)v234;
                                                  v234 = 0LL;
                                                  v340 = puResult;
                                                }
                                              }
                                              if ( v234 )
                                                ExFreePoolWithTag(v234, 0x20534C53u);
                                            }
                                            else
                                            {
                                              Acl = -1073741801;
                                            }
                                          }
                                          else
                                          {
                                            Acl = -1073741762;
                                          }
                                        }
                                        else
                                        {
                                          Acl = -1073741675;
                                        }
                                      }
                                      v8 = v327;
                                      v6 = v11;
                                      if ( Acl >= 0 )
                                      {
                                        v367 = 0LL;
                                        if ( v327 && v340 )
                                        {
                                          v238 = (__int64 *)v9[5];
                                          if ( !v238 || (v239 = *((_DWORD *)v9 + 8)) == 0 )
                                          {
                                            Acl = -1073741811;
                                            goto LABEL_544;
                                          }
                                          v240 = (ULONGLONG)v9[3];
                                          pullResult = v240;
                                          if ( v240 )
                                          {
                                            v241 = *((_DWORD *)v9 + 4);
                                            if ( v241 )
                                            {
                                              if ( v239 != 8 )
                                                goto LABEL_597;
                                              if ( v241 != 160 )
                                                goto LABEL_597;
                                              v242 = *v238;
                                              v243 = 0;
                                              for ( k = 0LL; k < v340; ++k )
                                                v243 ^= v327[k];
                                              v245 = ExAllocatePoolWithTag(PagedPool, v340 + 8LL, 0x20534C53u);
                                              ullAddend = (SIZE_T)v245;
                                              if ( v245 )
                                              {
                                                v402 = v242;
                                                v246 = v327;
                                                v247 = (ULONGLONG)v245;
                                                Src = v327;
                                                v248 = 0;
                                                v332 = (ULONGLONG)v245;
                                                uAugend[0] = 0;
                                                uAddend = 0;
                                                v249 = v340 & 7;
                                                if ( (v340 & 7) != 0 )
                                                {
                                                  uAugend[0] = 0;
                                                  v250 = 0;
                                                  uAddend = 0;
                                                  v251 = 0;
                                                  v252 = 0;
                                                  v253 = 56;
                                                  do
                                                  {
                                                    v254 = *v246++;
                                                    if ( v252 >= 4 )
                                                      v250 |= v254 << v253;
                                                    else
                                                      v251 |= v254 << (v253 - 32);
                                                    ++v252;
                                                    v253 -= 8;
                                                  }
                                                  while ( v252 < v249 );
                                                  uAddend = v251;
                                                  uAugend[0] = v250;
                                                  Src = v246;
                                                  v255 = 16LL;
                                                  v256 = (unsigned __int8 *)(v240 + 158);
                                                  v257 = (unsigned __int8 *)(v240 + 126);
                                                  ullAugend = 16LL;
                                                  v336 = v240 + 158;
                                                  v258 = -1;
                                                  v259 = 30LL;
                                                  do
                                                  {
                                                    v260 = v256[1];
                                                    if ( (unsigned __int8)v260 < 0x1Fu )
                                                    {
                                                      v261 = funcs_1405FE846[v260](
                                                               v259 + 1,
                                                               *(v257 - 2),
                                                               *(v257 - 1),
                                                               *v257,
                                                               v257[1],
                                                               (__int64)&v402,
                                                               v248);
                                                      v255 = ullAugend;
                                                      v258 ^= v261;
                                                      v256 = (unsigned __int8 *)v336;
                                                    }
                                                    v262 = *v256;
                                                    if ( (unsigned __int8)v262 < 0x1Fu )
                                                    {
                                                      v263 = funcs_1405FE846[v262](
                                                               v259,
                                                               *(v257 - 6),
                                                               *(v257 - 5),
                                                               *(v257 - 4),
                                                               *(v257 - 3),
                                                               (__int64)&v402,
                                                               v258);
                                                      v255 = ullAugend;
                                                      v248 ^= v263;
                                                      v256 = (unsigned __int8 *)v336;
                                                    }
                                                    v256 -= 2;
                                                    v259 -= 2LL;
                                                    v257 -= 8;
                                                    v336 = (ULONGLONG)v256;
                                                    ullAugend = --v255;
                                                  }
                                                  while ( v255 );
                                                  v248 ^= uAddend;
                                                  v264 = uAugend[0] ^ v258;
                                                  v265 = v248;
                                                  v9 = v356;
                                                  v266 = uAugend[0] ^ v258;
                                                  v334[0] = v258;
                                                  v267 = 0;
                                                  if ( v249 )
                                                  {
                                                    v268 = (_BYTE *)v332;
                                                    do
                                                    {
                                                      v269 = (ULONGLONG)(v268 + 1);
                                                      if ( v267 >= 4 )
                                                      {
                                                        v266 = __ROL4__(v266, 8);
                                                        v270 = v266;
                                                      }
                                                      else
                                                      {
                                                        v265 = __ROL4__(v265, 8);
                                                        v270 = v265;
                                                      }
                                                      ++v267;
                                                      *v268++ = v270;
                                                    }
                                                    while ( v267 < v249 );
                                                    v247 = v269;
                                                    v332 = v269;
                                                  }
                                                  else
                                                  {
                                                    v247 = v332;
                                                  }
                                                  if ( (unsigned int)v249 > 4 )
                                                  {
                                                    v271 = v264 >> (8 * (8 - v249)) << (8 * (8 - v249));
                                                    goto LABEL_577;
                                                  }
                                                  v271 = 0;
                                                  if ( (unsigned int)v249 < 4 )
                                                  {
                                                    v248 = v248 >> (8 * (4 - v249)) << (8 * (4 - v249));
LABEL_577:
                                                    v247 = v332;
                                                  }
                                                  v246 = (unsigned __int8 *)Src;
                                                  v240 = pullResult;
                                                }
                                                else
                                                {
                                                  v271 = -1;
                                                }
                                                P = (PVOID)((unsigned __int64)v340 >> 3);
                                                if ( P )
                                                {
                                                  v272 = v240 + 129;
                                                  v273 = v240 + 2;
                                                  v374[0] = v240 + 129;
                                                  v332 = v240 + 2;
                                                  v274 = v246 + 2;
                                                  v350 = (void *)(v247 + 7);
                                                  do
                                                  {
                                                    v275 = 16LL;
                                                    v276 = (unsigned __int8 *)v273;
                                                    v277 = v274[2] << 8;
                                                    v278 = *v274 | ((*(v274 - 1) | (*(v274 - 2) << 8)) << 8);
                                                    Src = (void *)16;
                                                    v279 = v274[1] | (v278 << 8);
                                                    v280 = v279 ^ v248;
                                                    v281 = v274[5] | ((v274[4] | ((v274[3] | v277) << 8)) << 8);
                                                    v282 = (unsigned __int8 *)v272;
                                                    v336 = v272;
                                                    v334[0] = v281 ^ v271;
                                                    Size[0] = (size_t)(v274 + 8);
                                                    v283 = v281 ^ v271;
                                                    v284 = 0LL;
                                                    do
                                                    {
                                                      v285 = *(v282 - 1);
                                                      if ( (unsigned __int8)v285 < 0x1Fu )
                                                      {
                                                        v286 = funcs_1405FE846[v285](
                                                                 v284,
                                                                 *(v276 - 2),
                                                                 *(v276 - 1),
                                                                 *v276,
                                                                 v276[1],
                                                                 (__int64)&v402,
                                                                 v283);
                                                        v275 = (__int64)Src;
                                                        v280 ^= v286;
                                                        v282 = (unsigned __int8 *)v336;
                                                      }
                                                      v287 = *v282;
                                                      if ( (unsigned __int8)v287 < 0x1Fu )
                                                      {
                                                        v288 = funcs_1405FE846[v287](
                                                                 v284 + 1,
                                                                 v276[2],
                                                                 v276[3],
                                                                 v276[4],
                                                                 v276[5],
                                                                 (__int64)&v402,
                                                                 v280);
                                                        v275 = (__int64)Src;
                                                        v283 ^= v288;
                                                        v282 = (unsigned __int8 *)v336;
                                                      }
                                                      v282 += 2;
                                                      v284 += 2LL;
                                                      v276 += 8;
                                                      v336 = (ULONGLONG)v282;
                                                      Src = (void *)--v275;
                                                    }
                                                    while ( v275 );
                                                    v289 = (HIWORD(v402) * ((unsigned __int16)v402 + __ROR4__(~v283, 5))) ^ v280;
                                                    v290 = (v289 >> 10) ^ (WORD1(v402) * (v289 ^ HIWORD(v402))) ^ v283;
                                                    v291 = __ROR4__(v290, 10) ^ (WORD2(v402) * __ROR4__(v290 ^ v402, 12)) ^ v289;
                                                    v292 = (HIWORD(v402) * __ROR4__(v291 - v402, 14) - __ROL4__(v291, 8)) ^ v290;
                                                    v293 = (__ROL4__(v292, 2)
                                                          + (unsigned __int16)v402 * __ROR4__(HIDWORD(v402) + v292, 15)) ^ v291;
                                                    v334[0] = (WORD1(v402) * (v293 ^ WORD2(v402))) ^ __ROR4__(v293, 6) ^ v292;
                                                    v294 = (HIDWORD(v402) - (v334[0] ^ v402)) ^ v293;
                                                    v295 = (HIWORD(v402) * __ROL4__(v294 ^ WORD1(v402), 6)
                                                          - __ROL4__(v294, 2)) ^ v334[0];
                                                    v296 = ((unsigned __int16)v402 * (v295 - WORD2(v402)) - (v295 >> 13)) ^ v294;
                                                    v297 = (WORD1(v402) * __ROR4__(HIDWORD(v402) + v296, 9)
                                                          - __ROL4__(v296, 2)) ^ v295;
                                                    v274 = (unsigned __int8 *)Size[0];
                                                    v272 = v374[0];
                                                    v273 = v332;
                                                    v298 = v350;
                                                    v299 = (__ROL4__(v297, 10) + WORD2(v402) * __ROL4__(v297 - v402, 5)) ^ v296;
                                                    v300 = v299 ^ v402 ^ HIDWORD(v402);
                                                    v301 = uAddend ^ v299;
                                                    uAddend = v279;
                                                    v302 = uAugend[0] ^ v300 ^ v297;
                                                    *((char *)v350 - 4) = v301;
                                                    *v298 = v302;
                                                    v303 = __ROR4__(v301, 8);
                                                    *(v298 - 5) = v303;
                                                    v304 = __ROR4__(v302, 8);
                                                    *(v298 - 1) = v304;
                                                    v305 = __ROR4__(v303, 8);
                                                    *(v298 - 6) = v305;
                                                    v306 = __ROR4__(v304, 8);
                                                    *(v298 - 2) = v306;
                                                    v307 = __ROR4__(v305, 8);
                                                    v308 = __ROR4__(v306, 8);
                                                    *(v298 - 7) = v307;
                                                    *(v298 - 3) = v308;
                                                    v271 = __ROR4__(v308, 8);
                                                    v248 = __ROR4__(v307, 8);
                                                    v53 = P == (PVOID)1;
                                                    P = (char *)P - 1;
                                                    uAugend[0] = v281;
                                                    v350 = v298 + 8;
                                                  }
                                                  while ( !v53 );
                                                  v11 = v362;
                                                  v9 = v356;
                                                }
                                                v309 = (void *)ullAddend;
                                                v310 = v340 + 8LL;
                                                *(_QWORD *)(ullAddend + v340) = v243;
                                                v400 = v310;
                                                v367 = v309;
                                                Acl = 0;
                                                if ( (_DWORD)v310 )
                                                {
                                                  v311 = ExAllocatePoolWithTag(
                                                           PagedPool,
                                                           (unsigned int)v310,
                                                           0x20534C53u);
                                                  v312 = v311;
                                                  if ( v311 )
                                                  {
                                                    memmove(v311, v309, (unsigned int)v310);
                                                    v9[1] = v312;
                                                    *(_DWORD *)v9 = v310;
                                                  }
                                                  else
                                                  {
                                                    Acl = -1073741801;
                                                  }
                                                }
                                                else
                                                {
                                                  Acl = -1073741762;
                                                }
                                              }
                                              else
                                              {
LABEL_597:
                                                Acl = -1073741823;
                                              }
                                              if ( v367 )
                                              {
                                                ExFreePoolWithTag(v367, 0x20534C53u);
                                                v367 = 0LL;
                                              }
                                              v6 = v11;
                                              if ( Acl >= 0 )
                                              {
                                                v354 = 0;
                                                v313 = *(_DWORD *)v9;
                                                v334[0] = 4;
                                                Acl = RtlUIntAdd(4u, v313, v334);
                                                if ( Acl >= 0 )
                                                {
                                                  Acl = RtlUIntAdd(v334[0], 4u, v334);
                                                  if ( Acl >= 0 )
                                                  {
                                                    Acl = RtlUIntAdd(v334[0], *((_DWORD *)v9 + 4), v334);
                                                    if ( Acl >= 0 )
                                                    {
                                                      Acl = RtlUIntAdd(v334[0], 4u, v334);
                                                      if ( Acl >= 0 )
                                                      {
                                                        Acl = RtlUIntAdd(v334[0], *((_DWORD *)v9 + 8), v334);
                                                        if ( Acl >= 0 )
                                                          v314 = v334[0];
                                                        v354 = v314;
                                                      }
                                                    }
                                                  }
                                                }
                                                if ( Acl < 0 )
                                                {
LABEL_611:
                                                  v316 = 0LL;
                                                }
                                                else
                                                {
                                                  if ( !v314 )
                                                  {
                                                    Acl = -1073741762;
                                                    goto LABEL_611;
                                                  }
                                                  v318 = ExAllocatePoolWithTag(PagedPool, v314, 0x20534C53u);
                                                  v315 = 0LL;
                                                  v319 = v318;
                                                  if ( v318 )
                                                  {
                                                    *v318 = *(_DWORD *)v9;
                                                    ullAddend = (SIZE_T)v318;
                                                    Acl = RtlULongLongAdd((ULONGLONG)v318, 4uLL, &ullAddend);
                                                    if ( Acl < 0 )
                                                      goto LABEL_623;
                                                    memmove((void *)ullAddend, v9[1], *(unsigned int *)v9);
                                                    v320 = RtlULongLongAdd(ullAddend, *(unsigned int *)v9, &ullAddend);
                                                    v315 = 0LL;
                                                    Acl = v320;
                                                    if ( v320 < 0 )
                                                      goto LABEL_623;
                                                    v321 = ullAddend;
                                                    *(_DWORD *)ullAddend = *((_DWORD *)v9 + 4);
                                                    Acl = RtlULongLongAdd(v321, 4uLL, &ullAddend);
                                                    if ( Acl < 0 )
                                                      goto LABEL_623;
                                                    memmove((void *)ullAddend, v9[3], *((unsigned int *)v9 + 4));
                                                    v322 = RtlULongLongAdd(
                                                             ullAddend,
                                                             *((unsigned int *)v9 + 4),
                                                             &ullAddend);
                                                    v315 = 0LL;
                                                    Acl = v322;
                                                    if ( v322 < 0
                                                      || (v323 = ullAddend,
                                                          *(_DWORD *)ullAddend = *((_DWORD *)v9 + 8),
                                                          Acl = RtlULongLongAdd(v323, 4uLL, &ullAddend),
                                                          Acl < 0)
                                                      || (memmove((void *)ullAddend, v9[5], *((unsigned int *)v9 + 8)),
                                                          v324 = RtlULongLongAdd(
                                                                   ullAddend,
                                                                   *((unsigned int *)v9 + 8),
                                                                   &ullAddend),
                                                          v315 = 0LL,
                                                          Acl = v324,
                                                          v324 < 0) )
                                                    {
LABEL_623:
                                                      v316 = v315;
                                                    }
                                                    else
                                                    {
                                                      v316 = v319;
                                                      v325 = v319;
                                                      v319 = 0LL;
                                                      v355 = v354;
                                                    }
                                                    if ( v319 )
                                                    {
                                                      ExFreePoolWithTag(v319, 0x20534C53u);
                                                      v315 = 0LL;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    Acl = -1073741801;
                                                    v316 = 0LL;
                                                  }
                                                }
                                                v7 = v326;
                                                v6 = v11;
                                                if ( Acl >= 0 )
                                                {
                                                  v10 = v315;
                                                  v317 = (_DWORD *)v389;
                                                  *v388 = v316;
                                                  v8 = v327;
                                                  *v317 = v355;
                                                  goto LABEL_175;
                                                }
LABEL_545:
                                                v8 = v327;
LABEL_540:
                                                v10 = v325;
                                                goto LABEL_175;
                                              }
LABEL_544:
                                              v7 = v326;
                                              goto LABEL_545;
                                            }
                                          }
                                          v7 = v326;
                                          Acl = -1073741811;
                                          v8 = v327;
LABEL_210:
                                          v10 = 0LL;
                                          goto LABEL_175;
                                        }
                                        Acl = -1073741811;
                                      }
                                      v7 = v326;
                                      goto LABEL_540;
                                    }
LABEL_173:
                                    v7 = v326;
LABEL_174:
                                    v8 = 0LL;
                                    v10 = 0LL;
                                    goto LABEL_175;
                                  }
                                  v164 = qword_140D2D4A8;
                                  GrantedAccess = 0;
                                  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
                                  v395 = 0LL;
                                  AccessStatus = 0;
                                  memset(&SubjectContext, 0, sizeof(SubjectContext));
                                  Src = (void *)qword_140D2D4A8;
                                  v165 = RtlLengthSid(*(PSID *)(qword_140D2D4A8 + 392));
                                  v166 = RtlLengthSid(*(PSID *)(v164 + 384)) + v165;
                                  v167 = RtlLengthSid(*(PSID *)(v164 + 272)) + 32 + v166;
                                  v168 = (ACL *)ExAllocatePoolWithTag(PagedPool, v167, 0x20534C53u);
                                  v169 = v168;
                                  if ( !v168 )
                                  {
                                    Acl = -1073741801;
LABEL_282:
                                    v6 = v11;
                                    if ( Acl < 0 )
                                      goto LABEL_173;
                                    IsAppLicensed = SPCallServerHandleUpdatePolicies(v331, v9, v346, v330);
                                    goto LABEL_401;
                                  }
                                  Acl = RtlCreateAcl(v168, v167, 2u);
                                  if ( Acl >= 0 )
                                  {
                                    Acl = RtlpAddKnownAce(v169, *((void **)Src + 48), 0);
                                    if ( Acl >= 0 )
                                    {
                                      Acl = RtlpAddKnownAce(v169, *((void **)Src + 49), 0);
                                      if ( Acl >= 0 )
                                      {
                                        Acl = RtlpAddKnownAce(v169, *((void **)Src + 34), 0);
                                        if ( Acl >= 0 )
                                        {
                                          Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                                          if ( Acl >= 0 )
                                          {
                                            Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v169, 0);
                                            if ( Acl >= 0 )
                                            {
                                              SeCaptureSubjectContext(&SubjectContext);
                                              v170 = SeAccessCheck(
                                                       SecurityDescriptor,
                                                       &SubjectContext,
                                                       0,
                                                       0x20u,
                                                       0,
                                                       0LL,
                                                       (PGENERIC_MAPPING)&IopFileMapping,
                                                       1,
                                                       &GrantedAccess,
                                                       &AccessStatus);
                                              SeReleaseSubjectContext(&SubjectContext);
                                              if ( !v170 )
                                                Acl = AccessStatus;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  ExFreePoolWithTag(v169, 0x20534C53u);
                                  if ( Acl < 0 )
                                    goto LABEL_282;
                                  ReturnLength = 0;
                                  SystemInformation = 8LL;
                                  ZwQuerySystemInformation(
                                    SystemCodeIntegrityInformation,
                                    &SystemInformation,
                                    8u,
                                    &ReturnLength);
                                  if ( v11[4] == 160 )
                                  {
                                    if ( (v171 = (const void *)*((_QWORD *)v11 + 3),
                                          !memcmp(qword_140987350, v171, 0xA0uLL))
                                      && *((_DWORD *)v9 + 4) == 160
                                      && !memcmp(qword_140987850, v9[3], 0xA0uLL)
                                      && v11[8] == 8
                                      && **((_QWORD **)v11 + 5) == 0xA564595855B292C4uLL
                                      && *((_DWORD *)v9 + 8) == 8
                                      && *(_QWORD *)v9[5] == 0x1B732BD76B4D09FCLL
                                      || !memcmp(qword_140987490, v171, 0xA0uLL)
                                      && *((_DWORD *)v9 + 4) == 160
                                      && !memcmp(qword_1409870D0, v9[3], 0xA0uLL)
                                      && v11[8] == 8
                                      && **((_QWORD **)v11 + 5) == 0x93278D843BBDC445uLL
                                      && *((_DWORD *)v9 + 8) == 8
                                      && *(_QWORD *)v9[5] == 0x6223E824AB21D998LL )
                                    {
                                      v391 = 0;
                                      v172 = 0;
                                      if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 7) == 0 )
                                        v172 = -2147024891;
                                      Acl = v172;
                                      goto LABEL_282;
                                    }
                                  }
LABEL_311:
                                  Acl = -2147024891;
                                  goto LABEL_172;
                                }
                                v154 = 205LL;
                                if ( v352 <= 0xCD )
                                {
                                  switch ( v352 )
                                  {
                                    case 0xCDu:
                                      IsAppLicensed = SPCallServerHandleCheckLicense(v331, v9, v153, v330);
                                      break;
                                    case 0x6Bu:
                                      IsAppLicensed = sub_1405BFC50((__int64)v331, (__int64)v9, v153, (__int64)v330);
                                      break;
                                    case 0x6Du:
                                      IsAppLicensed = SPCallServerHandleIsAppLicensed(v331, v9, v153, v330);
                                      break;
                                    case 0x6Eu:
                                      IsAppLicensed = sub_140960FA4(v331, v9, v153, v330);
                                      break;
                                    case 0x6Fu:
                                      IsAppLicensed = sub_14095FCDC(v331, v9, v153, v330);
                                      break;
                                    case 0x70u:
                                      IsAppLicensed = sub_14095FF3C(v331, v9, v153, v330);
                                      break;
                                    case 0x71u:
                                      IsAppLicensed = SPCallServerHandleClepKdf(v331, v9, v153, v330);
                                      break;
                                    case 0xCCu:
                                      IsAppLicensed = sub_1409633A8(v331, v9, v153, v330);
                                      break;
                                    default:
                                      goto LABEL_400;
                                  }
                                  goto LABEL_401;
                                }
                                switch ( v352 )
                                {
                                  case 0xCEu:
                                    v372 = 0;
                                    v380 = 8LL;
                                    ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v380, 8u, &v372);
                                    if ( v11[4] == 160 )
                                    {
                                      if ( (v231 = (const void *)*((_QWORD *)v11 + 3),
                                            !memcmp(qword_140987530, v231, 0xA0uLL))
                                        && *((_DWORD *)v9 + 4) == 160
                                        && !memcmp(qword_140987AD0, v9[3], 0xA0uLL)
                                        && v11[8] == 8
                                        && **((_QWORD **)v11 + 5) == 0x5638EBB72F3355A5LL
                                        && *((_DWORD *)v9 + 8) == 8
                                        && *(_QWORD *)v9[5] == 0x9F2DD8784FE939B7uLL
                                        || !memcmp(qword_1409878F0, v231, 0xA0uLL)
                                        && *((_DWORD *)v9 + 4) == 160
                                        && !memcmp(qword_1409877B0, v9[3], 0xA0uLL)
                                        && v11[8] == 8
                                        && **((_QWORD **)v11 + 5) == 0x5638EBB72F3355A5LL
                                        && *((_DWORD *)v9 + 8) == 8
                                        && *(_QWORD *)v9[5] == 0x9F2DD8784FE939B7uLL
                                        || (v233 = (const void *)*((_QWORD *)v11 + 3),
                                            !memcmp(qword_1409873F0, v233, 0xA0uLL))
                                        && *((_DWORD *)v9 + 4) == 160
                                        && !memcmp(qword_140987670, v9[3], 0xA0uLL)
                                        && v11[8] == 8
                                        && **((_QWORD **)v11 + 5) == 0xF10D668DB2BB8BB9uLL
                                        && *((_DWORD *)v9 + 8) == 8
                                        && *(_QWORD *)v9[5] == 0x768DFD321621EA95LL
                                        || !memcmp(qword_140987210, v233, 0xA0uLL)
                                        && *((_DWORD *)v9 + 4) == 160
                                        && !memcmp(qword_140987030, v9[3], 0xA0uLL)
                                        && v11[8] == 8
                                        && **((_QWORD **)v11 + 5) == 0xF10D668DB2BB8BB9uLL
                                        && *((_DWORD *)v9 + 8) == 8
                                        && *(_QWORD *)v9[5] == 0x768DFD321621EA95LL )
                                      {
                                        IsAppLicensed = sub_1405C022C((__int64)v331, (__int64)v9, v232, (__int64)v330);
                                        v6 = v11;
                                        goto LABEL_401;
                                      }
                                    }
                                    goto LABEL_311;
                                  case 0xCFu:
                                    IsAppLicensed = sub_140960910(v331, v9, v153, v330);
                                    goto LABEL_401;
                                  case 0xD0u:
                                    IsAppLicensed = SPCallServerHandleGetAppPolicyValue(v331, v9, v153, v330);
                                    goto LABEL_401;
                                  case 0xD1u:
                                    IsAppLicensed = sub_140962940(v331, v9, v153, v330);
                                    goto LABEL_401;
                                  case 0xD2u:
                                    IsAppLicensed = sub_14095F4C0(v331, v9, v153, v330);
                                    goto LABEL_401;
                                  case 0xD3u:
                                    IsAppLicensed = sub_14095F0C4(v331, v9, v153, v330);
                                    goto LABEL_401;
                                }
                                if ( v352 != 212 )
                                  goto LABEL_400;
                                v188 = 0;
                                v189 = (unsigned int)v331[0];
                                v371 = 0;
                                v379 = 0LL;
                                v341 = 0;
                                v348 = 0;
                                v378 = 0LL;
                                v377 = 0LL;
                                v386 = 0LL;
                                if ( !v331[1] || LODWORD(v331[0]) <= 3 )
                                {
                                  Acl = -1073741811;
                                  goto LABEL_420;
                                }
                                v190 = v331[1];
                                pullResult = (ULONGLONG)v331[1];
                                while ( 1 )
                                {
                                  LODWORD(ullAddend) = *v190;
                                  Acl = RtlULongLongAdd((ULONGLONG)v190, 4uLL, &pullResult);
                                  if ( Acl < 0 )
                                    break;
                                  Acl = RtlULongLongAdd(pullResult, (unsigned int)ullAddend, &pullResult);
                                  if ( Acl < 0 )
                                    break;
                                  v190 = (_DWORD *)pullResult;
                                  LODWORD(v141) = v141 + 1;
                                  if ( (unsigned int)v141 >= 3 )
                                  {
                                    v192 = *(_DWORD *)pullResult;
                                    Acl = RtlULongLongAdd(pullResult, 4uLL, &pullResult);
                                    if ( Acl >= 0 )
                                    {
                                      v191 = (_QWORD *)pullResult;
                                      v188 = v192;
                                      if ( !v192 )
                                        v191 = 0LL;
                                      v371 = v192;
                                      v386 = v191;
                                    }
                                    break;
                                  }
                                }
                                if ( Acl < 0 )
                                  goto LABEL_491;
                                if ( v188 != 8 )
                                  goto LABEL_488;
                                v379 = *v191;
LABEL_420:
                                if ( Acl < 0 )
                                  goto LABEL_491;
                                v364 = 0LL;
                                LODWORD(v349) = 0;
                                if ( !v331[1] || v189 <= 4 )
                                {
                                  Acl = -1073741811;
                                  goto LABEL_491;
                                }
                                v193 = (unsigned int *)v331[1];
                                v194 = 0;
                                ullAugend = (ULONGLONG)v331[1];
                                while ( 1 )
                                {
                                  v195 = *v193;
                                  Acl = RtlULongLongAdd((ULONGLONG)v193, 4uLL, &ullAugend);
                                  if ( Acl < 0 )
                                    break;
                                  Acl = RtlULongLongAdd(ullAugend, v195, &ullAugend);
                                  if ( Acl < 0 )
                                    break;
                                  v193 = (unsigned int *)ullAugend;
                                  if ( (unsigned int)++v194 >= 4 )
                                  {
                                    v197 = *(_DWORD *)ullAugend;
                                    Acl = RtlULongLongAdd(ullAugend, 4uLL, &ullAugend);
                                    if ( Acl >= 0 )
                                    {
                                      v198 = (void *)ullAugend;
                                      v196 = v197;
                                      LODWORD(v349) = v197;
                                      if ( !v197 )
                                        v198 = 0LL;
                                      v364 = v198;
                                    }
                                    break;
                                  }
                                }
                                if ( Acl < 0 )
                                  goto LABEL_491;
                                if ( !v196 )
                                {
                                  Acl = -1073741762;
                                  goto LABEL_491;
                                }
                                v199 = ExAllocatePoolWithTag(PagedPool, v196, 0x20534C53u);
                                if ( !v199 )
                                {
                                  Acl = -1073741801;
                                  goto LABEL_491;
                                }
                                memmove(v199, v364, (unsigned int)v349);
                                v378 = (unsigned int *)v364;
                                v341 = v349;
                                if ( (_DWORD)v349 == 4 )
                                {
                                  v365 = 0LL;
                                  v347 = 0;
                                  if ( LODWORD(v331[0]) <= 5 )
                                  {
                                    Acl = -1073741811;
                                    goto LABEL_491;
                                  }
                                  v208 = (unsigned int *)v331[1];
                                  v332 = (ULONGLONG)v331[1];
                                  while ( 1 )
                                  {
                                    v209 = *v208;
                                    Acl = RtlULongLongAdd((ULONGLONG)v208, 4uLL, &v332);
                                    if ( Acl < 0 )
                                      break;
                                    Acl = RtlULongLongAdd(v332, v209, &v332);
                                    if ( Acl < 0 )
                                      break;
                                    v208 = (unsigned int *)v332;
                                    if ( (unsigned int)(v211 + 1) >= 5 )
                                    {
                                      Acl = RtlULongLongAdd(v332, 4uLL, &v332);
                                      if ( Acl >= 0 )
                                      {
                                        v213 = (void *)v332;
                                        v210 = v212;
                                        v347 = v212;
                                        if ( !v212 )
                                          v213 = 0LL;
                                        v365 = v213;
                                      }
                                      break;
                                    }
                                  }
                                  if ( Acl < 0 )
                                    goto LABEL_491;
                                  if ( !v210 )
                                  {
                                    Acl = -1073741762;
                                    goto LABEL_491;
                                  }
                                  v214 = ExAllocatePoolWithTag(PagedPool, v210, 0x20534C53u);
                                  if ( !v214 )
                                  {
                                    Acl = -1073741801;
                                    goto LABEL_491;
                                  }
                                  memmove(v214, v365, v347);
                                  v377 = v365;
                                  v341 = v347;
                                  if ( v347 == 8 )
                                  {
                                    v200 = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_140D2D478)(*v378, *v377);
                                    uAugend[0] = 0;
                                    uAddend = 0;
                                    v201 = v200;
                                    v202 = RtlUIntAdd(4u, 4u, &uAddend);
                                    v203 = v348;
                                    Acl = v202;
                                    if ( v202 >= 0 )
                                      v203 = uAddend;
                                    v348 = v203;
                                    if ( v202 < 0 )
                                      goto LABEL_491;
                                    Acl = RtlUIntAdd(0, v203, uAugend);
                                    if ( Acl < 0 )
                                      goto LABEL_491;
                                    v344 = 0;
                                    v206 = RtlUIntAdd(v205, v204 + 8, &v344);
                                    Acl = v206;
                                    if ( v206 >= 0 )
                                      v207 = v344;
                                    v348 = v207;
                                    if ( v206 < 0 )
                                      goto LABEL_491;
                                    Acl = RtlUIntAdd(uAugend[0], v207, uAugend);
                                    if ( Acl < 0 )
                                      goto LABEL_491;
                                    HIDWORD(v330[0]) = uAugend[0];
                                    if ( !uAugend[0] )
                                    {
                                      Acl = -1073741762;
                                      goto LABEL_491;
                                    }
                                    v215 = ExAllocatePoolWithTag(PagedPool, uAugend[0], 0x20534C53u);
                                    if ( !v215 )
                                    {
                                      Acl = -1073741801;
                                      goto LABEL_491;
                                    }
                                    v330[1] = v215;
                                    LODWORD(v330[0]) = 0;
                                    v390 = 0;
                                    v373 = v201 | 0x10000000;
                                    *(_OWORD *)Size = 0LL;
                                    Acl = RtlULongLongAdd((ULONGLONG)v215, 4uLL, &Size[1]);
                                    v218 = 0;
                                    if ( Acl >= 0 )
                                    {
                                      if ( v216 + 2 <= (UINT *)((char *)v216 + HIDWORD(v330[0])) )
                                      {
                                        v219 = (int *)Size[1];
                                        *v216 = v217;
                                        *v219 = v373;
                                        v218 = ++LODWORD(v330[0]);
                                        goto LABEL_473;
                                      }
LABEL_488:
                                      Acl = -1073741789;
                                      goto LABEL_491;
                                    }
LABEL_473:
                                    if ( Acl < 0 )
                                      goto LABEL_491;
                                    v387 = v379;
                                    v360 = 0;
                                    *(_OWORD *)v374 = 0LL;
                                    if ( !v330[1] )
                                    {
                                      v343 = 0;
                                      v220 = RtlUIntAdd(v217, 8u, &v343);
                                      Acl = v220;
                                      if ( v220 >= 0 )
                                        v221 = v343;
                                      v360 = v221;
                                      if ( v220 < 0 )
                                        goto LABEL_491;
                                      Acl = RtlUIntAdd(HIDWORD(v330[0]), v221, (UINT *)v330 + 1);
                                      if ( Acl < 0 )
                                        goto LABEL_491;
                                      Acl = 0;
                                      goto LABEL_490;
                                    }
                                    v222 = (UINT *)v330[1];
                                    v223 = 0;
                                    v336 = (ULONGLONG)v330[1];
                                    if ( v218 )
                                    {
                                      do
                                      {
                                        v224 = *v222;
                                        LODWORD(NumberOfBytes) = 0;
                                        v225 = RtlUIntAdd(4u, v224, (UINT *)&NumberOfBytes);
                                        Acl = v225;
                                        if ( v225 >= 0 )
                                          v226 = NumberOfBytes;
                                        v360 = v226;
                                        if ( v225 < 0 )
                                          goto LABEL_491;
                                        Acl = RtlULongLongAdd(v227, v226, &v336);
                                        if ( Acl < 0 )
                                          goto LABEL_491;
                                        v222 = (UINT *)v336;
                                      }
                                      while ( ++v223 < v228 );
                                    }
                                    Acl = RtlULongLongAdd((ULONGLONG)v222, 4uLL, &v374[1]);
                                    if ( Acl >= 0 )
                                    {
                                      if ( v229 + 3 > (_DWORD *)((char *)v330[1] + HIDWORD(v330[0])) )
                                        goto LABEL_488;
                                      v230 = (_QWORD *)v374[1];
                                      *v229 = 8;
                                      *v230 = v387;
LABEL_490:
                                      ++LODWORD(v330[0]);
                                    }
LABEL_491:
                                    v6 = v11;
                                    v186 = Acl < 0;
                                    goto LABEL_402;
                                  }
                                }
                                Acl = -1073741306;
LABEL_172:
                                v6 = v11;
                                goto LABEL_173;
                              }
LABEL_244:
                              v141 = Size[0];
                              if ( Size[0] )
                              {
                                v158 = (unsigned int)ullAddend;
                                *((_DWORD *)v155 + 8) = ullAddend;
                                if ( !(_DWORD)v158 )
                                {
                                  Acl = -1073741762;
LABEL_247:
                                  LODWORD(v141) = 0;
                                  goto LABEL_253;
                                }
                                Size[0] = v158;
                                v159 = ExAllocatePoolWithTag(PagedPool, v158, 0x20534C53u);
                                v154 = 0LL;
                                if ( !v159 )
                                {
                                  Acl = -1073741801;
                                  goto LABEL_247;
                                }
                                *((_QWORD *)v155 + 5) = v159;
                                Acl = 0;
                                memmove(v159, (const void *)v141, Size[0]);
                                LODWORD(v141) = 0;
                              }
                              else
                              {
                                *((_DWORD *)v155 + 8) = 0;
                                *((_QWORD *)v155 + 5) = 0LL;
                              }
                              v9 = (const void **)v155;
                              v356 = (const void **)v155;
                              v155 = 0LL;
                              goto LABEL_253;
                            }
LABEL_626:
                            Acl = -1073741675;
LABEL_627:
                            v7 = v326;
                          }
                          else
                          {
                            Acl = -1073741811;
                          }
                        }
                      }
LABEL_209:
                      v8 = 0LL;
                      goto LABEL_210;
                    }
                    uAugend[0] = 0;
                    v123 = 0LL;
                    v124 = 0;
                    if ( !v120 )
                      goto LABEL_154;
                    v125 = v120;
                    if ( v121 < (unsigned __int64)v120 )
                    {
LABEL_162:
                      Acl = -1073741675;
                    }
                    else
                    {
                      if ( v121 > (unsigned __int64)v120 )
                      {
                        while ( 1 )
                        {
                          if ( v125 + 4 < v125 )
                            goto LABEL_162;
                          if ( (unsigned __int64)(v125 + 4) > v121 )
                            goto LABEL_157;
                          v126 = *(_DWORD *)v125 + 4;
                          if ( *(_DWORD *)v125 >= 0xFFFFFFFC )
                            break;
                          v384 = *(_DWORD *)v125 + 4;
                          v127 = &v125[v126];
                          if ( v127 < v125 )
                            goto LABEL_162;
                          v125 += v126;
                          if ( (unsigned __int64)v127 > v121 )
                            goto LABEL_157;
                          uAugend[0] = ++v124;
                          if ( (unsigned __int64)v127 >= v121 )
                            goto LABEL_153;
                        }
                        Acl = -1073741675;
                        goto LABEL_169;
                      }
LABEL_153:
                      if ( v125 == (char *)v121 )
                      {
LABEL_154:
                        if ( (_DWORD)v119 )
                        {
                          v123 = ExAllocatePoolWithTag(PagedPool, v119, 0x20534C53u);
                          if ( !v123 )
                          {
                            Acl = -1073741801;
LABEL_168:
                            v118 = uAddend;
LABEL_169:
                            if ( Acl >= 0 && v118 != LODWORD(v331[0]) )
                            {
                              Acl = -1073741762;
                              goto LABEL_172;
                            }
                            goto LABEL_158;
                          }
                          v122 = v119;
                        }
                        if ( v120 )
                          memmove(v123, v120, v122);
                        v331[0] = (PVOID)__PAIR64__(v119, uAugend[0]);
                        v331[1] = v123;
                        Acl = 0;
                        goto LABEL_168;
                      }
LABEL_157:
                      Acl = -1073741811;
                    }
LABEL_158:
                    v7 = v326;
                    goto LABEL_159;
                  }
                }
              }
            }
            v6 = v11;
          }
        }
      }
      Acl = -1073741811;
      v7 = 0LL;
      v8 = 0LL;
      v10 = 0LL;
      goto LABEL_175;
    }
  }
  Acl = -1073741675;
  v7 = 0LL;
  v8 = 0LL;
LABEL_175:
  v331[0] = 0LL;
  if ( v331[1] )
  {
    ExFreePoolWithTag(v331[1], 0x20534C53u);
    v331[1] = 0LL;
  }
  v330[0] = 0LL;
  if ( v330[1] )
  {
    ExFreePoolWithTag(v330[1], 0x20534C53u);
    v330[1] = 0LL;
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x20534C53u);
  if ( v6 )
  {
    v128 = (void *)v6[1];
    if ( v128 )
    {
      ExFreePoolWithTag(v128, 0x20534C53u);
      v6[1] = 0LL;
    }
    v129 = (void *)v6[3];
    if ( v129 )
    {
      ExFreePoolWithTag(v129, 0x20534C53u);
      v6[3] = 0LL;
    }
    v130 = (void *)v6[5];
    if ( v130 )
    {
      ExFreePoolWithTag(v130, 0x20534C53u);
      v6[5] = 0LL;
    }
    ExFreePoolWithTag(v6, 0x20534C53u);
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0x20534C53u);
  if ( v9 )
  {
    v131 = (void *)v9[1];
    if ( v131 )
    {
      ExFreePoolWithTag(v131, 0x20534C53u);
      v9[1] = 0LL;
    }
    v132 = (void *)v9[3];
    if ( v132 )
    {
      ExFreePoolWithTag(v132, 0x20534C53u);
      v9[3] = 0LL;
    }
    v133 = (void *)v9[5];
    if ( v133 )
    {
      ExFreePoolWithTag(v133, 0x20534C53u);
      v9[5] = 0LL;
    }
    ExFreePoolWithTag(v9, 0x20534C53u);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x20534C53u);
  return (unsigned int)Acl;
}
