/*
 * XREFs of ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00483E0
 * Callers:
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C004BD9C (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C00B41E0 (vDynamicConvertNewSurfaceDCs.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C016C170 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004193C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00421F0 (HmgDecrementShareReferenceCountEx.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0043870 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044030 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C00440F0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0044F10 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0046340 (W32GetThreadWin32Thread.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0046EB0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C0047C58 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0048150 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0049D88 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x1C0049DDC (--1DLODCOBJ@@QEAA@XZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C005F78C (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0089E50 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1C0096FC4 (-bStockSurface@SURFACE@@QEAAHXZ.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00B5870 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ?bAllowDDICall@PDEVOBJ@@QEAAHXZ @ 0x1C00BBC20 (-bAllowDDICall@PDEVOBJ@@QEAAHXZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C00D2508 (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C00DFACC (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C01586EC (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     EngFreeUserMem @ 0x1C016A070 (EngFreeUserMem.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C016BC08 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BCC0 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C016D464 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1C016E6A4 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C016EC94 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C016F734 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C01700DC (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 *     IsGreDeleteWndSupported @ 0x1C02326EC (IsGreDeleteWndSupported.c)
 *     IsUMPDDrvDeleteDeviceBitmapSupported @ 0x1C0232770 (IsUMPDDrvDeleteDeviceBitmapSupported.c)
 *     IsUMPDEngFreeUserMemSupported @ 0x1C023279C (IsUMPDEngFreeUserMemSupported.c)
 */

