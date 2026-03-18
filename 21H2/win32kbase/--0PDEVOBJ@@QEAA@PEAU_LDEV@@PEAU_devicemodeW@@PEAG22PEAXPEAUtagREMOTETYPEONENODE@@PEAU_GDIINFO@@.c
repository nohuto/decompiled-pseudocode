/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C8640
 * Callers:
 *     hdcOpenDCW @ 0x1C0071480 (hdcOpenDCW.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00771B8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C001AFA8 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C001E6BC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     PushThreadGuardedObject @ 0x1C00232C0 (PushThreadGuardedObject.c)
 *     PopThreadGuardedObject @ 0x1C0023630 (PopThreadGuardedObject.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002E800 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C002E950 (GreReleaseSemaphoreInternal.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     GreCreateSemaphoreInternal @ 0x1C0045014 (GreCreateSemaphoreInternal.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00616E4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C0061BFC (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z @ 0x1C0074C40 (-RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z.c)
 *     ?bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z @ 0x1C0079368 (-bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     PALLOCMEM @ 0x1C0086980 (PALLOCMEM.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C008B640 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C0090D20 (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?GeneratePDEVUniqueUMPDHandle@@YAPEAUHDEV__@@XZ @ 0x1C00BABE4 (-GeneratePDEVUniqueUMPDHandle@@YAPEAUHDEV__@@XZ.c)
 *     ?EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00BC138 (-EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPE.c)
 *     hfontCreate @ 0x1C00BD3AC (hfontCreate.c)
 *     vConvertLogFontW @ 0x1C00BE26C (vConvertLogFontW.c)
 *     IsvConvertLogFontWSupported @ 0x1C00BEC5C (IsvConvertLogFontWSupported.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C00C0F60 (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     GreSetPaletteOwner @ 0x1C00C1130 (GreSetPaletteOwner.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C00C40A4 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _lambda_27fa0b678d056c4f62e221b84b7517f7_::operator() @ 0x1C00D97C0 (_lambda_27fa0b678d056c4f62e221b84b7517f7_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C0179378 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

PDEVOBJ *__fastcall PDEVOBJ::PDEVOBJ(
        PDEVOBJ *this,
        struct _LDEV *a2,
        struct _devicemodeW *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned __int16 *Src,
        void *a7,
        struct tagREMOTETYPEONENODE *a8,
        struct _GDIINFO *a9,
        struct tagDEVINFO *a10,
        int a11,
        unsigned int a12,
        unsigned int a13)
{
  struct PDEV *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct _DRVFN *v21; // rcx
  unsigned int v22; // edx
  int v23; // ebx
  __int64 v24; // rax
  unsigned int v25; // ebx
  void *v26; // rcx
  struct _GDIINFO *v27; // rcx
  _OWORD *v28; // rax
  __int64 v29; // rdx
  __int128 v30; // xmm1
  __int64 v31; // rdx
  _OWORD *v33; // rcx
  __int128 v34; // xmm1
  int v35; // r10d
  int v36; // r8d
  void *v37; // r15
  int v38; // eax
  unsigned __int64 v39; // rdx
  int *v40; // r8
  int v41; // eax
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // edx
  _DWORD *v45; // r8
  int v46; // eax
  int v47; // ecx
  int v48; // edx
  int v49; // ecx
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  unsigned int *v54; // rcx
  unsigned int v55; // edx
  unsigned int v56; // eax
  bool v57; // cc
  unsigned int v58; // r8d
  int v59; // ecx
  unsigned int v60; // r8d
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  int v64; // r14d
  __int64 v66; // rax
  __int64 v67; // rcx
  int v68; // edx
  unsigned int (__fastcall *v69)(PDEVOBJ *); // rax
  __int64 v70; // rcx
  int v71; // edx
  int *v72; // rax
  __int64 v73; // rdx
  signed __int32 v74; // ett
  _DWORD *v75; // rbx
  unsigned int v76; // edi
  __int64 v77; // rdx
  __int64 (__fastcall *v78)(_QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall *v79)(_QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall *v80)(_QWORD, _QWORD, _QWORD); // rax
  _QWORD *v81; // rax
  int v82; // r8d
  _QWORD *v83; // rax
  HSURF *v84; // [rsp+20h] [rbp-E0h]
  unsigned int v85; // [rsp+28h] [rbp-D8h]
  struct _GDIINFO *v86; // [rsp+30h] [rbp-D0h]
  unsigned int v87; // [rsp+38h] [rbp-C8h]
  struct tagDEVINFO *v88; // [rsp+40h] [rbp-C0h]
  HDEV v89; // [rsp+48h] [rbp-B8h]
  unsigned int v90; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v91; // [rsp+68h] [rbp-98h] BYREF
  void *v92; // [rsp+70h] [rbp-90h] BYREF
  __int64 v93; // [rsp+78h] [rbp-88h] BYREF
  struct _DRVFN *v94; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v95; // [rsp+88h] [rbp-78h]
  _QWORD v96[4]; // [rsp+90h] [rbp-70h] BYREF
  int v97; // [rsp+B0h] [rbp-50h]
  _BYTE v98[432]; // [rsp+C0h] [rbp-40h] BYREF

  v92 = a7;
  v17 = PDEV::Allocate(a11);
  *(_QWORD *)this = v17;
  if ( !v17 )
    return this;
  *((_QWORD *)v17 + 3) = v17;
  *(_QWORD *)(*(_QWORD *)this + 1760LL) = a2;
  *(_DWORD *)(*(_QWORD *)this + 1752LL) = 1348756854;
  *(_DWORD *)(*(_QWORD *)this + 2584LL) = a12;
  *(_DWORD *)(*(_QWORD *)this + 2588LL) = a13;
  *(_DWORD *)(*(_QWORD *)this + 3528LL) = 0;
  v18 = *(_QWORD *)this;
  v93 = v18;
  *(_QWORD *)(v18 + 3536) = 0LL;
  v19 = *(_QWORD *)this;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1760LL) + 24LL) != 6 )
  {
    *(_QWORD *)(*(_QWORD *)this + 48LL) = GreCreateSemaphoreInternal(0);
    v19 = *(_QWORD *)this;
    if ( !*(_QWORD *)(*(_QWORD *)this + 48LL) )
      goto LABEL_79;
  }
  if ( (a12 & 1) != 0 )
  {
    *(_DWORD *)(v19 + 2588) = 5;
    v19 = *(_QWORD *)this;
  }
  v20 = *(_QWORD *)(v19 + 1760);
  if ( *(_DWORD *)(v20 + 24) == 1 && *(_DWORD *)(v19 + 2588) == 5 )
  {
    if ( qword_1C029B4B0 && (int)qword_1C029B4B0() >= 0 )
    {
      v21 = 0LL;
      v94 = 0LL;
      v22 = 0;
      v90 = 0;
      if ( qword_1C029B4B8 )
      {
        qword_1C029B4B8(&v94, &v90);
        v21 = v94;
        v22 = v90;
      }
      bFillFunctionTable(v21, v22, (__int64 (**)(void))(*(_QWORD *)this + 2664LL));
    }
  }
  else
  {
    memmove((void *)(v19 + 2664), (const void *)(v20 + 64), 0x340uLL);
  }
  v23 = a11;
  *(_QWORD *)(*(_QWORD *)this + 1680LL) = a8;
  *(_QWORD *)(*(_QWORD *)this + 1496LL) = a5;
  if ( Src && a11 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( Src[v24] );
    v25 = 2 * v24 + 2;
    *(_QWORD *)(*(_QWORD *)this + 3536LL) = PALLOCMEM(v25, 1886221639);
    v26 = *(void **)(*(_QWORD *)this + 3536LL);
    if ( v26 )
      memmove(v26, Src, v25);
    v23 = a11;
  }
  v27 = a9;
  if ( a9 )
  {
    v28 = (_OWORD *)(*(_QWORD *)this + 2104LL);
    v29 = 2LL;
    do
    {
      *v28 = *(_OWORD *)&v27->ulVersion;
      v28[1] = *(_OWORD *)&v27->ulHorzRes;
      v28[2] = *(_OWORD *)&v27->ulNumColors;
      v28[3] = *(_OWORD *)&v27->flTextCaps;
      v28[4] = *(_OWORD *)&v27->ulAspectX;
      v28[5] = *(_OWORD *)&v27->yStyleStep;
      v28[6] = *(_OWORD *)&v27->szlPhysSize.cx;
      v28 += 8;
      v30 = *(_OWORD *)&v27->ciDevice.Red.y;
      v27 = (struct _GDIINFO *)((char *)v27 + 128);
      *(v28 - 1) = v30;
      --v29;
    }
    while ( v29 );
    v31 = 2LL;
    *v28 = *(_OWORD *)&v27->ulVersion;
    v28[1] = *(_OWORD *)&v27->ulHorzRes;
    v28[2] = *(_OWORD *)&v27->ulNumColors;
    v28[3] = *(_OWORD *)&v27->flTextCaps;
    v33 = (_OWORD *)(*(_QWORD *)this + 1792LL);
    do
    {
      *v33 = *(_OWORD *)a10;
      v33[1] = *((_OWORD *)a10 + 1);
      v33[2] = *((_OWORD *)a10 + 2);
      v33[3] = *((_OWORD *)a10 + 3);
      v33[4] = *((_OWORD *)a10 + 4);
      v33[5] = *((_OWORD *)a10 + 5);
      v33[6] = *((_OWORD *)a10 + 6);
      v33 += 8;
      v34 = *((_OWORD *)a10 + 7);
      a10 = (struct tagDEVINFO *)((char *)a10 + 128);
      *(v33 - 1) = v34;
      --v31;
    }
    while ( v31 );
    *v33 = *(_OWORD *)a10;
    v33[1] = *((_OWORD *)a10 + 1);
    v33[2] = *((_OWORD *)a10 + 2);
    *((_QWORD *)v33 + 6) = *((_QWORD *)a10 + 6);
  }
  v95 = (_DWORD *)(v18 + 40);
  SETFLAG(v23, (volatile unsigned int *)(v18 + 40), 0x8000);
  if ( v23 )
  {
    *(_QWORD *)(*(_QWORD *)this + 1768LL) = *((_QWORD *)a2 + 5);
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    *(_QWORD *)(*(_QWORD *)this + 16LL) = GeneratePDEVUniqueUMPDHandle();
    **(_QWORD **)this = gppdevListUMPDInCreate;
    gppdevListUMPDInCreate = *(struct PDEV **)this;
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v36);
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    v35 = 0;
  }
  v97 = v35;
  PushThreadGuardedObject(v96, (__int64)this, (__int64)lambda_27fa0b678d056c4f62e221b84b7517f7_::_lambda_invoker_cdecl_);
  v37 = v92;
  v89 = *(HDEV *)this;
  v88 = (struct tagDEVINFO *)(*(_QWORD *)this + 1792LL);
  v86 = (struct _GDIINFO *)(*(_QWORD *)this + 2104LL);
  v84 = (HSURF *)(*(_QWORD *)this + 1448LL);
  v97 = 1;
  *(_QWORD *)(*(_QWORD *)this + 1768LL) = PDEVOBJ::EnablePDEV(
                                            (PDEVOBJ *)&v93,
                                            a3,
                                            a4,
                                            (__int64)(v89 + 526),
                                            v84,
                                            v85,
                                            v86,
                                            v87,
                                            v88,
                                            v89,
                                            Src,
                                            v92);
  if ( v97 )
    PopThreadGuardedObject(v96);
  v19 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 1768LL) )
    goto LABEL_79;
  if ( *(_DWORD *)(*(_QWORD *)(v19 + 1760) + 24LL) != 6 )
  {
    v38 = *(_DWORD *)(v19 + 2112);
    if ( v38 > 0 )
    {
      LODWORD(v39) = 1000 * v38;
    }
    else if ( v38 )
    {
      LODWORD(v39) = -v38;
    }
    else
    {
      v39 = 25400 * (unsigned __int64)*(unsigned int *)(v19 + 2120) / 0x60;
    }
    *(_DWORD *)(v19 + 2112) = v39;
    v40 = (int *)(*(_QWORD *)this + 2116LL);
    v41 = *v40;
    if ( *v40 > 0 )
    {
      LODWORD(v42) = 1000 * v41;
    }
    else if ( v41 )
    {
      LODWORD(v42) = -v41;
    }
    else
    {
      v42 = 25400 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)this + 2124LL) / 0x60;
    }
    *v40 = v42;
    if ( !v23 )
    {
      v43 = *(_QWORD *)this;
      v44 = *(_DWORD *)(*(_QWORD *)this + 2148LL);
      if ( *(_DWORD *)(*(_QWORD *)this + 2144LL) != v44 )
      {
        if ( (unsigned __int16)(*(_WORD *)(v43 + 2150) - 100) <= 0x190u )
        {
          *(_DWORD *)(v43 + 3528) = v44;
          *(_DWORD *)(*(_QWORD *)this + 2148LL) = *(_DWORD *)(*(_QWORD *)this + 2144LL);
        }
        else
        {
          *(_DWORD *)(v43 + 2148) = 0;
          *(_DWORD *)(*(_QWORD *)this + 2144LL) = 0;
        }
      }
    }
    v45 = *(_DWORD **)this;
    if ( !*(_DWORD *)(*(_QWORD *)this + 2144LL) )
    {
      v45[536] = 96;
      v45 = *(_DWORD **)this;
    }
    if ( !v45[537] )
    {
      v45[537] = 96;
      v45 = *(_DWORD **)this;
    }
    if ( v45[527] == 1 )
    {
      v45[545] = 1;
      *(_DWORD *)(*(_QWORD *)this + 2184LL) = 1;
      *(_DWORD *)(*(_QWORD *)this + 2188LL) = 3;
      v45 = *(_DWORD **)this;
    }
    v46 = v45[527];
    v47 = 17424;
    if ( (v46 & 0xFFFFFFFB) != 0 )
      v47 = 28313;
    v48 = v47 | 0x1000;
    if ( v46 != 1 )
      v48 = v47;
    v49 = v48 | 0x100;
    if ( (v45[448] & 0x80000) == 0 )
      v49 = v48;
    v45[535] = v49;
    EPALOBJ::EPALOBJ((EPALOBJ *)&v91, *(HPALETTE *)(*(_QWORD *)this + 2088LL));
    v50 = v91;
    if ( !v91 )
      goto LABEL_78;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_GdiEnableLiveKernelDump__private_reporting,
      23792193LL,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
      1,
      3);
    if ( (*(_DWORD *)(v50 + 24) & 0x1000000) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v51, v53);
      if ( (*(_DWORD *)(v50 + 24) & 0x1000000) == 0 )
        goto LABEL_78;
    }
    if ( !*(_DWORD *)(v50 + 28) )
    {
      v54 = *(unsigned int **)(v50 + 112);
      v55 = *v54;
      v56 = v54[1];
      v57 = v56 <= *v54;
      if ( v56 < *v54 )
      {
        v58 = v54[2];
        if ( v55 > v58 )
        {
          v59 = v56 <= v58;
LABEL_71:
          *(_DWORD *)(*(_QWORD *)this + 2336LL) = v59;
          goto LABEL_73;
        }
        v57 = v56 <= v55;
      }
      if ( !v57 )
      {
        v60 = v54[2];
        if ( v56 > v60 )
        {
          v59 = ((v60 | 0x300000000LL) - (unsigned __int64)v55) >> 32;
          goto LABEL_71;
        }
      }
      *(_DWORD *)(*(_QWORD *)this + 2336LL) = (v56 < v55) + 4;
    }
LABEL_73:
    if ( (*(_DWORD *)(*(_QWORD *)this + 2140LL) & 0x100) != 0 )
    {
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_GdiEnableLiveKernelDump__private_reporting,
        23792193LL,
        0LL,
        0LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
        1,
        3);
      v64 = a11;
      if ( a11 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v62, v61, v63);
        if ( *(_DWORD *)(v50 + 28) != 256 )
        {
          *(_DWORD *)(*(_QWORD *)this + 1792LL) &= ~0x80000u;
          *(_DWORD *)(*(_QWORD *)this + 2140LL) &= ~0x100u;
LABEL_83:
          if ( (unsigned int)GreSetPaletteOwner(*(void **)v50, 0) )
            goto LABEL_84;
LABEL_78:
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v91);
LABEL_79:
          lambda_27fa0b678d056c4f62e221b84b7517f7_::operator()(v19, this);
          return this;
        }
      }
      if ( !(unsigned int)CreateSurfacePal(
                            v50,
                            v61,
                            *(unsigned int *)(*(_QWORD *)this + 2136LL),
                            *(unsigned int *)(*(_QWORD *)this + 2208LL)) )
        goto LABEL_78;
    }
    else
    {
      v64 = a11;
    }
    if ( !v64 )
    {
LABEL_84:
      v66 = *(_QWORD *)this;
      v91 = 0LL;
      *(_QWORD *)(v66 + 1776) = v50;
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v91);
      v67 = *(_QWORD *)this;
      if ( !*(_QWORD *)(*(_QWORD *)this + 1448LL)
        || (v68 = *(_DWORD *)(*(_QWORD *)(v67 + 1760) + 24LL), v68 == 1)
        || v68 == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v67 + 1760) + 24LL) == 2 )
        {
          if ( !qword_1C029B4C0 || (int)qword_1C029B4C0() < 0 )
            goto LABEL_96;
          v69 = (unsigned int (__fastcall *)(PDEVOBJ *))qword_1C029B4C8;
        }
        else
        {
          if ( !qword_1C029B4D0 || (int)qword_1C029B4D0() < 0 )
            goto LABEL_96;
          v69 = (unsigned int (__fastcall *)(PDEVOBJ *))qword_1C029B4D8;
        }
        if ( !v69 || !v69(this) )
          goto LABEL_79;
      }
