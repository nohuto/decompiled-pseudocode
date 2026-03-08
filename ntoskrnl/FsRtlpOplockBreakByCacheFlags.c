/*
 * XREFs of FsRtlpOplockBreakByCacheFlags @ 0x14023BD20
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x14023AE40 (FsRtlCheckOplockEx2.c)
 *     FsRtlOplockBreakToNoneEx @ 0x14053B920 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x14067C390 (FsRtlCheckOplockForFsFilterCallback.c)
 *     FsRtlOplockBreakH2 @ 0x1407932D0 (FsRtlOplockBreakH2.c)
 *     FsRtlCheckUpperOplock @ 0x14093AC60 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     FsRtlpWaitOnIrp @ 0x140201018 (FsRtlpWaitOnIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140201B90 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpClearOwner @ 0x14023AB1C (FsRtlpClearOwner.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x14023AB60 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpOplockKeysEqual @ 0x14023E170 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpComputeShareableOplockState @ 0x14023F940 (FsRtlpComputeShareableOplockState.c)
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     FsRtlpModifyThreadPriorities @ 0x1402ECCB4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1402EF888 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1402F5A44 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x14053C86C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpCheckSharingAgainstOplockOwner @ 0x14093B324 (FsRtlpCheckSharingAgainstOplockOwner.c)
 */