__int64 __fastcall SURFACE::bDeleteSurface(__int64 a1, int a2, int a3)
{
  int *v3; // r15
  __int64 v4; // rsi
  void *v5; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **v8; // rdi
  void *v9; // rax
  __int128 v10; // xmm0
  void *v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  struct _ERESOURCE *Reserved2; // rbx
  __int64 v15; // rcx
  char v16; // bl
  char v17; // si
  __int64 v18; // r14
  __int64 v19; // rcx
  bool v20; // zf
  unsigned int v21; // ebx
  __int64 v22; // rcx
  unsigned int v23; // r12d
  unsigned int v24; // ebx
  __int64 v25; // r13
  bool v26; // cc
  __int64 v27; // r10
  unsigned int v28; // edx
  __int64 v29; // r10
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r13
  struct _ERESOURCE *v34; // rbx
  __int64 v35; // rbx
  __int64 v36; // rcx
  int v37; // r8d
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // r13
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rbx
  __int64 v44; // rbx
  unsigned int v45; // edx
  __int64 v46; // rbx
  unsigned __int16 *v47; // r13
  __int64 v48; // rcx
  __int64 CurrentThread; // rcx
  unsigned int v50; // edx
  char v51; // al
  __int64 v52; // rax
  unsigned int v53; // ebx
  __int64 v54; // rcx
  __int64 v55; // r12
  __int64 v56; // rdx
  unsigned int v57; // r9d
  __int64 v58; // r8
  __int64 v59; // r12
  int v60; // eax
  __int64 v61; // rcx
  unsigned int v62; // ebx
  PERESOURCE v63; // r9
  unsigned int v64; // edx
  unsigned int v65; // eax
  struct _LIST_ENTRY *Blink; // r9
  unsigned int v67; // eax
  __int64 v68; // r10
  struct _LIST_ENTRY *v69; // r8
  __int64 v70; // rdx
  char v71; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v72; // rbx
  __int64 v73; // rcx
  int v74; // ebx
  signed int v75; // r12d
  __int64 v76; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v78; // rcx
  _QWORD *v79; // r12
  __int64 v80; // rcx
  int v81; // edx
  __int64 v82; // rcx
  int v83; // r8d
  __int64 v84; // r12
  __int64 v85; // rcx
  __int64 v86; // rcx
  int v87; // r8d
  struct _ERESOURCE *v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // r8
  unsigned int v92; // r12d
  __int64 v93; // rcx
  PERESOURCE v94; // rax
  POWNER_ENTRY OwnerTable; // rdx
  __int64 TableSize; // r9
  __int64 *v97; // rdx
  __int64 v98; // r12
  __int64 v99; // rcx
  __int64 v100; // r12
  __int64 v101; // rax
  unsigned int v102; // ebx
  PERESOURCE v103; // rax
  POWNER_ENTRY v104; // rdx
  unsigned int v105; // r9d
  __int64 v106; // r8
  _DWORD *v107; // rax
  unsigned int v108; // ebx
  __int64 v109; // r8
  __int64 v110; // r13
  unsigned int v111; // edx
  __int64 v112; // r10
  __int64 v113; // r9
  _QWORD **v114; // r11
  unsigned __int64 v115; // r10
  __int64 v116; // rcx
  struct HOBJ__ *v117; // r12
  __int64 v118; // rcx
  _BYTE *v119; // r14
  HANDLE v120; // rbx
  char *v121; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v122; // r14
  char *v123; // rcx
  __int64 v124; // rbx
  __int64 v125; // rbx
  int v126; // eax
  unsigned int v127; // eax
  unsigned int v128; // ebx
  unsigned int v129; // ebx
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rcx
  __int64 v135; // r15
  __int64 v136; // r15
  unsigned int v137; // edx
  __int64 v138; // r15
  __int64 v139; // r13
  _QWORD *v140; // rax
  char v141; // al
  __int64 v142; // rcx
  __int64 v143; // r15
  __int64 v144; // rax
  unsigned int v145; // ebx
  __int64 v146; // rdi
  __int64 v147; // rdx
  unsigned int v148; // r9d
  __int64 v149; // r8
  _DWORD *v150; // rdx
  unsigned int v151; // ebx
  __int64 v152; // rdx
  unsigned int v153; // r8d
  __int64 v154; // r10
  __int64 v155; // rcx
  struct _ERESOURCE *v156; // rbx
  __int64 v158; // rcx
  __int64 v159; // rax
  unsigned int v160; // ebx
  __int64 v161; // r12
  __int64 v162; // rdx
  unsigned int v163; // r9d
  __int64 v164; // r8
  _DWORD *v165; // rdx
  unsigned int v166; // ebx
  POWNER_ENTRY v167; // rdx
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v168; // r8d
  __int64 v169; // r10
  __int64 v170; // rcx
  __int64 v171; // rbx
  __int64 v172; // r12
  __int64 v173; // rcx
  __int64 v174; // rcx
  int v175; // r8d
  struct _ERESOURCE *v176; // rcx
  int v177; // eax
  int v178; // eax
  unsigned int v179; // ebx
  _BYTE *v180; // rdi
  unsigned int v181; // ebx
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // rcx
  __int64 v187; // r14
  __int64 v188; // r14
  unsigned int v189; // edx
  __int64 v190; // r14
  __int64 v191; // r13
  _QWORD *v192; // rax
  char v193; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v194; // rbx
  __int64 v195; // rcx
  __int64 v196; // r15
  __int64 v197; // rax
  unsigned int v198; // ebx
  __int64 v199; // r14
  __int64 v200; // rdx
  unsigned int v201; // r9d
  __int64 v202; // r8
  _DWORD *v203; // rdx
  unsigned int v204; // ebx
  __int64 v205; // rdx
  unsigned int v206; // r8d
  __int64 v207; // r10
  __int64 v208; // r14
  __int64 v209; // rcx
  __int64 v210; // r14
  int v211; // r8d
  __int64 v212; // rbx
  __int64 v213; // rsi
  __int64 v214; // rcx
  __int64 v215; // rcx
  int v216; // r8d
  struct _ERESOURCE *v217; // rcx
  struct _ERESOURCE *Flink; // rbx
  _QWORD *v219; // rcx
  int *v220; // rax
  __int64 v221; // rdx
  int **v222; // r8
  PVOID v223; // rbx
  ULONG_PTR v224; // rbx
  void (__fastcall *v225)(ULONG_PTR); // rax
  ULONG_PTR v226; // rcx
  int v227; // ebx
  __int64 CurrentThreadProcess; // rax
  struct OBJECT *v229; // rax
  struct _ENTRY *Entry; // rax
  struct _ENTRY *v231; // rax
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v232; // rcx
  _QWORD *ProcessWin32Process; // rax
  _DWORD *v234; // rax
  int v235; // r8d
  int v236; // ecx
  unsigned int v237; // r13d
  PERESOURCE v238; // rax
  __int64 v239; // rax
  __int64 v240; // rdx
  __int64 ThreadWin32Thread; // r14
  __int64 v242; // rdx
  __int64 v243; // rcx
  __int64 v244; // r8
  __int64 CurrentProcess; // rax
  __int64 v246; // rax
  int v247; // ecx
  NSInstrumentation::CPointerHashTable *v248; // rcx
  __int64 v249; // rcx
  char *v250; // rax
  unsigned int v251; // ebx
  __int64 v252; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v253; // rdx
  __int64 v254; // rcx
  __int64 v255; // rax
  __int64 v256; // rax
  __int64 v257; // rax
  __int64 v258; // rbx
  struct _ERESOURCE *v259; // rcx
  PERESOURCE Resource; // [rsp+50h] [rbp-B0h]
  PERESOURCE Resourcea; // [rsp+50h] [rbp-B0h]
  struct _ERESOURCE *Resourceb; // [rsp+50h] [rbp-B0h]
  PERESOURCE Resourcec; // [rsp+50h] [rbp-B0h]
  PERESOURCE Resourced; // [rsp+50h] [rbp-B0h]
  PERESOURCE Resourcee; // [rsp+50h] [rbp-B0h]
  PERESOURCE Resourcef; // [rsp+50h] [rbp-B0h]
  PERESOURCE Resourceg; // [rsp+50h] [rbp-B0h]
  unsigned int v268; // [rsp+58h] [rbp-A8h]
  ULONG NumberOfSharedWaiters; // [rsp+5Ch] [rbp-A4h]
  unsigned int v270; // [rsp+5Ch] [rbp-A4h]
  char EtwGdiHandleType; // [rsp+5Ch] [rbp-A4h]
  __int64 v272; // [rsp+60h] [rbp-A0h]
  __int64 v273; // [rsp+60h] [rbp-A0h]
  __int64 v274; // [rsp+60h] [rbp-A0h]
  _QWORD *v275; // [rsp+60h] [rbp-A0h]
  __int64 v276; // [rsp+68h] [rbp-98h]
  __int64 v277; // [rsp+68h] [rbp-98h]
  PVOID BaseAddress; // [rsp+70h] [rbp-90h] BYREF
  PVOID MappedBase; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v281; // [rsp+88h] [rbp-78h] BYREF
  void *v282; // [rsp+90h] [rbp-70h] BYREF
  __int64 v283; // [rsp+98h] [rbp-68h] BYREF
  struct HOBJ__ *v284; // [rsp+A0h] [rbp-60h]
  PERESOURCE v285; // [rsp+A8h] [rbp-58h] BYREF
  PEPROCESS Process; // [rsp+B0h] [rbp-50h] BYREF
  int v287; // [rsp+B8h] [rbp-48h]
  unsigned int v288; // [rsp+BCh] [rbp-44h]
  HANDLE SecureHandle; // [rsp+C0h] [rbp-40h] BYREF
  ULONG_PTR RegionSize; // [rsp+C8h] [rbp-38h] BYREF
  int v291; // [rsp+D0h] [rbp-30h]
  int v292; // [rsp+D4h] [rbp-2Ch]
  __int64 v293; // [rsp+D8h] [rbp-28h] BYREF
  PVOID v294[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v295; // [rsp+F0h] [rbp-10h]
  __int64 v296; // [rsp+100h] [rbp+0h]
  unsigned __int16 *v297; // [rsp+108h] [rbp+8h] BYREF
  int v298; // [rsp+110h] [rbp+10h]
  int v299; // [rsp+114h] [rbp+14h]
  __int64 v300; // [rsp+120h] [rbp+20h] BYREF
  PERESOURCE v301; // [rsp+128h] [rbp+28h] BYREF
  PERESOURCE v302[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v303; // [rsp+140h] [rbp+40h]
  int v304; // [rsp+148h] [rbp+48h]
  char v305[4]; // [rsp+14Ch] [rbp+4Ch] BYREF
  _BYTE v306[56]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v307; // [rsp+188h] [rbp+88h] BYREF
  __int64 v308; // [rsp+190h] [rbp+90h] BYREF
  __int64 v309; // [rsp+198h] [rbp+98h] BYREF
  _OWORD v310[7]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v311; // [rsp+220h] [rbp+120h] BYREF
  int v312; // [rsp+228h] [rbp+128h]
  int v313; // [rsp+230h] [rbp+130h]
  unsigned int v314; // [rsp+238h] [rbp+138h]

  v313 = a3;
  v312 = a2;
  v3 = (int *)a1;
  v314 = 1;
  if ( (struct _LIST_ENTRY *)a1 == WPP_MAIN_CB.Queue.ListEntry.Blink || !a1 )
    return v314;
  SecureHandle = 0LL;
  v282 = 0LL;
  MappedBase = 0LL;
  v281 = 0LL;
  v287 = 0;
  if ( !*(_WORD *)(a1 + 100) )
  {
    v4 = *(_QWORD *)(a1 + 72);
    SecureHandle = *(HANDLE *)(a1 + 192);
    v282 = *(void **)(a1 + 184);
    v287 = *(_DWORD *)(a1 + 216);
    a1 = (unsigned __int16)*(_DWORD *)(a1 + 212);
    v5 = (void *)*((_QWORD *)v3 + 28);
    MappedBase = (PVOID)(v4 - a1);
    v281 = v5;
  }
  v6 = *((_OWORD *)v3 + 17);
  v7 = *((_OWORD *)v3 + 18);
  v8 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)*((_QWORD *)v3 + 16);
  RegionSize = *((_QWORD *)v3 + 3);
  v293 = *((_QWORD *)v3 + 17);
  v9 = (void *)*((_QWORD *)v3 + 9);
  v310[0] = v6;
  BaseAddress = v9;
  v10 = *((_OWORD *)v3 + 19);
  v292 = *((unsigned __int16 *)v3 + 51);
  v11 = (void *)*((_QWORD *)v3 + 31);
  v310[2] = v10;
  Object = v11;
  v12 = *(_OWORD *)(v3 + 146);
  LODWORD(v11) = v3[80];
  v310[1] = v7;
  v291 = (int)v11;
  v13 = *(_OWORD *)(v3 + 150);
  *(_OWORD *)v294 = v12;
  v296 = *((_QWORD *)v3 + 77);
  v295 = v13;
  v285 = *(PERESOURCE *)(SGDGetSessionState(a1) + 24);
  Reserved2 = (struct _ERESOURCE *)v285->Reserved2;
  if ( ExIsResourceAcquiredExclusiveLite(Reserved2) || ExIsResourceAcquiredSharedLite(Reserved2) )
  {
    v16 = 0;
    v17 = 0;
  }
  else
  {
    v16 = 1;
    v17 = 1;
    v208 = *(_QWORD *)(SGDGetSessionState(v15) + 24);
    v209 = *(_QWORD *)(v208 + 80);
    if ( v209 )
      ExEnterPriorityRegionAndAcquireResourceShared(v209);
    v210 = *(_QWORD *)(v208 + 80);
    v15 = *(_QWORD *)(SGDGetSessionState(v209) + 24);
    if ( *(_DWORD *)(v15 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v15,
        (unsigned int)&LockAcquireShared,
        v211,
        v210,
        (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
  }
  v18 = *((_QWORD *)v3 + 6);
  v283 = v18;
  if ( (!v18 || (v3[28] & 0x400000) == 0 || (*(_DWORD *)(v18 + 40) & 1) == 0) && v16 )
  {
    v212 = *(_QWORD *)(SGDGetSessionState(v15) + 24);
    v213 = *(_QWORD *)(v212 + 80);
    v215 = *(_QWORD *)(SGDGetSessionState(v214) + 24);
    if ( *(_DWORD *)(v215 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v215,
        (unsigned int)&LockRelease,
        v216,
        v213,
        (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
    v217 = *(struct _ERESOURCE **)(v212 + 80);
    if ( v217 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v217);
      PsLeavePriorityRegion();
    }
    v17 = 0;
  }
  v301 = 0LL;
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v306);
  *(_OWORD *)v302 = 0LL;
  v303 = 0LL;
  v304 = 0;
  if ( qword_1C0294720 && (int)qword_1C0294720() >= 0 && qword_1C0294728 )
    qword_1C0294728(v302, 0LL);
  v20 = (v3[28] & 0x400000) == 0;
  v309 = 0LL;
  v308 = 0LL;
  v307 = 0LL;
  if ( v20 || !v18 )
  {
    *(_OWORD *)v302 = 0LL;
    v303 = 0LL;
    v304 = 0;
    if ( qword_1C0294720 && (int)qword_1C0294720() >= 0 && qword_1C0294728 )
      qword_1C0294728(v302, 0LL);
    v309 = 0LL;
    v308 = 0LL;
    v307 = 0LL;
  }
  else
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v301, (struct PDEVOBJ *)&v283);
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v302, (struct PDEVOBJ *)&v283);
  }
  v284 = *(struct HOBJ__ **)v3;
  v21 = (unsigned int)v284;
  v288 = -2147483614;
  v22 = *(_QWORD *)(SGDGetSessionState(v19) + 24);
  v23 = (unsigned __int16)v21 | (v21 >> 8) & 0xFF0000;
  v24 = v23;
  v25 = *(_QWORD *)(v22 + 8008);
  if ( v23 >= 0x10000 )
  {
    v26 = *(_DWORD *)v25 <= 0x10000u;
    LODWORD(v311) = (unsigned __int16)v23;
    if ( v26 )
    {
      v24 = (unsigned __int16)v23;
    }
    else
    {
      v22 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                   *(GdiHandleEntryDirectory **)(v25 + 16),
                                   (unsigned __int16)v23,
                                   1)
            + 13);
      if ( (_DWORD)v22 == HIWORD(v23) )
        v24 = v311;
    }
  }
  v27 = *(_QWORD *)(v25 + 16);
  v28 = *(_DWORD *)(v27 + 2056);
  if ( v24 < v28 + ((*(unsigned __int16 *)(v27 + 2) + 0xFFFF) << 16) )
  {
    if ( v24 >= v28 )
    {
      v22 = ((v24 - v28) >> 16) + 1;
      v29 = *(_QWORD *)(v27 + 8 * v22 + 8);
      v24 += -65536 * ((v24 - v28) >> 16) - v28;
    }
    else
    {
      v29 = *(_QWORD *)(v27 + 8);
    }
    v30 = 0LL;
    if ( v24 < *(_DWORD *)(v29 + 20) )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * ((unsigned __int64)v24 >> 8))
                      + 16LL * (unsigned __int8)v24
                      + 8);
      if ( v22 )
      {
        v22 = 3LL * v24;
        v30 = *(_QWORD *)v29 + 24LL * v24;
      }
    }
    if ( v30 && *(_BYTE *)(v30 + 14) == 5 && *(_WORD *)(v30 + 12) == WORD1(v284) )
      v288 = *(_DWORD *)(v30 + 8) & 0xFFFFFFFE;
  }
  LODWORD(v311) = 0;
  if ( v313 )
    goto LABEL_136;
  NumberOfSharedWaiters = v285[30].NumberOfSharedWaiters;
  SGDGetSessionState(v22);
  v33 = *(_QWORD *)(SGDGetSessionState(v31) + 24);
  v34 = *(struct _ERESOURCE **)(v33 + 1912);
  if ( v34 )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v34);
  }
  v35 = *(_QWORD *)(v33 + 1912);
  v36 = *(_QWORD *)(SGDGetSessionState(v32) + 24);
  if ( *(_DWORD *)(v36 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(
      v36,
      (unsigned int)L"GreBaseGlobals.hsemHmgr",
      v37,
      v35,
      17,
      (__int64)L"GreBaseGlobals.hsemHmgr");
  v300 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v300);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (v227 = *(_DWORD *)SGDGetUserSessionState(v40, v39, v41, v42),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         v227 == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v272 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v272 = 0LL;
  }
  v298 = 1;
  v43 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v40) + 24) + 8008LL);
  if ( v23 >= 0x10000 )
  {
    if ( *(_DWORD *)v43 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *(GdiHandleEntryDirectory **)(v43 + 16),
                                  (unsigned __int16)v23,
                                  1)
           + 13) == HIWORD(v23) )
        v23 = (unsigned __int16)v23;
    }
    else
    {
      v23 = (unsigned __int16)v23;
    }
  }
  v44 = *(_QWORD *)(v43 + 16);
  v45 = *(_DWORD *)(v44 + 2056);
  if ( v23 >= v45 + ((*(unsigned __int16 *)(v44 + 2) + 0xFFFF) << 16) )
    goto LABEL_416;
  if ( v23 >= v45 )
  {
    v46 = *(_QWORD *)(v44 + 8LL * (((v23 - v45) >> 16) + 1) + 8);
    v23 += -65536 * ((v23 - v45) >> 16) - v45;
  }
  else
  {
    v46 = *(_QWORD *)(v44 + 8);
  }
  v47 = 0LL;
  if ( v23 < *(_DWORD *)(v46 + 20) )
  {
    v276 = (unsigned __int8)v23;
    Resource = (PERESOURCE)(8 * ((unsigned __int64)v23 >> 8));
    Process = (PEPROCESS)&(*(struct _LIST_ENTRY **)((char *)&Resource->SystemResourcesList.Flink
                                                  + **(_QWORD **)(v46 + 24)))[v276];
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(Process, 0LL);
    if ( v23 < *(_DWORD *)(v46 + 20)
      && (*(struct _LIST_ENTRY **)((char *)&Resource->SystemResourcesList.Flink + **(_QWORD **)(v46 + 24)))[v276].Blink )
    {
      v48 = 24LL * v23;
      *(_DWORD *)(*(_QWORD *)v46 + v48 + 8) |= 1u;
      v47 = (unsigned __int16 *)(v48 + *(_QWORD *)v46);
    }
    else
    {
      ExReleasePushLockExclusiveEx(Process, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v297 = v47;
  if ( !v47 )
  {
LABEL_416:
    KeLeaveCriticalRegion();
    goto LABEL_417;
  }
  _m_prefetchw(v47 + 4);
  CurrentThread = *((unsigned int *)v47 + 2);
  v50 = *((_DWORD *)v47 + 2) & 0xFFFFFFFE;
  v299 = CurrentThread;
  if ( (((unsigned int)CurrentThread ^ v300 & 0xFFFFFFFD) & 0xFFFFFFFE) != 0
    && v50
    && (!v272 || v50 != *(_DWORD *)(v272 + 8))
    || (v51 = *((_BYTE *)v47 + 15), (v51 & 0x20) != 0) )
  {
LABEL_331:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v297);
    if ( v298 )
    {
LABEL_332:
      v47 = v297;
      goto LABEL_56;
    }
LABEL_417:
    GreReleaseHmgrSemaphore(CurrentThread);
    goto LABEL_237;
  }
  if ( (v51 & 0x40) != 0 )
  {
    v229 = HANDLELOCK::pObj((HANDLELOCK *)&v297);
    if ( *((_WORD *)v229 + 6) )
    {
      CurrentThread = (__int64)KeGetCurrentThread();
      v18 = v283;
      if ( *((_QWORD *)v229 + 2) == CurrentThread )
        goto LABEL_332;
    }
    goto LABEL_331;
  }
LABEL_56:
  v52 = SGDGetSessionState(CurrentThread);
  v53 = *(_DWORD *)v47 & 0xFFFFFF;
  v54 = *(_QWORD *)(v52 + 24);
  v55 = *(_QWORD *)(v54 + 8008);
  if ( v53 >= 0x10000 )
  {
    if ( *(_DWORD *)v55 > 0x10000u )
    {
      v54 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*(GdiHandleEntryDirectory **)(v55 + 16), *v47, 1) + 13);
      if ( (_DWORD)v54 == HIWORD(v53) )
        v53 = (unsigned __int16)v53;
    }
    else
    {
      v53 = *v47;
    }
  }
  v56 = *(_QWORD *)(v55 + 16);
  v57 = *(_DWORD *)(v56 + 2056);
  if ( v53 >= v57 + ((*(unsigned __int16 *)(v56 + 2) + 0xFFFF) << 16)
    || (v53 >= v57
      ? (v54 = ((v53 - v57) >> 16) + 1, v58 = *(_QWORD *)(v56 + 8 * v54 + 8), v53 += -65536 * ((v53 - v57) >> 16) - v57)
      : (v58 = *(_QWORD *)(v56 + 8)),
        v53 >= *(_DWORD *)(v58 + 20)) )
  {
    v59 = 0LL;
  }
  else
  {
    v54 = 2LL * (unsigned __int8)v53;
    v59 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v58 + 24) + 8 * ((unsigned __int64)v53 >> 8))
                    + 16LL * (unsigned __int8)v53
                    + 8);
  }
  if ( *((_BYTE *)v47 + 14) == 5 && v47[6] == WORD1(v284) )
  {
    v60 = *(_DWORD *)(v59 + 8);
    if ( v60 != 1 || *(_WORD *)(v59 + 12) )
    {
      *((_BYTE *)v47 + 15) |= 8u;
      LODWORD(v311) = v60;
    }
    else if ( NumberOfSharedWaiters || (*((_BYTE *)v47 + 15) & 1) == 0 )
    {
      v61 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v54) + 24) + 8008LL);
      v62 = (unsigned __int16)*(_DWORD *)v59 | (*(_DWORD *)v59 >> 8) & 0xFF0000;
      v277 = v61;
      if ( v62 >= 0x10000 )
      {
        if ( *(_DWORD *)v61 > 0x10000u )
        {
          Entry = GdiHandleEntryDirectory::GetEntry(
                    *(GdiHandleEntryDirectory **)(v61 + 16),
                    (unsigned __int16)*(_DWORD *)v59,
                    1);
          v61 = v277;
          if ( *((unsigned __int8 *)Entry + 13) == HIWORD(v62) )
            v62 = (unsigned __int16)v62;
        }
        else
        {
          v62 = (unsigned __int16)*(_DWORD *)v59;
        }
      }
      v63 = *(PERESOURCE *)(v61 + 16);
      Resourcea = v63;
      v64 = (unsigned int)v63[19].Reserved2;
      v270 = v64;
      v65 = v64 + ((WORD1(v63->SystemResourcesList.Flink) + 0xFFFF) << 16);
      v268 = v65;
      if ( v62 >= v65 )
      {
        v68 = 0LL;
        v273 = 0LL;
      }
      else
      {
        if ( v62 >= v64 )
        {
          Blink = (struct _LIST_ENTRY *)*((_QWORD *)&v63->OwnerTable + ((v62 - v64) >> 16));
          v67 = v62 + -65536 * ((v62 - v64) >> 16) - v64;
          v61 = v277;
        }
        else
        {
          Blink = v63->SystemResourcesList.Blink;
          v67 = v62;
        }
        v68 = 0LL;
        v273 = 0LL;
        if ( v67 < HIDWORD(Blink[1].Flink) )
        {
          if ( *(_QWORD *)(*((_QWORD *)&Blink[1].Blink->Flink->Flink + ((unsigned __int64)v67 >> 8))
                         + 16LL * (unsigned __int8)v67
                         + 8) )
          {
            v68 = (__int64)Blink->Flink + 24 * v67;
            v273 = v68;
          }
          v61 = v277;
        }
        v63 = Resourcea;
        v65 = v268;
      }
      if ( v62 >= 0x10000 )
      {
        if ( *(_DWORD *)v61 > 0x10000u )
        {
          v231 = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v63, (unsigned __int16)v62, 1);
          v63 = Resourcea;
          v64 = v270;
          v68 = v273;
          v61 = *((unsigned __int8 *)v231 + 13);
          v65 = v268;
          if ( (_DWORD)v61 == HIWORD(v62) )
            v62 = (unsigned __int16)v62;
        }
        else
        {
          v62 = (unsigned __int16)v62;
        }
      }
      if ( v62 >= v65
        || (v62 >= v64
          ? (struct _LIST_ENTRY *)(v61 = ((v62 - v64) >> 16) + 1,
                                   v69 = (struct _LIST_ENTRY *)*((_QWORD *)&v63->SystemResourcesList.Blink + v61),
                                   v62 += -65536 * ((v62 - v64) >> 16) - v64)
          : (v69 = v63->SystemResourcesList.Blink),
            v62 >= HIDWORD(v69[1].Flink)) )
      {
        v70 = 0LL;
      }
      else
      {
        v61 = 2LL * (unsigned __int8)v62;
        v70 = *(_QWORD *)(*((_QWORD *)&v69[1].Blink->Flink->Flink + ((unsigned __int64)v62 >> 8))
                        + 16LL * (unsigned __int8)v62
                        + 8);
      }
      if ( v70 != v59 )
        v68 = 0LL;
      v71 = *(_BYTE *)(v68 + 14);
      if ( v71 == 5 )
      {
        v72 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v59 + 680);
        v73 = *(_QWORD *)(SGDGetSessionState(v61) + 24);
        if ( v72 )
        {
          v232 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(v73 + 8040);
          if ( v232 )
            NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v232, v72, 0);
        }
      }
      else if ( v71 == 16 )
      {
        TrackObjectReferenceDecrement(
          2LL,
          *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v59 + 136));
      }
      v74 = *((_DWORD *)v47 + 2);
      v75 = v74 & 0xFFFFFFFE;
      if ( (v74 & 0xFFFFFFFE) == 0 || v75 == -2147483630 )
      {
LABEL_106:
        EtwGdiHandleType = GetEtwGdiHandleType(*((_BYTE *)v47 + 14));
        v90 = SGDGetSessionState(v89);
        v92 = *(_DWORD *)v47 & 0xFFFFFF;
        v93 = *(_QWORD *)(v90 + 24);
        v94 = *(PERESOURCE *)(v93 + 8008);
        Resourcee = v94;
        if ( v92 >= 0x10000 )
        {
          v93 = *v47;
          if ( LODWORD(v94->SystemResourcesList.Flink) > 0x10000 )
          {
            v93 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                         (GdiHandleEntryDirectory *)v94->OwnerTable,
                                         *v47,
                                         1)
                  + 13);
            v94 = Resourcee;
            if ( (_DWORD)v93 == HIWORD(v92) )
              v92 = (unsigned __int16)v92;
          }
          else
          {
            v92 = *v47;
          }
        }
        OwnerTable = v94->OwnerTable;
        TableSize = OwnerTable[128].TableSize;
        if ( v92 >= (unsigned int)TableSize + ((WORD1(OwnerTable->OwnerThread) + 0xFFFF) << 16)
          || (v92 >= (unsigned int)TableSize
            ? (v93 = ((v92 - (unsigned int)TableSize) >> 16) + 1,
               v91 = *((_QWORD *)&OwnerTable->0 + v93),
               v92 += -65536 * ((v92 - (unsigned int)TableSize) >> 16) - TableSize)
            : (v91 = *(_QWORD *)&OwnerTable->0),
              v92 >= *(_DWORD *)(v91 + 20)) )
        {
          v97 = 0LL;
        }
        else
        {
          v93 = 2LL * (unsigned __int8)v92;
          v97 = *(__int64 **)(*(_QWORD *)(**(_QWORD **)(v91 + 24) + 8 * ((unsigned __int64)v92 >> 8))
                            + 16LL * (unsigned __int8)v92
                            + 8);
        }
        v98 = *v97;
        if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
        {
          v234 = (_DWORD *)SGDGetUserSessionState(v93, v97, v91, TableSize);
          McTemplateK0pqqq_EtwWriteTransfer(
            *v234,
            (unsigned int)&GdiDestroyHandle,
            v235,
            v98,
            EtwGdiHandleType,
            *v234,
            v74 & 0xFE);
        }
        *((_BYTE *)v47 + 14) = 0;
        *((_QWORD *)v47 + 2) = 0LL;
        *((_DWORD *)v47 + 2) = v74 & 1;
        v99 = *(_QWORD *)(SGDGetSessionState(v93) + 24);
        v100 = *(_QWORD *)(v99 + 8008);
        v101 = SGDGetSessionState(v99);
        v102 = *(_DWORD *)v47 & 0xFFFFFF;
        v103 = *(PERESOURCE *)(*(_QWORD *)(v101 + 24) + 8008LL);
        Resourcef = v103;
        if ( v102 >= 0x10000 )
        {
          if ( LODWORD(v103->SystemResourcesList.Flink) > 0x10000 )
          {
            v236 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          (GdiHandleEntryDirectory *)v103->OwnerTable,
                                          *v47,
                                          1)
                   + 13);
            v103 = Resourcef;
            if ( v236 == HIWORD(v102) )
              v102 = (unsigned __int16)v102;
          }
          else
          {
            v102 = *v47;
          }
        }
        v104 = v103->OwnerTable;
        v105 = v104[128].TableSize;
        if ( v102 >= v105 + ((WORD1(v104->OwnerThread) + 0xFFFF) << 16)
          || (v102 >= v105
            ? (v106 = *((_QWORD *)&v104->0 + ((v102 - v105) >> 16) + 1), v102 += -65536 * ((v102 - v105) >> 16) - v105)
            : (v106 = *(_QWORD *)&v104->0),
              v102 >= *(_DWORD *)(v106 + 20)) )
        {
          v107 = 0LL;
        }
        else
        {
          v107 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v106 + 24) + 8 * ((unsigned __int64)v102 >> 8))
                            + 16LL * (unsigned __int8)v102
                            + 8);
        }
        v275 = v107;
        v108 = (unsigned __int16)*v107 | (*v107 >> 8) & 0xFF0000;
        if ( v108 >= 0x10000 )
        {
          if ( *(_DWORD *)v100 > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *(GdiHandleEntryDirectory **)(v100 + 16),
                                        (unsigned __int16)*v107,
                                        1)
                 + 13) == HIWORD(v108) )
              v108 = (unsigned __int16)v108;
          }
          else
          {
            v108 = (unsigned __int16)*v107;
          }
        }
        v109 = *(_QWORD *)(v100 + 24);
        if ( v109 )
        {
          v237 = *(_DWORD *)(4LL * (unsigned __int16)v108 + v109);
          if ( v237 )
          {
            if ( GdiHandleEntryDirectory::AcquireEntryLock(*(GdiHandleEntryDirectory **)(v100 + 16), v237, 1) )
              GdiHandleEntryDirectory::ReleaseLockAndEntry(*(GdiHandleEntryDirectory **)(v100 + 16), v237, 1);
            *(_DWORD *)(4LL * (unsigned __int16)v108 + *(_QWORD *)(v100 + 24)) = 0;
            --*(_DWORD *)(v100 + 4);
          }
        }
        v110 = *(_QWORD *)(v100 + 16);
        v111 = *(_DWORD *)(v110 + 2056);
        if ( v108 >= v111 + ((*(unsigned __int16 *)(v110 + 2) + 0xFFFF) << 16) )
          goto LABEL_135;
        if ( v108 >= v111 )
        {
          v113 = *(_QWORD *)(v110 + 8LL * (((v108 - v111) >> 16) + 1) + 8);
          v108 += -65536 * ((v108 - v111) >> 16) - v111;
          v112 = v113;
        }
        else
        {
          v112 = *(_QWORD *)(v110 + 8);
          v113 = v112;
        }
        if ( v108 >= *(_DWORD *)(v113 + 20) )
        {
          v114 = (_QWORD **)(v112 + 24);
        }
        else
        {
          v114 = (_QWORD **)(v113 + 24);
          if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v113 + 24) + 8 * ((unsigned __int64)v108 >> 8))
                         + 16LL * (unsigned __int8)v108
                         + 8) )
          {
            v115 = (unsigned __int64)v108 >> 8;
            *(_QWORD *)(*(_QWORD *)(**v114 + 8 * v115) + 16LL * (unsigned __int8)v108 + 8) = 0LL;
            *(_QWORD *)(*(_QWORD *)v113 + 24LL * v108) = *(unsigned int *)(v113 + 12);
            --*(_DWORD *)(v113 + 16);
            *(_DWORD *)(v113 + 12) = v108;
LABEL_134:
            ExReleasePushLockExclusiveEx(*(_QWORD *)(**v114 + 8 * v115) + 16LL * (unsigned __int8)v108, 0LL);
            KeLeaveCriticalRegion();
            *(_BYTE *)v110 = 0;
LABEL_135:
            *v275 = 0LL;
            --*(_DWORD *)(v100 + 4);
            KeLeaveCriticalRegion();
            GreReleaseHmgrSemaphore(v116);
LABEL_136:
            v117 = v284;
            goto LABEL_137;
          }
        }
        v115 = (unsigned __int64)v108 >> 8;
        goto LABEL_134;
      }
      Process = 0LL;
      if ( v75 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v76);
        v79 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
          v79 = 0LL;
      }
      else
      {
        if ( PsLookupProcessByProcessId((HANDLE)v75, &Process) < 0 )
        {
LABEL_104:
          if ( Process )
            ObfDereferenceObject(Process);
          goto LABEL_106;
        }
        ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(Process);
        v79 = ProcessWin32Process;
        if ( ProcessWin32Process && !*ProcessWin32Process )
          v79 = 0LL;
      }
      if ( v79 )
      {
        v274 = *(_QWORD *)(SGDGetSessionState(v78) + 24);
        Resourceb = *(struct _ERESOURCE **)(v274 + 1912);
        if ( Resourceb )
        {
          PsEnterPriorityRegion();
          ExEnterCriticalRegionAndAcquireResourceExclusive(Resourceb);
        }
        Resourcec = *(PERESOURCE *)(v274 + 1912);
        v82 = *(_QWORD *)(SGDGetSessionState(v80) + 24);
        if ( *(_DWORD *)(v82 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pqz_EtwWriteTransfer(v82, v81, v83, (_DWORD)Resourcec, 17, (__int64)L"GreBaseGlobals.hsemHmgr");
        --*((_DWORD *)v79 + 15);
        v84 = *(_QWORD *)(SGDGetSessionState(v82) + 24);
        Resourced = *(PERESOURCE *)(v84 + 1912);
        v86 = *(_QWORD *)(SGDGetSessionState(v85) + 24);
        if ( *(_DWORD *)(v86 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz_EtwWriteTransfer(
            v86,
            (unsigned int)&LockRelease,
            v87,
            (_DWORD)Resourced,
            (__int64)L"GreBaseGlobals.hsemHmgr");
        v88 = *(struct _ERESOURCE **)(v84 + 1912);
        if ( v88 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v88);
          PsLeavePriorityRegion();
        }
      }
      goto LABEL_104;
    }
  }
  v158 = *(_QWORD *)(SGDGetSessionState(v54) + 24);
  Resourceg = *(PERESOURCE *)(v158 + 8008);
  v159 = SGDGetSessionState(v158);
  v160 = *(_DWORD *)v47 & 0xFFFFFF;
  v161 = *(_QWORD *)(*(_QWORD *)(v159 + 24) + 8008LL);
  if ( v160 >= 0x10000 )
  {
    if ( *(_DWORD *)v161 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*(GdiHandleEntryDirectory **)(v161 + 16), *v47, 1) + 13) == HIWORD(v160) )
        v160 = (unsigned __int16)v160;
    }
    else
    {
      v160 = *v47;
    }
  }
  v162 = *(_QWORD *)(v161 + 16);
  v163 = *(_DWORD *)(v162 + 2056);
  if ( v160 >= v163 + ((*(unsigned __int16 *)(v162 + 2) + 0xFFFF) << 16)
    || (v160 >= v163
      ? (v164 = *(_QWORD *)(v162 + 8LL * (((v160 - v163) >> 16) + 1) + 8), v160 += -65536 * ((v160 - v163) >> 16) - v163)
      : (v164 = *(_QWORD *)(v162 + 8)),
        v160 >= *(_DWORD *)(v164 + 20)) )
  {
    v165 = 0LL;
  }
  else
  {
    v165 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v164 + 24) + 8 * ((unsigned __int64)v160 >> 8))
                      + 16LL * (unsigned __int8)v160
                      + 8);
  }
  v166 = (unsigned __int16)*v165 | (*v165 >> 8) & 0xFF0000;
  if ( v166 >= 0x10000 )
  {
    if ( LODWORD(Resourceg->SystemResourcesList.Flink) > 0x10000 )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  (GdiHandleEntryDirectory *)Resourceg->OwnerTable,
                                  (unsigned __int16)*v165,
                                  1)
           + 13) == HIWORD(v166) )
        v166 = (unsigned __int16)v166;
    }
    else
    {
      v166 = (unsigned __int16)*v165;
    }
  }
  v167 = Resourceg->OwnerTable;
  v168 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)v167[128].TableSize;
  if ( v166 < *(_DWORD *)&v168 + (((unsigned int)WORD1(v167->OwnerThread) + 0xFFFF) << 16) )
  {
    if ( v166 >= *(_DWORD *)&v168 )
    {
      v169 = *((_QWORD *)&v167->0 + ((v166 - *(_DWORD *)&v168) >> 16) + 1);
      v166 += -65536 * ((v166 - *(_DWORD *)&v168) >> 16) - *(_DWORD *)&v168;
    }
    else
    {
      v169 = *(_QWORD *)&v167->0;
    }
    *(_DWORD *)(*(_QWORD *)v169 + 24LL * v166 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v169 + 24) + 8 * ((unsigned __int64)v166 >> 8)) + 16LL * (unsigned __int8)v166,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  v171 = *(_QWORD *)(SGDGetSessionState(v170) + 24);
  v172 = *(_QWORD *)(v171 + 1912);
  v174 = *(_QWORD *)(SGDGetSessionState(v173) + 24);
  if ( *(_DWORD *)(v174 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v174, (unsigned int)&LockRelease, v175, v172, (__int64)L"GreBaseGlobals.hsemHmgr");
  v176 = *(struct _ERESOURCE **)(v171 + 1912);
  if ( v176 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v176);
    PsLeavePriorityRegion();
  }
