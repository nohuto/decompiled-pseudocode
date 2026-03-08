/*
 * XREFs of _GetDCEx @ 0x1C003F6E0
 * Callers:
 *     _GetDC @ 0x1C000D070 (_GetDC.c)
 *     UserGetMonitorDC @ 0x1C003BFDC (UserGetMonitorDC.c)
 *     UserGetDesktopDC @ 0x1C003D300 (UserGetDesktopDC.c)
 *     NtUserGetDC @ 0x1C003EFA0 (NtUserGetDC.c)
 * Callees:
 *     IsSpbCheckDceSupported @ 0x1C000DA48 (IsSpbCheckDceSupported.c)
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x1C000DBB4 (IsFlushWEFCOMPOSITEDDCEBoundsSupported.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x1C003CECC (IsGreSelectRedirectionBitmapSupported.c)
 *     UpdateDCEInUseCount @ 0x1C003D02C (UpdateDCEInUseCount.c)
 *     DelayedDestroyCacheDC @ 0x1C003D924 (DelayedDestroyCacheDC.c)
 *     DestroyCacheDC @ 0x1C003DA20 (DestroyCacheDC.c)
 *     CreateCacheDC @ 0x1C003DC40 (CreateCacheDC.c)
 *     GreIsRendering @ 0x1C003E610 (GreIsRendering.c)
 *     HmgMarkUndeletable @ 0x1C003EA00 (HmgMarkUndeletable.c)
 *     GreValidateVisrgn @ 0x1C004145C (GreValidateVisrgn.c)
 *     GreSetDCOwnerEx @ 0x1C0041580 (GreSetDCOwnerEx.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0041B80 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     GreCombineRgn @ 0x1C0041BD0 (GreCombineRgn.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0041EF8 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     CreateEmptyRgnPublic @ 0x1C0041F30 (CreateEmptyRgnPublic.c)
 *     IsDeleteHrgnClipSupported @ 0x1C0041F9C (IsDeleteHrgnClipSupported.c)
 *     GreSetRectRgn @ 0x1C0041FD0 (GreSetRectRgn.c)
 *     GreOffsetRgn @ 0x1C0042C20 (GreOffsetRgn.c)
 *     GreSelectVisRgn @ 0x1C0042CD0 (GreSelectVisRgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004592C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00467B8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0046C4C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0048B20 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AE10 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C004B3B0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004FE50 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreCreateRectRgnIndirect @ 0x1C0050B70 (GreCreateRectRgnIndirect.c)
 *     GrepDeleteDC @ 0x1C00549D0 (GrepDeleteDC.c)
 *     GreUnlockVisRgn @ 0x1C00795D0 (GreUnlockVisRgn.c)
 *     GreSetLayout @ 0x1C00D1C50 (GreSetLayout.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?TraceLoggingGlobalDCsInUse@@YAXK@Z @ 0x1C017D92C (-TraceLoggingGlobalDCsInUse@@YAXK@Z.c)
 *     ?TraceLoggingProcessDCsInUse@@YAXKK@Z @ 0x1C017D99C (-TraceLoggingProcessDCsInUse@@YAXKK@Z.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0198958 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0198A10 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall GetDCEx(_QWORD *a1, HRGN EmptyRgnPublic, unsigned int a3)
{
  int v3; // esi
  unsigned int v4; // r12d
  _QWORD *v5; // r13
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // r8d
  const wchar_t *v11; // rdx
  __int64 v12; // rcx
  struct _ERESOURCE *v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _ERESOURCE *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  int v21; // r8d
  __int64 v22; // r14
  _QWORD *v23; // r15
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  char v26; // al
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v28; // edx
  _QWORD *v29; // r10
  unsigned int v30; // r8d
  char v31; // r9
  int v32; // ecx
  char v33; // dl
  __int64 v34; // rdi
  __int64 v35; // rdx
  unsigned int v36; // r13d
  char *v37; // rbx
  char *v38; // rax
  char *v39; // rdi
  char *v40; // r14
  __int64 v41; // r12
  __int64 v42; // r13
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  unsigned int v48; // ebx
  __int64 v49; // rsi
  __int64 v50; // rsi
  unsigned int v51; // edx
  __int64 v52; // rsi
  unsigned __int16 *v53; // rdi
  __int64 v54; // r13
  _QWORD *v55; // rax
  char v56; // al
  __int64 v57; // rax
  unsigned int v58; // ebx
  __int64 v59; // rsi
  __int64 v60; // rdx
  unsigned int v61; // r9d
  __int64 v62; // r8
  __int64 v63; // rcx
  __int64 v64; // r15
  __int64 v65; // rax
  unsigned int v66; // ebx
  __int64 v67; // rsi
  __int64 v68; // rdx
  unsigned int v69; // r9d
  __int64 v70; // r8
  _DWORD *v71; // rax
  unsigned int v72; // ebx
  __int64 v73; // rdx
  unsigned int v74; // r8d
  __int64 v75; // r10
  int v76; // ebx
  int v77; // eax
  char *v78; // rdi
  bool v79; // zf
  _QWORD *v80; // r14
  HDC v81; // rcx
  __int64 v82; // r15
  _QWORD *v83; // rax
  unsigned int v84; // r14d
  __int64 v85; // r12
  char **v86; // r14
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 CurrentThread; // rcx
  unsigned int v92; // edi
  __int64 v93; // r15
  __int64 v94; // r15
  unsigned int v95; // edx
  __int64 v96; // r15
  unsigned __int16 *v97; // rsi
  _QWORD *v98; // rax
  int v99; // r15d
  char v100; // al
  __int64 v101; // rax
  unsigned int v102; // edi
  __int64 v103; // r14
  __int64 v104; // rdx
  unsigned int v105; // r9d
  __int64 v106; // r8
  __int64 v107; // rcx
  __int64 v108; // r13
  __int64 v109; // rax
  unsigned int v110; // edi
  __int64 v111; // r15
  __int64 v112; // rdx
  unsigned int v113; // r9d
  __int64 v114; // r8
  _DWORD *v115; // rax
  unsigned int v116; // edi
  __int64 v117; // rdx
  unsigned int v118; // r8d
  __int64 v119; // r10
  __m128i v120; // xmm0
  __int64 v121; // rdx
  unsigned __int64 v122; // xmm0_8
  HDC v123; // r12
  int v124; // eax
  char **v125; // r13
  unsigned int v126; // edi
  unsigned int v127; // edi
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rcx
  __int64 v133; // r14
  __int64 v134; // r14
  unsigned int v135; // edx
  __int64 v136; // r14
  unsigned __int16 *v137; // rsi
  __int64 v138; // r12
  _QWORD *v139; // rax
  char v140; // al
  __int64 v141; // rcx
  __int64 v142; // r13
  __int64 v143; // rax
  unsigned int v144; // edi
  __int64 v145; // r14
  __int64 v146; // rdx
  unsigned int v147; // r9d
  __int64 v148; // r8
  _DWORD *v149; // rax
  unsigned int v150; // edi
  __int64 v151; // rdx
  unsigned int v152; // r8d
  __int64 v153; // r10
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // rax
  __int64 v159; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v161; // rdi
  unsigned int *v162; // rdi
  unsigned int v163; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  void *QuadPart; // rsi
  unsigned int v166; // r8d
  unsigned int v167; // edx
  unsigned int v168; // ecx
  int v169; // esi
  _QWORD *v170; // rax
  __int64 v171; // rcx
  __int64 v172; // rdi
  __int64 v173; // rax
  __int64 v174; // rcx
  __int64 v175; // rdx
  __int64 v176; // rcx
  _QWORD *v177; // rsi
  _QWORD *v178; // rdi
  __int64 v179; // rsi
  __int64 v180; // rcx
  __int64 v181; // rcx
  int v182; // r8d
  struct _ERESOURCE *v183; // rcx
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // rsi
  __int64 v187; // rcx
  int v188; // r8d
  struct _ERESOURCE *v189; // rcx
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // rsi
  __int64 v193; // rcx
  int v194; // r8d
  struct _ERESOURCE *v195; // rcx
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v199; // r12
  unsigned __int64 v200; // r13
  __int64 v201; // rdx
  __int64 v202; // rcx
  __int64 v203; // r8
  __int64 v204; // r9
  __int64 v205; // rcx
  unsigned int v206; // edi
  __int64 v207; // r14
  __int64 v208; // r14
  unsigned int v209; // edx
  __int64 v210; // r14
  unsigned __int16 *v211; // rsi
  __int64 v212; // r13
  _QWORD *v213; // rax
  char v214; // al
  __int64 v215; // rax
  unsigned int v216; // edi
  __int64 v217; // r14
  __int64 v218; // rdx
  unsigned int v219; // r9d
  __int64 v220; // r8
  __int64 v221; // rcx
  __int64 v222; // r15
  __int64 v223; // rax
  unsigned int v224; // edi
  __int64 v225; // r14
  __int64 v226; // rdx
  unsigned int v227; // r9d
  __int64 v228; // r8
  _DWORD *v229; // rax
  unsigned int v230; // edi
  __int64 v231; // rdx
  unsigned int v232; // r8d
  __int64 v233; // r10
  int v234; // edi
  int v235; // edi
  int v236; // edx
  __int64 RectRgnIndirect; // rax
  HDC v238; // rdx
  __int64 v239; // rdi
  HRGN v240; // rax
  HRGN v241; // rdi
  _QWORD *v242; // rdx
  __int64 v243; // r9
  unsigned __int8 v244; // cl
  __int64 v245; // rax
  __int64 v246; // rcx
  unsigned int *v247; // rax
  HRGN v248; // rbx
  __int64 v249; // rax
  __int64 v250; // rax
  struct OBJECT *v251; // rax
  __int64 v252; // rax
  struct OBJECT *v253; // rax
  __int64 v254; // rax
  __int64 v255; // rcx
  HRGN v256; // rax
  __int64 CurrentThreadProcess; // rax
  struct OBJECT *v258; // rax
  __int64 v259; // rax
  char *v260; // rdx
  __int64 v261; // rcx
  __int64 v262; // [rsp+30h] [rbp-D0h] BYREF
  char *v263; // [rsp+38h] [rbp-C8h]
  char *v264; // [rsp+40h] [rbp-C0h]
  __int64 v265; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v266; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 *v267; // [rsp+58h] [rbp-A8h] BYREF
  int v268; // [rsp+60h] [rbp-A0h]
  int v269; // [rsp+64h] [rbp-9Ch]
  _QWORD v270[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v271; // [rsp+80h] [rbp-80h]
  int v272; // [rsp+84h] [rbp-7Ch]
  _QWORD *v273; // [rsp+88h] [rbp-78h]
  HRGN v274; // [rsp+90h] [rbp-70h] BYREF
  __int64 v275; // [rsp+98h] [rbp-68h]
  _QWORD v276[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v277; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int16 *v278; // [rsp+B8h] [rbp-48h] BYREF
  int v279; // [rsp+C0h] [rbp-40h]
  int v280; // [rsp+C4h] [rbp-3Ch]
  _QWORD v281[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v282[2]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int16 *v283; // [rsp+F0h] [rbp-10h] BYREF
  int v284; // [rsp+F8h] [rbp-8h]
  int v285; // [rsp+FCh] [rbp-4h]
  _QWORD *v286; // [rsp+160h] [rbp+60h]
  unsigned int v288; // [rsp+170h] [rbp+70h]
  int v289; // [rsp+178h] [rbp+78h]

  v288 = a3;
  v286 = a1;
  v3 = 0;
  v4 = a3;
  v274 = 0LL;
  v5 = a1;
  v273 = 0LL;
  v275 = 0LL;
  v289 = 0;
  v272 = 0;
  v6 = *(_QWORD **)(SGDGetSessionState(a1) + 24);
  v7 = v6[10];
  if ( v7 )
    ExEnterPriorityRegionAndAcquireResourceShared(v7);
  v8 = v6[10];
  v9 = SGDGetSessionState(v7);
  v11 = L"GreBaseGlobals.hsemDynamicModeChange";
  v12 = *(_QWORD *)(v9 + 24);
  if ( *(_DWORD *)(v12 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v12,
      (unsigned int)&LockAcquireShared,
      v10,
      v8,
      (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
  v13 = (struct _ERESOURCE *)v6[15];
  if ( v13 )
  {
    PsEnterPriorityRegion(v12, v11);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v13);
  }
  v14 = v6[15];
  v15 = SGDGetSessionState(v12);
  v16 = 2LL;
  v17 = *(_QWORD *)(v15 + 24);
  if ( *(_DWORD *)(v17 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(
      v17,
      2,
      (unsigned int)L"GreBaseGlobals.hsemGreLock",
      v14,
      2,
      (__int64)L"GreBaseGlobals.hsemGreLock");
  v18 = (struct _ERESOURCE *)v6[11];
  if ( v18 )
  {
    PsEnterPriorityRegion(v17, v16);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v18);
  }
  v19 = v6[11];
  v20 = *(_QWORD *)(SGDGetSessionState(v17) + 24);
  if ( *(_DWORD *)(v20 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(
      v20,
      (unsigned int)L"GreBaseGlobals.hsemDCVisRgn",
      v21,
      v19,
      3,
      (__int64)L"GreBaseGlobals.hsemDCVisRgn");
  if ( !v5 )
  {
    v5 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 24LL);
    v286 = v5;
  }
  v270[0] = v5;
  v22 = 0LL;
  v23 = v5;
  v24 = v5;
  if ( v5 )
  {
    while ( 1 )
    {
      v25 = v24[5];
      v26 = *(_BYTE *)(v25 + 31);
      if ( (v26 & 0x10) == 0 || (v26 & 0x20) != 0 && v24 != v5 )
        break;
      if ( (*(_WORD *)(v25 + 42) & 0x2FFF) != 0x29D )
      {
        v24 = (_QWORD *)v24[13];
        if ( v24 )
          continue;
      }
      goto LABEL_17;
    }
    v276[0] = 0LL;
  }
  else
  {
LABEL_17:
    v3 = 1;
    v276[0] = 1LL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
  if ( CurrentProcessWin32Process && !*(_QWORD *)CurrentProcessWin32Process )
    CurrentProcessWin32Process = 0LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x200) != 0 )
    DelayedDestroyCacheDC(0);
  if ( (v4 & 0x10000) != 0 )
  {
    v28 = v4 & 0xFFFFFFC7;
    if ( (v4 & 1) != 0 )
    {
      v4 = v28 | 0x10;
      if ( (*(_BYTE *)(v5[5] + 31LL) & 4) == 0 )
        v4 = v28;
    }
    else
    {
      v29 = (_QWORD *)v5[17];
      v30 = v28 | 0x20;
      v31 = *(_BYTE *)(v29[1] + 8LL);
      if ( v31 >= 0 )
        v30 = v4 & 0xFFFFFFC7;
      if ( (((v30 & 2) == 0) & (unsigned __int8)~((unsigned __int8)v31 >> 5)) != 0 )
      {
        if ( (v31 & 0x40) != 0 )
        {
          v249 = v29[5];
          if ( v249 )
            v22 = *(_QWORD *)(v249 + 8);
        }
        else
        {
          v30 |= 2u;
        }
      }
      v32 = v30 | 8;
      v33 = *(_BYTE *)(v5[5] + 31LL);
      if ( (v33 & 2) == 0 )
        v32 = v30;
      v4 = v32 | 0x10;
      if ( (v33 & 4) == 0 )
        v4 = v32;
      v288 = v4;
      if ( (v33 & 0x20) == 0 )
        goto LABEL_35;
      v4 &= ~8u;
      v288 = v4;
      if ( !v29[10] )
        goto LABEL_35;
    }
    v4 |= 2u;
    v288 = v4;
  }
LABEL_35:
  if ( (v4 & 0x80000) != 0 )
  {
    v4 = v4 & 0xFFFFFFD5 | 2;
    v288 = v4;
  }
  if ( qword_1C02D6C00 && (int)qword_1C02D6C00() >= 0 )
  {
    v34 = qword_1C02D6C08 ? qword_1C02D6C08(v5) : 0LL;
    if ( v34 && (*(_DWORD *)(*(_QWORD *)(v34 + 40) + 24LL) & 0x20000000) != 0 )
    {
      if ( qword_1C02D6C10 && (int)qword_1C02D6C10() >= 0 )
      {
        if ( qword_1C02D6C18 )
          v35 = qword_1C02D6C18(v34);
        else
          v35 = 0LL;
        v275 = v35;
        if ( v35 )
        {
LABEL_48:
          v4 |= 0x4000u;
          v273 = (_QWORD *)v34;
          v288 = v4;
          if ( v5 == (_QWORD *)v34 && (v4 & 0x20) != 0 )
          {
            v4 = v4 & 0xFFFFFFDD | 2;
            v288 = v4;
          }
          if ( (unsigned __int64)EmptyRgnPublic > 2 )
          {
            if ( (v4 & 0x40000) != 0 )
            {
              v248 = EmptyRgnPublic;
              EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
              GreCombineRgn(EmptyRgnPublic, v248, 0LL, 5);
              v4 &= ~0x40000u;
              v288 = v4;
            }
            GreOffsetRgn(EmptyRgnPublic);
          }
          goto LABEL_52;
        }
      }
      else
      {
        v275 = 0LL;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v34 + 40) + 26LL) & 0x20) == 0 )
        goto LABEL_52;
      goto LABEL_48;
    }
  }
LABEL_52:
  if ( (v4 & 0x20) != 0 )
  {
    v242 = (_QWORD *)v5[13];
    if ( !v242 )
      v242 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 24LL);
    v4 |= 2u;
    v288 = v4;
    if ( (v4 & 0x18) == 0 )
    {
      v243 = v5[5];
      if ( (*(_BYTE *)(v243 + 21) & 1) != 0 || (*(_BYTE *)(v242[5] + 31LL) & 2) == 0 )
      {
        v244 = *(_BYTE *)(v242[5] + 31LL);
        if ( ((*(_BYTE *)(v243 + 31) ^ v244) & 0x10) == 0 )
        {
          v4 &= 0xFFFFFFE7;
          v270[0] = v242;
          v288 = v4;
          v23 = v242;
          if ( (v244 & 4) != 0 )
          {
            v4 |= 0x10u;
            v288 = v4;
          }
        }
      }
    }
  }
  if ( (v4 & 2) == 0 && (!v5 || (struct tagTHREADINFO *)v5[2] != PtiCurrentShared()) )
  {
    v4 |= 2u;
    v288 = v4;
  }
  v36 = v4 & 0x8080441F;
  v271 = v4 & 0x8080441F;
  if ( (v4 & 2) == 0 )
  {
    v39 = (char *)gpDispInfo + 24;
    v37 = (char *)*((_QWORD *)gpDispInfo + 3);
    if ( !v37 )
      goto LABEL_549;
    while ( (*((_DWORD *)v37 + 16) & 0x400002) != 0
         || (unsigned int)GreIsRendering(*((HDC *)v37 + 1))
         || *((_QWORD **)v37 + 2) != v286 && *((_QWORD *)v37 + 1) != v22 )
    {
      v39 = v37;
      v37 = *(char **)v37;
      if ( !v37 )
        goto LABEL_549;
    }
    if ( *((_QWORD *)v37 + 7) && (v4 & 0xC0) != 0 && (int)IsDeleteHrgnClipSupported() >= 0 && qword_1C02D6C48 )
      qword_1C02D6C48(v37);
    if ( (*((_DWORD *)v37 + 16) & 0x4000) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v37 + 4) + 40LL) + 27LL) & 2) != 0
        && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0
        && qword_1C02D6C58 )
      {
        qword_1C02D6C58(v37);
      }
      if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 && qword_1C02D6010 )
        qword_1C02D6010(*((_QWORD *)v37 + 1), 0LL);
    }
    v80 = v286;
    if ( *((_QWORD **)v37 + 2) != v286
      || *((_QWORD **)v37 + 4) != v273
      || *((_QWORD **)v37 + 3) != v23
      || !v3
      || ((v4 ^ *((_DWORD *)v37 + 16)) & 0x4000) != 0
      || (*((_DWORD *)v37 + 16) & 0x10000000) != 0 )
    {
      goto LABEL_117;
    }
    while ( 1 )
    {
LABEL_128:
      if ( (*((_DWORD *)v37 + 16) & 0x8080441F) == v36 )
      {
        if ( v37 != *((char **)gpDispInfo + 3) )
        {
          *(_QWORD *)v39 = *(_QWORD *)v37;
          *(_QWORD *)v37 = *((_QWORD *)gpDispInfo + 3);
          *((_QWORD *)gpDispInfo + 3) = v37;
        }
        GreValidateVisrgn(*((HDC *)v37 + 1));
        v84 = v288;
        if ( (v288 & 0x80u) != 0 )
        {
          if ( EmptyRgnPublic != (HRGN)1 )
          {
            GreSetRectRgn(ghrgnGDC, 0);
            RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
            v238 = (HDC)*((_QWORD *)v37 + 1);
            v239 = RectRgnIndirect;
            *((_QWORD *)v37 + 7) = RectRgnIndirect;
            DCOBJA::DCOBJA((DCOBJA *)v276, v238);
            GreSelectVisRgnInternal(v276, v239, 4LL);
            if ( v276[0] )
              XDCOBJ::vAltUnlockFast((XDCOBJ *)v276);
            *((_QWORD *)v37 + 5) = EmptyRgnPublic;
            if ( (v288 & 0x40000) != 0 )
              *((_DWORD *)v37 + 16) |= 0x40000u;
            *((_DWORD *)v37 + 16) |= 0x80u;
            if ( EmptyRgnPublic )
            {
              GreCombineRgn(ghrgnGDC, *((HRGN *)v37 + 7), EmptyRgnPublic, 1);
              v240 = (HRGN)CreateEmptyRgnPublic();
              *((_QWORD *)v37 + 6) = v240;
              GreCombineRgn(v240, EmptyRgnPublic, 0LL, 5);
              if ( (unsigned __int64)EmptyRgnPublic > 2 && (*((_DWORD *)v37 + 16) & 0x40000) == 0 )
              {
                PsGetCurrentProcessId();
                HmgMarkUndeletable((unsigned int)EmptyRgnPublic, 4);
              }
            }
            else
            {
              *((_QWORD *)v37 + 6) = 0LL;
            }
            *((_DWORD *)v37 + 16) &= ~0x2000u;
            v241 = ghrgnGDC;
            DCOBJA::DCOBJA((DCOBJA *)v270, *((HDC *)v37 + 1));
            GreSelectVisRgnInternal(v270, v241, 4LL);
            if ( v270[0] )
              XDCOBJ::vAltUnlockFast((XDCOBJ *)v270);
          }
        }
        else if ( (v288 & 0x40) != 0 && EmptyRgnPublic )
        {
          GreSetRectRgn(ghrgnGDC, 0);
          v254 = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
          v255 = *((_QWORD *)v37 + 1);
          *((_QWORD *)v37 + 7) = v254;
          GreSelectVisRgn(v255, v254, 4LL);
          *((_QWORD *)v37 + 5) = EmptyRgnPublic;
          if ( (v288 & 0x40000) != 0 )
            *((_DWORD *)v37 + 16) |= 0x40000u;
          *((_DWORD *)v37 + 16) |= 0x40u;
          if ( EmptyRgnPublic == (HRGN)1 )
          {
            *((_QWORD *)v37 + 6) = 1LL;
          }
          else
          {
            GreCombineRgn(ghrgnGDC, *((HRGN *)v37 + 7), EmptyRgnPublic, 4);
            v256 = (HRGN)CreateEmptyRgnPublic();
            *((_QWORD *)v37 + 6) = v256;
            GreCombineRgn(v256, EmptyRgnPublic, 0LL, 5);
            if ( (unsigned __int64)EmptyRgnPublic > 2 && (*((_DWORD *)v37 + 16) & 0x40000) == 0 )
            {
              PsGetCurrentProcessId();
              HmgMarkUndeletable((unsigned int)EmptyRgnPublic, 4);
            }
          }
          *((_DWORD *)v37 + 16) &= ~0x2000u;
          GreSelectVisRgn(*((_QWORD *)v37 + 1), ghrgnGDC, 4LL);
        }
        if ( (*((_DWORD *)v37 + 16) & 0x4000) == 0 )
          goto LABEL_222;
        if ( qword_1C02D6008
          && (int)qword_1C02D6008() >= 0
          && (!qword_1C02D6010 || !(unsigned int)qword_1C02D6010(*((_QWORD *)v37 + 1), v275)) )
        {
          v289 = 1;
        }
        v85 = *((_QWORD *)v37 + 1);
        v86 = 0LL;
        v277 = 0LL;
        PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v277);
        if ( (unsigned __int8)KeIsAttachedProcess() )
        {
          SGDGetUserSessionState(v88, v87, v89, v90);
          CurrentThreadProcess = PsGetCurrentThreadProcess();
          PsGetProcessSessionIdEx(CurrentThreadProcess);
        }
        v279 = 1;
        CurrentThread = *(_QWORD *)(SGDGetSessionState(v88) + 24);
        v92 = (unsigned __int16)v85 | ((unsigned int)v85 >> 8) & 0xFF0000;
        v93 = *(_QWORD *)(CurrentThread + 8008);
        if ( v92 >= 0x10000 )
        {
          if ( *(_DWORD *)v93 > 0x10000u )
          {
            CurrentThread = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                   *(GdiHandleEntryDirectory **)(v93 + 16),
                                                   (unsigned __int16)v85,
                                                   1)
                            + 13);
            if ( (_DWORD)CurrentThread == HIWORD(v92) )
              v92 = (unsigned __int16)v85;
          }
          else
          {
            v92 = (unsigned __int16)v85;
          }
        }
        v94 = *(_QWORD *)(v93 + 16);
        v95 = *(_DWORD *)(v94 + 2056);
        if ( v92 >= v95 + ((*(unsigned __int16 *)(v94 + 2) + 0xFFFF) << 16) )
          goto LABEL_543;
        if ( v92 >= v95 )
        {
          CurrentThread = ((v92 - v95) >> 16) + 1;
          v96 = *(_QWORD *)(v94 + 8 * CurrentThread + 8);
          v92 += -65536 * ((v92 - v95) >> 16) - v95;
        }
        else
        {
          v96 = *(_QWORD *)(v94 + 8);
        }
        v97 = 0LL;
        if ( v92 < *(_DWORD *)(v96 + 20) )
        {
          v265 = 16LL * (unsigned __int8)v92;
          v98 = *(_QWORD **)(v96 + 24);
          v266 = 8 * ((unsigned __int64)v92 >> 8);
          v262 = v265 + *(_QWORD *)(*v98 + v266);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v262, 0LL);
          if ( v92 < *(_DWORD *)(v96 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v96 + 24) + v266) + v265 + 8) )
          {
            CurrentThread = 24LL * v92;
            *(_DWORD *)(CurrentThread + *(_QWORD *)v96 + 8) |= 1u;
            v97 = (unsigned __int16 *)(CurrentThread + *(_QWORD *)v96);
          }
          else
          {
            ExReleasePushLockExclusiveEx(v262, 0LL);
            KeLeaveCriticalRegion();
          }
        }
        v99 = 0;
        v278 = v97;
        if ( !v97 )
          goto LABEL_543;
        _m_prefetchw(v97 + 4);
        v280 = *((_DWORD *)v97 + 2);
        v100 = *((_BYTE *)v97 + 15);
        if ( (v100 & 0x20) != 0 )
          goto LABEL_505;
        if ( (v100 & 0x40) == 0 )
        {
LABEL_153:
          if ( *((_BYTE *)v97 + 14) == 1 && v97[6] == WORD1(v85) )
          {
            v101 = SGDGetSessionState(CurrentThread);
            v102 = *(_DWORD *)v97 & 0xFFFFFF;
            CurrentThread = *(_QWORD *)(v101 + 24);
            v103 = *(_QWORD *)(CurrentThread + 8008);
            if ( v102 >= 0x10000 )
            {
              if ( *(_DWORD *)v103 > 0x10000u )
              {
                CurrentThread = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                       *(GdiHandleEntryDirectory **)(v103 + 16),
                                                       *v97,
                                                       1)
                                + 13);
                if ( (_DWORD)CurrentThread == HIWORD(v102) )
                  v102 = (unsigned __int16)v102;
              }
              else
              {
                v102 = *v97;
              }
            }
            v104 = *(_QWORD *)(v103 + 16);
            v105 = *(_DWORD *)(v104 + 2056);
            if ( v102 >= v105 + ((*(unsigned __int16 *)(v104 + 2) + 0xFFFF) << 16)
              || (v102 >= v105
                ? (CurrentThread = ((v102 - v105) >> 16) + 1,
                   v106 = *(_QWORD *)(v104 + 8 * CurrentThread + 8),
                   v102 += -65536 * ((v102 - v105) >> 16) - v105)
                : (v106 = *(_QWORD *)(v104 + 8)),
                  v102 >= *(_DWORD *)(v106 + 20)) )
            {
              v86 = 0LL;
            }
            else
            {
              CurrentThread = 2LL * (unsigned __int8)v102;
              v86 = *(char ***)(*(_QWORD *)(**(_QWORD **)(v106 + 24) + 8 * ((unsigned __int64)v102 >> 8))
                              + 16LL * (unsigned __int8)v102
                              + 8);
            }
            ++*((_DWORD *)v86 + 2);
          }
          v107 = *(_QWORD *)(SGDGetSessionState(CurrentThread) + 24);
          v108 = *(_QWORD *)(v107 + 8008);
          v109 = SGDGetSessionState(v107);
          v110 = *(_DWORD *)v97 & 0xFFFFFF;
          v111 = *(_QWORD *)(*(_QWORD *)(v109 + 24) + 8008LL);
          if ( v110 >= 0x10000 )
          {
            if ( *(_DWORD *)v111 > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *(GdiHandleEntryDirectory **)(v111 + 16),
                                          *v97,
                                          1)
                   + 13) == HIWORD(v110) )
                v110 = (unsigned __int16)v110;
            }
            else
            {
              v110 = *v97;
            }
          }
          v112 = *(_QWORD *)(v111 + 16);
          v113 = *(_DWORD *)(v112 + 2056);
          if ( v110 >= v113 + ((*(unsigned __int16 *)(v112 + 2) + 0xFFFF) << 16)
            || (v110 >= v113
              ? (v114 = *(_QWORD *)(v112 + 8LL * (((v110 - v113) >> 16) + 1) + 8),
                 v110 += -65536 * ((v110 - v113) >> 16) - v113)
              : (v114 = *(_QWORD *)(v112 + 8)),
                v110 >= *(_DWORD *)(v114 + 20)) )
          {
            v99 = 0;
            v115 = 0LL;
          }
          else
          {
            v99 = 0;
            v115 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v114 + 24) + 8 * ((unsigned __int64)v110 >> 8))
                              + 16LL * (unsigned __int8)v110
                              + 8);
          }
          v116 = (unsigned __int16)*v115 | (*v115 >> 8) & 0xFF0000;
          if ( v116 >= 0x10000 )
          {
            if ( *(_DWORD *)v108 > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *(GdiHandleEntryDirectory **)(v108 + 16),
                                          (unsigned __int16)*v115,
                                          1)
                   + 13) == HIWORD(v116) )
                v116 = (unsigned __int16)v116;
            }
            else
            {
              v116 = (unsigned __int16)*v115;
            }
          }
          v117 = *(_QWORD *)(v108 + 16);
          v118 = *(_DWORD *)(v117 + 2056);
          if ( v116 < v118 + ((*(unsigned __int16 *)(v117 + 2) + 0xFFFF) << 16) )
          {
            if ( v116 >= v118 )
            {
              v119 = *(_QWORD *)(v117 + 8LL * (((v116 - v118) >> 16) + 1) + 8);
              v116 += -65536 * ((v116 - v118) >> 16) - v118;
            }
            else
            {
              v119 = *(_QWORD *)(v117 + 8);
            }
            *(_DWORD *)(*(_QWORD *)v119 + 24LL * v116 + 8) &= ~1u;
            ExReleasePushLockExclusiveEx(
              *(_QWORD *)(**(_QWORD **)(v119 + 24) + 8 * ((unsigned __int64)v116 >> 8)) + 16LL * (unsigned __int8)v116,
              0LL);
            KeLeaveCriticalRegion();
          }
          v279 = 0;
          v278 = 0LL;
          KeLeaveCriticalRegion();
LABEL_180:
          if ( !v86 )
            goto LABEL_219;
          v120 = *(__m128i *)(v86 + 135);
          *((_DWORD *)v86 + 9) |= 0x40u;
          v121 = v120.m128i_i64[0];
          v122 = _mm_srli_si128(v120, 8).m128i_u64[0];
          if ( (_DWORD)v121 != (_DWORD)v122
            && (int)v121 < (int)v122
            && HIDWORD(v121) != HIDWORD(v122)
            && SHIDWORD(v121) < SHIDWORD(v122) )
          {
            *((_DWORD *)v86 + 270) = 0x7FFFFFFF;
            *((_DWORD *)v86 + 271) = 0x7FFFFFFF;
            *((_DWORD *)v86 + 272) = 0x80000000;
            *((_DWORD *)v86 + 273) = 0x80000000;
          }
          v123 = (HDC)*v86;
          v124 = (unsigned __int16)*v86;
          v125 = v86;
          v126 = ((unsigned int)*v86 >> 8) & 0xFF0000;
          v264 = *v86;
          v127 = v124 | v126;
          v266 = 0LL;
          PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v266);
          if ( (unsigned __int8)KeIsAttachedProcess() )
          {
            SGDGetUserSessionState(v129, v128, v130, v131);
            v259 = PsGetCurrentThreadProcess();
            PsGetProcessSessionIdEx(v259);
          }
          v284 = 1;
          v132 = *(_QWORD *)(SGDGetSessionState(v129) + 24);
          v133 = *(_QWORD *)(v132 + 8008);
          if ( v127 >= 0x10000 )
          {
            if ( *(_DWORD *)v133 > 0x10000u )
            {
              v132 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *(GdiHandleEntryDirectory **)(v133 + 16),
                                            (unsigned __int16)v127,
                                            1)
                     + 13);
              if ( (_DWORD)v132 == HIWORD(v127) )
                v127 = (unsigned __int16)v127;
            }
            else
            {
              v127 = (unsigned __int16)v127;
            }
          }
          v134 = *(_QWORD *)(v133 + 16);
          v135 = *(_DWORD *)(v134 + 2056);
          if ( v127 < v135 + ((*(unsigned __int16 *)(v134 + 2) + 0xFFFF) << 16) )
          {
            if ( v127 >= v135 )
            {
              v132 = ((v127 - v135) >> 16) + 1;
              v136 = *(_QWORD *)(v134 + 8 * v132 + 8);
              v127 += -65536 * ((v127 - v135) >> 16) - v135;
            }
            else
            {
              v136 = *(_QWORD *)(v134 + 8);
            }
            v137 = 0LL;
            if ( v127 < *(_DWORD *)(v136 + 20) )
            {
              v138 = 16LL * (unsigned __int8)v127;
              v139 = *(_QWORD **)(v136 + 24);
              v265 = 8 * ((unsigned __int64)v127 >> 8);
              v262 = v138 + *(_QWORD *)(*v139 + v265);
              KeEnterCriticalRegion();
              ExAcquirePushLockExclusiveEx(v262, 0LL);
              if ( v127 < *(_DWORD *)(v136 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v136 + 24) + v265) + v138 + 8) )
              {
                v132 = 24LL * v127;
                *(_DWORD *)(v132 + *(_QWORD *)v136 + 8) |= 1u;
                v137 = (unsigned __int16 *)(v132 + *(_QWORD *)v136);
              }
              else
              {
                ExReleasePushLockExclusiveEx(v262, 0LL);
                KeLeaveCriticalRegion();
              }
              v123 = (HDC)v264;
              v99 = 0;
            }
            v283 = v137;
            if ( v137 )
            {
              _m_prefetchw(v137 + 4);
              v79 = (*((_BYTE *)v137 + 15) & 0x20) == 0;
              v285 = *((_DWORD *)v137 + 2);
              if ( v79 )
                goto LABEL_198;
              HANDLELOCK::vUnlock((HANDLELOCK *)&v283);
              if ( v284 )
              {
                v137 = v283;
LABEL_198:
                if ( (*((_BYTE *)v137 + 15) & 8) != 0 )
                  v99 = 1;
                v140 = *((_BYTE *)v137 + 14);
                if ( v140 == 5 )
                {
                  v260 = v125[85];
                  v261 = 0LL;
                }
                else
                {
                  if ( v140 != 16 )
                    goto LABEL_202;
                  v260 = v125[17];
                  v261 = 2LL;
                }
                TrackObjectReferenceDecrement(v261, v260);
LABEL_202:
                --*((_DWORD *)v125 + 2);
                v141 = *(_QWORD *)(SGDGetSessionState(v132) + 24);
                v142 = *(_QWORD *)(v141 + 8008);
                v143 = SGDGetSessionState(v141);
                v144 = *(_DWORD *)v137 & 0xFFFFFF;
                v145 = *(_QWORD *)(*(_QWORD *)(v143 + 24) + 8008LL);
                if ( v144 >= 0x10000 )
                {
                  if ( *(_DWORD *)v145 > 0x10000u )
                  {
                    if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                *(GdiHandleEntryDirectory **)(v145 + 16),
                                                *v137,
                                                1)
                         + 13) == HIWORD(v144) )
                      v144 = (unsigned __int16)v144;
                  }
                  else
                  {
                    v144 = *v137;
                  }
                }
                v146 = *(_QWORD *)(v145 + 16);
                v147 = *(_DWORD *)(v146 + 2056);
                if ( v144 >= v147 + ((*(unsigned __int16 *)(v146 + 2) + 0xFFFF) << 16)
                  || (v144 >= v147
                    ? (v148 = *(_QWORD *)(v146 + 8LL * (((v144 - v147) >> 16) + 1) + 8),
                       v144 += -65536 * ((v144 - v147) >> 16) - v147)
                    : (v148 = *(_QWORD *)(v146 + 8)),
                      v144 >= *(_DWORD *)(v148 + 20)) )
                {
                  v149 = 0LL;
                }
                else
                {
                  v149 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v148 + 24) + 8 * ((unsigned __int64)v144 >> 8))
                                    + 16LL * (unsigned __int8)v144
                                    + 8);
                }
                v150 = (unsigned __int16)*v149 | (*v149 >> 8) & 0xFF0000;
                if ( v150 >= 0x10000 )
                {
                  if ( *(_DWORD *)v142 > 0x10000u )
                  {
                    if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                *(GdiHandleEntryDirectory **)(v142 + 16),
                                                (unsigned __int16)*v149,
                                                1)
                         + 13) == HIWORD(v150) )
                      v150 = (unsigned __int16)v150;
                  }
                  else
                  {
                    v150 = (unsigned __int16)*v149;
                  }
                }
                v151 = *(_QWORD *)(v142 + 16);
                v152 = *(_DWORD *)(v151 + 2056);
                if ( v150 < v152 + ((*(unsigned __int16 *)(v151 + 2) + 0xFFFF) << 16) )
                {
                  if ( v150 >= v152 )
                  {
                    v153 = *(_QWORD *)(v151 + 8LL * (((v150 - v152) >> 16) + 1) + 8);
                    v150 += -65536 * ((v150 - v152) >> 16) - v152;
                  }
                  else
                  {
                    v153 = *(_QWORD *)(v151 + 8);
                  }
                  *(_DWORD *)(*(_QWORD *)v153 + 24LL * v150 + 8) &= ~1u;
                  ExReleasePushLockExclusiveEx(
                    *(_QWORD *)(**(_QWORD **)(v153 + 24) + 8 * ((unsigned __int64)v150 >> 8))
                  + 16LL * (unsigned __int8)v150,
                    0LL);
                  KeLeaveCriticalRegion();
                }
                KeLeaveCriticalRegion();
                if ( v99 )
                  GrepDeleteDC(v123, 0x2000000u);
              }
LABEL_219:
              if ( v289 )
                GreSelectVisRgn(*((_QWORD *)v37 + 1), 0LL, 1LL);
              v84 = v288;
LABEL_222:
              if ( (*((_DWORD *)v37 + 16) & 2) != 0 )
              {
                if ( !(unsigned int)GreSetDCOwnerEx(*((_QWORD *)v37 + 1), 2147483650LL, 0LL, 0LL) )
                {
                  *((_DWORD *)v37 + 16) &= ~0x1000u;
                  DestroyCacheDC((char *)gpDispInfo + 24, 0LL);
                  goto LABEL_549;
                }
                v158 = SGDGetUserSessionState(v155, v154, v156, v157);
                if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v158 + 8)) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
                v159 = 0LL;
                ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( ThreadWin32Thread )
                  v159 = *ThreadWin32Thread;
                *((_QWORD *)v37 + 9) = v159;
                *((_QWORD *)v37 + 10) = 0LL;
                --gnDCECount;
                v161 = *((_QWORD *)v37 + 9);
                if ( v161 )
                  v162 = *(unsigned int **)(v161 + 424);
                else
                  v162 = (unsigned int *)*((_QWORD *)v37 + 10);
                if ( !bDCEInUseTelemetryDisabled )
                {
                  if ( (dword_1C02D18F0 & 1) == 0 )
                  {
                    dword_1C02D18F0 |= 1u;
                    qword_1C02D18F8 = 60 * llEventIntervalMinute * gliQpcFreq.QuadPart;
                  }
                  ++v162[270];
                  ++gnInUseDCECount;
                  v163 = v162[270];
                  if ( v162[271] < v163 )
                    v162[271] = v163;
                  if ( WPP_MAIN_CB.DeviceLock.Header.LockNV < (unsigned int)gnInUseDCECount )
                    WPP_MAIN_CB.DeviceLock.Header.LockNV = gnInUseDCECount;
                  PerformanceCounter = KeQueryPerformanceCounter(0LL);
                  QuadPart = (void *)PerformanceCounter.QuadPart;
                  v166 = v162[271];
                  if ( ulProcessThresholdDCEInUse == 100 )
                    v167 = v166 % 0x64;
                  else
                    v167 = v166 % ulProcessThresholdDCEInUse;
                  if ( !v167
                    && (signed __int64)(PerformanceCounter.QuadPart - (unsigned __int64)WPP_MAIN_CB.SecurityDescriptor) >= qword_1C02D18F8 )
                  {
                    TraceLoggingProcessDCsInUse(v166, v162[14]);
                    WPP_MAIN_CB.SecurityDescriptor = QuadPart;
                  }
                  if ( ulGlobalThresholdDCEInUse == 1000 )
                    v168 = WPP_MAIN_CB.DeviceLock.Header.LockNV % 0x3E8u;
                  else
                    v168 = WPP_MAIN_CB.DeviceLock.Header.LockNV % ulGlobalThresholdDCEInUse;
                  if ( !v168 && (__int64)QuadPart - *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount >= qword_1C02D18F8 )
                  {
                    TraceLoggingGlobalDCsInUse(0);
                    *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = QuadPart;
                  }
                }
                if ( v272 && qword_1C02D6018 && (int)qword_1C02D6018() >= 0 )
                {
                  LOBYTE(v169) = 18;
                  v170 = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
                  if ( !v170 )
                    goto LABEL_254;
                  v172 = *v170;
                  if ( !*v170 )
                    goto LABEL_254;
                  if ( *(_QWORD *)(v172 + 360) )
                    CaptureAndValidateUserModeDpiAwarenessContext(*v170);
                  if ( *(_DWORD *)(v172 + 340) )
                  {
                    LOBYTE(v169) = *(_DWORD *)(v172 + 340);
                    goto LABEL_254;
                  }
                  v173 = PsGetCurrentProcessWin32Process(v171);
                  if ( v173 )
                  {
                    if ( *(_QWORD *)v173 )
                    {
                      v169 = *(_DWORD *)(v173 + 280);
                      goto LABEL_254;
                    }
                    v174 = *(_QWORD *)(SGDGetSessionState(v171) + 24);
LABEL_255:
                    v175 = *(_QWORD *)(*(_QWORD *)(v174 + 3168) + 104LL);
                  }
                  else
                  {
LABEL_254:
                    v174 = *(_QWORD *)(SGDGetSessionState(v171) + 24);
                    if ( (v169 & 0xF) != 0 )
                      goto LABEL_255;
                    v175 = *(_QWORD *)(*(_QWORD *)(v174 + 3176) + 104LL);
                    if ( !v175 )
                      goto LABEL_255;
                  }
                  if ( qword_1C02D6020 )
                    qword_1C02D6020(*((_QWORD *)v37 + 1), v175);
                }
              }
              if ( (*(_BYTE *)(v286[5] + 26LL) & 0x40) != 0 && (v84 & 0x40000000) == 0 )
                GreSetLayout(*((HDC *)v37 + 1), -1, 1u);
              GreValidateVisrgn(*((HDC *)v37 + 1));
              if ( qword_1C02D6028 && (int)qword_1C02D6028() >= 0 && qword_1C02D6030 )
                qword_1C02D6030(*((_QWORD *)v37 + 1), *v286, 0LL, 0LL, 0);
              v177 = v273;
              if ( v273
                && (*(_BYTE *)(v273[5] + 26LL) & 8) != 0
                && qword_1C02D6028
                && (int)qword_1C02D6028() >= 0
                && qword_1C02D6030 )
              {
                qword_1C02D6030(
                  *((_QWORD *)v37 + 1),
                  *v286,
                  *v177,
                  (*(_BYTE *)(v177[5] + 27LL) & 2) == 0,
                  (*(_WORD *)(v177[5] + 42LL) & 0x2FFF) == 669);
              }
              if ( *((int *)v37 + 16) < 0 )
              {
                v245 = PsGetCurrentProcessWin32Process(v176);
                if ( v245 && !*(_QWORD *)v245 )
                  v245 = 0LL;
                *(_DWORD *)(v245 + 12) |= 0x200u;
                *((_QWORD *)v37 + 9) = 0LL;
                v247 = (unsigned int *)PsGetCurrentProcessWin32Process(v246);
                if ( v247 && !*(_QWORD *)v247 )
                  v247 = 0LL;
                *((_QWORD *)v37 + 10) = v247;
                UpdateDCEInUseCount(1, v247);
              }
              v178 = *(_QWORD **)(SGDGetSessionState(v176) + 24);
              v179 = v178[11];
              v181 = *(_QWORD *)(SGDGetSessionState(v180) + 24);
              if ( *(_DWORD *)(v181 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                McTemplateK0pz_EtwWriteTransfer(
                  v181,
                  (unsigned int)&LockRelease,
                  v182,
                  v179,
                  (__int64)L"GreBaseGlobals.hsemDCVisRgn");
              v183 = (struct _ERESOURCE *)v178[11];
              if ( v183 )
              {
                ExReleaseResourceAndLeaveCriticalRegion(v183);
                PsLeavePriorityRegion(v185, v184);
              }
              v186 = v178[15];
              v187 = *(_QWORD *)(SGDGetSessionState(v183) + 24);
              if ( *(_DWORD *)(v187 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                McTemplateK0pz_EtwWriteTransfer(
                  v187,
                  (unsigned int)&LockRelease,
                  v188,
                  v186,
                  (__int64)L"GreBaseGlobals.hsemGreLock");
              v189 = (struct _ERESOURCE *)v178[15];
              if ( v189 )
              {
                ExReleaseResourceAndLeaveCriticalRegion(v189);
                PsLeavePriorityRegion(v191, v190);
              }
              v192 = v178[10];
              v193 = *(_QWORD *)(SGDGetSessionState(v189) + 24);
              if ( *(_DWORD *)(v193 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                McTemplateK0pz_EtwWriteTransfer(
                  v193,
                  (unsigned int)&LockRelease,
                  v194,
                  v192,
                  (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
              v195 = (struct _ERESOURCE *)v178[10];
              if ( v195 )
              {
                ExReleaseResourceAndLeaveCriticalRegion(v195);
                PsLeavePriorityRegion(v197, v196);
              }
              return *((_QWORD *)v37 + 1);
            }
          }
LABEL_543:
          KeLeaveCriticalRegion();
          goto LABEL_219;
        }
        v258 = HANDLELOCK::pObj((HANDLELOCK *)&v278);
        if ( !*((_WORD *)v258 + 6)
          || (CurrentThread = (__int64)KeGetCurrentThread(), *((_QWORD *)v258 + 2) != CurrentThread) )
        {
LABEL_505:
          HANDLELOCK::vUnlock((HANDLELOCK *)&v278);
          if ( !v279 )
            goto LABEL_180;
        }
        v97 = v278;
        goto LABEL_153;
      }
LABEL_117:
      v79 = (*((_DWORD *)v37 + 16) & 0x800) == 0;
      v272 = 1;
      if ( v79 && qword_1C02D6C60 && (int)qword_1C02D6C60() >= 0 && qword_1C02D6C68 )
        qword_1C02D6C68(v37);
      v81 = (HDC)*((_QWORD *)v37 + 1);
      *((_DWORD *)v37 + 16) = v36 | 0x1000;
      GreValidateVisrgn(v81);
      v274 = 0LL;
      if ( qword_1C02D6C20 && (int)qword_1C02D6C20() >= 0 )
      {
        v82 = v270[0];
        if ( qword_1C02D6C28 && (unsigned int)qword_1C02D6C28(&v274, v80, v270[0], v36) )
          goto LABEL_126;
      }
      else
      {
        v82 = v270[0];
      }
      *((_DWORD *)v37 + 16) |= 0x10000000u;
LABEL_126:
      v83 = v273;
      *((_QWORD *)v37 + 3) = v82;
      *((_QWORD *)v37 + 4) = v83;
      *((_QWORD *)v37 + 2) = v80;
      *((_QWORD *)v37 + 5) = 0LL;
      *((_QWORD *)v37 + 6) = 0LL;
      ResetOrg(v274, (struct tagDCE *)v37, 1);
      if ( !v274 )
        v289 = 1;
    }
  }
  while ( 2 )
  {
    v263 = (char *)gpDispInfo + 24;
    v37 = (char *)*((_QWORD *)gpDispInfo + 3);
    if ( v37 )
    {
      while ( 1 )
      {
        if ( *((_QWORD **)v37 + 3) != v23 || *((_QWORD **)v37 + 4) != v273 || *((_QWORD *)v37 + 11) )
          goto LABEL_57;
        v199 = *((_QWORD *)v37 + 1);
        v281[1] = 0LL;
        v200 = 0LL;
        v266 = 0LL;
        v262 = 0LL;
        PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v262);
        if ( (unsigned __int8)KeIsAttachedProcess() )
        {
          SGDGetUserSessionState(v202, v201, v203, v204);
          v250 = PsGetCurrentThreadProcess();
          PsGetProcessSessionIdEx(v250);
        }
        v268 = 1;
        v205 = *(_QWORD *)(SGDGetSessionState(v202) + 24);
        v206 = (unsigned __int16)v199 | ((unsigned int)v199 >> 8) & 0xFF0000;
        v207 = *(_QWORD *)(v205 + 8008);
        if ( v206 >= 0x10000 )
        {
          if ( *(_DWORD *)v207 > 0x10000u )
          {
            v205 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *(GdiHandleEntryDirectory **)(v207 + 16),
                                          (unsigned __int16)v199,
                                          1)
                   + 13);
            if ( (_DWORD)v205 == HIWORD(v206) )
              v206 = (unsigned __int16)v199;
          }
          else
          {
            v206 = (unsigned __int16)v199;
          }
        }
        v208 = *(_QWORD *)(v207 + 16);
        v209 = *(_DWORD *)(v208 + 2056);
        if ( v206 >= v209 + ((*(unsigned __int16 *)(v208 + 2) + 0xFFFF) << 16) )
        {
          v267 = 0LL;
LABEL_441:
          KeLeaveCriticalRegion();
          v281[0] = 0LL;
LABEL_329:
          v236 = *((_DWORD *)v37 + 16);
          v36 = v271;
          v23 = (_QWORD *)v270[0];
          if ( v271 == (v236 & 0x80C05C1F)
            && ((*(_BYTE *)(*(_QWORD *)(v270[0] + 40LL) + 31LL) & 0x20) == 0
             || *((_QWORD *)v37 + 2) == *((_QWORD *)v37 + 3))
            && (!v276[0] || (v236 & 0x10000000) == 0) )
          {
            v80 = v286;
            *((_DWORD *)v37 + 16) = v236 | 0x1000;
            if ( v286 != *((_QWORD **)v37 + 2) )
            {
              if ( (int)IsSpbCheckDceSupported() >= 0 && qword_1C02D6C68 )
                qword_1C02D6C68(v37);
              *((_QWORD *)v37 + 2) = v286;
              ResetOrg(0LL, (struct tagDCE *)v37, 0);
            }
            v39 = v263;
            goto LABEL_128;
          }
          goto LABEL_57;
        }
        if ( v206 >= v209 )
        {
          v205 = ((v206 - v209) >> 16) + 1;
          v210 = *(_QWORD *)(v208 + 8 * v205 + 8);
          v206 += -65536 * ((v206 - v209) >> 16) - v209;
        }
        else
        {
          v210 = *(_QWORD *)(v208 + 8);
        }
        v211 = 0LL;
        if ( v206 < *(_DWORD *)(v210 + 20) )
        {
          v212 = 16LL * (unsigned __int8)v206;
          v213 = *(_QWORD **)(v210 + 24);
          v265 = 8 * ((unsigned __int64)v206 >> 8);
          v264 = (char *)(v212 + *(_QWORD *)(*v213 + v265));
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v264, 0LL);
          if ( v206 < *(_DWORD *)(v210 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v210 + 24) + v265) + v212 + 8) )
          {
            v205 = 24LL * v206;
            *(_DWORD *)(v205 + *(_QWORD *)v210 + 8) |= 1u;
            v211 = (unsigned __int16 *)(v205 + *(_QWORD *)v210);
          }
          else
          {
            ExReleasePushLockExclusiveEx(v264, 0LL);
            KeLeaveCriticalRegion();
          }
          v200 = v266;
        }
        v267 = v211;
        if ( !v211 )
          goto LABEL_441;
        _m_prefetchw(v211 + 4);
        v269 = *((_DWORD *)v211 + 2);
        v214 = *((_BYTE *)v211 + 15);
        if ( (v214 & 0x20) == 0 )
        {
          if ( (v214 & 0x40) == 0 )
            goto LABEL_298;
          v251 = HANDLELOCK::pObj((HANDLELOCK *)&v267);
          if ( *((_WORD *)v251 + 6) )
          {
            v205 = (__int64)KeGetCurrentThread();
            if ( *((_QWORD *)v251 + 2) == v205 )
              break;
          }
        }
        HANDLELOCK::vUnlock((HANDLELOCK *)&v267);
        v234 = v268;
        if ( v268 )
          break;
LABEL_325:
        if ( v234 )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v267);
        v281[0] = v200;
        if ( !v200 )
          goto LABEL_329;
        v235 = *(_DWORD *)(v200 + 40);
        XDCOBJ::vAltUnlockFast((XDCOBJ *)v281);
        if ( (v235 & 1) == 0 )
          goto LABEL_329;
        v23 = (_QWORD *)v270[0];
LABEL_57:
        v263 = v37;
        v37 = *(char **)v37;
        if ( !v37 )
          goto LABEL_58;
      }
      v211 = v267;
LABEL_298:
      if ( *((_BYTE *)v211 + 14) == 1 && v211[6] == WORD1(v199) )
      {
        v215 = SGDGetSessionState(v205);
        v216 = *(_DWORD *)v211 & 0xFFFFFF;
        v205 = *(_QWORD *)(v215 + 24);
        v217 = *(_QWORD *)(v205 + 8008);
        if ( v216 >= 0x10000 )
        {
          if ( *(_DWORD *)v217 > 0x10000u )
          {
            v205 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *(GdiHandleEntryDirectory **)(v217 + 16),
                                          *v211,
                                          1)
                   + 13);
            if ( (_DWORD)v205 == HIWORD(v216) )
              v216 = (unsigned __int16)v216;
          }
          else
          {
            v216 = *v211;
          }
        }
        v218 = *(_QWORD *)(v217 + 16);
        v219 = *(_DWORD *)(v218 + 2056);
        if ( v216 >= v219 + ((*(unsigned __int16 *)(v218 + 2) + 0xFFFF) << 16)
          || (v216 >= v219
            ? (v205 = ((v216 - v219) >> 16) + 1,
               v220 = *(_QWORD *)(v218 + 8 * v205 + 8),
               v216 += -65536 * ((v216 - v219) >> 16) - v219)
            : (v220 = *(_QWORD *)(v218 + 8)),
              v216 >= *(_DWORD *)(v220 + 20)) )
        {
          v200 = 0LL;
        }
        else
        {
          v205 = 2LL * (unsigned __int8)v216;
          v200 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v220 + 24) + 8 * ((unsigned __int64)v216 >> 8))
                           + 16LL * (unsigned __int8)v216
                           + 8);
        }
        ++*(_DWORD *)(v200 + 8);
      }
      v221 = *(_QWORD *)(SGDGetSessionState(v205) + 24);
      v222 = *(_QWORD *)(v221 + 8008);
      v223 = SGDGetSessionState(v221);
      v224 = *(_DWORD *)v211 & 0xFFFFFF;
      v225 = *(_QWORD *)(*(_QWORD *)(v223 + 24) + 8008LL);
      if ( v224 >= 0x10000 )
      {
        if ( *(_DWORD *)v225 > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *(GdiHandleEntryDirectory **)(v225 + 16),
                                      *v211,
                                      1)
               + 13) == HIWORD(v224) )
            v224 = (unsigned __int16)v224;
        }
        else
        {
          v224 = *v211;
        }
      }
      v226 = *(_QWORD *)(v225 + 16);
      v227 = *(_DWORD *)(v226 + 2056);
      if ( v224 >= v227 + ((*(unsigned __int16 *)(v226 + 2) + 0xFFFF) << 16)
        || (v224 >= v227
          ? (v228 = *(_QWORD *)(v226 + 8LL * (((v224 - v227) >> 16) + 1) + 8),
             v224 += -65536 * ((v224 - v227) >> 16) - v227)
          : (v228 = *(_QWORD *)(v226 + 8)),
            v224 >= *(_DWORD *)(v228 + 20)) )
      {
        v229 = 0LL;
      }
      else
      {
        v229 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v228 + 24) + 8 * ((unsigned __int64)v224 >> 8))
                          + 16LL * (unsigned __int8)v224
                          + 8);
      }
      v230 = (unsigned __int16)*v229 | (*v229 >> 8) & 0xFF0000;
      if ( v230 >= 0x10000 )
      {
        if ( *(_DWORD *)v222 > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *(GdiHandleEntryDirectory **)(v222 + 16),
                                      (unsigned __int16)*v229,
                                      1)
               + 13) == HIWORD(v230) )
            v230 = (unsigned __int16)v230;
        }
        else
        {
          v230 = (unsigned __int16)*v229;
        }
      }
      v231 = *(_QWORD *)(v222 + 16);
      v232 = *(_DWORD *)(v231 + 2056);
      if ( v230 < v232 + ((*(unsigned __int16 *)(v231 + 2) + 0xFFFF) << 16) )
      {
        if ( v230 >= v232 )
        {
          v233 = *(_QWORD *)(v231 + 8LL * (((v230 - v232) >> 16) + 1) + 8);
          v230 += -65536 * ((v230 - v232) >> 16) - v232;
        }
        else
        {
          v233 = *(_QWORD *)(v231 + 8);
        }
        *(_DWORD *)(*(_QWORD *)v233 + 24LL * v230 + 8) &= ~1u;
        ExReleasePushLockExclusiveEx(
          *(_QWORD *)(**(_QWORD **)(v233 + 24) + 8 * ((unsigned __int64)v230 >> 8)) + 16LL * (unsigned __int8)v230,
          0LL);
        KeLeaveCriticalRegion();
      }
      v234 = 0;
      v268 = 0;
      v267 = 0LL;
      KeLeaveCriticalRegion();
      goto LABEL_325;
    }
LABEL_58:
    v38 = (char *)gpDispInfo + 24;
    v263 = 0LL;
    v39 = 0LL;
    v264 = (char *)gpDispInfo + 24;
    v40 = (char *)*((_QWORD *)gpDispInfo + 3);
    if ( !v40 )
      goto LABEL_112;
    while ( (*((_DWORD *)v40 + 16) & 0x400002) != 2 )
    {
LABEL_110:
      v38 = v40;
      v40 = *(char **)v40;
      v264 = v38;
      if ( !v40 )
        goto LABEL_111;
    }
    v41 = *((_QWORD *)v40 + 1);
    v282[1] = 0LL;
    v42 = 0LL;
    v277 = 0LL;
    v266 = 0LL;
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v266);
    if ( (unsigned __int8)KeIsAttachedProcess() )
    {
      SGDGetUserSessionState(v44, v43, v45, v46);
      v252 = PsGetCurrentThreadProcess();
      PsGetProcessSessionIdEx(v252);
    }
    v268 = 1;
    v47 = *(_QWORD *)(SGDGetSessionState(v44) + 24);
    v48 = (unsigned __int16)v41 | ((unsigned int)v41 >> 8) & 0xFF0000;
    v49 = *(_QWORD *)(v47 + 8008);
    if ( v48 >= 0x10000 )
    {
      if ( *(_DWORD *)v49 > 0x10000u )
      {
        v47 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                     *(GdiHandleEntryDirectory **)(v49 + 16),
                                     (unsigned __int16)v41,
                                     1)
              + 13);
        if ( (_DWORD)v47 == HIWORD(v48) )
          v48 = (unsigned __int16)v41;
      }
      else
      {
        v48 = (unsigned __int16)v41;
      }
    }
    v50 = *(_QWORD *)(v49 + 16);
    v51 = *(_DWORD *)(v50 + 2056);
    if ( v48 >= v51 + ((*(unsigned __int16 *)(v50 + 2) + 0xFFFF) << 16) )
    {
      v267 = 0LL;
LABEL_466:
      KeLeaveCriticalRegion();
      v282[0] = 0LL;
      goto LABEL_105;
    }
    if ( v48 >= v51 )
    {
      v47 = ((v48 - v51) >> 16) + 1;
      v52 = *(_QWORD *)(v50 + 8 * v47 + 8);
      v48 += -65536 * ((v48 - v51) >> 16) - v51;
    }
    else
    {
      v52 = *(_QWORD *)(v50 + 8);
    }
    v53 = 0LL;
    if ( v48 < *(_DWORD *)(v52 + 20) )
    {
      v54 = 16LL * (unsigned __int8)v48;
      v55 = *(_QWORD **)(v52 + 24);
      v265 = 8 * ((unsigned __int64)v48 >> 8);
      v262 = v54 + *(_QWORD *)(*v55 + v265);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v262, 0LL);
      if ( v48 < *(_DWORD *)(v52 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v52 + 24) + v265) + v54 + 8) )
      {
        v47 = 24LL * v48;
        *(_DWORD *)(v47 + *(_QWORD *)v52 + 8) |= 1u;
        v53 = (unsigned __int16 *)(v47 + *(_QWORD *)v52);
      }
      else
      {
        ExReleasePushLockExclusiveEx(v262, 0LL);
        KeLeaveCriticalRegion();
      }
      v42 = v277;
    }
    v267 = v53;
    if ( !v53 )
      goto LABEL_466;
    _m_prefetchw(v53 + 4);
    v269 = *((_DWORD *)v53 + 2);
    v56 = *((_BYTE *)v53 + 15);
    if ( (v56 & 0x20) != 0 )
      goto LABEL_471;
    if ( (v56 & 0x40) == 0 )
      goto LABEL_76;
    v253 = HANDLELOCK::pObj((HANDLELOCK *)&v267);
    if ( !*((_WORD *)v253 + 6) || (v47 = (__int64)KeGetCurrentThread(), *((_QWORD *)v253 + 2) != v47) )
    {
LABEL_471:
      HANDLELOCK::vUnlock((HANDLELOCK *)&v267);
      if ( !v268 )
        goto LABEL_103;
    }
    v53 = v267;
LABEL_76:
    if ( *((_BYTE *)v53 + 14) == 1 && v53[6] == WORD1(v41) )
    {
      v57 = SGDGetSessionState(v47);
      v58 = *(_DWORD *)v53 & 0xFFFFFF;
      v47 = *(_QWORD *)(v57 + 24);
      v59 = *(_QWORD *)(v47 + 8008);
      if ( v58 >= 0x10000 )
      {
        if ( *(_DWORD *)v59 > 0x10000u )
        {
          v47 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*(GdiHandleEntryDirectory **)(v59 + 16), *v53, 1)
                + 13);
          if ( (_DWORD)v47 == HIWORD(v58) )
            v58 = (unsigned __int16)v58;
        }
        else
        {
          v58 = *v53;
        }
      }
      v60 = *(_QWORD *)(v59 + 16);
      v61 = *(_DWORD *)(v60 + 2056);
      if ( v58 >= v61 + ((*(unsigned __int16 *)(v60 + 2) + 0xFFFF) << 16)
        || (v58 >= v61
          ? (v47 = ((v58 - v61) >> 16) + 1,
             v62 = *(_QWORD *)(v60 + 8 * v47 + 8),
             v58 += -65536 * ((v58 - v61) >> 16) - v61)
          : (v62 = *(_QWORD *)(v60 + 8)),
            v58 >= *(_DWORD *)(v62 + 20)) )
      {
        v42 = 0LL;
      }
      else
      {
        v47 = 2LL * (unsigned __int8)v58;
        v42 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v62 + 24) + 8 * ((unsigned __int64)v58 >> 8))
                        + 16LL * (unsigned __int8)v58
                        + 8);
      }
      ++*(_DWORD *)(v42 + 8);
    }
    v63 = *(_QWORD *)(SGDGetSessionState(v47) + 24);
    v64 = *(_QWORD *)(v63 + 8008);
    v65 = SGDGetSessionState(v63);
    v66 = *(_DWORD *)v53 & 0xFFFFFF;
    v67 = *(_QWORD *)(*(_QWORD *)(v65 + 24) + 8008LL);
    if ( v66 >= 0x10000 )
    {
      if ( *(_DWORD *)v67 > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*(GdiHandleEntryDirectory **)(v67 + 16), *v53, 1)
             + 13) == HIWORD(v66) )
          v66 = (unsigned __int16)v66;
      }
      else
      {
        v66 = *v53;
      }
    }
    v68 = *(_QWORD *)(v67 + 16);
    v69 = *(_DWORD *)(v68 + 2056);
    if ( v66 >= v69 + ((*(unsigned __int16 *)(v68 + 2) + 0xFFFF) << 16)
      || (v66 >= v69
        ? (v70 = *(_QWORD *)(v68 + 8LL * (((v66 - v69) >> 16) + 1) + 8), v66 += -65536 * ((v66 - v69) >> 16) - v69)
        : (v70 = *(_QWORD *)(v68 + 8)),
          v66 >= *(_DWORD *)(v70 + 20)) )
    {
      v71 = 0LL;
    }
    else
    {
      v71 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v70 + 24) + 8 * ((unsigned __int64)v66 >> 8))
                       + 16LL * (unsigned __int8)v66
                       + 8);
    }
    v72 = (unsigned __int16)*v71 | (*v71 >> 8) & 0xFF0000;
    if ( v72 >= 0x10000 )
    {
      if ( *(_DWORD *)v64 > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *(GdiHandleEntryDirectory **)(v64 + 16),
                                    (unsigned __int16)*v71,
                                    1)
             + 13) == HIWORD(v72) )
          v72 = (unsigned __int16)v72;
      }
      else
      {
        v72 = (unsigned __int16)*v71;
      }
    }
    v73 = *(_QWORD *)(v64 + 16);
    v74 = *(_DWORD *)(v73 + 2056);
    if ( v72 < v74 + ((*(unsigned __int16 *)(v73 + 2) + 0xFFFF) << 16) )
    {
      if ( v72 >= v74 )
      {
        v75 = *(_QWORD *)(v73 + 8LL * (((v72 - v74) >> 16) + 1) + 8);
        v72 += -65536 * ((v72 - v74) >> 16) - v74;
      }
      else
      {
        v75 = *(_QWORD *)(v73 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v75 + 24LL * v72 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v75 + 24) + 8 * ((unsigned __int64)v72 >> 8)) + 16LL * (unsigned __int8)v72,
        0LL);
      KeLeaveCriticalRegion();
    }
    v267 = 0LL;
    v268 = 0;
    KeLeaveCriticalRegion();
LABEL_103:
    v282[0] = v42;
    if ( v42 )
    {
      v76 = *(_DWORD *)(v42 + 40);
      XDCOBJ::vAltUnlockFast((XDCOBJ *)v282);
      if ( (v76 & 1) != 0 )
        goto LABEL_110;
    }
LABEL_105:
    if ( *((_QWORD *)v40 + 11) )
      goto LABEL_110;
    v77 = *((_DWORD *)v40 + 16);
    if ( (v77 & 0x800) == 0 )
    {
      v78 = v263;
      if ( (v77 & 0x1000) == 0 )
        v78 = v264;
      v263 = v78;
      goto LABEL_110;
    }
    v38 = v264;
LABEL_111:
    v39 = v263;
    v79 = v40 == 0LL;
    if ( v40 )
    {
LABEL_114:
      v36 = v271;
      if ( !v79 )
        v39 = v38;
      v80 = v286;
      v37 = *(char **)v39;
      goto LABEL_117;
    }
LABEL_112:
    if ( v39 )
    {
      v79 = v40 == 0LL;
      goto LABEL_114;
    }
    if ( CreateCacheDC((__int64)v286, v288 & 0x4000 | 0x802, 0LL) )
    {
      v23 = (_QWORD *)v270[0];
      continue;
    }
    break;
  }
LABEL_549:
  GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
  return 0LL;
}