__int64 __fastcall FsRtlpOplockBreakByCacheFlags(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7,
        unsigned __int16 *a8,
        __int64 a9,
        __int64 a10,
        void (__fastcall *a11)(__int64, __int64),
        __int64 a12,
        __int64 a13,
        void (__fastcall *a14)(__int128 *),
        _BYTE *a15,
        char *a16)
{
  IRP *v17; // r10
  __int64 v18; // r9
  __int64 v20; // r13
  unsigned int v21; // ebx
  int v22; // r15d
  int *v23; // rsi
  int v24; // edi
  int v25; // eax
  char *v26; // rax
  __int16 *v27; // rdx
  int v28; // ecx
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r13
  int v32; // edx
  __int64 *v33; // rax
  __int64 *v34; // r13
  _QWORD *v35; // rax
  char v36; // al
  int v37; // eax
  char *v38; // rax
  char *v39; // rdx
  __int64 *v40; // rax
  __int64 *v41; // r13
  __int64 *v42; // rcx
  int v43; // edx
  int v44; // eax
  unsigned __int16 v45; // cx
  int v46; // eax
  __int64 *v47; // rax
  __int64 *v48; // rdi
  unsigned int v49; // eax
  unsigned int v50; // eax
  PIRP v51; // rdi
  PIRP v52; // rax
  struct _IRP *v53; // rcx
  PIRP v54; // rdi
  struct _IRP *v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rcx
  PIRP v58; // rdi
  struct _IRP *MasterIrp; // rdx
  int v60; // eax
  __int64 v61; // r9
  PIRP v62; // rdi
  _QWORD *v63; // rcx
  struct _IRP *v64; // rcx
  char v65; // cl
  int v66; // edx
  __int64 *v67; // rax
  __int64 *v68; // r13
  char v69; // al
  unsigned int v70; // eax
  __int64 *v71; // rdi
  __int64 *v72; // rax
  __int64 *i; // r13
  __int64 v74; // rdx
  int v75; // eax
  int v76; // eax
  char v77; // al
  unsigned int v78; // eax
  int v79; // eax
  int v81; // [rsp+64h] [rbp-C34h] BYREF
  char v82; // [rsp+68h] [rbp-C30h]
  char v83; // [rsp+69h] [rbp-C2Fh]
  char v84; // [rsp+6Ah] [rbp-C2Eh]
  __int64 v85; // [rsp+70h] [rbp-C28h] BYREF
  char v86; // [rsp+78h] [rbp-C20h]
  int v87; // [rsp+7Ch] [rbp-C1Ch] BYREF
  IRP *v88; // [rsp+80h] [rbp-C18h] BYREF
  __int64 *v89; // [rsp+88h] [rbp-C10h]
  unsigned int v90; // [rsp+90h] [rbp-C08h] BYREF
  unsigned int v91; // [rsp+94h] [rbp-C04h] BYREF
  int v92; // [rsp+98h] [rbp-C00h] BYREF
  __int64 v93; // [rsp+A0h] [rbp-BF8h] BYREF
  int v94; // [rsp+A8h] [rbp-BF0h] BYREF
  _QWORD *v95; // [rsp+B0h] [rbp-BE8h] BYREF
  int v96; // [rsp+B8h] [rbp-BE0h] BYREF
  int v97; // [rsp+BCh] [rbp-BDCh] BYREF
  unsigned int v98; // [rsp+C0h] [rbp-BD8h] BYREF
  int v99; // [rsp+C4h] [rbp-BD4h] BYREF
  int v100; // [rsp+C8h] [rbp-BD0h] BYREF
  unsigned int v101; // [rsp+CCh] [rbp-BCCh] BYREF
  int v102; // [rsp+D0h] [rbp-BC8h] BYREF
  int v103; // [rsp+D4h] [rbp-BC4h] BYREF
  int v104; // [rsp+D8h] [rbp-BC0h] BYREF
  unsigned int v105; // [rsp+DCh] [rbp-BBCh] BYREF
  int v106; // [rsp+E0h] [rbp-BB8h] BYREF
  unsigned int v107; // [rsp+E4h] [rbp-BB4h] BYREF
  int v108; // [rsp+E8h] [rbp-BB0h] BYREF
  int v109; // [rsp+ECh] [rbp-BACh] BYREF
  int v110; // [rsp+F0h] [rbp-BA8h] BYREF
  unsigned int v111; // [rsp+F4h] [rbp-BA4h] BYREF
  int v112; // [rsp+F8h] [rbp-BA0h] BYREF
  int v113; // [rsp+FCh] [rbp-B9Ch] BYREF
  unsigned int v114; // [rsp+100h] [rbp-B98h] BYREF
  int v115; // [rsp+104h] [rbp-B94h] BYREF
  int v116; // [rsp+108h] [rbp-B90h] BYREF
  unsigned int v117; // [rsp+10Ch] [rbp-B8Ch] BYREF
  int v118; // [rsp+110h] [rbp-B88h] BYREF
  int v119; // [rsp+114h] [rbp-B84h] BYREF
  unsigned int v120; // [rsp+118h] [rbp-B80h] BYREF
  int v121; // [rsp+11Ch] [rbp-B7Ch] BYREF
  int v122; // [rsp+120h] [rbp-B78h] BYREF
  unsigned int v123; // [rsp+124h] [rbp-B74h] BYREF
  int v124; // [rsp+128h] [rbp-B70h] BYREF
  int v125; // [rsp+12Ch] [rbp-B6Ch] BYREF
  unsigned int v126; // [rsp+130h] [rbp-B68h] BYREF
  int v127; // [rsp+134h] [rbp-B64h] BYREF
  int v128; // [rsp+138h] [rbp-B60h] BYREF
  int v129; // [rsp+13Ch] [rbp-B5Ch] BYREF
  unsigned int v130; // [rsp+140h] [rbp-B58h] BYREF
  int v131; // [rsp+144h] [rbp-B54h] BYREF
  unsigned int v132; // [rsp+148h] [rbp-B50h] BYREF
  int v133; // [rsp+14Ch] [rbp-B4Ch] BYREF
  int v134; // [rsp+150h] [rbp-B48h] BYREF
  unsigned int v135; // [rsp+154h] [rbp-B44h] BYREF
  int v136; // [rsp+158h] [rbp-B40h] BYREF
  int v137; // [rsp+15Ch] [rbp-B3Ch] BYREF
  unsigned int v138; // [rsp+160h] [rbp-B38h] BYREF
  int v139; // [rsp+164h] [rbp-B34h] BYREF
  int v140; // [rsp+168h] [rbp-B30h] BYREF
  unsigned int v141; // [rsp+16Ch] [rbp-B2Ch] BYREF
  int v142; // [rsp+170h] [rbp-B28h] BYREF
  int v143; // [rsp+174h] [rbp-B24h] BYREF
  unsigned int v144; // [rsp+178h] [rbp-B20h] BYREF
  int v145; // [rsp+17Ch] [rbp-B1Ch] BYREF
  int v146; // [rsp+180h] [rbp-B18h] BYREF
  unsigned int v147; // [rsp+184h] [rbp-B14h] BYREF
  int v148; // [rsp+188h] [rbp-B10h] BYREF
  int v149; // [rsp+18Ch] [rbp-B0Ch] BYREF
  int v150; // [rsp+190h] [rbp-B08h]
  int v151; // [rsp+194h] [rbp-B04h] BYREF
  unsigned int v152; // [rsp+198h] [rbp-B00h] BYREF
  int v153; // [rsp+19Ch] [rbp-AFCh] BYREF
  int v154; // [rsp+1A0h] [rbp-AF8h] BYREF
  int v155; // [rsp+1A4h] [rbp-AF4h] BYREF
  unsigned int v156; // [rsp+1A8h] [rbp-AF0h] BYREF
  int v157; // [rsp+1ACh] [rbp-AECh] BYREF
  int v158; // [rsp+1B0h] [rbp-AE8h] BYREF
  int v159; // [rsp+1B4h] [rbp-AE4h] BYREF
  unsigned int v160; // [rsp+1B8h] [rbp-AE0h] BYREF
  int v161; // [rsp+1BCh] [rbp-ADCh] BYREF
  int v162; // [rsp+1C0h] [rbp-AD8h] BYREF
  unsigned int v163; // [rsp+1C4h] [rbp-AD4h] BYREF
  int v164; // [rsp+1C8h] [rbp-AD0h] BYREF
  int v165; // [rsp+1CCh] [rbp-ACCh] BYREF
  int v166; // [rsp+1D0h] [rbp-AC8h] BYREF
  unsigned int v167; // [rsp+1D4h] [rbp-AC4h] BYREF
  __int64 *v168; // [rsp+1D8h] [rbp-AC0h] BYREF
  __int64 v169; // [rsp+1E0h] [rbp-AB8h] BYREF
  char *v170; // [rsp+1E8h] [rbp-AB0h] BYREF
  _BYTE *v171; // [rsp+1F0h] [rbp-AA8h] BYREF
  __int64 v172; // [rsp+1F8h] [rbp-AA0h] BYREF
  __int64 v173; // [rsp+200h] [rbp-A98h] BYREF
  __int64 v174; // [rsp+208h] [rbp-A90h] BYREF
  __int64 v175; // [rsp+210h] [rbp-A88h] BYREF
  __int64 v176; // [rsp+218h] [rbp-A80h] BYREF
  __int64 v177; // [rsp+220h] [rbp-A78h] BYREF
  __int64 v178; // [rsp+228h] [rbp-A70h] BYREF
  __int64 v179; // [rsp+230h] [rbp-A68h] BYREF
  __int64 v180; // [rsp+238h] [rbp-A60h] BYREF
  __int64 v181; // [rsp+240h] [rbp-A58h] BYREF
  __int64 v182; // [rsp+248h] [rbp-A50h] BYREF
  __int64 v183; // [rsp+250h] [rbp-A48h] BYREF
  __int64 v184; // [rsp+258h] [rbp-A40h] BYREF
  __int64 v185; // [rsp+260h] [rbp-A38h] BYREF
  __int64 v186; // [rsp+268h] [rbp-A30h] BYREF
  __int64 v187; // [rsp+270h] [rbp-A28h] BYREF
  __int64 v188; // [rsp+278h] [rbp-A20h] BYREF
  __int64 v189; // [rsp+280h] [rbp-A18h] BYREF
  __int64 v190; // [rsp+288h] [rbp-A10h] BYREF
  __int64 v191; // [rsp+290h] [rbp-A08h] BYREF
  __int128 v192; // [rsp+298h] [rbp-A00h] BYREF
  __int64 v193; // [rsp+2A8h] [rbp-9F0h]
  _BYTE v194[32]; // [rsp+2B0h] [rbp-9E8h] BYREF
  int *v195; // [rsp+2D0h] [rbp-9C8h]
  __int64 v196; // [rsp+2D8h] [rbp-9C0h]
  int *v197; // [rsp+2E0h] [rbp-9B8h]
  __int64 v198; // [rsp+2E8h] [rbp-9B0h]
  __int64 *v199; // [rsp+2F0h] [rbp-9A8h]
  __int64 v200; // [rsp+2F8h] [rbp-9A0h]
  int *v201; // [rsp+300h] [rbp-998h]
  __int64 v202; // [rsp+308h] [rbp-990h]
  _BYTE v203[32]; // [rsp+310h] [rbp-988h] BYREF
  int *v204; // [rsp+330h] [rbp-968h]
  __int64 v205; // [rsp+338h] [rbp-960h]
  int *v206; // [rsp+340h] [rbp-958h]
  __int64 v207; // [rsp+348h] [rbp-950h]
  __int64 *v208; // [rsp+350h] [rbp-948h]
  __int64 v209; // [rsp+358h] [rbp-940h]
  _QWORD *v210; // [rsp+360h] [rbp-938h]
  __int64 v211; // [rsp+368h] [rbp-930h]
  int *v212; // [rsp+370h] [rbp-928h]
  __int64 v213; // [rsp+378h] [rbp-920h]
  char v214; // [rsp+380h] [rbp-918h] BYREF
  int *v215; // [rsp+3A0h] [rbp-8F8h]
  __int64 v216; // [rsp+3A8h] [rbp-8F0h]
  int *v217; // [rsp+3B0h] [rbp-8E8h]
  __int64 v218; // [rsp+3B8h] [rbp-8E0h]
  int *v219; // [rsp+3C0h] [rbp-8D8h]
  __int64 v220; // [rsp+3C8h] [rbp-8D0h]
  __int64 *v221; // [rsp+3D0h] [rbp-8C8h]
  __int64 v222; // [rsp+3D8h] [rbp-8C0h]
  int *v223; // [rsp+3E0h] [rbp-8B8h]
  __int64 v224; // [rsp+3E8h] [rbp-8B0h]
  char v225; // [rsp+3F0h] [rbp-8A8h] BYREF
  _QWORD **v226; // [rsp+410h] [rbp-888h]
  __int64 v227; // [rsp+418h] [rbp-880h]
  __int64 *v228; // [rsp+420h] [rbp-878h]
  __int64 v229; // [rsp+428h] [rbp-870h]
  __int64 *v230; // [rsp+430h] [rbp-868h]
  __int64 v231; // [rsp+438h] [rbp-860h]
  __int64 *v232; // [rsp+440h] [rbp-858h]
  __int64 v233; // [rsp+448h] [rbp-850h]
  __int64 *v234; // [rsp+450h] [rbp-848h]
  __int64 v235; // [rsp+458h] [rbp-840h]
  char v236; // [rsp+460h] [rbp-838h] BYREF
  int *v237; // [rsp+480h] [rbp-818h]
  __int64 v238; // [rsp+488h] [rbp-810h]
  int *v239; // [rsp+490h] [rbp-808h]
  __int64 v240; // [rsp+498h] [rbp-800h]
  int *v241; // [rsp+4A0h] [rbp-7F8h]
  __int64 v242; // [rsp+4A8h] [rbp-7F0h]
  __int64 *v243; // [rsp+4B0h] [rbp-7E8h]
  __int64 v244; // [rsp+4B8h] [rbp-7E0h]
  int *v245; // [rsp+4C0h] [rbp-7D8h]
  __int64 v246; // [rsp+4C8h] [rbp-7D0h]
  char v247; // [rsp+4D0h] [rbp-7C8h] BYREF
  int *v248; // [rsp+4F0h] [rbp-7A8h]
  __int64 v249; // [rsp+4F8h] [rbp-7A0h]
  int *v250; // [rsp+500h] [rbp-798h]
  __int64 v251; // [rsp+508h] [rbp-790h]
  int *v252; // [rsp+510h] [rbp-788h]
  __int64 v253; // [rsp+518h] [rbp-780h]
  __int64 *v254; // [rsp+520h] [rbp-778h]
  __int64 v255; // [rsp+528h] [rbp-770h]
  int *v256; // [rsp+530h] [rbp-768h]
  __int64 v257; // [rsp+538h] [rbp-760h]
  char v258; // [rsp+540h] [rbp-758h] BYREF
  int *v259; // [rsp+560h] [rbp-738h]
  __int64 v260; // [rsp+568h] [rbp-730h]
  int *v261; // [rsp+570h] [rbp-728h]
  __int64 v262; // [rsp+578h] [rbp-720h]
  int *v263; // [rsp+580h] [rbp-718h]
  __int64 v264; // [rsp+588h] [rbp-710h]
  __int64 *v265; // [rsp+590h] [rbp-708h]
  __int64 v266; // [rsp+598h] [rbp-700h]
  int *v267; // [rsp+5A0h] [rbp-6F8h]
  __int64 v268; // [rsp+5A8h] [rbp-6F0h]
  char v269; // [rsp+5B0h] [rbp-6E8h] BYREF
  int *v270; // [rsp+5D0h] [rbp-6C8h]
  __int64 v271; // [rsp+5D8h] [rbp-6C0h]
  int *v272; // [rsp+5E0h] [rbp-6B8h]
  __int64 v273; // [rsp+5E8h] [rbp-6B0h]
  int *v274; // [rsp+5F0h] [rbp-6A8h]
  __int64 v275; // [rsp+5F8h] [rbp-6A0h]
  __int64 *v276; // [rsp+600h] [rbp-698h]
  __int64 v277; // [rsp+608h] [rbp-690h]
  int *v278; // [rsp+610h] [rbp-688h]
  __int64 v279; // [rsp+618h] [rbp-680h]
  char v280; // [rsp+620h] [rbp-678h] BYREF
  int *v281; // [rsp+640h] [rbp-658h]
  __int64 v282; // [rsp+648h] [rbp-650h]
  int *v283; // [rsp+650h] [rbp-648h]
  __int64 v284; // [rsp+658h] [rbp-640h]
  int *v285; // [rsp+660h] [rbp-638h]
  __int64 v286; // [rsp+668h] [rbp-630h]
  __int64 *v287; // [rsp+670h] [rbp-628h]
  __int64 v288; // [rsp+678h] [rbp-620h]
  int *v289; // [rsp+680h] [rbp-618h]
  __int64 v290; // [rsp+688h] [rbp-610h]
  char v291; // [rsp+690h] [rbp-608h] BYREF
  int *v292; // [rsp+6B0h] [rbp-5E8h]
  __int64 v293; // [rsp+6B8h] [rbp-5E0h]
  int *v294; // [rsp+6C0h] [rbp-5D8h]
  __int64 v295; // [rsp+6C8h] [rbp-5D0h]
  int *v296; // [rsp+6D0h] [rbp-5C8h]
  __int64 v297; // [rsp+6D8h] [rbp-5C0h]
  char **v298; // [rsp+6E0h] [rbp-5B8h]
  __int64 v299; // [rsp+6E8h] [rbp-5B0h]
  int *v300; // [rsp+6F0h] [rbp-5A8h]
  __int64 v301; // [rsp+6F8h] [rbp-5A0h]
  char v302; // [rsp+700h] [rbp-598h] BYREF
  int *v303; // [rsp+720h] [rbp-578h]
  __int64 v304; // [rsp+728h] [rbp-570h]
  int *v305; // [rsp+730h] [rbp-568h]
  __int64 v306; // [rsp+738h] [rbp-560h]
  int *v307; // [rsp+740h] [rbp-558h]
  __int64 v308; // [rsp+748h] [rbp-550h]
  _BYTE **v309; // [rsp+750h] [rbp-548h]
  __int64 v310; // [rsp+758h] [rbp-540h]
  int *v311; // [rsp+760h] [rbp-538h]
  __int64 v312; // [rsp+768h] [rbp-530h]
  char v313[32]; // [rsp+770h] [rbp-528h] BYREF
  int *v314; // [rsp+790h] [rbp-508h]
  __int64 v315; // [rsp+798h] [rbp-500h]
  int *v316; // [rsp+7A0h] [rbp-4F8h]
  __int64 v317; // [rsp+7A8h] [rbp-4F0h]
  __int64 *v318; // [rsp+7B0h] [rbp-4E8h]
  __int64 v319; // [rsp+7B8h] [rbp-4E0h]
  int *v320; // [rsp+7C0h] [rbp-4D8h]
  __int64 v321; // [rsp+7C8h] [rbp-4D0h]
  char v322[32]; // [rsp+7D0h] [rbp-4C8h] BYREF
  int *v323; // [rsp+7F0h] [rbp-4A8h]
  __int64 v324; // [rsp+7F8h] [rbp-4A0h]
  int *v325; // [rsp+800h] [rbp-498h]
  __int64 v326; // [rsp+808h] [rbp-490h]
  __int64 *v327; // [rsp+810h] [rbp-488h]
  __int64 v328; // [rsp+818h] [rbp-480h]
  int *v329; // [rsp+820h] [rbp-478h]
  __int64 v330; // [rsp+828h] [rbp-470h]
  char v331[32]; // [rsp+830h] [rbp-468h] BYREF
  int *v332; // [rsp+850h] [rbp-448h]
  __int64 v333; // [rsp+858h] [rbp-440h]
  int *v334; // [rsp+860h] [rbp-438h]
  __int64 v335; // [rsp+868h] [rbp-430h]
  __int64 *v336; // [rsp+870h] [rbp-428h]
  __int64 v337; // [rsp+878h] [rbp-420h]
  int *v338; // [rsp+880h] [rbp-418h]
  __int64 v339; // [rsp+888h] [rbp-410h]
  char v340[32]; // [rsp+890h] [rbp-408h] BYREF
  int *v341; // [rsp+8B0h] [rbp-3E8h]
  __int64 v342; // [rsp+8B8h] [rbp-3E0h]
  int *v343; // [rsp+8C0h] [rbp-3D8h]
  __int64 v344; // [rsp+8C8h] [rbp-3D0h]
  __int64 *v345; // [rsp+8D0h] [rbp-3C8h]
  __int64 v346; // [rsp+8D8h] [rbp-3C0h]
  int *v347; // [rsp+8E0h] [rbp-3B8h]
  __int64 v348; // [rsp+8E8h] [rbp-3B0h]
  char v349[32]; // [rsp+8F0h] [rbp-3A8h] BYREF
  int *v350; // [rsp+910h] [rbp-388h]
  __int64 v351; // [rsp+918h] [rbp-380h]
  int *v352; // [rsp+920h] [rbp-378h]
  __int64 v353; // [rsp+928h] [rbp-370h]
  __int64 *v354; // [rsp+930h] [rbp-368h]
  __int64 v355; // [rsp+938h] [rbp-360h]
  int *v356; // [rsp+940h] [rbp-358h]
  __int64 v357; // [rsp+948h] [rbp-350h]
  char v358[32]; // [rsp+950h] [rbp-348h] BYREF
  int *v359; // [rsp+970h] [rbp-328h]
  __int64 v360; // [rsp+978h] [rbp-320h]
  int *v361; // [rsp+980h] [rbp-318h]
  __int64 v362; // [rsp+988h] [rbp-310h]
  __int64 *v363; // [rsp+990h] [rbp-308h]
  __int64 v364; // [rsp+998h] [rbp-300h]
  int *v365; // [rsp+9A0h] [rbp-2F8h]
  __int64 v366; // [rsp+9A8h] [rbp-2F0h]
  char v367[32]; // [rsp+9B0h] [rbp-2E8h] BYREF
  int *v368; // [rsp+9D0h] [rbp-2C8h]
  __int64 v369; // [rsp+9D8h] [rbp-2C0h]
  int *v370; // [rsp+9E0h] [rbp-2B8h]
  __int64 v371; // [rsp+9E8h] [rbp-2B0h]
  __int64 *v372; // [rsp+9F0h] [rbp-2A8h]
  __int64 v373; // [rsp+9F8h] [rbp-2A0h]
  int *v374; // [rsp+A00h] [rbp-298h]
  __int64 v375; // [rsp+A08h] [rbp-290h]
  char v376[32]; // [rsp+A10h] [rbp-288h] BYREF
  int *v377; // [rsp+A30h] [rbp-268h]
  __int64 v378; // [rsp+A38h] [rbp-260h]
  int *v379; // [rsp+A40h] [rbp-258h]
  __int64 v380; // [rsp+A48h] [rbp-250h]
  __int64 **v381; // [rsp+A50h] [rbp-248h]
  __int64 v382; // [rsp+A58h] [rbp-240h]
  int *v383; // [rsp+A60h] [rbp-238h]
  __int64 v384; // [rsp+A68h] [rbp-230h]
  char v385[32]; // [rsp+A70h] [rbp-228h] BYREF
  int *v386; // [rsp+A90h] [rbp-208h]
  __int64 v387; // [rsp+A98h] [rbp-200h]
  int *v388; // [rsp+AA0h] [rbp-1F8h]
  __int64 v389; // [rsp+AA8h] [rbp-1F0h]
  __int64 *v390; // [rsp+AB0h] [rbp-1E8h]
  __int64 v391; // [rsp+AB8h] [rbp-1E0h]
  int *v392; // [rsp+AC0h] [rbp-1D8h]
  __int64 v393; // [rsp+AC8h] [rbp-1D0h]
  char v394[32]; // [rsp+AD0h] [rbp-1C8h] BYREF
  int *v395; // [rsp+AF0h] [rbp-1A8h]
  __int64 v396; // [rsp+AF8h] [rbp-1A0h]
  int *v397; // [rsp+B00h] [rbp-198h]
  __int64 v398; // [rsp+B08h] [rbp-190h]
  __int64 *v399; // [rsp+B10h] [rbp-188h]
  __int64 v400; // [rsp+B18h] [rbp-180h]
  int *v401; // [rsp+B20h] [rbp-178h]
  __int64 v402; // [rsp+B28h] [rbp-170h]
  char v403[32]; // [rsp+B30h] [rbp-168h] BYREF
  int *v404; // [rsp+B50h] [rbp-148h]
  __int64 v405; // [rsp+B58h] [rbp-140h]
  int *v406; // [rsp+B60h] [rbp-138h]
  __int64 v407; // [rsp+B68h] [rbp-130h]
  __int64 *v408; // [rsp+B70h] [rbp-128h]
  __int64 v409; // [rsp+B78h] [rbp-120h]
  int *v410; // [rsp+B80h] [rbp-118h]
  __int64 v411; // [rsp+B88h] [rbp-110h]
  char v412[32]; // [rsp+B90h] [rbp-108h] BYREF
  int *v413; // [rsp+BB0h] [rbp-E8h]
  __int64 v414; // [rsp+BB8h] [rbp-E0h]
  int *v415; // [rsp+BC0h] [rbp-D8h]
  __int64 v416; // [rsp+BC8h] [rbp-D0h]
  __int64 *v417; // [rsp+BD0h] [rbp-C8h]
  __int64 v418; // [rsp+BD8h] [rbp-C0h]
  int *v419; // [rsp+BE0h] [rbp-B8h]
  __int64 v420; // [rsp+BE8h] [rbp-B0h]
  char v421[32]; // [rsp+BF0h] [rbp-A8h] BYREF
  int *v422; // [rsp+C10h] [rbp-88h]
  __int64 v423; // [rsp+C18h] [rbp-80h]
  int *v424; // [rsp+C20h] [rbp-78h]
  __int64 v425; // [rsp+C28h] [rbp-70h]
  __int64 *v426; // [rsp+C30h] [rbp-68h]
  __int64 v427; // [rsp+C38h] [rbp-60h]
  int *v428; // [rsp+C40h] [rbp-58h]
  __int64 v429; // [rsp+C48h] [rbp-50h]

  v17 = (IRP *)a3;
  v88 = (IRP *)a3;
  v18 = a2;
  v85 = a2;
  v20 = a9;
  v93 = a9;
  v169 = a13;
  v171 = a15;
  v170 = a16;
  v21 = 0;
  v87 = 0;
  v192 = 0LL;
  v193 = 0LL;
  v81 = 0;
  LOBYTE(a3) = 0;
  v82 = 0;
  v84 = 0;
  v83 = 1;
  v22 = a4 & 8;
  v23 = (int *)(a1 + 144);
  if ( (unsigned int)dword_140C03770 > 5 )
  {
    v90 = a4;
    v195 = (int *)&v90;
    v196 = 4LL;
    v24 = a6;
    v91 = a6;
    v197 = (int *)&v91;
    v198 = 4LL;
    v95 = (_QWORD *)a1;
    v199 = (__int64 *)&v95;
    v200 = 8LL;
    v92 = *v23;
    v201 = &v92;
    v202 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, word_14002A982, 0LL, 0LL, 6, v194);
    v18 = v85;
    LOBYTE(a3) = 0;
    v17 = v88;
  }
  else
  {
    v24 = a6;
  }
  if ( v24 != 0x4000 && v24 != 20480 && v24 != 0x2000 && v24 != 28672 )
  {
    if ( v17 )
    {
      v17->IoStatus.Status = -1073741597;
      IofCompleteRequest(v17, 1);
    }
    if ( (unsigned int)dword_140C03770 > 3 )
    {
      v92 = -1073741597;
      v204 = &v92;
      v205 = 4LL;
      v91 = a4;
      v206 = (int *)&v91;
      v207 = 4LL;
      v90 = v24;
      v208 = (__int64 *)&v90;
      v209 = 4LL;
      v85 = a1;
      v210 = &v85;
      v211 = 8LL;
      v87 = *(_DWORD *)(a1 + 144);
      v212 = &v87;
      v213 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, &dword_14002AA5C, 0LL, 0LL, 7, v203);
    }
    return 3221225699LL;
  }
  if ( !a1 )
    return v21;
  v25 = *v23;
  if ( *v23 == 1 || (v25 & v24) == 0 )
  {
    if ( (unsigned int)dword_140C03770 <= 5 )
      return v21;
    LODWORD(v95) = 0;
    v226 = &v95;
    v227 = 4LL;
    LODWORD(v93) = a4;
    v228 = &v93;
    v229 = 4LL;
    LODWORD(v88) = v24;
    v230 = (__int64 *)&v88;
    v231 = 4LL;
    v191 = a1;
    v232 = &v191;
    v233 = 8LL;
    LODWORD(v85) = v25;
    v234 = &v85;
    v235 = 4LL;
    v26 = &v225;
    v27 = word_14002A9E2;
    goto LABEL_253;
  }
  if ( (a4 & 8) == 0 )
  {
    if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v18 + 48), *(_QWORD *)(a1 + 8), a4) )
    {
      if ( (unsigned int)dword_140C03770 <= 5 )
        return v21;
      v92 = 0;
      v237 = &v92;
      v238 = 4LL;
      v91 = a4;
      v239 = (int *)&v91;
      v240 = 4LL;
      v90 = v24;
      v241 = (int *)&v90;
      v242 = 4LL;
      v186 = a1;
      v243 = &v186;
      v244 = 8LL;
      v87 = *v23;
      v245 = &v87;
      v246 = 4LL;
      v26 = &v236;
      v27 = (__int16 *)&qword_14002A838;
LABEL_253:
      tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, v27, 0LL, 0LL, 7, v26);
      return v21;
    }
    v18 = v85;
    LOBYTE(a3) = 0;
    v17 = v88;
  }
  v28 = *v23;
  if ( (*v23 & 0x40) != 0 && (a4 & 0x10010000) != 0 )
  {
    if ( (unsigned int)dword_140C03770 > 3 )
    {
      v81 = -1073739511;
      v248 = &v81;
      v249 = 4LL;
      v163 = a4;
      v250 = (int *)&v163;
      v251 = 4LL;
      v164 = v24;
      v252 = &v164;
      v253 = 4LL;
      v188 = a1;
      v254 = &v188;
      v255 = 8LL;
      v166 = v28;
      v256 = &v166;
      v257 = 4LL;
      v38 = &v247;
      v39 = byte_14002A7CD;
      goto LABEL_82;
    }
    return (unsigned int)-1073739511;
  }
  v29 = v28 & 0x1F0FFDF;
  if ( (v28 & 0x1F0FFDF) == 0x3000 )
    goto LABEL_14;
  if ( v29 > 0x105040 )
  {
    if ( v29 <= 0x803000 )
    {
      if ( v29 == 8400896 )
      {
        if ( (unsigned int)dword_140C03770 > 5 )
        {
          v126 = a4;
          v395 = (int *)&v126;
          v396 = 4LL;
          v127 = v24;
          v397 = &v127;
          v398 = 4LL;
          v180 = a1;
          v399 = &v180;
          v400 = 8LL;
          v128 = v28;
          v401 = &v128;
          v402 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, byte_14002A543, 0LL, 0LL, 6, v394);
          v18 = v85;
          v17 = v88;
        }
        if ( (v24 & 0x3000) == 0 )
          goto LABEL_32;
        if ( (a4 & 0x80u) == 0 && (a4 & 0x10010000) != 0 )
        {
          if ( (unsigned int)dword_140C03770 > 3 )
          {
            v129 = -1073739511;
            v270 = &v129;
            v271 = 4LL;
            v130 = a4;
            v272 = (int *)&v130;
            v273 = 4LL;
            v131 = v24;
            v274 = &v131;
            v275 = 4LL;
            v181 = a1;
            v276 = &v181;
            v277 = 8LL;
            v148 = *v23;
            v278 = &v148;
            v279 = 4LL;
            v38 = &v269;
            v39 = byte_14002A32B;
            goto LABEL_82;
          }
          return (unsigned int)-1073739511;
        }
        if ( (v24 & 0x2000) == 0 )
          goto LABEL_32;
        v47 = (__int64 *)(a1 + 72);
        v48 = *(__int64 **)(a1 + 72);
        v89 = v48;
        while ( 1 )
        {
          if ( v48 == v47 )
            goto LABEL_31;
          if ( (a4 & 8) == 0 )
          {
            if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v18 + 48), v48[3], 0LL) )
              goto LABEL_208;
            v17 = v88;
          }
          if ( (a4 & 0x40000080) != 0x40000080 || (int)FsRtlpCheckSharingAgainstOplockOwner(v17, v48[3], *a7, *a8) < 0 )
          {
            if ( (a4 & 0x10010000) != 0 )
              return (unsigned int)-1073739511;
LABEL_210:
            v36 = 1;
            v20 = v93;
LABEL_33:
            if ( v36 )
            {
              if ( (a4 & 1) != 0 )
              {
                if ( (*v23 & 0x10000) != 0 )
                  *v23 |= 0x20000u;
                return 264;
              }
              else
              {
                if ( v83 )
                {
                  LOBYTE(a3) = 1;
                  FsRtlpModifyThreadPriorities(a1, 0LL, a3);
                  FsRtlpOplockSendModernAppTermination(a1, 0LL);
                }
                *v171 = 0;
                return (unsigned int)FsRtlpWaitOnIrp(a1, (__int64)v88, v20, a10, a11, &v192, v84, a12, v169, a14, v170);
              }
            }
            return v21;
          }