LABEL_237:
  if ( v312 != 1 || (v117 = v284, !HmgRemoveObjectImpl(v284, 0, 1, 2, 5, (unsigned int *)&v311)) )
  {
    if ( (_DWORD)v311 == 1 )
    {
      if ( (v3[28] & 0x800) != 0 )
      {
        v314 = 1;
        HmgDecrementShareReferenceCountEx(v3, 0LL);
      }
      else
      {
        EngSetLastError(0xAAu);
        v314 = 0;
      }
      goto LABEL_196;
    }
    if ( !*((_QWORD *)v3 + 20) && !(unsigned int)SURFACE::bStockSurface((SURFACE *)v3) && (v3[28] & 0x800) == 0 )
    {
      v314 = 0;
      goto LABEL_196;
    }
    v177 = v3[28];
    if ( (v177 & 0x800) != 0 )
    {
      if ( !v3[80] )
      {
        v238 = v285;
        v3[80] = 1;
        _InterlockedIncrement((volatile signed __int32 *)&v238[1].NumberOfSharedWaiters);
      }
    }
    else
    {
      v3[28] = v177 | 0x1000000;
    }
    v178 = *v3;
    v179 = *v3;
    v314 = 1;
    v180 = 0LL;
    v181 = (unsigned __int16)v178 | (v179 >> 8) & 0xFF0000;
    v281 = 0LL;
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v281);
    if ( (unsigned __int8)KeIsAttachedProcess() )
    {
      SGDGetUserSessionState(v183, v182, v184, v185);
      v239 = PsGetCurrentThreadProcess();
      PsGetProcessSessionIdEx(v239);
    }
    LODWORD(v294[1]) = 1;
    v186 = *(_QWORD *)(SGDGetSessionState(v183) + 24);
    v187 = *(_QWORD *)(v186 + 8008);
    if ( v181 >= 0x10000 )
    {
      if ( *(_DWORD *)v187 > 0x10000u )
      {
        v186 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *(GdiHandleEntryDirectory **)(v187 + 16),
                                      (unsigned __int16)v181,
                                      1)
               + 13);
        if ( (_DWORD)v186 == HIWORD(v181) )
          v181 = (unsigned __int16)v181;
      }
      else
      {
        v181 = (unsigned __int16)v181;
      }
      v180 = 0LL;
    }
    v188 = *(_QWORD *)(v187 + 16);
    v189 = *(_DWORD *)(v188 + 2056);
    if ( v181 < v189 + ((*(unsigned __int16 *)(v188 + 2) + 0xFFFF) << 16) )
    {
      if ( v181 >= v189 )
      {
        v186 = ((v181 - v189) >> 16) + 1;
        v190 = *(_QWORD *)(v188 + 8 * v186 + 8);
        v181 += -65536 * ((v181 - v189) >> 16) - v189;
      }
      else
      {
        v190 = *(_QWORD *)(v188 + 8);
      }
      if ( v181 >= *(_DWORD *)(v190 + 20) )
      {
        v180 = 0LL;
      }
      else
      {
        v191 = 16LL * (unsigned __int8)v181;
        v192 = *(_QWORD **)(v190 + 24);
        v282 = (void *)(8 * ((unsigned __int64)v181 >> 8));
        v311 = v191 + *(_QWORD *)((char *)v282 + *v192);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v311, 0LL);
        if ( v181 < *(_DWORD *)(v190 + 20)
          && *(_QWORD *)(*(_QWORD *)((char *)v282 + **(_QWORD **)(v190 + 24)) + v191 + 8) )
        {
          v186 = 24LL * v181;
          *(_DWORD *)(*(_QWORD *)v190 + v186 + 8) |= 1u;
          v180 = (_BYTE *)(v186 + *(_QWORD *)v190);
        }
        else
        {
          ExReleasePushLockExclusiveEx(v311, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      v294[0] = v180;
      if ( v180 )
      {
        _m_prefetchw(v180 + 8);
        v20 = (v180[15] & 0x20) == 0;
        HIDWORD(v294[1]) = *((_DWORD *)v180 + 2);
        if ( !v20 )
        {
          HANDLELOCK::vUnlock((HANDLELOCK *)v294);
          if ( !LODWORD(v294[1]) )
            goto LABEL_196;
          v180 = v294[0];
        }
        v193 = v180[14];
        if ( v193 == 5 )
        {
          v194 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v3 + 85);
          v186 = *(_QWORD *)(SGDGetSessionState(v186) + 24);
          if ( v194 )
          {
            v186 = *(_QWORD *)(v186 + 8040);
            if ( v186 )
              NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
                (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)v186,
                v194,
                0);
          }
        }
        else if ( v193 == 16 )
        {
          TrackObjectReferenceDecrement(
            2LL,
            *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v3 + 17));
        }
        --v3[2];
        v195 = *(_QWORD *)(SGDGetSessionState(v186) + 24);
        v196 = *(_QWORD *)(v195 + 8008);
        v197 = SGDGetSessionState(v195);
        v198 = *(_DWORD *)v180 & 0xFFFFFF;
        v199 = *(_QWORD *)(*(_QWORD *)(v197 + 24) + 8008LL);
        if ( v198 >= 0x10000 )
        {
          if ( *(_DWORD *)v199 > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *(GdiHandleEntryDirectory **)(v199 + 16),
                                        *(unsigned __int16 *)v180,
                                        1)
                 + 13) == HIWORD(v198) )
              v198 = (unsigned __int16)v198;
          }
          else
          {
            v198 = *(unsigned __int16 *)v180;
          }
        }
        v200 = *(_QWORD *)(v199 + 16);
        v201 = *(_DWORD *)(v200 + 2056);
        if ( v198 >= v201 + ((*(unsigned __int16 *)(v200 + 2) + 0xFFFF) << 16)
          || (v198 >= v201
            ? (v202 = *(_QWORD *)(v200 + 8LL * (((v198 - v201) >> 16) + 1) + 8),
               v198 += -65536 * ((v198 - v201) >> 16) - v201)
            : (v202 = *(_QWORD *)(v200 + 8)),
              v198 >= *(_DWORD *)(v202 + 20)) )
        {
          v203 = 0LL;
        }
        else
        {
          v203 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v202 + 24) + 8 * ((unsigned __int64)v198 >> 8))
                            + 16LL * (unsigned __int8)v198
                            + 8);
        }
        v204 = (unsigned __int16)*v203 | (*v203 >> 8) & 0xFF0000;
        if ( v204 >= 0x10000 )
        {
          if ( *(_DWORD *)v196 > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *(GdiHandleEntryDirectory **)(v196 + 16),
                                        (unsigned __int16)*v203,
                                        1)
                 + 13) == HIWORD(v204) )
              v204 = (unsigned __int16)v204;
          }
          else
          {
            v204 = (unsigned __int16)*v203;
          }
        }
        v205 = *(_QWORD *)(v196 + 16);
        v206 = *(_DWORD *)(v205 + 2056);
        if ( v204 < v206 + ((*(unsigned __int16 *)(v205 + 2) + 0xFFFF) << 16) )
        {
          if ( v204 >= v206 )
          {
            v207 = *(_QWORD *)(v205 + 8LL * (((v204 - v206) >> 16) + 1) + 8);
            v204 += -65536 * ((v204 - v206) >> 16) - v206;
          }
          else
          {
            v207 = *(_QWORD *)(v205 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v207 + 24LL * v204 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v207 + 24) + 8 * ((unsigned __int64)v204 >> 8)) + 16LL * (unsigned __int8)v204,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
        goto LABEL_196;
      }
    }
    goto LABEL_193;
  }