LABEL_96:
      *(_QWORD *)(*(_QWORD *)this + 2536LL) = v37;
      v70 = *(_QWORD *)this;
      v71 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1760LL) + 24LL);
      if ( ((v71 - 1) & 0xFFFFFFFD) == 0 || v71 == 4 )
      {
        *(_QWORD *)(v70 + 1704) = *(_QWORD *)(v18 + 2904);
        *(_QWORD *)(*(_QWORD *)this + 1696LL) = *(_QWORD *)(v18 + 2896);
        v92 = ghsemDriverMgmt;
        EngAcquireSemaphore(ghsemDriverMgmt);
        *(_QWORD *)(*(_QWORD *)this + 56LL) = GreCreateSemaphoreInternal(0);
        if ( !*(_QWORD *)(*(_QWORD *)this + 56LL) )
        {
          SEMOBJ::vUnlock((PERESOURCE *)&v92);
          goto LABEL_79;
        }
        *(_DWORD *)(*(_QWORD *)this + 40LL) |= 1u;
        SEMOBJ::vUnlock((PERESOURCE *)&v92);
        v70 = *(_QWORD *)this;
      }
      *(_QWORD *)(v70 + 1736) = *(_QWORD *)(v18 + 2840);
      *(_QWORD *)(*(_QWORD *)this + 1720LL) = *(_QWORD *)(v18 + 2968);
      *(_QWORD *)(*(_QWORD *)this + 1728LL) = *(_QWORD *)(v18 + 3368);
      *(_QWORD *)(*(_QWORD *)this + 1744LL) = *(_QWORD *)(v18 + 3360);
      if ( qword_1C029B4E0 && (int)qword_1C029B4E0() >= 0 )
      {
        v72 = qword_1C029B4E8 ? (int *)qword_1C029B4E8() : 0LL;
        pgbFinishDefGUIFontInit = v72;
        if ( *v72 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1760LL) + 24LL) == 1 )
          {
            if ( qword_1C029B4F0 && (int)qword_1C029B4F0() >= 0 && qword_1C029B4F8 )
              qword_1C029B4F8(*(unsigned int *)(*(_QWORD *)this + 2148LL));
            *pgbFinishDefGUIFontInit = 0;
          }
        }
      }
      v73 = *(_QWORD *)this;
      _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
      do
        v74 = *(_DWORD *)(v73 + 40);
      while ( v74 != _InterlockedCompareExchange((volatile signed __int32 *)(v73 + 40), v74 & 0xFFFFFFBF, v74) );
      v75 = *(_DWORD **)this;
      v76 = 12 * *(_DWORD *)(*(_QWORD *)this + 2148LL) / 0x48u;
      memset(v98, 0, 0x1A4uLL);
      if ( !v75[449] )
      {
        v75[449] = v76;
        v75 = *(_DWORD **)this;
      }
      if ( !v75[472] )
      {
        v75[472] = v76;
        v75 = *(_DWORD **)this;
      }
      if ( !v75[495] )
        v75[495] = v76;
      if ( (int)IsvConvertLogFontWSupported() >= 0 )
        vConvertLogFontW();
      v77 = *(_QWORD *)this;
      if ( *(_DWORD *)(*(_QWORD *)this + 2108LL) != 1 )
      {
        if ( !qword_1C029B510 )
          goto LABEL_129;
        if ( (int)qword_1C029B510() < 0 )
          goto LABEL_129;
        v78 = hfontCreate((__int64)v98, 4LL);
        *(_QWORD *)(*(_QWORD *)this + 1424LL) = v78;
        if ( v78 )
          goto LABEL_129;
        v77 = *(_QWORD *)this;
      }
      *(_QWORD *)(v77 + 1424) = gahStockObjects[13];