LABEL_208:
          v48 = (__int64 *)*v48;
          v89 = v48;
          v47 = (__int64 *)(a1 + 72);
          v18 = v85;
          v17 = v88;
        }
      }
      if ( v29 == 1077312 )
      {
        if ( (unsigned int)dword_140C03770 > 5 )
        {
          v123 = a4;
          v386 = (int *)&v123;
          v387 = 4LL;
          v124 = v24;
          v388 = &v124;
          v389 = 4LL;
          v179 = a1;
          v390 = &v179;
          v391 = 8LL;
          v125 = v28;
          v392 = &v125;
          v393 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, &byte_14002A1E7, 0LL, 0LL, 6, v385);
          v17 = v88;
        }
        if ( (v24 & 0x1000) != 0 )
          *v23 = *v23 & 0x20 | 0x807040;
        if ( (a4 & 0x40000080) == 0x40000080
          && (int)FsRtlpCheckSharingAgainstOplockOwner(v17, *(_QWORD *)(a1 + 8), *a7, *a8) >= 0 )
        {
          goto LABEL_32;
        }
        goto LABEL_218;
      }
      if ( v29 != 3174464 )
      {
        if ( v29 == 5271616 )
        {
          if ( (unsigned int)dword_140C03770 > 5 )
          {
            v117 = a4;
            v359 = (int *)&v117;
            v360 = 4LL;
            v118 = v24;
            v361 = &v118;
            v362 = 4LL;
            v177 = a1;
            v363 = &v177;
            v364 = 8LL;
            v119 = v28;
            v365 = &v119;
            v366 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, &dword_14002A254, 0LL, 0LL, 6, v358);
            v17 = v88;
          }
          if ( v24 == 0x2000 )
          {
            if ( (a4 & 0x40000080) == 0x40000080
              && (int)FsRtlpCheckSharingAgainstOplockOwner(v17, *(_QWORD *)(a1 + 8), *a7, *a8) >= 0 )
            {
              goto LABEL_32;
            }
            v75 = *v23 & 0x20 | 0x107040;
            goto LABEL_187;
          }
          if ( (v24 & 0x1000) != 0 )
          {
            v75 = *v23 & 0x20 | 0x807040;
LABEL_187:
            *v23 = v75;
          }
LABEL_218:
          v36 = 1;
          goto LABEL_33;
        }