LABEL_137:
  if ( v291 )
  {
    _InterlockedDecrement((volatile signed __int32 *)&v285[1].NumberOfSharedWaiters);
    v18 = v283;
  }
  if ( qword_1C0294C98 && (int)qword_1C0294C98() >= 0 && qword_1C0294CA0 )
    qword_1C0294CA0(v3);
  v118 = (unsigned int)v3[28];
  if ( (v118 & 0x400000) == 0 )
    goto LABEL_144;
  v224 = RegionSize;
  if ( !RegionSize || !v18 )
    goto LABEL_144;
  if ( *((_QWORD *)v3 + 6) || (v240 = *((_QWORD *)v3 + 5)) == 0 || MEMORY[0x6E8] == v240 )
  {
    if ( (v3[29] & 9) != 0 )
    {
      v225 = *(void (__fastcall **)(ULONG_PTR))(v18 + 2640);
      if ( v225 )
      {
        v226 = (ULONG_PTR)(v3 + 6);
        goto LABEL_307;
      }
      v225 = *(void (__fastcall **)(ULONG_PTR))(v18 + 3424);
      if ( !v225 )
      {
LABEL_144:
        v119 = 0LL;
        goto LABEL_145;
      }
    }
    else
    {
      v225 = *(void (__fastcall **)(ULONG_PTR))(v18 + 2752);
      if ( !v225 )
        goto LABEL_144;
      if ( (v118 & 0x40000) != 0 )
      {
        if ( (unsigned int)PDEVOBJ::bAllowDDICall((PDEVOBJ *)&v283)
          && (int)IsUMPDDrvDeleteDeviceBitmapSupported() >= 0
          && qword_1C0294CB0 )
        {
          qword_1C0294CB0(*(_QWORD *)(v18 + 1768), v224);
        }
        goto LABEL_144;
      }
    }
    v226 = RegionSize;
LABEL_307:
    v225(v226);
    goto LABEL_144;
  }
  v119 = 0LL;
  DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, 45LL, v3, v240, MEMORY[0x6E8], 0LL, 0LL, 0);
