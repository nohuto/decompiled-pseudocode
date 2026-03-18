/*
 * XREFs of sub_1407D0090 @ 0x1407D0090
 * Callers:
 *     Callout @ 0x1406CADF0 (Callout.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     RtlUIntAdd @ 0x1402E1260 (RtlUIntAdd.c)
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     RtlULongLongAdd @ 0x140354360 (RtlULongLongAdd.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140648860 @ 0x140648860 (sub_140648860.c)
 *     sub_140648D4C @ 0x140648D4C (sub_140648D4C.c)
 *     SPCallServerHandleFileIntegrityUpdate @ 0x14065EA54 (SPCallServerHandleFileIntegrityUpdate.c)
 *     SPCallServerHandleFileUsnQuery @ 0x14065EE94 (SPCallServerHandleFileUsnQuery.c)
 *     SPCallServerHandleFileIntegrityQuery @ 0x1406605B8 (SPCallServerHandleFileIntegrityQuery.c)
 *     sub_1406A31E0 @ 0x1406A31E0 (sub_1406A31E0.c)
 *     sub_1406A53A0 @ 0x1406A53A0 (sub_1406A53A0.c)
 *     sub_1406A5460 @ 0x1406A5460 (sub_1406A5460.c)
 *     sub_1406A6FA0 @ 0x1406A6FA0 (sub_1406A6FA0.c)
 *     sub_1406A7060 @ 0x1406A7060 (sub_1406A7060.c)
 *     sub_1406A70E0 @ 0x1406A70E0 (sub_1406A70E0.c)
 *     sub_1406A76C0 @ 0x1406A76C0 (sub_1406A76C0.c)
 *     sub_1406A7740 @ 0x1406A7740 (sub_1406A7740.c)
 *     sub_1406A7B80 @ 0x1406A7B80 (sub_1406A7B80.c)
 *     sub_1406A8A50 @ 0x1406A8A50 (sub_1406A8A50.c)
 *     sub_1406A95F0 @ 0x1406A95F0 (sub_1406A95F0.c)
 *     sub_1406A96A0 @ 0x1406A96A0 (sub_1406A96A0.c)
 *     sub_1406A9740 @ 0x1406A9740 (sub_1406A9740.c)
 *     sub_1406ACAB0 @ 0x1406ACAB0 (sub_1406ACAB0.c)
 *     sub_1406ACDB0 @ 0x1406ACDB0 (sub_1406ACDB0.c)
 *     sub_1406AD150 @ 0x1406AD150 (sub_1406AD150.c)
 *     sub_1406AD280 @ 0x1406AD280 (sub_1406AD280.c)
 *     sub_1406AD320 @ 0x1406AD320 (sub_1406AD320.c)
 *     sub_1406AD3C0 @ 0x1406AD3C0 (sub_1406AD3C0.c)
 *     sub_1406B4680 @ 0x1406B4680 (sub_1406B4680.c)
 *     sub_1406B4740 @ 0x1406B4740 (sub_1406B4740.c)
 *     sub_1406B4DF0 @ 0x1406B4DF0 (sub_1406B4DF0.c)
 *     sub_1406B5F50 @ 0x1406B5F50 (sub_1406B5F50.c)
 *     sub_1406B8790 @ 0x1406B8790 (sub_1406B8790.c)
 *     sub_1406B8D60 @ 0x1406B8D60 (sub_1406B8D60.c)
 *     SPCallServerHandleIsAppLicensed @ 0x1406CD46C (SPCallServerHandleIsAppLicensed.c)
 *     sub_1406D20B0 @ 0x1406D20B0 (sub_1406D20B0.c)
 *     sub_1406D4F40 @ 0x1406D4F40 (sub_1406D4F40.c)
 *     sub_1406D7520 @ 0x1406D7520 (sub_1406D7520.c)
 *     SPCallServerHandleClepKdf @ 0x1406D9B20 (SPCallServerHandleClepKdf.c)
 *     SPCallServerHandleUpdatePolicies @ 0x1406E0690 (SPCallServerHandleUpdatePolicies.c)
 *     sub_1406E0840 @ 0x1406E0840 (sub_1406E0840.c)
 *     SPCallServerHandleAuthenticateCaller @ 0x1406E17A8 (SPCallServerHandleAuthenticateCaller.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x1406E825C (SPCallServerHandleWaitForDisplayWindow.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     RtlpAddKnownAce @ 0x1407B4900 (RtlpAddKnownAce.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1407D2C60 @ 0x1407D2C60 (sub_1407D2C60.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x1407D45CC (SPCallServerHandleGetAppPolicyValue.c)
 *     SPCallServerHandleClepSign @ 0x1407F7874 (SPCallServerHandleClepSign.c)
 *     sub_140884100 @ 0x140884100 (sub_140884100.c)
 *     sub_140A0AD40 @ 0x140A0AD40 (sub_140A0AD40.c)
 *     sub_140A0B0F0 @ 0x140A0B0F0 (sub_140A0B0F0.c)
 *     sub_140A0B4C4 @ 0x140A0B4C4 (sub_140A0B4C4.c)
 *     sub_140A0B85C @ 0x140A0B85C (sub_140A0B85C.c)
 *     sub_140A0BA74 @ 0x140A0BA74 (sub_140A0BA74.c)
 *     sub_140A0BC8C @ 0x140A0BC8C (sub_140A0BC8C.c)
 *     sub_140A0C1F4 @ 0x140A0C1F4 (sub_140A0C1F4.c)
 *     sub_140A0C7AC @ 0x140A0C7AC (sub_140A0C7AC.c)
 *     sub_140A0CB34 @ 0x140A0CB34 (sub_140A0CB34.c)
 *     sub_140A0D214 @ 0x140A0D214 (sub_140A0D214.c)
 *     sub_140A0D5E8 @ 0x140A0D5E8 (sub_140A0D5E8.c)
 *     sub_140A0D838 @ 0x140A0D838 (sub_140A0D838.c)
 *     sub_140A0DD98 @ 0x140A0DD98 (sub_140A0DD98.c)
 *     sub_140A0E160 @ 0x140A0E160 (sub_140A0E160.c)
 *     sub_140A0E378 @ 0x140A0E378 (sub_140A0E378.c)
 *     sub_140A0E590 @ 0x140A0E590 (sub_140A0E590.c)
 *     sub_140A0E96C @ 0x140A0E96C (sub_140A0E96C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407D0090(unsigned int *a1, unsigned int a2, UINT a3, _QWORD *a4, UINT *a5)
{
  _QWORD *v5; // r12
  char *v6; // r14
  int Acl; // ebx
  size_t v8; // rsi
  char *v9; // r13
  unsigned int *v10; // r9
  size_t v11; // rbx
  unsigned int *v12; // rcx
  unsigned int v13; // r9d
  unsigned int *v14; // r10
  unsigned int v15; // r8d
  size_t v16; // r15
  unsigned int v17; // ecx
  unsigned int *Pool2; // rax
  unsigned int *v19; // rdi
  size_t v20; // r12
  void *v21; // rax
  void *v22; // rax
  void *v23; // rbx
  void *v24; // rax
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  PVOID v28; // r15
  size_t v29; // r15
  unsigned __int64 v30; // rax
  __int64 *v31; // rbx
  unsigned int v32; // ecx
  unsigned int v33; // edx
  __int64 v34; // rbx
  char v35; // si
  unsigned __int8 v36; // di
  char *v37; // rax
  int v38; // r9d
  unsigned __int8 *v39; // r10
  int v40; // esi
  int v41; // r13d
  int v42; // r15d
  UINT v43; // r11d
  UINT v44; // ebx
  unsigned int v45; // r8d
  char v46; // dl
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // r14
  unsigned __int8 *v50; // rbx
  unsigned __int8 *v51; // rax
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  UINT v56; // esi
  UINT v57; // r15d
  unsigned int v58; // edx
  unsigned int v59; // r8d
  UINT v60; // eax
  UINT v61; // ecx
  _BYTE *v62; // r10
  char *v63; // r11
  char v64; // r9
  UINT v65; // r15d
  char *v66; // rcx
  unsigned __int8 *v67; // r8
  UINT v68; // edi
  UINT v69; // r13d
  unsigned __int8 *v70; // r11
  const void **v71; // rcx
  int v72; // edx
  int v73; // eax
  int v74; // esi
  UINT v75; // edx
  int v76; // r8d
  unsigned int v77; // r15d
  int v78; // esi
  int v79; // r15d
  int v80; // esi
  int v81; // r15d
  int v82; // esi
  int v83; // r15d
  __int64 v84; // r14
  int v85; // esi
  __int64 v86; // rdx
  int v87; // r15d
  unsigned int v88; // esi
  unsigned __int8 *v89; // rbx
  unsigned int v90; // r15d
  unsigned __int8 *v91; // rax
  int v92; // esi
  __int64 v93; // rcx
  int v94; // eax
  __int64 v95; // rcx
  int v96; // eax
  _BYTE *v97; // r11
  int v98; // esi
  int v99; // r15d
  int v100; // esi
  int v101; // r15d
  int v102; // esi
  int v103; // r15d
  int v104; // esi
  int v105; // r15d
  bool v106; // zf
  unsigned __int64 v107; // rax
  size_t v108; // rsi
  char *v109; // rdi
  unsigned __int64 v110; // rdx
  size_t v111; // r10
  void *v112; // rax
  unsigned int v113; // ebx
  char *v114; // rcx
  unsigned int v115; // eax
  char *v116; // r8
  int v117; // r8d
  UINT *v118; // rax
  UINT *v119; // rax
  int v120; // edx
  __int64 v121; // r8
  unsigned int *v122; // rcx
  UINT v123; // ecx
  unsigned int *v124; // rdx
  size_t v125; // rax
  unsigned int *v126; // rax
  unsigned int i; // edx
  __int64 v128; // r8
  unsigned int *v129; // rcx
  size_t v130; // rbx
  const void *v131; // rdi
  __int64 v132; // rcx
  ULONGLONG v133; // rsi
  __int64 v134; // r8
  const void *v135; // r14
  size_t v136; // rax
  void *v137; // rax
  void *v138; // rax
  void *v139; // rcx
  void *v140; // rcx
  void *v141; // rcx
  int IsAppLicensed; // eax
  __int64 v143; // rdi
  ULONG v144; // ebx
  ULONG v145; // ebx
  ULONG v146; // ebx
  ACL *v147; // rax
  ACL *v148; // r14
  BOOLEAN v149; // di
  const void *v150; // rbx
  _DWORD *v151; // rdi
  _QWORD **v152; // r14
  int v153; // eax
  __int64 v154; // rdi
  ULONG v155; // ebx
  ULONG v156; // ebx
  ULONG v157; // ebx
  ACL *v158; // rax
  ACL *v159; // r14
  BOOLEAN v160; // di
  __int64 v161; // rdx
  int v162; // r8d
  int v163; // edi
  const void *v164; // rbx
  _DWORD *v165; // r14
  const void *v166; // rbx
  _QWORD **v167; // rdi
  int UpdateFileEaAllowedExt; // eax
  int v169; // eax
  int v170; // edi
  const void *v171; // rbx
  int v172; // r8d
  _DWORD *v173; // r14
  const void *v174; // rbx
  _QWORD **v175; // rdi
  ULONGLONG v176; // rcx
  unsigned int v177; // r10d
  int v178; // r9d
  int v179; // r9d
  unsigned int v180; // r11d
  size_t *v181; // rax
  ULONGLONG v182; // rcx
  unsigned int v183; // r10d
  int v184; // r9d
  size_t v185; // rdi
  unsigned int *v186; // rsi
  void *v187; // rax
  ULONGLONG v188; // rcx
  unsigned int v189; // r10d
  int v190; // r9d
  size_t v191; // rdi
  _QWORD *v192; // rbx
  void *v193; // rax
  int v194; // edi
  ULONGLONG v195; // r9
  int v196; // edi
  _DWORD *v197; // r9
  _DWORD *v198; // rax
  int v199; // r11d
  UINT *v200; // r9
  UINT v201; // edx
  ULONGLONG v202; // r9
  int v203; // r10d
  unsigned int v204; // r11d
  _DWORD *v205; // r9
  _QWORD *v206; // rax
  size_t v207; // rcx
  NTSTATUS v208; // eax
  UINT *v209; // r9
  UINT v210; // edx
  ULONGLONG v211; // r9
  int v212; // r10d
  _DWORD *v213; // r9
  _DWORD *v214; // rax
  ULONGLONG v215; // r9
  _DWORD *v216; // r9
  _DWORD *v217; // rax
  unsigned __int64 v218; // rsi
  __int64 v219; // rdx
  _DWORD *v220; // rdi
  ULONGLONG v221; // rcx
  void *v222; // rcx
  _DWORD *v223; // r9
  __int64 *v224; // rdi
  int v225; // eax
  unsigned __int8 *v226; // r8
  int v227; // edx
  __int64 v228; // rdi
  unsigned __int8 v229; // bl
  unsigned __int64 v230; // rax
  __int64 v231; // rax
  UINT v232; // r11d
  unsigned int v233; // esi
  unsigned __int8 *v234; // r9
  UINT v235; // r10d
  int v236; // edx
  char v237; // bl
  int v238; // eax
  ULONGLONG v239; // rcx
  unsigned __int8 *v240; // r15
  unsigned __int8 *v241; // rdi
  __int64 v242; // rbx
  __int64 v243; // rax
  int v244; // eax
  __int64 v245; // rax
  int v246; // eax
  UINT v247; // r13d
  unsigned int v248; // eax
  unsigned int v249; // r8d
  UINT v250; // ecx
  unsigned int v251; // edx
  _BYTE *v252; // r9
  _BYTE *v253; // r11
  char v254; // r10
  unsigned __int64 v255; // r8
  unsigned __int8 *v256; // r12
  unsigned __int8 *v257; // r8
  int v258; // ecx
  __int64 v259; // rbx
  int v260; // eax
  unsigned __int8 *v261; // rdi
  int v262; // edx
  unsigned __int8 *v263; // r15
  int v264; // edx
  UINT v265; // esi
  ULONGLONG v266; // rcx
  int v267; // edx
  int v268; // r13d
  __int64 v269; // rax
  int v270; // eax
  __int64 v271; // rax
  int v272; // eax
  int v273; // edi
  unsigned int v274; // esi
  int v275; // r13d
  int v276; // esi
  int v277; // r13d
  int v278; // esi
  int v279; // r13d
  int v280; // esi
  unsigned int v281; // r13d
  int v282; // esi
  int v283; // r13d
  _BYTE *v284; // r8
  UINT v285; // r11d
  UINT v286; // r10d
  int v287; // esi
  int v288; // eax
  UINT v289; // esi
  int v290; // esi
  UINT v291; // r13d
  int v292; // r13d
  int v293; // esi
  int v294; // r13d
  int v295; // esi
  int v296; // r13d
  PVOID v297; // r13
  unsigned int v298; // r15d
  void *v299; // rax
  void *v300; // rdi
  PVOID v301; // rdi
  const void **v302; // rsi
  ULONGLONG v303; // r14
  UINT v304; // edx
  UINT v305; // ecx
  NTSTATUS v306; // edi
  NTSTATUS v307; // eax
  _DWORD *v308; // r15
  NTSTATUS v309; // eax
  const void **v310; // r14
  UINT v311; // eax
  _DWORD *v312; // r13
  ULONGLONG v313; // rcx
  ULONGLONG v314; // rcx
  UINT v315; // eax
  void *v316; // rcx
  void *v317; // rcx
  void *v318; // rcx
  void *v319; // rcx
  void *v320; // rcx
  void *v321; // rcx
  UINT puResult; // [rsp+58h] [rbp-B0h] BYREF
  UINT v324; // [rsp+5Ch] [rbp-ACh] BYREF
  UINT uAugend[2]; // [rsp+60h] [rbp-A8h] BYREF
  ULONGLONG pullResult[4]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int8 v327; // [rsp+88h] [rbp-80h]
  PVOID v328; // [rsp+90h] [rbp-78h]
  ULONGLONG ullAugend[2]; // [rsp+98h] [rbp-70h] BYREF
  ULONGLONG v330; // [rsp+A8h] [rbp-60h] BYREF
  ULONGLONG v331; // [rsp+B0h] [rbp-58h] BYREF
  ULONGLONG v332; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD **v333; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v334; // [rsp+C8h] [rbp-40h]
  _QWORD *v335; // [rsp+D0h] [rbp-38h]
  UINT v336; // [rsp+D8h] [rbp-30h] BYREF
  const void **v337; // [rsp+E0h] [rbp-28h]
  __int64 v338; // [rsp+E8h] [rbp-20h]
  size_t Size; // [rsp+F0h] [rbp-18h]
  ULONGLONG v340; // [rsp+F8h] [rbp-10h] BYREF
  PVOID P; // [rsp+100h] [rbp-8h]
  _BYTE *v342; // [rsp+108h] [rbp+0h]
  PVOID v343; // [rsp+110h] [rbp+8h]
  void *Src; // [rsp+118h] [rbp+10h]
  unsigned __int8 *v345; // [rsp+120h] [rbp+18h]
  ULONGLONG v346; // [rsp+128h] [rbp+20h] BYREF
  NTSTATUS v347; // [rsp+130h] [rbp+28h] BYREF
  const void **v348; // [rsp+138h] [rbp+30h]
  NTSTATUS AccessStatus; // [rsp+140h] [rbp+38h] BYREF
  _DWORD v350[3]; // [rsp+144h] [rbp+3Ch] BYREF
  ACCESS_MASK v351[2]; // [rsp+150h] [rbp+48h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+158h] [rbp+50h] BYREF
  __int64 v353; // [rsp+160h] [rbp+58h] BYREF
  __int64 v354; // [rsp+168h] [rbp+60h] BYREF
  __int64 v355; // [rsp+170h] [rbp+68h] BYREF
  _QWORD *v356; // [rsp+180h] [rbp+78h]
  UINT *v357; // [rsp+188h] [rbp+80h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+198h] [rbp+90h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+1B8h] [rbp+B0h] BYREF
  _OWORD v360[2]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v361; // [rsp+1F8h] [rbp+F0h]
  _OWORD SecurityDescriptor[2]; // [rsp+200h] [rbp+F8h] BYREF
  __int64 v363; // [rsp+220h] [rbp+118h]
  __int64 v364; // [rsp+240h] [rbp+138h] BYREF
  __int64 v365; // [rsp+248h] [rbp+140h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v356 = a4;
  puResult = a3;
  v357 = a5;
  v328 = 0LL;
  v330 = 0LL;
  memset(&pullResult[1], 0, 24);
  *(_OWORD *)ullAugend = 0LL;
  if ( a2 < 4 )
  {
    Acl = -1073741762;
LABEL_540:
    v28 = 0LL;
    goto LABEL_541;
  }
  v8 = *a1;
  v9 = (char *)(a1 + 1);
  if ( a1 + 1 < a1 )
    goto LABEL_539;
  if ( a2 - 4 < (unsigned int)v8 )
  {
    Acl = -1073741762;
    goto LABEL_540;
  }
  v10 = (unsigned int *)&v9[v8];
  if ( &v9[v8] < v9 )
  {
    v28 = 0LL;
    goto LABEL_538;
  }
  if ( (unsigned int)v8 >= 0xFFFFFFFC )
    goto LABEL_539;
  if ( a2 - ((_DWORD)v8 + 4) < 4 )
  {
    Acl = -1073741762;
    goto LABEL_540;
  }
  v11 = *v10;
  v12 = v10 + 1;
  if ( v10 + 1 < v10 )
    goto LABEL_539;
  v13 = v8 + 8;
  if ( (int)v8 + 8 < (unsigned int)(v8 + 4) )
    goto LABEL_539;
  if ( a2 - v13 < (unsigned int)v11 )
  {
    Acl = -1073741762;
    goto LABEL_540;
  }
  v14 = (unsigned int *)((char *)v12 + v11);
  if ( (unsigned int *)((char *)v12 + v11) < v12 )
    goto LABEL_539;
  v15 = v11 + v13;
  if ( (unsigned int)v11 + v13 < v13 )
    goto LABEL_539;
  if ( a2 - v15 < 4 )
  {
    Acl = -1073741762;
    goto LABEL_540;
  }
  v16 = *v14;
  Src = v14 + 1;
  if ( v14 + 1 < v14 )
    goto LABEL_539;
  v17 = v15 + 4;
  if ( v15 + 4 < v15 )
    goto LABEL_539;
  if ( a2 - v17 < (unsigned int)v16 )
  {
    Acl = -1073741762;
    goto LABEL_540;
  }
  if ( (unsigned int)v16 + v17 < v17 )
  {
LABEL_539:
    Acl = -1073741675;
    goto LABEL_540;
  }
  if ( a2 != (_DWORD)v16 + v17 )
  {
    Acl = -1073741762;
    goto LABEL_540;
  }
  if ( (unsigned int)(v8 + v16 + v11) + 12LL != a2 )
  {
    Acl = -1073741762;
    goto LABEL_540;
  }
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, 48LL, 542329939LL);
  v19 = Pool2;
  if ( !Pool2 )
  {
    Acl = -1073741801;
    goto LABEL_540;
  }
  *(_OWORD *)Pool2 = 0LL;
  *((_OWORD *)Pool2 + 1) = 0LL;
  *((_OWORD *)Pool2 + 2) = 0LL;
  if ( v9 )
  {
    *Pool2 = v8;
    if ( !(_DWORD)v8 )
    {
      Acl = -1073741762;
LABEL_46:
      v25 = (void *)*((_QWORD *)v19 + 1);
      if ( v25 )
      {
        ExFreePoolWithTag(v25, 0);
        *((_QWORD *)v19 + 1) = 0LL;
      }
      v26 = (void *)*((_QWORD *)v19 + 3);
      if ( v26 )
      {
        ExFreePoolWithTag(v26, 0);
        *((_QWORD *)v19 + 3) = 0LL;
      }
      v27 = (void *)*((_QWORD *)v19 + 5);
      if ( v27 )
      {
        ExFreePoolWithTag(v27, 0);
        *((_QWORD *)v19 + 5) = 0LL;
      }
      ExFreePoolWithTag(v19, 0);
      v5 = 0LL;
      v28 = 0LL;
      goto LABEL_541;
    }
    v20 = v8;
    v21 = (void *)ExAllocatePool2(256LL, v8, 542329939LL);
    if ( !v21 )
      goto LABEL_45;
    *((_QWORD *)v19 + 1) = v21;
    memmove(v21, v9, v8);
  }
  else
  {
    v20 = v8;
  }
  if ( &v9[v20 + 4] )
  {
    v19[4] = v11;
    if ( !(_DWORD)v11 )
    {
      Acl = -1073741762;
      goto LABEL_46;
    }
    v22 = (void *)ExAllocatePool2(256LL, v11, 542329939LL);
    if ( v22 )
    {
      *((_QWORD *)v19 + 3) = v22;
      memmove(v22, &v9[v20 + 4], v11);
      goto LABEL_41;
    }
LABEL_45:
    Acl = -1073741801;
    goto LABEL_46;
  }
  v19[4] = 0;
  *((_QWORD *)v19 + 3) = 0LL;
LABEL_41:
  v23 = Src;
  if ( Src )
  {
    v19[8] = v16;
    if ( !(_DWORD)v16 )
    {
      Acl = -1073741762;
      goto LABEL_46;
    }
    v24 = (void *)ExAllocatePool2(256LL, v16, 542329939LL);
    if ( !v24 )
      goto LABEL_45;
    *((_QWORD *)v19 + 5) = v24;
    memmove(v24, v23, v16);
  }
  else
  {
    v19[8] = 0;
    *((_QWORD *)v19 + 5) = 0LL;
  }
  v5 = v19;
  v335 = v19;
  v29 = *((_QWORD *)v19 + 1);
  Size = v29;
  if ( !v29 )
  {
    Acl = -1073741811;
    v28 = 0LL;
    goto LABEL_541;
  }
  v30 = *v19;
  if ( !(_DWORD)v30 )
  {
    Acl = -1073741811;
    v28 = 0LL;
    goto LABEL_541;
  }
  v31 = (__int64 *)*((_QWORD *)v19 + 5);
  v333 = (_QWORD **)(v19 + 10);
  if ( !v31 )
  {
    Acl = -1073741811;
    v28 = 0LL;
    goto LABEL_541;
  }
  pullResult[0] = (ULONGLONG)(v19 + 8);
  v32 = v19[8];
  if ( !v32 )
  {
    Acl = -1073741811;
    v28 = 0LL;
    goto LABEL_541;
  }
  v337 = (const void **)(v19 + 6);
  v342 = (_BYTE *)*((_QWORD *)v19 + 3);
  if ( !v342 )
  {
    Acl = -1073741811;
    v28 = 0LL;
    goto LABEL_541;
  }
  v331 = (ULONGLONG)(v19 + 4);
  v33 = v19[4];
  if ( !v33 )
  {
    Acl = -1073741811;
    v28 = 0LL;
    goto LABEL_541;
  }
  if ( v32 != 8
    || v33 != 160
    || v30 <= 8
    || (v34 = *v31,
        v35 = v30 - 8,
        Src = (void *)(v30 - 8),
        v36 = 0,
        v37 = (char *)ExAllocatePool2(256LL, v30 - 8, 542329939LL),
        (P = v37) == 0LL) )
  {
LABEL_113:
    v28 = v328;
    Acl = -1073741823;
    goto LABEL_541;
  }
  v364 = v34;
  v38 = v35 & 7;
  v332 = v29;
  v348 = (const void **)(v35 & 7);
  v39 = (unsigned __int8 *)v29;
  v343 = v37;
  if ( (v35 & 7) != 0 )
  {
    v40 = 0;
    uAugend[0] = 0;
    v41 = -1;
    v324 = 0;
    v42 = -1;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    if ( v38 )
    {
      v46 = 56;
      v335 = v5;
      do
      {
        v47 = *v39++;
        if ( v45 >= 4 )
          v43 |= v47 << v46;
        else
          v44 |= v47 << (v46 - 32);
        ++v45;
        v46 -= 8;
      }
      while ( (int)v45 < v38 );
      v324 = v44;
      uAugend[0] = v43;
      v332 = (ULONGLONG)v39;
    }
    v48 = 16LL;
    v49 = 30LL;
    v334 = 16LL;
    v50 = v342 + 126;
    v51 = v342 + 158;
    v338 = (__int64)(v342 + 158);
    do
    {
      v52 = v51[1];
      if ( (unsigned __int8)v52 < 0x1Fu )
      {
        v53 = funcs_1406A763D[v52](v49 + 1, *(v50 - 2), *(v50 - 1), *v50, v50[1], (__int64)&v364, v40);
        v48 = v334;
        v42 ^= v53;
        v51 = (unsigned __int8 *)v338;
      }
      v54 = *v51;
      if ( (unsigned __int8)v54 < 0x1Fu )
      {
        v55 = funcs_1406A763D[v54](v49, *(v50 - 6), *(v50 - 5), *(v50 - 4), *(v50 - 3), (__int64)&v364, v42);
        v48 = v334;
        v40 ^= v55;
        v51 = (unsigned __int8 *)v338;
      }
      v51 -= 2;
      v49 -= 2LL;
      v50 -= 8;
      v338 = (__int64)v51;
      v334 = --v48;
    }
    while ( v48 );
    v56 = v324 ^ v40;
    v57 = uAugend[0] ^ v42;
    v58 = 0;
    v59 = (unsigned int)v348;
    v6 = 0LL;
    v60 = v56;
    v61 = v57;
    v36 = 0;
    if ( (_DWORD)v348 )
    {
      v62 = v343;
      do
      {
        v63 = v62 + 1;
        if ( v58 >= 4 )
        {
          v61 = __ROL4__(v61, 8);
          v64 = v61;
        }
        else
        {
          v60 = __ROL4__(v60, 8);
          v64 = v60;
        }
        ++v58;
        *v62++ = v64;
      }
      while ( (int)v58 < (int)v59 );
      v37 = v63;
    }
    else
    {
      v37 = (char *)v343;
    }
    LODWORD(v34) = v364;
    v39 = (unsigned __int8 *)v332;
    if ( v59 <= 4 )
    {
      v65 = 0;
      if ( v59 < 4 )
        v56 = v56 >> (8 * (4 - v59)) << (8 * (4 - v59));
    }
    else
    {
      v65 = v57 >> (8 * (8 - v59)) << (8 * (8 - v59));
    }
  }
  else
  {
    v324 = 0;
    v41 = -1;
    v335 = v5;
    uAugend[0] = -1;
    v65 = 0;
    v56 = 0;
  }
  v66 = (char *)Src;
  v343 = (PVOID)((unsigned __int64)Src >> 3);
  if ( (unsigned __int64)Src >> 3 )
  {
    v67 = v39 + 2;
    v68 = uAugend[0];
    v69 = v324;
    v70 = v342 + 158;
    v71 = (const void **)(v342 + 126);
    v345 = v342 + 158;
    v342 = v37 + 7;
    v348 = v71;
    while ( 1 )
    {
      v72 = v67[2] << 8;
      v73 = v67[3];
      v74 = (v67[1] | ((*v67 | ((*(v67 - 1) | (*(v67 - 2) << 8)) << 8)) << 8)) ^ v56;
      uAugend[0] = v67[1] | ((*v67 | ((*(v67 - 1) | (*(v67 - 2) << 8)) << 8)) << 8);
      v75 = v67[5] | ((v67[4] | ((v73 | v72) << 8)) << 8);
      v332 = (ULONGLONG)(v67 + 8);
      v324 = v75;
      v76 = (unsigned __int16)v34;
      v77 = v74 ^ v34 ^ HIDWORD(v364) ^ v75 ^ v65;
      v78 = (v77 >> 8) ^ (WORD2(v364) * (v77 ^ WORD1(v364))) ^ v74;
      v79 = (WORD1(v364) * __ROR4__(HIDWORD(v364) - v78, 11) - __ROR4__(v78, 12)) ^ v77;
      v80 = ((unsigned __int16)v34 * __ROL4__(v79 ^ HIDWORD(v364), 8) - __ROL4__(v79, 2)) ^ v78;
      v81 = __ROR4__(v80, 9) ^ (HIWORD(v364) * __ROR4__(v80 - v34, 4)) ^ v79;
      v82 = (__ROR4__(v81, 4) + WORD2(v364) * __ROR4__(v34 - v81, 10)) ^ v80;
      v83 = (WORD1(v364) * __ROL4__(HIWORD(v364) ^ v82, 4) - __ROR4__(v82, 16)) ^ v81;
      v84 = 30LL;
      v85 = ((unsigned __int16)v34 * (WORD1(v364) ^ v83) - __ROR4__(v83, 7)) ^ v82;
      v86 = 16LL;
      v87 = (v85 - v34 - HIWORD(v364)) ^ v83;
      v338 = 16LL;
      v88 = __ROR4__(v87, 11) ^ (WORD2(v364) * __ROR4__(v34 - v87, 9)) ^ v85;
      v89 = (unsigned __int8 *)v348;
      v90 = (WORD1(v364) * (v88 - WORD2(v364)) - (v88 >> 13)) ^ v87;
      v91 = v70;
      v334 = (unsigned __int64)v70;
      v92 = (v90 >> 15) ^ (v76 * __ROL4__(v90 - WORD2(v364), 3)) ^ v88;
      do
      {
        v93 = v91[1];
        if ( (unsigned __int8)v93 < 0x1Fu )
        {
          v94 = funcs_1406A763D[v93](v84 + 1, *(v89 - 2), *(v89 - 1), *v89, v89[1], (__int64)&v364, v92);
          v86 = v338;
          v90 ^= v94;
          v91 = (unsigned __int8 *)v334;
        }
        v95 = *v91;
        if ( (unsigned __int8)v95 < 0x1Fu )
        {
          v96 = funcs_1406A763D[v95](v84, *(v89 - 6), *(v89 - 5), *(v89 - 4), *(v89 - 3), (__int64)&v364, v90);
          v86 = v338;
          v92 ^= v96;
          v91 = (unsigned __int8 *)v334;
        }
        v91 -= 2;
        v84 -= 2LL;
        v89 -= 8;
        v334 = (unsigned __int64)v91;
        v338 = --v86;
      }
      while ( v86 );
      v97 = v342;
      v98 = v69 ^ v92;
      v69 = uAugend[0];
      v99 = v68 ^ v90;
      v68 = v324;
      *(v342 - 4) = v98;
      *v97 = v99;
      v100 = __ROR4__(v98, 8);
      *(v97 - 5) = v100;
      v101 = __ROR4__(v99, 8);
      *(v97 - 1) = v101;
      v102 = __ROR4__(v100, 8);
      *(v97 - 6) = v102;
      v103 = __ROR4__(v101, 8);
      *(v97 - 2) = v103;
      v104 = __ROR4__(v102, 8);
      v105 = __ROR4__(v103, 8);
      *(v97 - 7) = v104;
      *(v97 - 3) = v105;
      v65 = __ROR4__(v105, 8);
      v56 = __ROR4__(v104, 8);
      v106 = v343 == (PVOID)1;
      v343 = (char *)v343 - 1;
      v342 = v97 + 8;
      if ( v106 )
        break;
      LODWORD(v34) = v364;
      v67 = (unsigned __int8 *)v332;
      v70 = v345;
    }
    v6 = (char *)pullResult[1];
    v36 = 0;
    v5 = v335;
    v66 = (char *)Src;
    v41 = -1;
  }
  v107 = 0LL;
  if ( v66 )
  {
    do
      v36 ^= *((_BYTE *)P + v107++);
    while ( v107 < (unsigned __int64)v66 );
  }
  if ( v36 != *(_QWORD *)&v66[Size] )
  {
    ExFreePoolWithTag(P, 0);
    goto LABEL_113;
  }
  if ( (unsigned int)v66 < 4 )
    goto LABEL_115;
  uAugend[0] = *(_DWORD *)P;
  if ( (char *)P + 4 < P )
  {
    v28 = P;
    Acl = -1073741675;
    goto LABEL_541;
  }
  if ( (unsigned int)((_DWORD)v66 - 4) < 4 )
  {
    Acl = -1073741762;
    v28 = P;
    goto LABEL_541;
  }
  v108 = *((unsigned int *)P + 1);
  v109 = (char *)P + 8;
  if ( (char *)P + 8 < (char *)P + 4 )
    goto LABEL_535;
  if ( (int)v66 - 8 < (unsigned int)v108 )
  {
    Acl = -1073741762;
    v28 = P;
    goto LABEL_541;
  }
  if ( (unsigned int)v108 >= 0xFFFFFFF8 )
  {
LABEL_535:
    Acl = -1073741675;
    v28 = P;
    goto LABEL_541;
  }
  v110 = (unsigned __int64)&v109[v108];
  v111 = *((unsigned int *)P + 1);
  if ( (char *)P + (unsigned int)v66 < &v109[v108] || (unsigned int)v66 - v108 - 8 >= 8 )
  {
LABEL_115:
    Acl = -1073741762;
    v28 = P;
    goto LABEL_541;
  }
  v28 = P;
  v334 = 0LL;
  v112 = 0LL;
  v113 = 0;
  if ( P != (PVOID)-8LL )
  {
    v114 = (char *)P + 8;
    if ( v110 >= (unsigned __int64)v109 )
    {
      if ( v110 > (unsigned __int64)v109 )
      {
        do
        {
          if ( v114 + 4 < v114 )
            goto LABEL_538;
          if ( (unsigned __int64)(v114 + 4) > v110 )
            goto LABEL_155;
          v115 = *(_DWORD *)v114 + 4;
          if ( *(_DWORD *)v114 >= 0xFFFFFFFC )
            goto LABEL_538;
          v116 = &v114[v115];
          if ( v116 < v114 )
            goto LABEL_538;
          v114 += v115;
          if ( (unsigned __int64)v116 > v110 )
            goto LABEL_155;
          ++v113;
        }
        while ( (unsigned __int64)v116 < v110 );
        v112 = (void *)v334;
      }
      if ( v114 != (char *)v110 )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      goto LABEL_137;
    }
LABEL_538:
    Acl = -1073741675;
    goto LABEL_541;
  }
LABEL_137:
  if ( (_DWORD)v108 )
  {
    v112 = (void *)ExAllocatePool2(256LL, v108, 542329939LL);
    v334 = (unsigned __int64)v112;
    if ( !v112 )
    {
      Acl = -1073741801;
      goto LABEL_541;
    }
    v111 = v108;
  }
  if ( P != (PVOID)-8LL )
  {
    memmove(v112, v109, v111);
    v112 = (void *)v334;
  }
  ullAugend[1] = (ULONGLONG)v112;
  ullAugend[0] = __PAIR64__(v108, v113);
  if ( uAugend[0] != v113 )
  {
    Acl = -1073741762;
    goto LABEL_541;
  }
  if ( !ullAugend[1] )
  {
    Acl = -1073741811;
    goto LABEL_541;
  }
  if ( !v113 )
  {
    Acl = -1073741811;
    goto LABEL_541;
  }
  v117 = *(_DWORD *)ullAugend[1];
  if ( ullAugend[1] + 4 < ullAugend[1] )
    goto LABEL_538;
  v118 = 0LL;
  if ( v117 )
    v118 = (UINT *)(ullAugend[1] + 4);
  if ( v117 != 4 )
  {
    Acl = -1073741789;
    goto LABEL_541;
  }
  v324 = *v118;
  if ( v113 <= 1 )
  {
LABEL_155:
    Acl = -1073741811;
    goto LABEL_541;
  }
  v119 = (UINT *)ullAugend[1];
  v120 = 0;
  v328 = P;
  v335 = v5;
  do
  {
    v121 = *v119;
    v122 = v119 + 1;
    if ( v119 + 1 < v119 )
      goto LABEL_538;
    v119 = (unsigned int *)((char *)v122 + v121);
    if ( (unsigned int *)((char *)v122 + v121) < v122 )
      goto LABEL_538;
    ++v120;
  }
  while ( !v120 );
  v123 = *v119;
  v124 = v119 + 1;
  uAugend[0] = *v119;
  if ( v119 + 1 < v119 )
    goto LABEL_538;
  v125 = 0LL;
  if ( v123 )
    v125 = (size_t)v124;
  Size = v125;
  if ( v113 <= 2 )
  {
    Acl = -1073741811;
    goto LABEL_541;
  }
  v126 = (unsigned int *)ullAugend[1];
  for ( i = 0; i < 2; ++i )
  {
    v128 = *v126;
    v129 = v126 + 1;
    if ( v126 + 1 < v126 )
      goto LABEL_538;
    v126 = (unsigned int *)((char *)v129 + v128);
    if ( (unsigned int *)((char *)v129 + v128) < v129 )
      goto LABEL_538;
  }
  v130 = *v126;
  if ( v126 + 1 < v126 )
    goto LABEL_538;
  v131 = 0LL;
  if ( (_DWORD)v130 )
    v131 = v126 + 1;
  v133 = ExAllocatePool2(256LL, 48LL, 542329939LL);
  if ( !v133 )
  {
    Acl = -1073741801;
    goto LABEL_541;
  }
  *(_QWORD *)v133 = 0LL;
  *(_QWORD *)(v133 + 20) = 0LL;
  *(_QWORD *)(v133 + 28) = 0LL;
  *(_QWORD *)(v133 + 36) = 0LL;
  *(_DWORD *)(v133 + 44) = 0;
  v135 = (const void *)Size;
  *(_QWORD *)(v133 + 8) = 0LL;
  if ( v135 )
  {
    v136 = uAugend[0];
    *(_DWORD *)(v133 + 16) = uAugend[0];
    if ( !(_DWORD)v136 )
    {
      Acl = -1073741762;
LABEL_185:
      v139 = *(void **)(v133 + 8);
      if ( v139 )
      {
        ExFreePoolWithTag(v139, 0);
        v6 = 0LL;
        *(_QWORD *)(v133 + 8) = 0LL;
      }
      else
      {
        v6 = 0LL;
      }
      v140 = *(void **)(v133 + 24);
      if ( v140 )
      {
        ExFreePoolWithTag(v140, 0);
        *(_QWORD *)(v133 + 24) = 0LL;
      }
      v141 = *(void **)(v133 + 40);
      if ( v141 )
      {
        ExFreePoolWithTag(v141, 0);
        *(_QWORD *)(v133 + 40) = 0LL;
      }
      ExFreePoolWithTag((PVOID)v133, 0);
      goto LABEL_541;
    }
    Size = v136;
    v137 = (void *)ExAllocatePool2(256LL, v136, 542329939LL);
    if ( !v137 )
    {
LABEL_184:
      Acl = -1073741801;
      goto LABEL_185;
    }
    *(_QWORD *)(v133 + 24) = v137;
    memmove(v137, v135, Size);
  }
  else
  {
    *(_DWORD *)(v133 + 16) = 0;
  }
  if ( v131 )
  {
    *(_DWORD *)(v133 + 32) = v130;
    if ( !(_DWORD)v130 )
    {
      Acl = -1073741762;
      goto LABEL_185;
    }
    v138 = (void *)ExAllocatePool2(256LL, v130, 542329939LL);
    if ( !v138 )
      goto LABEL_184;
    *(_QWORD *)(v133 + 40) = v138;
    memmove(v138, v131, v130);
  }
  else
  {
    *(_DWORD *)(v133 + 32) = 0;
    *(_QWORD *)(v133 + 40) = 0LL;
  }
  switch ( v324 )
  {
    case 0u:
      IsAppLicensed = sub_1407D2C60(ullAugend, v133, puResult, &pullResult[2]);
      goto LABEL_197;
    case 1u:
      v143 = qword_140D3B478;
      GrantedAccess = 0;
      memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
      v363 = 0LL;
      AccessStatus = 0;
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      v144 = RtlLengthSid(*(PSID *)(qword_140D3B478 + 384));
      v145 = RtlLengthSid(*(PSID *)(v143 + 272)) + v144;
      v146 = RtlLengthSid(*(PSID *)(v143 + 392)) + 32 + v145;
      v147 = (ACL *)ExAllocatePool2(256LL, v146, 542329939LL);
      v148 = v147;
      if ( !v147 )
      {
        Acl = -1073741801;
        v6 = (char *)v133;
        goto LABEL_541;
      }
      Acl = RtlCreateAcl(v147, v146, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce((__int64)v148, 2u, 0, 32, *(unsigned __int8 **)(v143 + 384), 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce((__int64)v148, 2u, 0, 32, *(unsigned __int8 **)(v143 + 392), 0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce((__int64)v148, 2u, 0, 32, *(unsigned __int8 **)(v143 + 272), 0);
            if ( Acl >= 0 )
            {
              Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
              if ( Acl >= 0 )
              {
                Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v148, 0);
                if ( Acl >= 0 )
                {
                  SeCaptureSubjectContext(&SubjectContext);
                  v149 = SeAccessCheck(
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
                  if ( !v149 )
                    Acl = AccessStatus;
                }
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v148, 0);
      if ( Acl < 0 )
        goto LABEL_231;
      v351[1] = 0;
      v353 = 8LL;
      ZwQuerySystemInformation(103LL, (__int64)&v353);
      if ( *(_DWORD *)v331 != 160 )
        goto LABEL_337;
      v150 = *v337;
      if ( !memcmp(qword_140A3C730, *v337, 0xA0uLL) && *(_DWORD *)(v133 + 16) == 160 )
      {
        v151 = (_DWORD *)pullResult[0];
        v152 = v333;
        if ( !memcmp(qword_140A3CB90, *(const void **)(v133 + 24), 0xA0uLL)
          && *(_DWORD *)pullResult[0] == 8
          && **v333 == 0xA564595855B292C4uLL
          && *(_DWORD *)(v133 + 32) == 8
          && **(_QWORD **)(v133 + 40) == 0x1B732BD76B4D09FCLL )
        {
          goto LABEL_228;
        }
      }
      else
      {
        v152 = v333;
        v151 = (_DWORD *)pullResult[0];
      }
      if ( memcmp(qword_140A3CAF0, v150, 0xA0uLL)
        || *(_DWORD *)(v133 + 16) != 160
        || memcmp(qword_140A3C2D0, *(const void **)(v133 + 24), 0xA0uLL)
        || *v151 != 8
        || **v152 != 0x93278D843BBDC445uLL
        || *(_DWORD *)(v133 + 32) != 8
        || **(_QWORD **)(v133 + 40) != 0x6223E824AB21D998LL )
      {
        goto LABEL_337;
      }
LABEL_228:
      v153 = 0;
      if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 7) == 0 )
        v153 = -2147024891;
      Acl = v153;
LABEL_231:
      v6 = (char *)v133;
      if ( Acl >= 0 )
      {
        Acl = SPCallServerHandleUpdatePolicies((__int64)ullAugend, v133, puResult, (__int64)&pullResult[2]);
        if ( Acl >= 0 )
        {
          pullResult[1] = v133;
          goto LABEL_445;
        }
      }
      goto LABEL_541;
    case 2u:
      IsAppLicensed = SPCallServerHandleAuthenticateCaller(v132, v133, puResult, (__int64)&pullResult[2]);
      goto LABEL_197;
    case 4u:
      IsAppLicensed = sub_140A0B4C4(ullAugend, v133, v134, &pullResult[2]);
      goto LABEL_197;
    case 5u:
      IsAppLicensed = SPCallServerHandleWaitForDisplayWindow((__int64)ullAugend, v133, v134, (__int64)&pullResult[2]);
      goto LABEL_197;
    case 6u:
      IsAppLicensed = sub_140A0E96C(ullAugend, v133, v134, &pullResult[2]);
      goto LABEL_197;
    case 7u:
      IsAppLicensed = sub_140A0D5E8(ullAugend, v133, v134, &pullResult[2]);
      goto LABEL_197;
    case 0x16u:
      IsAppLicensed = SPCallServerHandleFileUsnQuery(
                        (__int64)ullAugend,
                        (void *)0x140000000LL,
                        v134,
                        (__int64)&pullResult[2]);
      goto LABEL_197;
    case 0x17u:
      v154 = qword_140D3B478;
      v351[0] = 0;
      memset(v360, 0, sizeof(v360));
      v361 = 0LL;
      v347 = 0;
      memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
      v155 = RtlLengthSid(*(PSID *)(qword_140D3B478 + 384));
      v156 = RtlLengthSid(*(PSID *)(v154 + 272)) + v155;
      v157 = RtlLengthSid(*(PSID *)(v154 + 392)) + 32 + v156;
      v158 = (ACL *)ExAllocatePool2(256LL, v157, 542329939LL);
      v159 = v158;
      if ( !v158 )
      {
        Acl = -1073741801;
        v6 = (char *)v133;
        goto LABEL_541;
      }
      Acl = RtlCreateAcl(v158, v157, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce((__int64)v159, 2u, 0, 32, *(unsigned __int8 **)(v154 + 384), 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce((__int64)v159, 2u, 0, 32, *(unsigned __int8 **)(v154 + 392), 0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce((__int64)v159, 2u, 0, 32, *(unsigned __int8 **)(v154 + 272), 0);
            if ( Acl >= 0 )
            {
              Acl = RtlCreateSecurityDescriptor(v360, 1u);
              if ( Acl >= 0 )
              {
                Acl = RtlSetDaclSecurityDescriptor(v360, 1u, v159, 0);
                if ( Acl >= 0 )
                {
                  SeCaptureSubjectContext(&SubjectSecurityContext);
                  v160 = SeAccessCheck(
                           v360,
                           &SubjectSecurityContext,
                           0,
                           0x20u,
                           0,
                           0LL,
                           (PGENERIC_MAPPING)&IopFileMapping,
                           1,
                           v351,
                           &v347);
                  SeReleaseSubjectContext(&SubjectSecurityContext);
                  if ( !v160 )
                    Acl = v347;
                }
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v159, 0);
      if ( Acl < 0 )
        goto LABEL_291;
      v350[2] = 0;
      v354 = 8LL;
      ZwQuerySystemInformation(103LL, (__int64)&v354);
      v163 = *(_DWORD *)v331;
      if ( *(_DWORD *)v331 != 160 )
      {
        v165 = (_DWORD *)pullResult[0];
LABEL_268:
        if ( v163 != 160 )
          goto LABEL_337;
        goto LABEL_269;
      }
      v164 = *v337;
      if ( !memcmp(qword_140A3C5F0, *v337, 0xA0uLL) && *(_DWORD *)(v133 + 16) == 160 )
      {
        v165 = (_DWORD *)pullResult[0];
        if ( !memcmp(qword_140A3C690, *(const void **)(v133 + 24), 0xA0uLL)
          && *(_DWORD *)pullResult[0] == 8
          && **v333 == 0x35DCEB18766AABAALL
          && *(_DWORD *)(v133 + 32) == 8
          && **(_QWORD **)(v133 + 40) == 0x14CEA8BAE086077CLL )
        {
          goto LABEL_285;
        }
      }
      else
      {
        v165 = (_DWORD *)pullResult[0];
      }
      if ( !memcmp(qword_140A3C870, v164, 0xA0uLL)
        && *(_DWORD *)(v133 + 16) == 160
        && !memcmp(qword_140A3CEB0, *(const void **)(v133 + 24), 0xA0uLL)
        && *v165 == 8
        && **v333 == 0xF10D668DB2BB8BB9uLL
        && *(_DWORD *)(v133 + 32) == 8 )
      {
        if ( **(_QWORD **)(v133 + 40) == 0x768DFD321621EA95LL )
          goto LABEL_285;
        goto LABEL_268;
      }
LABEL_269:
      v166 = *v337;
      if ( !memcmp(qword_140A3CE10, *v337, 0xA0uLL) && *(_DWORD *)(v133 + 16) == 160 )
      {
        v167 = v333;
        if ( !memcmp(sub_140A3C370, *(const void **)(v133 + 24), 0xA0uLL)
          && *v165 == 8
          && **v333 == 0xA10B922F1A2F2A8AuLL
          && *(_DWORD *)(v133 + 32) == 8
          && **(_QWORD **)(v133 + 40) == 0xC349B50B0A716A96uLL )
        {
          goto LABEL_285;
        }
      }
      else
      {
        v167 = v333;
      }
      if ( memcmp(qword_140A3CA50, v166, 0xA0uLL)
        || *(_DWORD *)(v133 + 16) != 160
        || memcmp(qword_140A3C910, *(const void **)(v133 + 24), 0xA0uLL)
        || *v165 != 8
        || **v167 != 0xA6723CF736811074uLL
        || *(_DWORD *)(v133 + 32) != 8
        || **(_QWORD **)(v133 + 40) != 0x7511056E178DA076LL )
      {
        goto LABEL_337;
      }
LABEL_285:
      Acl = 0;
      v350[0] = 0;
      UpdateFileEaAllowedExt = QueryUpdateFileEaAllowedExt(v350);
      if ( UpdateFileEaAllowedExt == -1073741637
        || (Acl = UpdateFileEaAllowedExt, UpdateFileEaAllowedExt >= 0) && v350[0] != 1 )
      {
        v169 = Acl;
        if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 7) == 0 )
          v169 = -2147024891;
        Acl = v169;
      }
LABEL_291:
      v6 = (char *)v133;
      if ( Acl >= 0 )
      {
        IsAppLicensed = SPCallServerHandleFileIntegrityUpdate((__int64)ullAugend, v161, v162, (__int64)&pullResult[2]);
        goto LABEL_198;
      }
      goto LABEL_541;
    case 0x18u:
      IsAppLicensed = SPCallServerHandleFileIntegrityQuery(
                        (__int64)ullAugend,
                        (void *)0x140000000LL,
                        v134,
                        (__int64)&pullResult[2]);
      goto LABEL_197;
    case 0x64u:
      IsAppLicensed = sub_140A0E378(ullAugend, v133, v134, &pullResult[2]);
      goto LABEL_197;
    case 0x65u:
      IsAppLicensed = sub_140A0E160(ullAugend, v133, v134, &pullResult[2]);
      goto LABEL_197;
    case 0x66u:
      Acl = -1073741822;
      goto LABEL_344;
    case 0x67u:
      IsAppLicensed = sub_140A0BC8C(ullAugend, v133, v134, &pullResult[2]);
      goto LABEL_197;
    case 0x68u:
      IsAppLicensed = sub_140A0D838(ullAugend, v133, v134, &pullResult[2]);
      goto LABEL_197;
    case 0x69u:
      IsAppLicensed = sub_140A0D214(ullAugend, v133, v134, &pullResult[2]);
      goto LABEL_197;
    case 0x6Au:
      IsAppLicensed = sub_140A0CB34(ullAugend, v133, v134, &pullResult[2]);
      goto LABEL_197;
    case 0x6Bu:
      IsAppLicensed = sub_140648860((__int64)ullAugend, v133, v134, (__int64)&pullResult[2]);
      goto LABEL_197;
    case 0x6Du:
      IsAppLicensed = SPCallServerHandleIsAppLicensed((__int64)ullAugend, v133, v134, (__int64)&pullResult[2]);
      goto LABEL_197;
    case 0x6Eu:
      IsAppLicensed = sub_140A0C7AC(ullAugend, v133, v134, &pullResult[2]);
      goto LABEL_197;
    case 0x6Fu:
      IsAppLicensed = sub_140A0BA74(ullAugend, v133, v134, &pullResult[2]);
      goto LABEL_197;
    case 0x70u:
      IsAppLicensed = SPCallServerHandleClepSign(ullAugend, v133, v134, &pullResult[2]);
      goto LABEL_197;
    case 0x71u:
      IsAppLicensed = SPCallServerHandleClepKdf((__int64)ullAugend, v133, v134, (__int64)&pullResult[2]);
      goto LABEL_197;
    case 0xCCu:
      IsAppLicensed = sub_140A0E590(ullAugend, v133, v134, &pullResult[2]);
      goto LABEL_197;
    case 0xCDu:
      IsAppLicensed = sub_140A0B85C(ullAugend, v133, v134, &pullResult[2]);
      goto LABEL_197;
    case 0xCEu:
      v350[1] = 0;
      v355 = 8LL;
      ZwQuerySystemInformation(103LL, (__int64)&v355);
      v170 = *(_DWORD *)v331;
      if ( *(_DWORD *)v331 == 160 )
      {
        v171 = *v337;
        if ( !memcmp(qword_140A3C9B0, *v337, 0xA0uLL) && *(_DWORD *)(v133 + 16) == 160 )
        {
          v173 = (_DWORD *)pullResult[0];
          if ( !memcmp(qword_140A3CD70, *(const void **)(v133 + 24), 0xA0uLL)
            && *(_DWORD *)pullResult[0] == 8
            && **v333 == 0x5638EBB72F3355A5LL
            && *(_DWORD *)(v133 + 32) == 8
            && **(_QWORD **)(v133 + 40) == 0x9F2DD8784FE939B7uLL )
          {
            goto LABEL_336;
          }
        }
        else
        {
          v173 = (_DWORD *)pullResult[0];
        }
        if ( memcmp(qword_140A3CC30, v171, 0xA0uLL)
          || *(_DWORD *)(v133 + 16) != 160
          || memcmp(qword_140A3CCD0, *(const void **)(v133 + 24), 0xA0uLL)
          || *v173 != 8
          || **v333 != 0x5638EBB72F3355A5LL
          || *(_DWORD *)(v133 + 32) != 8 )
        {
LABEL_320:
          v174 = *v337;
          if ( memcmp(qword_140A3C550, *v337, 0xA0uLL) || *(_DWORD *)(v133 + 16) != 160 )
          {
            v175 = v333;
            goto LABEL_329;
          }
          v175 = v333;
          if ( memcmp(qword_140A3C7D0, *(const void **)(v133 + 24), 0xA0uLL)
            || *v173 != 8
            || **v333 != 0xF10D668DB2BB8BB9uLL
            || *(_DWORD *)(v133 + 32) != 8
            || **(_QWORD **)(v133 + 40) != 0x768DFD321621EA95LL )
          {
LABEL_329:
            if ( !memcmp(qword_140A3C410, v174, 0xA0uLL)
              && *(_DWORD *)(v133 + 16) == 160
              && !memcmp(qword_140A3C4B0, *(const void **)(v133 + 24), 0xA0uLL)
              && *v173 == 8
              && **v175 == 0xF10D668DB2BB8BB9uLL
              && *(_DWORD *)(v133 + 32) == 8
              && **(_QWORD **)(v133 + 40) == 0x768DFD321621EA95LL )
            {
              goto LABEL_336;
            }
LABEL_337:
            Acl = -2147024891;
            v6 = (char *)v133;
            goto LABEL_541;
          }
LABEL_336:
          IsAppLicensed = sub_140648D4C((__int64)ullAugend, v133, v172, (__int64)&pullResult[2]);
LABEL_197:
          v6 = (char *)v133;
LABEL_198:
          Acl = IsAppLicensed;
          if ( IsAppLicensed >= 0 )
          {
            pullResult[1] = v133;
            goto LABEL_445;
          }
          goto LABEL_541;
        }
        if ( **(_QWORD **)(v133 + 40) == 0x9F2DD8784FE939B7uLL )
          goto LABEL_336;
      }
      else
      {
        v173 = (_DWORD *)pullResult[0];
      }
      if ( v170 != 160 )
        goto LABEL_337;
      goto LABEL_320;
    case 0xCFu:
      IsAppLicensed = sub_140A0C1F4(ullAugend, v133, v134, &pullResult[2]);
      goto LABEL_197;
    case 0xD0u:
      IsAppLicensed = SPCallServerHandleGetAppPolicyValue(ullAugend, v133, v134, &pullResult[2]);
      goto LABEL_197;
    case 0xD1u:
      IsAppLicensed = sub_140A0DD98(ullAugend, v133, v134, &pullResult[2]);
      goto LABEL_197;
    case 0xD2u:
      IsAppLicensed = sub_140A0B0F0(ullAugend, v133, v134, &pullResult[2]);
      goto LABEL_197;
    case 0xD3u:
      IsAppLicensed = sub_140A0AD40(ullAugend, v133, v134, &pullResult[2]);
      goto LABEL_197;
    case 0xD4u:
      v6 = (char *)v133;
      if ( !ullAugend[1] )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      if ( LODWORD(ullAugend[0]) <= 3 )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      v176 = ullAugend[1];
      pullResult[0] = ullAugend[1];
      pullResult[1] = v133;
      do
      {
        Acl = RtlULongLongAdd(v176, 4uLL, pullResult);
        if ( Acl < 0 )
          goto LABEL_541;
        Acl = RtlULongLongAdd(pullResult[0], v177, pullResult);
        if ( Acl < 0 )
          goto LABEL_541;
        v176 = pullResult[0];
      }
      while ( (unsigned int)(v178 + 1) < 3 );
      Acl = RtlULongLongAdd(pullResult[0], 4uLL, pullResult);
      if ( Acl < 0 )
        goto LABEL_541;
      v181 = (size_t *)pullResult[0];
      if ( !v179 )
        v181 = 0LL;
      if ( v179 != 8 )
      {
        Acl = -1073741789;
        goto LABEL_541;
      }
      Size = *v181;
      if ( !ullAugend[1] )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      if ( v180 <= 4 )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      v182 = ullAugend[1];
      pullResult[0] = ullAugend[1];
      do
      {
        Acl = RtlULongLongAdd(v182, 4uLL, pullResult);
        if ( Acl < 0 )
          goto LABEL_541;
        Acl = RtlULongLongAdd(pullResult[0], v183, pullResult);
        if ( Acl < 0 )
          goto LABEL_541;
        v182 = pullResult[0];
      }
      while ( (unsigned int)(v184 + 1) < 4 );
      v185 = *(unsigned int *)pullResult[0];
      Acl = RtlULongLongAdd(pullResult[0], 4uLL, pullResult);
      if ( Acl < 0 )
        goto LABEL_541;
      v186 = (unsigned int *)pullResult[0];
      if ( !(_DWORD)v185 )
      {
        Acl = -1073741762;
        goto LABEL_541;
      }
      v187 = (void *)ExAllocatePool2(256LL, v185, 542329939LL);
      if ( !v187 )
      {
        Acl = -1073741801;
        goto LABEL_541;
      }
      memmove(v187, v186, v185);
      if ( (_DWORD)v185 != 4 )
      {
        Acl = -1073741306;
        goto LABEL_541;
      }
      if ( !ullAugend[1] )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      if ( LODWORD(ullAugend[0]) <= 5 )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      v188 = ullAugend[1];
      pullResult[0] = ullAugend[1];
      do
      {
        Acl = RtlULongLongAdd(v188, 4uLL, pullResult);
        if ( Acl < 0 )
          goto LABEL_541;
        Acl = RtlULongLongAdd(pullResult[0], v189, pullResult);
        if ( Acl < 0 )
          goto LABEL_541;
        v188 = pullResult[0];
      }
      while ( (unsigned int)(v190 + 1) < 5 );
      v191 = *(unsigned int *)pullResult[0];
      Acl = RtlULongLongAdd(pullResult[0], 4uLL, pullResult);
      if ( Acl < 0 )
        goto LABEL_541;
      v192 = (_QWORD *)pullResult[0];
      if ( !(_DWORD)v191 )
      {
        Acl = -1073741762;
        goto LABEL_541;
      }
      v193 = (void *)ExAllocatePool2(256LL, v191, 542329939LL);
      if ( !v193 )
      {
        Acl = -1073741801;
        goto LABEL_541;
      }
      memmove(v193, v192, v191);
      if ( (_DWORD)v191 != 8 )
      {
        Acl = -1073741306;
        goto LABEL_541;
      }
      v194 = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_140D3B448)(*v186, *v192);
      uAugend[0] = 0;
      puResult = 0;
      Acl = RtlUIntAdd(4u, 4u, &puResult);
      if ( Acl < 0 )
        goto LABEL_541;
      Acl = RtlUIntAdd(0, puResult, uAugend);
      if ( Acl < 0 )
        goto LABEL_444;
      puResult = 0;
      Acl = RtlUIntAdd(4u, 8u, &puResult);
      if ( Acl < 0 )
        goto LABEL_541;
      Acl = RtlUIntAdd(uAugend[0], puResult, uAugend);
      if ( Acl < 0 )
        goto LABEL_444;
      HIDWORD(pullResult[2]) = uAugend[0];
      if ( !uAugend[0] )
      {
        Acl = -1073741762;
        goto LABEL_541;
      }
      v195 = ExAllocatePool2(256LL, uAugend[0], 542329939LL);
      if ( !v195 )
      {
        Acl = -1073741801;
        goto LABEL_541;
      }
      pullResult[3] = v195;
      LODWORD(pullResult[2]) = 0;
      v196 = v194 | 0x10000000;
      v345 = 0LL;
      LODWORD(v346) = 0;
      Acl = RtlULongLongAdd(v195, 4uLL, &v346);
      if ( Acl < 0 )
        goto LABEL_541;
      if ( v197 + 2 > (_DWORD *)((char *)v197 + HIDWORD(pullResult[2])) )
      {
        Acl = -1073741789;
        goto LABEL_541;
      }
      v198 = (_DWORD *)v346;
      *v197 = 4;
      *v198 = v196;
      v199 = LODWORD(pullResult[2]) + 1;
      v345 = 0LL;
      ++LODWORD(pullResult[2]);
      LODWORD(v346) = 0;
      if ( pullResult[3] )
      {
        v200 = (UINT *)pullResult[3];
        v331 = pullResult[3];
        if ( !v199 )
        {
LABEL_417:
          Acl = RtlULongLongAdd((ULONGLONG)v200, 4uLL, &v346);
          if ( Acl < 0 )
            goto LABEL_444;
          if ( (unsigned __int64)(v205 + 3) > pullResult[3] + HIDWORD(pullResult[2]) )
          {
            Acl = -1073741789;
            goto LABEL_444;
          }
          v206 = (_QWORD *)v346;
          v207 = Size;
          *v205 = 8;
          *v206 = v207;
          goto LABEL_443;
        }
        while ( 1 )
        {
          v201 = *v200;
          puResult = 0;
          Acl = RtlUIntAdd(4u, v201, &puResult);
          if ( Acl < 0 )
            break;
          Acl = RtlULongLongAdd(v202, puResult, &v331);
          if ( Acl < 0 )
            break;
          v200 = (UINT *)v331;
          if ( v203 + 1 >= v204 )
            goto LABEL_417;
        }
      }
      else
      {
        puResult = 0;
        Acl = RtlUIntAdd(4u, 8u, &puResult);
        if ( Acl >= 0 )
        {
          Acl = RtlUIntAdd(HIDWORD(pullResult[2]), puResult, (UINT *)&pullResult[2] + 1);
          if ( Acl >= 0 )
          {
            Acl = 0;
LABEL_443:
            ++LODWORD(pullResult[2]);
          }
        }
      }
LABEL_444:
      if ( Acl < 0 )
        goto LABEL_541;
LABEL_445:
      v218 = __rdtsc();
      v336 = 8;
      Acl = RtlUIntAdd(8u, HIDWORD(pullResult[2]), &v336);
      if ( Acl < 0 )
      {
        v330 = 0LL;
        goto LABEL_541;
      }
      v219 = (v336 + 7) & 0xFFFFFFF8;
      if ( (unsigned int)v219 < v336 )
      {
        Acl = -1073741675;
        goto LABEL_541;
      }
      v336 = (v336 + 7) & 0xFFFFFFF8;
      if ( !(_DWORD)v219 )
      {
        Acl = -1073741762;
        goto LABEL_541;
      }
      v220 = (_DWORD *)ExAllocatePool2(256LL, v219, 542329939LL);
      if ( !v220 )
      {
        Acl = -1073741801;
        goto LABEL_541;
      }
      *v220 = pullResult[2];
      v332 = (ULONGLONG)v220;
      Acl = RtlULongLongAdd((ULONGLONG)v220, 4uLL, &v332);
      if ( Acl < 0
        || (v221 = v332, *(_DWORD *)v332 = HIDWORD(pullResult[2]), Acl = RtlULongLongAdd(v221, 4uLL, &v332), Acl < 0) )
      {
        ExFreePoolWithTag(v220, 0);
        goto LABEL_541;
      }
      v222 = (void *)v332;
      *(_QWORD *)((char *)v220 + v336 - 8) = v218;
      memmove(v222, (const void *)pullResult[3], HIDWORD(pullResult[2]));
      v223 = v220;
      v330 = (ULONGLONG)v220;
      if ( !v336 )
      {
        Acl = -1073741811;
        v330 = (ULONGLONG)v220;
        goto LABEL_541;
      }
      v224 = (__int64 *)*((_QWORD *)v6 + 5);
      pullResult[0] = (ULONGLONG)(v6 + 40);
      if ( !v224 )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      v337 = (const void **)(v6 + 32);
      v225 = *((_DWORD *)v6 + 8);
      if ( !v225 )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      v226 = (unsigned __int8 *)*((_QWORD *)v6 + 3);
      v348 = (const void **)(v6 + 24);
      Src = v226;
      if ( !v226 )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      v338 = (__int64)(v6 + 16);
      v227 = *((_DWORD *)v6 + 4);
      if ( !v227 )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      v334 = v336;
      if ( v225 != 8 )
        goto LABEL_532;
      if ( v227 != 160 )
        goto LABEL_532;
      v228 = *v224;
      v229 = 0;
      v230 = 0LL;
      v327 = 0;
      do
        v229 ^= *((_BYTE *)v223 + v230++);
      while ( v230 < v336 );
      v327 = v229;
      v345 = v226 + 128;
      v231 = ExAllocatePool2(256LL, v336 + 8LL, 542329939LL);
      v343 = (PVOID)v231;
      if ( !v231 )
      {
LABEL_532:
        Acl = -1073741823;
        goto LABEL_541;
      }
      v232 = 0;
      v365 = v228;
      v233 = 0;
      Size = v334 & 7;
      v234 = (unsigned __int8 *)v330;
      v332 = v330;
      P = (PVOID)v231;
      uAugend[0] = 0;
      v324 = 0;
      if ( (v334 & 7) != 0 )
      {
        uAugend[0] = 0;
        v324 = 0;
        v235 = 0;
        v236 = 0;
        v237 = 56;
        do
        {
          v238 = *v234++;
          if ( (unsigned int)v236 >= 4 )
            v235 |= v238 << v237;
          else
            v232 |= v238 << (v237 - 32);
          ++v236;
          v237 -= 8;
        }
        while ( v236 < (unsigned __int8)(v334 & 7) );
        v324 = v232;
        uAugend[0] = v235;
        v332 = (ULONGLONG)v234;
        pullResult[1] = (ULONGLONG)v6;
        v328 = v28;
        v335 = v5;
        v239 = 16LL;
        v331 = 16LL;
        v240 = (unsigned __int8 *)Src + 158;
        v241 = (unsigned __int8 *)Src + 126;
        v242 = 30LL;
        do
        {
          v243 = v240[1];
          if ( (unsigned __int8)v243 < 0x1Fu )
          {
            v244 = funcs_1406A763D[v243](v242 + 1, *(v241 - 2), *(v241 - 1), *v241, v241[1], (__int64)&v365, v233);
            v239 = v331;
            v41 ^= v244;
          }
          v245 = *v240;
          if ( (unsigned __int8)v245 < 0x1Fu )
          {
            v246 = funcs_1406A763D[v245](v242, *(v241 - 6), *(v241 - 5), *(v241 - 4), *(v241 - 3), (__int64)&v365, v41);
            v239 = v331;
            v233 ^= v246;
          }
          v242 -= 2LL;
          v240 -= 2;
          v241 -= 8;
          v331 = --v239;
        }
        while ( v239 );
        v233 ^= v324;
        v247 = uAugend[0] ^ v41;
        v248 = v233;
        v249 = Size;
        v250 = v247;
        v229 = v327;
        v251 = 0;
        v5 = v335;
        if ( (_DWORD)Size )
        {
          v252 = P;
          do
          {
            v253 = v252 + 1;
            if ( v251 >= 4 )
            {
              v250 = __ROL4__(v250, 8);
              v254 = v250;
            }
            else
            {
              v248 = __ROL4__(v248, 8);
              v254 = v248;
            }
            ++v251;
            *v252++ = v254;
          }
          while ( (int)v251 < (int)v249 );
          v231 = (__int64)v253;
        }
        else
        {
          v231 = (__int64)P;
        }
        if ( v249 <= 4 )
        {
          v41 = 0;
          if ( v249 < 4 )
            v233 = v233 >> (8 * (4 - v249)) << (8 * (4 - v249));
        }
        else
        {
          v41 = v247 >> (8 * (8 - v249)) << (8 * (8 - v249));
        }
        v234 = (unsigned __int8 *)v332;
      }
      v255 = v334;
      v342 = (_BYTE *)(v334 >> 3);
      if ( v334 >> 3 )
      {
        v256 = v234 + 2;
        v257 = (unsigned __int8 *)Src + 2;
        Size = (size_t)Src + 2;
        P = (PVOID)(v231 + 7);
        do
        {
          v258 = *(v256 - 2);
          v259 = 0LL;
          v260 = *(v256 - 1);
          v261 = v257;
          v262 = v256[2];
          v256 += 8;
          v263 = v345;
          v264 = *(v256 - 5) | (v262 << 8);
          puResult = *(v256 - 7) | ((*(v256 - 8) | ((v260 | (v258 << 8)) << 8)) << 8);
          v265 = puResult ^ v233;
          v266 = 16LL;
          v267 = *(v256 - 4) | (v264 << 8);
          v331 = 16LL;
          LODWORD(v333) = *(v256 - 3) | (v267 << 8);
          v268 = (unsigned int)v333 ^ v41;
          do
          {
            v269 = *v263;
            if ( (unsigned __int8)v269 < 0x1Fu )
            {
              v270 = funcs_1406A763D[v269](v259, *(v261 - 2), *(v261 - 1), *v261, v261[1], (__int64)&v365, v268);
              v266 = v331;
              v265 ^= v270;
            }
            v271 = v263[1];
            if ( (unsigned __int8)v271 < 0x1Fu )
            {
              v272 = funcs_1406A763D[v271](v259 + 1, v261[2], v261[3], v261[4], v261[5], (__int64)&v365, v265);
              v266 = v331;
              v268 ^= v272;
            }
            v259 += 2LL;
            v263 += 2;
            v261 += 8;
            v331 = --v266;
          }
          while ( v266 );
          v273 = HIDWORD(v365);
          v274 = (HIWORD(v365) * ((unsigned __int16)v365 + __ROR4__(~v268, 5))) ^ v265;
          v275 = (v274 >> 10) ^ (WORD1(v365) * (v274 ^ HIWORD(v365))) ^ v268;
          v276 = __ROR4__(v275, 10) ^ (WORD2(v365) * __ROR4__(v275 ^ v365, 12)) ^ v274;
          v277 = (HIWORD(v365) * __ROR4__(v276 - v365, 14) - __ROL4__(v276, 8)) ^ v275;
          v278 = (__ROL4__(v277, 2) + (unsigned __int16)v365 * __ROR4__(HIDWORD(v365) + v277, 15)) ^ v276;
          v279 = (WORD1(v365) * (v278 ^ WORD2(v365))) ^ __ROR4__(v278, 6) ^ v277;
          v280 = (HIDWORD(v365) - (v279 ^ v365)) ^ v278;
          v281 = (HIWORD(v365) * __ROL4__(v280 ^ WORD1(v365), 6) - __ROL4__(v280, 2)) ^ v279;
          v282 = ((unsigned __int16)v365 * (v281 - WORD2(v365)) - (v281 >> 13)) ^ v280;
          v283 = (WORD1(v365) * __ROR4__(v282 + HIDWORD(v365), 9) - __ROL4__(v282, 2)) ^ v281;
          v284 = P;
          v285 = puResult;
          v286 = (unsigned int)v333;
          v287 = (__ROL4__(v283, 10) + WORD2(v365) * __ROL4__(v283 - v365, 5)) ^ v282;
          v288 = v287 ^ v365;
          v289 = v324 ^ v287;
          *((char *)P - 4) = v289;
          v290 = __ROR4__(v289, 8);
          v291 = uAugend[0] ^ v273 ^ v288 ^ v283;
          *v284 = v291;
          *(v284 - 5) = v290;
          v292 = __ROR4__(v291, 8);
          *(v284 - 1) = v292;
          v293 = __ROR4__(v290, 8);
          *(v284 - 6) = v293;
          v294 = __ROR4__(v292, 8);
          *(v284 - 2) = v294;
          v295 = __ROR4__(v293, 8);
          *(v284 - 7) = v295;
          v296 = __ROR4__(v294, 8);
          *(v284 - 3) = v296;
          v41 = __ROR4__(v296, 8);
          v233 = __ROR4__(v295, 8);
          v106 = v342-- == (_BYTE *)1;
          P = v284 + 8;
          v257 = (unsigned __int8 *)Size;
          v324 = v285;
          uAugend[0] = v286;
        }
        while ( !v106 );
        v229 = v327;
        v6 = (char *)pullResult[1];
        v5 = v335;
        v255 = v334;
      }
      v297 = v343;
      v298 = v255 + 8;
      *(_QWORD *)((char *)v343 + v255) = v229;
      Acl = 0;
      if ( (_DWORD)v255 == -8 )
      {
        Acl = -1073741762;
      }
      else
      {
        v299 = (void *)ExAllocatePool2(256LL, v298, 542329939LL);
        v300 = v299;
        if ( v299 )
        {
          memmove(v299, v297, v298);
          *((_QWORD *)v6 + 1) = v300;
          *(_DWORD *)v6 = v298;
        }
        else
        {
          Acl = -1073741801;
        }
      }
      v301 = v328;
      v302 = (const void **)v6;
      v303 = v330;
      v332 = v330;
      v331 = (ULONGLONG)v5;
      v335 = v328;
      ExFreePoolWithTag(v343, 0);
      v330 = v303;
      v6 = (char *)v302;
      v28 = v301;
      if ( Acl >= 0 )
      {
        v304 = *(_DWORD *)v302;
        v324 = 4;
        v306 = RtlUIntAdd(4u, v304, &v324);
        if ( v306 < 0 )
        {
          v308 = (_DWORD *)v338;
        }
        else
        {
          v307 = RtlUIntAdd(v324, v305, &v324);
          v308 = (_DWORD *)v338;
          v306 = v307;
          if ( v307 >= 0 )
          {
            v306 = RtlUIntAdd(v324, *(_DWORD *)v338, &v324);
            if ( v306 >= 0 )
            {
              v309 = RtlUIntAdd(v324, 4u, &v324);
              v310 = v337;
              v306 = v309;
              if ( v309 >= 0 )
              {
                v306 = RtlUIntAdd(v324, *(_DWORD *)v337, &v324);
                if ( v306 >= 0 )
                {
                  v311 = v324;
                  puResult = v324;
                  goto LABEL_519;
                }
              }
LABEL_518:
              v311 = 0;
              puResult = 0;
              if ( v306 < 0 )
              {
LABEL_531:
                v28 = v335;
                v330 = v332;
                v5 = (_QWORD *)v331;
                Acl = v306;
                v6 = (char *)v302;
                goto LABEL_541;
              }
LABEL_519:
              if ( !v311 )
              {
                Acl = -1073741762;
                v28 = v335;
                v6 = (char *)v302;
                v330 = v332;
                goto LABEL_541;
              }
              v312 = (_DWORD *)ExAllocatePool2(256LL, v311, 542329939LL);
              if ( !v312 )
              {
                Acl = -1073741801;
                v28 = v335;
                v6 = (char *)v302;
                v5 = (_QWORD *)v331;
                v330 = v332;
                goto LABEL_541;
              }
              *v312 = *(_DWORD *)v302;
              v330 = (ULONGLONG)v312;
              v306 = RtlULongLongAdd((ULONGLONG)v312, 4uLL, &v330);
              if ( v306 >= 0 )
              {
                memmove((void *)v330, v302[1], *(unsigned int *)v302);
                v306 = RtlULongLongAdd(v330, *(unsigned int *)v302, &v330);
                if ( v306 >= 0 )
                {
                  v313 = v330;
                  *(_DWORD *)v330 = *v308;
                  v306 = RtlULongLongAdd(v313, 4uLL, &v330);
                  if ( v306 >= 0 )
                  {
                    memmove((void *)v330, *v348, (unsigned int)*v308);
                    v306 = RtlULongLongAdd(v330, (unsigned int)*v308, &v330);
                    if ( v306 >= 0 )
                    {
                      v314 = v330;
                      *(_DWORD *)v330 = *(_DWORD *)v310;
                      v306 = RtlULongLongAdd(v314, 4uLL, &v330);
                      if ( v306 >= 0 )
                      {
                        memmove((void *)v330, *(const void **)pullResult[0], *(unsigned int *)v310);
                        v306 = RtlULongLongAdd(v330, *(unsigned int *)v310, &v330);
                        Acl = v306;
                        if ( v306 >= 0 )
                        {
                          v315 = puResult;
                          v6 = (char *)v302;
                          v330 = v332;
                          v28 = v335;
                          v5 = (_QWORD *)v331;
                          *v356 = v312;
                          *v357 = v315;
                          goto LABEL_541;
                        }
                      }
                    }
                  }
                }
              }
              ExFreePoolWithTag(v312, 0);
              goto LABEL_531;
            }
          }
        }
        v310 = v337;
        goto LABEL_518;
      }
LABEL_541:
      ullAugend[0] = 0LL;
      if ( ullAugend[1] )
      {
        ExFreePoolWithTag((PVOID)ullAugend[1], 0);
        ullAugend[1] = 0LL;
      }
      pullResult[2] = 0LL;
      if ( pullResult[3] )
      {
        ExFreePoolWithTag((PVOID)pullResult[3], 0);
        pullResult[3] = 0LL;
      }
      if ( v28 )
        ExFreePoolWithTag(v28, 0);
      if ( v5 )
      {
        v316 = (void *)v5[1];
        if ( v316 )
        {
          ExFreePoolWithTag(v316, 0);
          v5[1] = 0LL;
        }
        v317 = (void *)v5[3];
        if ( v317 )
        {
          ExFreePoolWithTag(v317, 0);
          v5[3] = 0LL;
        }
        v318 = (void *)v5[5];
        if ( v318 )
        {
          ExFreePoolWithTag(v318, 0);
          v5[5] = 0LL;
        }
        ExFreePoolWithTag(v5, 0);
      }
      if ( v6 )
      {
        v319 = (void *)*((_QWORD *)v6 + 1);
        if ( v319 )
        {
          ExFreePoolWithTag(v319, 0);
          *((_QWORD *)v6 + 1) = 0LL;
        }
        v320 = (void *)*((_QWORD *)v6 + 3);
        if ( v320 )
        {
          ExFreePoolWithTag(v320, 0);
          *((_QWORD *)v6 + 3) = 0LL;
        }
        v321 = (void *)*((_QWORD *)v6 + 5);
        if ( v321 )
        {
          ExFreePoolWithTag(v321, 0);
          *((_QWORD *)v6 + 5) = 0LL;
        }
        ExFreePoolWithTag(v6, 0);
      }
      if ( v330 )
        ExFreePoolWithTag((PVOID)v330, 0);
      return (unsigned int)Acl;
    default:
      Size = 0LL;
      LODWORD(v340) = 0;
      if ( pullResult[3] )
      {
        v209 = (UINT *)pullResult[3];
        v6 = (char *)v133;
        v331 = pullResult[3];
        pullResult[1] = v133;
        if ( LODWORD(pullResult[2]) )
        {
          do
          {
            v210 = *v209;
            puResult = 0;
            Acl = RtlUIntAdd(4u, v210, &puResult);
            if ( Acl < 0 )
              goto LABEL_541;
            Acl = RtlULongLongAdd(v211, puResult, &v331);
            if ( Acl < 0 )
              goto LABEL_541;
            v209 = (UINT *)v331;
          }
          while ( (unsigned int)(v212 + 1) < LODWORD(pullResult[2]) );
          pullResult[1] = v133;
          v328 = v28;
          v335 = v5;
        }
        Acl = RtlULongLongAdd((ULONGLONG)v209, 4uLL, &v340);
        if ( Acl >= 0 )
        {
          if ( (unsigned __int64)(v213 + 2) > pullResult[3] + HIDWORD(pullResult[2]) )
          {
            Acl = -1073741789;
            goto LABEL_541;
          }
          v214 = (_DWORD *)v340;
          *v213 = 4;
          *v214 = -2147467263;
          goto LABEL_435;
        }
      }
      else
      {
        puResult = 0;
        Acl = RtlUIntAdd(4u, 4u, &puResult);
        if ( Acl < 0 )
        {
LABEL_344:
          v6 = (char *)v133;
          goto LABEL_541;
        }
        v208 = RtlUIntAdd(HIDWORD(pullResult[2]), puResult, (UINT *)&pullResult[2] + 1);
        pullResult[1] = v133;
        Acl = v208;
        v6 = (char *)v133;
        if ( v208 >= 0 )
        {
          pullResult[1] = v133;
          goto LABEL_435;
        }
      }
      if ( Acl < 0 )
        goto LABEL_541;
LABEL_435:
      if ( !HIDWORD(pullResult[2]) )
      {
        Acl = -1073741762;
        goto LABEL_541;
      }
      v215 = ExAllocatePool2(256LL, HIDWORD(pullResult[2]), 542329939LL);
      if ( !v215 )
      {
        Acl = -1073741801;
        goto LABEL_541;
      }
      pullResult[3] = v215;
      LODWORD(pullResult[2]) = 0;
      Size = 0LL;
      LODWORD(v340) = 0;
      Acl = RtlULongLongAdd(v215, 4uLL, &v340);
      if ( Acl < 0 )
        goto LABEL_444;
      if ( v216 + 2 > (_DWORD *)((char *)v216 + HIDWORD(pullResult[2])) )
      {
        Acl = -1073741789;
        goto LABEL_444;
      }
      v217 = (_DWORD *)v340;
      *v216 = 4;
      *v217 = -2147467263;
      goto LABEL_443;
  }
}