LABEL_215:
        if ( (v28 & 0x1000000) == 0 )
        {
          if ( (unsigned int)dword_140C03770 > 2 )
          {
            v135 = a4;
            v413 = (int *)&v135;
            v414 = 4LL;
            v136 = v24;
            v415 = &v136;
            v416 = 4LL;
            v183 = a1;
            v417 = &v183;
            v418 = 8LL;
            v137 = v28;
            v419 = &v137;
            v420 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, byte_14002A09D, 0LL, 0LL, 6, v412);
          }
          goto LABEL_32;
        }
        if ( (unsigned int)dword_140C03770 > 5 )
        {
          v132 = a4;
          v404 = (int *)&v132;
          v405 = 4LL;
          v133 = v24;
          v406 = &v133;
          v407 = 4LL;
          v182 = a1;
          v408 = &v182;
          v409 = 8LL;
          v134 = v28;
          v410 = &v134;
          v411 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, byte_140029F45, 0LL, 0LL, 6, v403);
        }
        goto LABEL_218;
      }
      if ( (unsigned int)dword_140C03770 > 5 )
      {
        v120 = a4;
        v422 = (int *)&v120;
        v423 = 4LL;
        v121 = v24;
        v424 = &v121;
        v425 = 4LL;
        v178 = a1;
        v426 = &v178;
        v427 = 8LL;
        v122 = v28;
        v428 = &v122;
        v429 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, word_14002A10A, 0LL, 0LL, 6, v421);
        v17 = v88;
      }
      if ( v24 == 0x4000 )
      {
        v76 = *v23 & 0x20 | 0x107040;
LABEL_194:
        *v23 = v76;
        goto LABEL_195;
      }
      if ( (v24 & 0x5000) == 0x5000 )
      {
        v76 = *v23 & 0x20 | 0x807040;
        goto LABEL_194;
      }