LABEL_145:
  if ( v281 )
  {
    if ( v3[52] == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      MmUnsecureVirtualMemory(v281);
  }
  else if ( v287 )
  {
    if ( BaseAddress )
      MmUnmapViewInSessionSpace(MappedBase);
  }
  else
  {
    v120 = SecureHandle;
    if ( !SecureHandle )
    {
      if ( (v292 & 8) == 0 )
      {
        if ( (v292 & 0x800) == 0 )
        {
          if ( (v292 & 0x10) != 0 )
            vFreeKernelSection(BaseAddress);
          goto LABEL_152;
        }
        Flink = (struct _ERESOURCE *)v285[1].SystemResourcesList.Flink;
        v285 = Flink;
        if ( Flink )
        {
          PsEnterPriorityRegion();
          ExEnterCriticalRegionAndAcquireResourceExclusive(Flink);
        }
        v219 = (_QWORD *)*((_QWORD *)v3 + 33);
        if ( v219 )
        {
          v220 = v3 + 132;
          v221 = *((_QWORD *)v3 + 66);
          if ( (int *)v221 != v3 + 132 )
          {
            if ( *(int **)(v221 + 8) != v220 || (v222 = (int **)*((_QWORD *)v3 + 67), *v222 != v220) )
              __fastfail(3u);
            *v222 = (int *)v221;
            *(_QWORD *)(v221 + 8) = v222;
          }
          v223 = Object;
          if ( BaseAddress && Object )
          {
            MmUnmapViewOfSection(*v219);
            W32PIDLOCK::vCleanUp((W32PIDLOCK *)v310);
            goto LABEL_324;
          }
        }
        else
        {
          v223 = Object;
        }
        W32PIDLOCK::vCleanUp((W32PIDLOCK *)v310);
        if ( !v223 )
        {
LABEL_297:
          SEMOBJ::vUnlock(&v285);
          goto LABEL_152;
        }
LABEL_324:
        ObfDereferenceObject(v223);
        goto LABEL_297;
      }
      if ( (v292 & 0x80u) == 0 )
      {
        EngFreeUserMem(BaseAddress);
        goto LABEL_152;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      CurrentProcess = PsGetCurrentProcess(v243, v242, v244);
      MmUnmapViewOfSection(CurrentProcess);
      if ( ThreadWin32Thread && (v246 = *(_QWORD *)(ThreadWin32Thread + 72)) != 0 )
      {
        v247 = *(_DWORD *)(v246 + 8);
      }
      else
      {
        if ( !(_DWORD)v296 )
        {
          if ( (int)IsUMPDEngFreeUserMemSupported() >= 0 && qword_1C0294CC0 )
            qword_1C0294CC0(BaseAddress);
          v119 = 0LL;
          goto LABEL_468;
        }
        v247 = HIDWORD(v295);
      }
      v119 = 0LL;
      MappedBase = 0LL;
      if ( PsLookupProcessByProcessId((HANDLE)v247, (PEPROCESS *)&MappedBase) >= 0 )
      {
        MmUnmapViewOfSection(MappedBase);
        ObfDereferenceObject(MappedBase);
      }
LABEL_468:
      if ( !v294[0] )
        KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
      ObfDereferenceObject(v294[0]);
      v117 = v284;
      goto LABEL_152;
    }
    if ( v3[52] == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      MmUnsecureVirtualMemory(v120);
      if ( BaseAddress )
      {
        if ( v282 )
        {
          ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, MappedBase);
        }
        else
        {
          RegionSize = 0LL;
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        }
      }
    }
  }
LABEL_152:
  if ( (v3[29] & 0x1000) != 0 )
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 4LL, v117, (unsigned int)v311, v288, 0LL, 0LL, 0);
  if ( *((_QWORD *)v3 + 85) )
    ReleaseReferenceCountedObjectHandle(0LL);
  if ( *((_BYTE *)v3 + 688) )
  {
    v121 = (char *)*((_QWORD *)v3 + 9);
    if ( v121 )
    {
      v122 = gpLeakTrackingAllocator;
      Object = (PVOID)*((_QWORD *)v3 + 9);
      if ( !*(_DWORD *)gpLeakTrackingAllocator )
        goto LABEL_159;
      if ( *(_DWORD *)gpLeakTrackingAllocator == 1 )
      {
        v250 = v121 - 16;
        v251 = *((_DWORD *)v121 - 4);
        Object = v250;
        _InterlockedIncrement64((volatile signed __int64 *)gpLeakTrackingAllocator + 15);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(Object);
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v122 + 1),
          (const void *)v251);
        goto LABEL_162;
      }
      if ( *(_DWORD *)gpLeakTrackingAllocator != 2 )
      {
LABEL_162:
        v119 = 0LL;
        *((_QWORD *)v3 + 9) = 0LL;
        goto LABEL_163;
      }
      v248 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 11);
      if ( v248 )
      {
        if ( ((unsigned __int16)v121 & 0xFFFu) >= 0x10uLL )
        {
          v282 = 0LL;
          if ( NSInstrumentation::CPointerHashTable::Remove(v248, v121 - 16, &v282) )
          {
            NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
              *((NSInstrumentation::CPrioritizedWriterLock **)v122 + 13),
              (struct NSInstrumentation::CBackTraceStorageUnit *)((unsigned __int64)v282 & 0xFFFFFFFFFFFFFFF8uLL));
            _InterlockedIncrement64((volatile signed __int64 *)v122 + 17);
            v123 = v121 - 16;
            goto LABEL_161;
          }
        }
      }
      v249 = *((_QWORD *)v122 + 12);
      if ( v249
        && (SecureHandle = 0LL,
            (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(
                               v249,
                               &Object,
                               &SecureHandle)) )
      {
        NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
          *((NSInstrumentation::CPrioritizedWriterLock **)v122 + 13),
          (struct NSInstrumentation::CBackTraceStorageUnit *)((unsigned __int64)SecureHandle & 0xFFFFFFFFFFFFFFF8uLL));
        _InterlockedIncrement64((volatile signed __int64 *)v122 + 17);
      }
      else
      {
LABEL_159:
        _InterlockedIncrement64((volatile signed __int64 *)v122 + 15);
      }
      v123 = v121;