LABEL_129:
      if ( (int)IsvConvertLogFontWSupported() >= 0 )
        vConvertLogFontW();
      v79 = hfontCreate((__int64)v98, 5LL);
      *(_QWORD *)(*(_QWORD *)this + 1432LL) = v79;
      if ( !v79 )
        *(_QWORD *)(*(_QWORD *)this + 1432LL) = gahStockObjects[13];
      vConvertLogFontW();
      v80 = hfontCreate((__int64)v98, 6LL);
      v23 = a11;
      *(_QWORD *)(*(_QWORD *)this + 1440LL) = v80;
      if ( !v80 )
        *(_QWORD *)(*(_QWORD *)this + 1440LL) = gahStockObjects[16];
      goto LABEL_135;
    }
    goto LABEL_83;
  }
LABEL_135:
  PDEV::InitializeClientReferenceCount(*(PDEV **)this);
  *(_DWORD *)(*(_QWORD *)this + 12LL) = 1;
  if ( (*v95 & 1) != 0 )
  {
    PDEVOBJ::bDisabled((PDEVOBJ *)&v93, 1);
    vResetSurfacePalette(*(_QWORD **)this);
  }
  v81 = (_QWORD *)(*(_QWORD *)this + 2600LL);
  v81[1] = v81;
  *v81 = v81;
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
  if ( v23 )
    RemovePDEVFromList(&gppdevListUMPDInCreate, *(struct PDEV **)this);
  **(_QWORD **)this = gppdevList;
  gppdevList = *(struct PDEV **)this;
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v82);
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  PDEVOBJ::CompletePDEV((PDEVOBJ *)&v93, *(struct DHPDEV__ **)(*(_QWORD *)this + 1768LL), *(HDEV *)this);
  v83 = (_QWORD *)(*(_QWORD *)this + 3504LL);
  v83[1] = v83;
  *v83 = v83;
  return this;
}