LABEL_195:
      if ( (a4 & 0x40000080) == 0x40000080
        && (int)FsRtlpCheckSharingAgainstOplockOwner(v17, *(_QWORD *)(a1 + 8), *a7, *a8) >= 0 )
      {
        goto LABEL_32;
      }
      goto LABEL_218;
    }
    if ( v29 != 8409152 )
    {
      if ( v29 != 8417344 )
        goto LABEL_215;
      if ( (unsigned int)dword_140C03770 > 5 )
      {
        v138 = a4;
        v314 = (int *)&v138;
        v315 = 4LL;
        v139 = v24;
        v316 = &v139;
        v317 = 4LL;
        v184 = a1;
        v318 = &v184;
        v319 = 8LL;
        v140 = v28;
        v320 = &v140;
        v321 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, byte_140029FB8, 0LL, 0LL, 6, v313);
        v17 = v88;
      }
      goto LABEL_195;
    }
    if ( (unsigned int)dword_140C03770 > 5 )
    {
      v141 = a4;
      v323 = (int *)&v141;
      v324 = 4LL;
      v142 = v24;
      v325 = &v142;
      v326 = 4LL;
      v185 = a1;
      v327 = &v185;
      v328 = 8LL;
      v143 = v28;
      v329 = &v143;
      v330 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, byte_14002A178, 0LL, 0LL, 6, v322);
    }