LABEL_161:
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(v123);
      goto LABEL_162;
    }
  }
LABEL_163:
  v124 = **(_QWORD **)(*(_QWORD *)(SGDGetSessionState(v118) + 24) + 6504LL);
  if ( v124 )
  {
    memset(v3, 0, 0x360uLL);
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v124 + 48), v3);
  }
  v125 = v293;
  if ( v293 && (int)IsGreDeleteWndSupported() >= 0 && qword_1C0294CD0 )
    qword_1C0294CD0(v125);
  if ( !v8 )
    goto LABEL_196;
  v126 = (_DWORD)v8[3] & 0x5000000;
  v281 = v8;
  if ( v126 != 0x1000000 )
  {
    if ( (unsigned int)XEPALOBJ::bDeletePalette(&v281, 0LL) )
      goto LABEL_196;
    v8 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v281;
  }
  v127 = *(_DWORD *)v8;
  v128 = *(_DWORD *)v8;
  v293 = 0LL;
  v129 = (unsigned __int16)v127 | (v128 >> 8) & 0xFF0000;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v293);
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    SGDGetUserSessionState(v131, v130, v132, v133);
    v252 = PsGetCurrentThreadProcess();
    PsGetProcessSessionIdEx(v252);
  }
  LODWORD(v294[1]) = 1;
  v134 = *(_QWORD *)(SGDGetSessionState(v131) + 24);
  v135 = *(_QWORD *)(v134 + 8008);
  if ( v129 >= 0x10000 )
  {
    if ( *(_DWORD *)v135 > 0x10000u )
    {
      v134 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *(GdiHandleEntryDirectory **)(v135 + 16),
                                    (unsigned __int16)v129,
                                    1)
             + 13);
      if ( (_DWORD)v134 == HIWORD(v129) )
        v129 = (unsigned __int16)v129;
    }
    else
    {
      v129 = (unsigned __int16)v129;
    }
    v119 = 0LL;
  }
  v136 = *(_QWORD *)(v135 + 16);
  v137 = *(_DWORD *)(v136 + 2056);
  if ( v129 >= v137 + ((*(unsigned __int16 *)(v136 + 2) + 0xFFFF) << 16) )
    goto LABEL_193;
  if ( v129 >= v137 )
  {
    v134 = ((v129 - v137) >> 16) + 1;
    v138 = *(_QWORD *)(v136 + 8 * v134 + 8);
    v129 += -65536 * ((v129 - v137) >> 16) - v137;
  }
  else
  {
    v138 = *(_QWORD *)(v136 + 8);
  }
  if ( v129 >= *(_DWORD *)(v138 + 20) )
  {
    v119 = 0LL;
  }
  else
  {
    v139 = 16LL * (unsigned __int8)v129;
    v140 = *(_QWORD **)(v138 + 24);
    RegionSize = 8 * ((unsigned __int64)v129 >> 8);
    v311 = v139 + *(_QWORD *)(*v140 + RegionSize);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v311, 0LL);
    if ( v129 < *(_DWORD *)(v138 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v138 + 24) + RegionSize) + v139 + 8) )
    {
      v134 = 24LL * v129;
      *(_DWORD *)(*(_QWORD *)v138 + v134 + 8) |= 1u;
      v119 = (_BYTE *)(v134 + *(_QWORD *)v138);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v311, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v294[0] = v119;
  if ( !v119 )
    goto LABEL_193;
  _m_prefetchw(v119 + 8);
  v20 = (v119[15] & 0x20) == 0;
  HIDWORD(v294[1]) = *((_DWORD *)v119 + 2);
  if ( v20 )
  {
LABEL_180:
    v141 = v119[14];
    if ( v141 == 5 )
    {
      v253 = v8[85];
      v254 = 0LL;
    }
    else
    {
      if ( v141 != 16 )
      {
LABEL_182:
        --*((_DWORD *)v8 + 2);
        v142 = *(_QWORD *)(SGDGetSessionState(v134) + 24);
        v143 = *(_QWORD *)(v142 + 8008);
        v144 = SGDGetSessionState(v142);
        v145 = *(_DWORD *)v119 & 0xFFFFFF;
        v146 = *(_QWORD *)(*(_QWORD *)(v144 + 24) + 8008LL);
        if ( v145 >= 0x10000 )
        {
          if ( *(_DWORD *)v146 > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *(GdiHandleEntryDirectory **)(v146 + 16),
                                        *(unsigned __int16 *)v119,
                                        1)
                 + 13) == HIWORD(v145) )
              v145 = (unsigned __int16)v145;
          }
          else
          {
            v145 = *(unsigned __int16 *)v119;
          }
        }
        v147 = *(_QWORD *)(v146 + 16);
        v148 = *(_DWORD *)(v147 + 2056);
        if ( v145 >= v148 + ((*(unsigned __int16 *)(v147 + 2) + 0xFFFF) << 16)
          || (v145 >= v148
            ? (v149 = *(_QWORD *)(v147 + 8LL * (((v145 - v148) >> 16) + 1) + 8),
               v145 += -65536 * ((v145 - v148) >> 16) - v148)
            : (v149 = *(_QWORD *)(v147 + 8)),
              v145 >= *(_DWORD *)(v149 + 20)) )
        {
          v150 = 0LL;
        }
        else
        {
          v150 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v149 + 24) + 8 * ((unsigned __int64)v145 >> 8))
                            + 16LL * (unsigned __int8)v145
                            + 8);
        }
        v151 = (unsigned __int16)*v150 | (*v150 >> 8) & 0xFF0000;
        if ( v151 >= 0x10000 )
        {
          if ( *(_DWORD *)v143 > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *(GdiHandleEntryDirectory **)(v143 + 16),
                                        (unsigned __int16)*v150,
                                        1)
                 + 13) == HIWORD(v151) )
              v151 = (unsigned __int16)v151;
          }
          else
          {
            v151 = (unsigned __int16)*v150;
          }
        }
        v152 = *(_QWORD *)(v143 + 16);
        v153 = *(_DWORD *)(v152 + 2056);
        if ( v151 < v153 + ((*(unsigned __int16 *)(v152 + 2) + 0xFFFF) << 16) )
        {
          if ( v151 >= v153 )
          {
            v154 = *(_QWORD *)(v152 + 8LL * (((v151 - v153) >> 16) + 1) + 8);
            v151 += -65536 * ((v151 - v153) >> 16) - v153;
          }
          else
          {
            v154 = *(_QWORD *)(v152 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v154 + 24LL * v151 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v154 + 24) + 8 * ((unsigned __int64)v151 >> 8)) + 16LL * (unsigned __int8)v151,
            0LL);
          KeLeaveCriticalRegion();
        }