LABEL_174:
    if ( (v24 & 0x5000) != 0 )
    {
      v36 = 1;
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  if ( v29 == 1069120 )
  {
    if ( (unsigned int)dword_140C03770 > 5 )
    {
      v114 = a4;
      v350 = (int *)&v114;
      v351 = 4LL;
      v115 = v24;
      v352 = &v115;
      v353 = 4LL;
      v176 = a1;
      v354 = &v176;
      v355 = 8LL;
      v116 = v28;
      v356 = &v116;
      v357 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, &word_14002A396, 0LL, 0LL, 6, v349);
    }
    if ( (v24 & 0x1000) != 0 )
      *v23 = *v23 & 0x20 | 0x805040;
    goto LABEL_174;
  }
  if ( v29 > 0x7040 )
  {
    if ( v29 == 45056 )
      goto LABEL_153;
    if ( v29 != 1060864 )
      goto LABEL_215;
    if ( (unsigned int)dword_140C03770 > 5 )
    {
      v101 = a4;
      v195 = (int *)&v101;
      v196 = 4LL;
      v102 = v24;
      v197 = &v102;
      v198 = 4LL;
      v172 = a1;
      v199 = &v172;
      v200 = 8LL;
      v103 = v28;
      v201 = &v103;
      v202 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, &dword_14002A46C, 0LL, 0LL, 6, v194);
      v18 = v85;
      v17 = v88;
    }
    v65 = 0;
    v86 = 0;
    v66 = v24 & 0x1000;
    v94 = v66;
    v67 = (__int64 *)(a1 + 72);
    if ( (v24 & 0x1000) != 0 )
    {
      v68 = (__int64 *)*v67;
      while ( 1 )
      {
        v89 = v68;
        if ( v68 == v67 )
          break;
        if ( (a4 & 8) != 0 || (v69 = FsRtlpOplockKeysEqual(*(_QWORD *)(v18 + 48), v68[3], a4), v18 = v85, !v69) )
        {
          v86 = 1;
          if ( (a4 & 0x10010000) != 0 )
          {
            if ( (unsigned int)dword_140C03770 > 3 )
            {
              v104 = -1073739511;
              v259 = &v104;
              v260 = 4LL;
              v105 = a4;
              v261 = (int *)&v105;
              v262 = 4LL;
              v106 = v24;
              v263 = &v106;
              v264 = 4LL;
              v173 = a1;
              v265 = &v173;
              v266 = 8LL;
              v94 = *v23;
              v267 = &v94;
              v268 = 4LL;
              v38 = &v258;
              v39 = (char *)word_14002A5B2;
              goto LABEL_82;
            }
            return (unsigned int)-1073739511;
          }
          v70 = v68[6] & 0xFF0FFFFF;
          *((_DWORD *)v68 + 12) = v70;
          *((_DWORD *)v68 + 12) = v70 | 0x800000;
        }
        v68 = (__int64 *)*v68;
        v67 = (__int64 *)(a1 + 72);
      }
      FsRtlpComputeShareableOplockState(a1);
      v67 = (__int64 *)(a1 + 72);
      v65 = v86;
      v66 = v94;
      v18 = v85;
      v17 = v88;
      v20 = v93;
    }
    if ( (v24 & 0x2000) == 0 )
      goto LABEL_32;
    if ( v65 )
    {
      v36 = 1;
      goto LABEL_33;
    }
    if ( v66 )
      goto LABEL_32;
    v71 = (__int64 *)*v67;
    v89 = (__int64 *)*v67;
    while ( 1 )
    {
      if ( v71 == v67 )
        goto LABEL_31;
      if ( (a4 & 8) == 0 )
      {
        if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v18 + 48), v71[3], 0LL) )
          goto LABEL_152;
        v17 = v88;
      }
      if ( (a4 & 0x40000080) != 0x40000080 || (int)FsRtlpCheckSharingAgainstOplockOwner(v17, v71[3], *a7, *a8) < 0 )
        goto LABEL_210;