LABEL_193:
        KeLeaveCriticalRegion();
        goto LABEL_196;
      }
      v253 = v8[17];
      v254 = 2LL;
    }
    TrackObjectReferenceDecrement(v254, v253);
    goto LABEL_182;
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)v294);
  if ( LODWORD(v294[1]) )
  {
    v119 = v294[0];
    goto LABEL_180;
  }
LABEL_196:
  if ( qword_1C0294730 && (int)qword_1C0294730() >= 0 && qword_1C0294738 )
    qword_1C0294738(v302);
  if ( (v304 & 0x1000) != 0 )
  {
    v255 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( v255 )
      --*(_DWORD *)(v255 + 104);
    v304 &= ~0x1000u;
    v256 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( v256 )
    {
      *(_QWORD *)(v256 + 320) = 0LL;
      *(_QWORD *)(v256 + 312) = 0LL;
    }
  }
  else if ( (v304 & 0x800000) != 0 )
  {
    v257 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( v257 )
      --*(_DWORD *)(v257 + 104);
    v304 &= ~0x800000u;
  }
  if ( v302[0] )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsemTrg", (int)v302[0]);
    if ( v302[0] )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v302[0]);
      PsLeavePriorityRegion();
    }
  }
  if ( (v304 & 8) != 0 )
    v304 &= ~8u;
  if ( v302[1] )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsemDMC", (int)v302[1]);
    if ( v302[1] )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v302[1]);
      PsLeavePriorityRegion();
    }
  }
  if ( qword_1C0294740 && (int)qword_1C0294740() >= 0 && qword_1C0294748 )
    qword_1C0294748(&v309, &v308, &v307, v305);
  DLODCOBJ::~DLODCOBJ((DLODCOBJ *)v306);
  v156 = v301;
  if ( v301 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsem", (int)v301);
    ExReleaseResourceAndLeaveCriticalRegion(v156);
    PsLeavePriorityRegion();
  }
  if ( v17 )
  {
    v258 = *(_QWORD *)(SGDGetSessionState(v155) + 24);
    EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v258 + 80));
    v259 = *(struct _ERESOURCE **)(v258 + 80);
    if ( v259 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v259);
      PsLeavePriorityRegion();
    }
  }
  return v314;
}