LABEL_152:
      v71 = (__int64 *)*v71;
      v89 = v71;
      v67 = (__int64 *)(a1 + 72);
      v18 = v85;
      v17 = v88;
    }
  }
  if ( v29 == 28736 )
  {
    if ( (unsigned int)dword_140C03770 > 5 )
    {
      v98 = a4;
      v332 = (int *)&v98;
      v333 = 4LL;
      v99 = v24;
      v334 = &v99;
      v335 = 4LL;
      v190 = a1;
      v336 = &v190;
      v337 = 8LL;
      v100 = v28;
      v338 = &v100;
      v339 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, word_14002A402, 0LL, 0LL, 6, v331);
      v17 = v88;
    }
    if ( v24 == 0x4000 )
    {
      v56 = *(_QWORD *)a1;
      *(_BYTE *)(v56 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v56 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v56 + 69));
      if ( !*(_BYTE *)(v56 + 68) )
      {
        v57 = *(_QWORD *)(v56 + 24);
        *(_OWORD *)v57 = 0LL;
        *(_QWORD *)(v57 + 16) = 0LL;
        *(_DWORD *)v57 = 1572865;
        *(_DWORD *)(v57 + 4) = ((unsigned int)*v23 >> 12) & 7;
        *(_DWORD *)(v57 + 8) = 3;
        *(_DWORD *)(v57 + 12) |= 1u;
        *(_QWORD *)(v56 + 56) = 24LL;
        *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
        IofCompleteRequest(*(PIRP *)a1, 1);
        *(_QWORD *)a1 = 0LL;
        *v23 = *v23 & 0x20 | 0x507040;
        LOBYTE(v21) = 1;
        v81 = v21;
        v21 = v87;
        goto LABEL_32;
      }
      FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
      v52 = *(PIRP *)a1;
      if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) != a1 )
        goto LABEL_121;
    }
    else if ( v24 == 0x2000 )
    {
      v58 = *(PIRP *)a1;
      if ( (a4 & 0x40000080) == 0x40000080
        && (int)FsRtlpCheckSharingAgainstOplockOwner(v17, *(_QWORD *)(a1 + 8), *a7, *a8) >= 0 )
      {
        goto LABEL_32;
      }
      v58->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)&v58->CancelRoutine, 0LL);
      KeReleaseQueuedSpinLock(7uLL, v58->CancelIrql);
      if ( !v58->Cancel )
      {
        MasterIrp = v58->AssociatedIrp.MasterIrp;
        *(_OWORD *)&MasterIrp->Type = 0LL;
        *(_QWORD *)&MasterIrp->Flags = 0LL;
        *(_DWORD *)&MasterIrp->Type = 1572865;
        *(_DWORD *)(&MasterIrp->Size + 1) = ((unsigned int)*v23 >> 12) & 7;
        LODWORD(MasterIrp->MdlAddress) = 5;
        v60 = HIDWORD(MasterIrp->MdlAddress) | 1;
        HIDWORD(MasterIrp->MdlAddress) = v60;
        v61 = v85;
        if ( !*(_BYTE *)v85 )
        {
          HIDWORD(MasterIrp->MdlAddress) = v60 | 2;
          MasterIrp->Flags = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v61 + 8) + 8LL) + 20LL);
          *((_WORD *)&MasterIrp->Flags + 2) = *(_WORD *)(v61 + 26);
        }
        v58->IoStatus.Information = 24LL;
        *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
        IofCompleteRequest(*(PIRP *)a1, 1);
        *(_QWORD *)a1 = 0LL;
        *v23 = *v23 & 0x20 | 0x307040;
        LOBYTE(v21) = 1;
        v81 = v21;
        v21 = v87;
        goto LABEL_32;
      }
      FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
      v52 = *(PIRP *)a1;
      if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) != a1 )
        goto LABEL_121;
    }
    else
    {
      v62 = *(PIRP *)a1;
      v62->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)&v62->CancelRoutine, 0LL);
      KeReleaseQueuedSpinLock(7uLL, v62->CancelIrql);
      if ( !v62->Cancel )
      {
        v64 = v62->AssociatedIrp.MasterIrp;
        *(_OWORD *)&v64->Type = 0LL;
        *(_QWORD *)&v64->Flags = 0LL;
        *(_DWORD *)&v64->Type = 1572865;
        *(_DWORD *)(&v64->Size + 1) = ((unsigned int)*v23 >> 12) & 7;
        HIDWORD(v64->MdlAddress) |= 1u;
        v62->IoStatus.Information = 24LL;
        *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
        IofCompleteRequest(*(PIRP *)a1, 1);
        *(_QWORD *)a1 = 0LL;
        *v23 = *v23 & 0x20 | 0x807040;
        LOBYTE(v21) = 1;
        v81 = v21;
        v21 = v87;
        goto LABEL_32;
      }
      FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
      v52 = *(PIRP *)a1;
      if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) != a1 )
        goto LABEL_121;
    }
    goto LABEL_120;
  }
  v49 = v29 - 4096;
  if ( v49 )
  {
    v50 = v49 - 16;
    if ( v50 )
    {
      if ( v50 != 16432 )
        goto LABEL_215;
      if ( (unsigned int)dword_140C03770 > 5 )
      {
        v167 = a4;
        v368 = (int *)&v167;
        v369 = 4LL;
        v96 = v24;
        v370 = &v96;
        v371 = 4LL;
        v189 = a1;
        v372 = &v189;
        v373 = 8LL;
        v97 = v28;
        v374 = &v97;
        v375 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, word_14002A2C2, 0LL, 0LL, 6, v367);
      }
      if ( (v24 & 0x5000) == 0x5000 )
      {
        v51 = *(PIRP *)a1;
        v51->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
        _InterlockedExchange64((volatile __int64 *)&v51->CancelRoutine, 0LL);
        KeReleaseQueuedSpinLock(7uLL, v51->CancelIrql);
        if ( !v51->Cancel )
        {
          v53 = v51->AssociatedIrp.MasterIrp;
          *(_OWORD *)&v53->Type = 0LL;
          *(_QWORD *)&v53->Flags = 0LL;
          *(_DWORD *)&v53->Type = 1572865;
          *(_DWORD *)(&v53->Size + 1) = ((unsigned int)*v23 >> 12) & 7;
          HIDWORD(v53->MdlAddress) |= 1u;
          v51->IoStatus.Information = 24LL;
          *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
          IofCompleteRequest(*(PIRP *)a1, 1);
          *(_QWORD *)a1 = 0LL;
          *v23 = *v23 & 0x20 | 0x805040;
          LOBYTE(v21) = 1;
          v81 = v21;
          v21 = v87;
          goto LABEL_32;
        }
        FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
        FsRtlpClearOwner(a1, 0LL);
        *(_BYTE *)(a1 + 32) = 0;
        v52 = *(PIRP *)a1;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) != a1 )
        {
LABEL_121:
          *(_DWORD *)(*(_QWORD *)a1 + 48LL) = -1073741536;
          IofCompleteRequest(*(PIRP *)a1, 1);
          *(_QWORD *)a1 = 0LL;
          ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
          *(_QWORD *)(a1 + 8) = 0LL;
          *v23 = *v23 & 0x20 | 1;
          while ( 1 )
          {
            v63 = *(_QWORD **)(a1 + 88);
            if ( v63 == (_QWORD *)(a1 + 88) )
              break;
            FsRtlpRemoveAndCompleteWaitingIrp(v63);
          }
          v84 = 0;
          v83 = 1;
          v21 = v87;
          goto LABEL_32;
        }
      }
      else
      {
        if ( (v24 & 0x4000) == 0 )
          goto LABEL_32;
        v54 = *(PIRP *)a1;
        v54->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
        _InterlockedExchange64((volatile __int64 *)&v54->CancelRoutine, 0LL);
        KeReleaseQueuedSpinLock(7uLL, v54->CancelIrql);
        if ( !v54->Cancel )
        {
          v55 = v54->AssociatedIrp.MasterIrp;
          *(_OWORD *)&v55->Type = 0LL;
          *(_QWORD *)&v55->Flags = 0LL;
          *(_DWORD *)&v55->Type = 1572865;
          *(_DWORD *)(&v55->Size + 1) = ((unsigned int)*v23 >> 12) & 7;
          LODWORD(v55->MdlAddress) = 1;
          HIDWORD(v55->MdlAddress) |= 1u;
          v54->IoStatus.Information = 24LL;
          *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
          IofCompleteRequest(*(PIRP *)a1, 1);
          *(_QWORD *)a1 = 0LL;
          *v23 = *v23 & 0x20 | 0x105040;
          LOBYTE(v21) = 1;
          v81 = v21;
          v21 = v87;
          goto LABEL_32;
        }
        FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
        FsRtlpClearOwner(a1, 0LL);
        *(_BYTE *)(a1 + 32) = 0;
        v52 = *(PIRP *)a1;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) != a1 )
          goto LABEL_121;
      }
LABEL_120:
      v52->IoStatus.Information = 0LL;
      goto LABEL_121;
    }
  }
LABEL_153:
  if ( (unsigned int)dword_140C03770 > 5 )
  {
    v107 = a4;
    v341 = (int *)&v107;
    v342 = 4LL;
    v108 = v24;
    v343 = &v108;
    v344 = 4LL;
    v174 = a1;
    v345 = &v174;
    v346 = 8LL;
    v109 = v28;
    v347 = &v109;
    v348 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, word_14002A91A, 0LL, 0LL, 6, v340);
    v18 = v85;
    LOBYTE(a3) = 0;
  }
  if ( (v24 & 0x1000) != 0 )
  {
    v72 = (__int64 *)(a1 + 40);
    for ( i = *(__int64 **)(a1 + 40); ; i = (__int64 *)*i )
    {
      v89 = i;
      if ( i == v72 )
        break;
      v74 = i[2];
      if ( *(_DWORD *)(v74 + 24) == 590400 )
      {
        if ( (a4 & 8) != 0 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v18 + 48), *(_QWORD *)(v74 + 48), a4) )
        {
          if ( (a4 & 0x10010000) != 0 )
          {
            if ( (unsigned int)dword_140C03770 > 3 )
            {
              v110 = -1073739511;
              v215 = &v110;
              v216 = 4LL;
              v111 = a4;
              v217 = (int *)&v111;
              v218 = 4LL;
              v112 = v24;
              v219 = &v112;
              v220 = 4LL;
              v175 = a1;
              v221 = &v175;
              v222 = 8LL;
              v113 = *v23;
              v223 = &v113;
              v224 = 4LL;
              v38 = &v214;
              v39 = &byte_14002A8AF;
              goto LABEL_82;
            }
            return (unsigned int)-1073739511;
          }
          i = (__int64 *)i[1];
          v89 = i;
          FsRtlpRemoveAndCompleteReadOnlyIrp(*i, 0LL, 0LL, a1);
          v72 = (__int64 *)(a1 + 40);
          v18 = v85;
        }
        else
        {
          v72 = (__int64 *)(a1 + 40);
          v18 = v85;
        }
      }
    }
    LOBYTE(a3) = 0;
    v20 = v93;
  }
  v28 = *v23;
  if ( (*v23 & 0x1F0FFDF) != 0xB000 )
  {
    FsRtlpComputeShareableOplockState(a1);
    goto LABEL_32;
  }
LABEL_14:
  if ( (unsigned int)dword_140C03770 > 5 )
  {
    v144 = a4;
    v377 = (int *)&v144;
    v378 = 4LL;
    v145 = v24;
    v379 = &v145;
    v380 = 4LL;
    v168 = (__int64 *)a1;
    v381 = &v168;
    v382 = 8LL;
    v146 = v28;
    v383 = &v146;
    v384 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, byte_14002A688, 0LL, 0LL, 6, v376);
    v18 = v85;
    LOBYTE(a3) = 0;
  }
  if ( v24 == 0x2000 )
  {
    v40 = (__int64 *)(a1 + 56);
    v41 = *(__int64 **)(a1 + 56);
    v89 = v41;
    while ( 1 )
    {
      if ( v41 == v40 )
        goto LABEL_26;
      v42 = v41 + 3;
      v168 = v41 + 3;
      if ( (a4 & 8) == 0 )
      {
        if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v18 + 48), *v42, 0LL) )
        {
          LOBYTE(a3) = v82;
          goto LABEL_72;
        }
        v42 = v168;
      }
      if ( (a4 & 0x40000080) == 0x40000080 && (int)FsRtlpCheckSharingAgainstOplockOwner(v88, *v42, *a7, *a8) >= 0 )
      {
        LOBYTE(a3) = v82;
      }
      else
      {
        if ( (a4 & 0x10010000) != 0 )
        {
          if ( (unsigned int)dword_140C03770 > 3 )
          {
            v151 = -1073739511;
            v281 = &v151;
            v282 = 4LL;
            v152 = a4;
            v283 = (int *)&v152;
            v284 = 4LL;
            v153 = 0x2000;
            v285 = &v153;
            v286 = 4LL;
            v169 = a1;
            v287 = &v169;
            v288 = 8LL;
            v154 = *v23;
            v289 = &v154;
            v290 = 4LL;
            v38 = &v280;
            v39 = byte_14002A61D;
            goto LABEL_82;
          }
          return (unsigned int)-1073739511;
        }
        if ( v41[7] )
        {
          if ( (unsigned int)dword_140C03770 > 5 )
          {
            v147 = a4;
            v204 = (int *)&v147;
            v205 = 4LL;
            v165 = 0x2000;
            v206 = &v165;
            v207 = 4LL;
            v187 = a1;
            v208 = &v187;
            v209 = 8LL;
            v149 = *v23;
            v210 = &v149;
            v211 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, &dword_14002A75C, 0LL, 0LL, 6, v203);
          }
          LOBYTE(v42) = 1;
          v81 = (int)v42;
          LOBYTE(a3) = v82;
        }
        else
        {
          v41 = (__int64 *)v41[1];
          v89 = v41;
          v43 = 1;
          v150 = 1;
          v44 = 0;
          v45 = 0;
          if ( !*(_BYTE *)v85 )
          {
            v43 = 3;
            v150 = 3;
            v44 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v85 + 8) + 8LL) + 20LL);
            v45 = *(_WORD *)(v85 + 26);
          }
          if ( FsRtlpRemoveAndCompleteRHIrp(*v41, a1, 0, 0x1000u, v43, v44, v45) )
          {
            v83 = 0;
            LOBYTE(v46) = 1;
            v81 = v46;
            v84 = v22 != 0;
            LOBYTE(a3) = v82;
          }
          else
          {
            LOBYTE(a3) = 1;
            v82 = 1;
          }
        }
      }
LABEL_72:
      v41 = (__int64 *)*v41;
      v89 = v41;
      v40 = (__int64 *)(a1 + 56);
      v18 = v85;
    }
  }
  if ( (v24 & 0x5000) != 0x5000 )
  {
LABEL_26:
    if ( (_BYTE)a3 )
    {
      FsRtlpReleaseIrpsWaitingForRH(a1);
      v18 = v85;
    }
    if ( !(_BYTE)v81 )
    {
      v35 = *(_QWORD **)(a1 + 72);
      v95 = v35;
      if ( v35 != (_QWORD *)(a1 + 72) && (v24 & 0x2000) != 0 )
      {
        if ( (a4 & 8) != 0 )
        {
LABEL_247:
          LOBYTE(v35) = 1;
          v81 = (int)v35;
        }
        else
        {
          v89 = v35;
          while ( v35 != (_QWORD *)(a1 + 72) )
          {
            LODWORD(v35) = FsRtlpOplockKeysEqual(v35[3], *(_QWORD *)(v18 + 48), 0LL);
            if ( !(_BYTE)v35 )
              goto LABEL_247;
            v35 = (_QWORD *)*v95;
            v95 = v35;
            v89 = v35;
            v18 = v85;
          }
        }
      }
    }
    FsRtlpComputeShareableOplockState(a1);
LABEL_31:
    v20 = v93;
LABEL_32:
    v36 = v81;
    goto LABEL_33;
  }
  v30 = a1 + 72;
  v31 = *(_QWORD *)(a1 + 72);
  v89 = (__int64 *)v31;
  LOBYTE(v32) = v81;
  while ( 1 )
  {
    if ( v31 == v30 )
    {
      v33 = (__int64 *)(a1 + 56);
      v34 = *(__int64 **)(a1 + 56);
      v89 = v34;
      while ( 1 )
      {
        if ( v34 == v33 )
        {
          LOBYTE(a3) = v82;
          goto LABEL_26;
        }
        if ( (a4 & 8) != 0 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v18 + 48), v34[3], a4) )
        {
          if ( (a4 & 0x10010000) != 0 )
          {
            if ( (unsigned int)dword_140C03770 > 3 )
            {
              v159 = -1073739511;
              v303 = &v159;
              v304 = 4LL;
              v160 = a4;
              v305 = (int *)&v160;
              v306 = 4LL;
              v161 = v24;
              v307 = &v161;
              v308 = 4LL;
              v171 = (_BYTE *)a1;
              v309 = &v171;
              v310 = 8LL;
              v162 = *v23;
              v311 = &v162;
              v312 = 4LL;
              v38 = &v302;
              v39 = (char *)&unk_14002A4D8;
LABEL_82:
              tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, v39, 0LL, 0LL, 7, v38);
            }
            return (unsigned int)-1073739511;
          }
          if ( v34[7] )
          {
            v79 = (unsigned __int8)v81;
            if ( (v24 & 0x2000) != 0 )
              v79 = 1;
            v81 = v79;
          }
          else
          {
            v34 = (__int64 *)v34[1];
            v89 = v34;
            if ( FsRtlpRemoveAndCompleteRHIrp(*v34, a1, 0, 0, 1, 0, 0) )
            {
              v83 = 0;
              if ( (v24 & 0x2000) != 0 )
              {
                LOBYTE(v37) = 1;
                v81 = v37;
              }
              v84 = v22 != 0;
            }
            else
            {
              v82 = 1;
            }
          }
        }
        v34 = (__int64 *)*v34;
        v89 = v34;
        v33 = (__int64 *)(a1 + 56);
        v18 = v85;
      }
    }
    if ( (a4 & 8) != 0 )
      break;
    v77 = FsRtlpOplockKeysEqual(*(_QWORD *)(v18 + 48), *(_QWORD *)(v31 + 24), a4);
    v18 = v85;
    LOBYTE(v32) = v81;
    if ( !v77 )
      break;
LABEL_238:
    v31 = *(_QWORD *)v31;
    v89 = (__int64 *)v31;
    v30 = a1 + 72;
  }
  if ( (a4 & 0x10010000) == 0 )
  {
    v78 = *(_DWORD *)(v31 + 48) & 0xFF0FFFFF;
    *(_DWORD *)(v31 + 48) = v78;
    *(_DWORD *)(v31 + 48) = v78 | 0x800000;
    v32 = (unsigned __int8)v32;
    if ( (v24 & 0x2000) != 0 )
      v32 = 1;
    v81 = v32;
    goto LABEL_238;
  }
  if ( (unsigned int)dword_140C03770 > 3 )
  {
    v155 = -1073739511;
    v292 = &v155;
    v293 = 4LL;
    v156 = a4;
    v294 = (int *)&v156;
    v295 = 4LL;
    v157 = v24;
    v296 = &v157;
    v297 = 4LL;
    v170 = (char *)a1;
    v298 = &v170;
    v299 = 8LL;
    v158 = *v23;
    v300 = &v158;
    v301 = 4LL;
    v38 = &v291;
    v39 = byte_14002A6F1;
    goto LABEL_82;
  }
  return (unsigned int)-1073739511;
}
