/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00B9020
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0014AC8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     hdcOpenDCW @ 0x1C0022A00 (hdcOpenDCW.c)
 * Callees:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C000ED74 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C000F22C (-SETFLAG@@YAXHAECKK@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00296EC (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C002BA18 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     PALLOCMEM2 @ 0x1C002C278 (PALLOCMEM2.c)
 *     PopThreadGuardedObject @ 0x1C002D4F0 (PopThreadGuardedObject.c)
 *     PushThreadGuardedObject @ 0x1C002E110 (PushThreadGuardedObject.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0039FC4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003A0E0 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C003A230 (EngAcquireSemaphore.c)
 *     GreCreateSemaphoreInternal @ 0x1C005C364 (GreCreateSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C007B1D0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C007ED80 (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007EE00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C00807A0 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 *     ?bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z @ 0x1C00A7C68 (-bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z.c)
 *     ?GeneratePDEVUniqueUMPDHandle@@YAPEAUHDEV__@@XZ @ 0x1C00A93A4 (-GeneratePDEVUniqueUMPDHandle@@YAPEAUHDEV__@@XZ.c)
 *     GreSetPaletteOwner @ 0x1C00A9B10 (GreSetPaletteOwner.c)
 *     ?EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00AB130 (-EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPE.c)
 *     hfontCreate @ 0x1C00AB88C (hfontCreate.c)
 *     vConvertLogFontW @ 0x1C00ACB84 (vConvertLogFontW.c)
 *     ?RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z @ 0x1C00AD4E8 (-RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z.c)
 *     IsvConvertLogFontWSupported @ 0x1C00AD808 (IsvConvertLogFontWSupported.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C00B0460 (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C00B4E5C (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     _lambda_45072801a0d31dffc7965423336b068f_::operator() @ 0x1C00C8860 (_lambda_45072801a0d31dffc7965423336b068f_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C014D4BC (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C020005C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 SemaphoreInternal; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // eax
  struct _DRVFN *v23; // rcx
  unsigned int v24; // edx
  int v25; // ebx
  __int64 v26; // rax
  unsigned int v27; // ebx
  void *v28; // rcx
  struct _GDIINFO *v29; // rcx
  _OWORD *v30; // rax
  __int64 v31; // rdx
  __int128 v32; // xmm1
  __int64 v33; // rdx
  _OWORD *v35; // rcx
  __int128 v36; // xmm1
  int v37; // r10d
  int v38; // r8d
  void *v39; // r15
  int v40; // eax
  unsigned __int64 v41; // rdx
  int *v42; // r8
  int v43; // eax
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // edx
  _DWORD *v47; // r8
  int v48; // eax
  int v49; // ecx
  int v50; // edx
  int v51; // ecx
  __int64 v52; // rdx
  __int64 v53; // rbx
  unsigned int *v54; // rcx
  unsigned int v55; // eax
  bool v56; // cc
  unsigned int v57; // r8d
  int v58; // ecx
  unsigned int v59; // r8d
  __int64 v60; // rax
  int v61; // edx
  int v62; // eax
  __int64 (__fastcall *v63)(PDEVOBJ *); // rax
  int v64; // eax
  int v65; // eax
  __int64 v66; // rcx
  int v67; // edx
  int v69; // eax
  int v70; // r14d
  int *v71; // rax
  __int64 v72; // rcx
  int v73; // eax
  __int64 v74; // rdx
  signed __int32 v75; // ett
  _DWORD *v76; // rbx
  unsigned int v77; // edi
  __int64 v78; // rdx
  __int64 (__fastcall *v79)(_QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall *v80)(_QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall *v81)(_QWORD, _QWORD, _QWORD); // rax
  _QWORD *v82; // rax
  int v83; // r8d
  _QWORD *v84; // rax
  HSURF *v85; // [rsp+20h] [rbp-E0h]
  unsigned int v86; // [rsp+28h] [rbp-D8h]
  struct _GDIINFO *v87; // [rsp+30h] [rbp-D0h]
  unsigned int v88; // [rsp+38h] [rbp-C8h]
  struct tagDEVINFO *v89; // [rsp+40h] [rbp-C0h]
  HDEV v90; // [rsp+48h] [rbp-B8h]
  unsigned int v91; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v92; // [rsp+68h] [rbp-98h] BYREF
  void *v93; // [rsp+70h] [rbp-90h] BYREF
  __int64 v94; // [rsp+78h] [rbp-88h] BYREF
  struct _DRVFN *v95; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v96; // [rsp+88h] [rbp-78h]
  _QWORD v97[4]; // [rsp+90h] [rbp-70h] BYREF
  int v98; // [rsp+B0h] [rbp-50h]
  _BYTE v99[432]; // [rsp+C0h] [rbp-40h] BYREF

  v93 = a7;
  v17 = PDEV::Allocate(a11);
  *(_QWORD *)this = v17;
  if ( !v17 )
    return this;
  *((_QWORD *)v17 + 3) = v17;
  *(_QWORD *)(*(_QWORD *)this + 1792LL) = a2;
  *(_DWORD *)(*(_QWORD *)this + 1784LL) = 1348756854;
  *(_DWORD *)(*(_QWORD *)this + 2608LL) = a12;
  *(_DWORD *)(*(_QWORD *)this + 2612LL) = a13;
  *(_DWORD *)(*(_QWORD *)this + 3552LL) = 0;
  v18 = *(_QWORD *)this;
  v94 = v18;
  *(_QWORD *)(v18 + 3560) = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1792LL) + 24LL) != 6 )
  {
    SemaphoreInternal = GreCreateSemaphoreInternal(0);
    *(_QWORD *)(*(_QWORD *)this + 48LL) = SemaphoreInternal;
    if ( !*(_QWORD *)(*(_QWORD *)this + 48LL) )
      goto LABEL_105;
    SemaphoreInternal = GreCreateSemaphoreInternal(0);
    *(_QWORD *)(*(_QWORD *)this + 56LL) = SemaphoreInternal;
    if ( !SemaphoreInternal )
      goto LABEL_105;
  }
  if ( (a12 & 1) != 0 )
    *(_DWORD *)(*(_QWORD *)this + 2612LL) = 5;
  v20 = *(_QWORD *)this;
  v21 = *(_QWORD *)(*(_QWORD *)this + 1792LL);
  if ( *(_DWORD *)(v21 + 24) == 1 && *(_DWORD *)(v20 + 2612) == 5 )
  {
    if ( qword_1C0255740 )
      v22 = qword_1C0255740();
    else
      v22 = -1073741637;
    if ( v22 >= 0 )
    {
      v23 = 0LL;
      v95 = 0LL;
      v24 = 0;
      v91 = 0;
      if ( qword_1C0255748 )
      {
        qword_1C0255748(&v95, &v91);
        v23 = v95;
        v24 = v91;
      }
      bFillFunctionTable(v23, v24, (__int64 (**)(void))(*(_QWORD *)this + 2688LL));
    }
  }
  else
  {
    memmove((void *)(v20 + 2688), (const void *)(v21 + 64), 0x340uLL);
  }
  v25 = a11;
  *(_QWORD *)(*(_QWORD *)this + 1712LL) = a8;
  *(_QWORD *)(*(_QWORD *)this + 1504LL) = a5;
  if ( Src && a11 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( Src[v26] );
    v27 = 2 * v26 + 2;
    *(_QWORD *)(*(_QWORD *)this + 3560LL) = PALLOCMEM2(v27, 1886221639LL, 1);
    v28 = *(void **)(*(_QWORD *)this + 3560LL);
    if ( v28 )
      memmove(v28, Src, v27);
    v25 = a11;
  }
  v29 = a9;
  if ( a9 )
  {
    v30 = (_OWORD *)(*(_QWORD *)this + 2136LL);
    v31 = 2LL;
    do
    {
      *v30 = *(_OWORD *)&v29->ulVersion;
      v30[1] = *(_OWORD *)&v29->ulHorzRes;
      v30[2] = *(_OWORD *)&v29->ulNumColors;
      v30[3] = *(_OWORD *)&v29->flTextCaps;
      v30[4] = *(_OWORD *)&v29->ulAspectX;
      v30[5] = *(_OWORD *)&v29->yStyleStep;
      v30[6] = *(_OWORD *)&v29->szlPhysSize.cx;
      v30 += 8;
      v32 = *(_OWORD *)&v29->ciDevice.Red.y;
      v29 = (struct _GDIINFO *)((char *)v29 + 128);
      *(v30 - 1) = v32;
      --v31;
    }
    while ( v31 );
    v33 = 2LL;
    *v30 = *(_OWORD *)&v29->ulVersion;
    v30[1] = *(_OWORD *)&v29->ulHorzRes;
    v30[2] = *(_OWORD *)&v29->ulNumColors;
    v30[3] = *(_OWORD *)&v29->flTextCaps;
    v35 = (_OWORD *)(*(_QWORD *)this + 1824LL);
    do
    {
      *v35 = *(_OWORD *)a10;
      v35[1] = *((_OWORD *)a10 + 1);
      v35[2] = *((_OWORD *)a10 + 2);
      v35[3] = *((_OWORD *)a10 + 3);
      v35[4] = *((_OWORD *)a10 + 4);
      v35[5] = *((_OWORD *)a10 + 5);
      v35[6] = *((_OWORD *)a10 + 6);
      v35 += 8;
      v36 = *((_OWORD *)a10 + 7);
      a10 = (struct tagDEVINFO *)((char *)a10 + 128);
      *(v35 - 1) = v36;
      --v33;
    }
    while ( v33 );
    *v35 = *(_OWORD *)a10;
    v35[1] = *((_OWORD *)a10 + 1);
    v35[2] = *((_OWORD *)a10 + 2);
    *((_QWORD *)v35 + 6) = *((_QWORD *)a10 + 6);
  }
  v96 = (_DWORD *)(v18 + 40);
  SETFLAG(v25, (volatile unsigned int *)(v18 + 40), 0x8000);
  if ( v25 )
  {
    *(_QWORD *)(*(_QWORD *)this + 1800LL) = *((_QWORD *)a2 + 5);
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    *(_QWORD *)(*(_QWORD *)this + 16LL) = GeneratePDEVUniqueUMPDHandle();
    **(_QWORD **)this = gppdevListUMPDInCreate;
    gppdevListUMPDInCreate = *(struct PDEV **)this;
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v38);
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    v37 = 0;
  }
  v98 = v37;
  PushThreadGuardedObject(v97, (__int64)this, (__int64)lambda_45072801a0d31dffc7965423336b068f_::_lambda_invoker_cdecl_);
  v39 = v93;
  v90 = *(HDEV *)this;
  v89 = (struct tagDEVINFO *)(*(_QWORD *)this + 1824LL);
  v87 = (struct _GDIINFO *)(*(_QWORD *)this + 2136LL);
  v85 = (HSURF *)(*(_QWORD *)this + 1456LL);
  v98 = 1;
  *(_QWORD *)(*(_QWORD *)this + 1800LL) = PDEVOBJ::EnablePDEV(
                                            (PDEVOBJ *)&v94,
                                            a3,
                                            a4,
                                            (__int64)(v90 + 534),
                                            v85,
                                            v86,
                                            v87,
                                            v88,
                                            v89,
                                            v90,
                                            Src,
                                            v93);
  if ( v98 )
  {
    PopThreadGuardedObject(v97);
    v98 = 0;
  }
  SemaphoreInternal = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 1800LL) )
    goto LABEL_105;
  if ( *(_DWORD *)(*(_QWORD *)(SemaphoreInternal + 1792) + 24LL) != 6 )
  {
    v40 = *(_DWORD *)(SemaphoreInternal + 2144);
    if ( v40 > 0 )
    {
      LODWORD(v41) = 1000 * v40;
    }
    else if ( v40 )
    {
      LODWORD(v41) = -v40;
    }
    else
    {
      v41 = 25400 * (unsigned __int64)*(unsigned int *)(SemaphoreInternal + 2152) / 0x60;
    }
    *(_DWORD *)(SemaphoreInternal + 2144) = v41;
    v42 = (int *)(*(_QWORD *)this + 2148LL);
    v43 = *v42;
    if ( *v42 > 0 )
    {
      LODWORD(v44) = 1000 * v43;
    }
    else if ( v43 )
    {
      LODWORD(v44) = -v43;
    }
    else
    {
      v44 = 25400 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)this + 2156LL) / 0x60;
    }
    *v42 = v44;
    if ( !v25 )
    {
      v45 = *(_QWORD *)this;
      v46 = *(_DWORD *)(*(_QWORD *)this + 2180LL);
      if ( *(_DWORD *)(*(_QWORD *)this + 2176LL) != v46 )
      {
        if ( (unsigned __int16)(*(_WORD *)(v45 + 2182) - 100) <= 0x190u )
        {
          *(_DWORD *)(v45 + 3552) = v46;
          *(_DWORD *)(*(_QWORD *)this + 2180LL) = *(_DWORD *)(*(_QWORD *)this + 2176LL);
        }
        else
        {
          *(_DWORD *)(v45 + 2180) = 0;
          *(_DWORD *)(*(_QWORD *)this + 2176LL) = 0;
        }
      }
    }
    v47 = *(_DWORD **)this;
    if ( !*(_DWORD *)(*(_QWORD *)this + 2176LL) )
    {
      v47[544] = 96;
      v47 = *(_DWORD **)this;
    }
    if ( !v47[545] )
    {
      v47[545] = 96;
      v47 = *(_DWORD **)this;
    }
    if ( v47[535] == 1 )
    {
      v47[553] = 1;
      *(_DWORD *)(*(_QWORD *)this + 2216LL) = 1;
      *(_DWORD *)(*(_QWORD *)this + 2220LL) = 3;
      v47 = *(_DWORD **)this;
    }
    v48 = v47[535];
    v49 = 17424;
    if ( (v48 & 0xFFFFFFFB) != 0 )
      v49 = 28313;
    v50 = v49 | 0x1000;
    if ( v48 != 1 )
      v50 = v49;
    v51 = v50 | 0x100;
    if ( (v47[456] & 0x80000) == 0 )
      v51 = v50;
    v47[543] = v51;
    EPALOBJ::EPALOBJ((EPALOBJ *)&v92, *(HPALETTE *)(*(_QWORD *)this + 2120LL));
    v53 = v92;
    if ( !v92 )
      goto LABEL_147;
    if ( (*(_DWORD *)(v92 + 24) & 0x1000000) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      if ( (*(_DWORD *)(v53 + 24) & 0x1000000) == 0 )
        goto LABEL_147;
    }
    if ( !*(_DWORD *)(v53 + 28) )
    {
      v54 = *(unsigned int **)(v53 + 112);
      v52 = *v54;
      v55 = v54[1];
      v56 = v55 <= (unsigned int)v52;
      if ( v55 < (unsigned int)v52 )
      {
        v57 = v54[2];
        if ( (unsigned int)v52 > v57 )
        {
          v58 = v55 <= v57;
LABEL_74:
          *(_DWORD *)(*(_QWORD *)this + 2368LL) = v58;
          goto LABEL_76;
        }
        v56 = v55 <= (unsigned int)v52;
      }
      if ( !v56 )
      {
        v59 = v54[2];
        if ( v55 > v59 )
        {
          v58 = 3 - (v59 < (unsigned int)v52);
          goto LABEL_74;
        }
      }
      *(_DWORD *)(*(_QWORD *)this + 2368LL) = (v55 < (unsigned int)v52) + 4;
    }
LABEL_76:
    if ( (*(_DWORD *)(*(_QWORD *)this + 2172LL) & 0x100) != 0 )
    {
      if ( !a11 || (MicrosoftTelemetryAssertTriggeredNoArgsKM(), *(_DWORD *)(v53 + 28) == 256) )
      {
        if ( !(unsigned int)CreateSurfacePal(
                              v53,
                              v52,
                              *(unsigned int *)(*(_QWORD *)this + 2168LL),
                              *(unsigned int *)(*(_QWORD *)this + 2240LL)) )
          goto LABEL_147;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)this + 1824LL) &= ~0x80000u;
        *(_DWORD *)(*(_QWORD *)this + 2172LL) &= ~0x100u;
      }
    }
    if ( !a11 || (unsigned int)GreSetPaletteOwner(*(void **)v53, 0) )
    {
      v60 = *(_QWORD *)this;
      v92 = 0LL;
      *(_QWORD *)(v60 + 1808) = v53;
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v92);
      SemaphoreInternal = *(_QWORD *)this;
      if ( *(_QWORD *)(*(_QWORD *)this + 1456LL) )
      {
        v61 = *(_DWORD *)(*(_QWORD *)(SemaphoreInternal + 1792) + 24LL);
        if ( v61 != 1 && v61 != 4 )
          goto LABEL_101;
      }
      if ( *(_DWORD *)(*(_QWORD *)(SemaphoreInternal + 1792) + 24LL) == 2 )
      {
        if ( qword_1C0255750 )
          v62 = qword_1C0255750();
        else
          v62 = -1073741637;
        if ( v62 < 0 )
          goto LABEL_101;
        v63 = (__int64 (__fastcall *)(PDEVOBJ *))qword_1C0255758;
      }
      else
      {
        if ( qword_1C0255760 )
          v64 = qword_1C0255760();
        else
          v64 = -1073741637;
        if ( v64 < 0 )
          goto LABEL_101;
        v63 = (__int64 (__fastcall *)(PDEVOBJ *))qword_1C0255768;
      }
      if ( v63 )
        v65 = v63(this);
      else
        v65 = 0;
      if ( !v65 )
        goto LABEL_105;
LABEL_101:
      *(_QWORD *)(*(_QWORD *)this + 2560LL) = v39;
      v66 = *(_QWORD *)this;
      v67 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1792LL) + 24LL);
      if ( ((v67 - 1) & 0xFFFFFFFD) == 0 || v67 == 4 )
      {
        *(_QWORD *)(v66 + 1736) = *(_QWORD *)(v18 + 2928);
        *(_QWORD *)(*(_QWORD *)this + 1728LL) = *(_QWORD *)(v18 + 2920);
        v93 = ghsemDriverMgmt;
        EngAcquireSemaphore(ghsemDriverMgmt);
        *(_QWORD *)(*(_QWORD *)this + 64LL) = GreCreateSemaphoreInternal(0);
        if ( !*(_QWORD *)(*(_QWORD *)this + 64LL) )
        {
          SEMOBJ::vUnlock((PERESOURCE *)&v93);
LABEL_105:
          lambda_45072801a0d31dffc7965423336b068f_::operator()(SemaphoreInternal, this);
          return this;
        }
        *(_DWORD *)(*(_QWORD *)this + 40LL) |= 1u;
        SEMOBJ::vUnlock((PERESOURCE *)&v93);
        v66 = *(_QWORD *)this;
      }
      *(_QWORD *)(v66 + 1768) = *(_QWORD *)(v18 + 2864);
      *(_QWORD *)(*(_QWORD *)this + 1752LL) = *(_QWORD *)(v18 + 2992);
      *(_QWORD *)(*(_QWORD *)this + 1760LL) = *(_QWORD *)(v18 + 3392);
      *(_QWORD *)(*(_QWORD *)this + 1776LL) = *(_QWORD *)(v18 + 3384);
      if ( qword_1C0255770 )
      {
        v69 = qword_1C0255770();
        v70 = -1073741637;
      }
      else
      {
        v70 = -1073741637;
        v69 = -1073741637;
      }
      if ( v69 >= 0 )
      {
        v71 = qword_1C0255778 ? (int *)qword_1C0255778() : 0LL;
        pgbFinishDefGUIFontInit = v71;
        if ( *v71 )
        {
          v72 = *(_QWORD *)this;
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1792LL) + 24LL) == 1 )
          {
            if ( qword_1C0255780 )
            {
              v73 = qword_1C0255780();
              v72 = *(_QWORD *)this;
            }
            else
            {
              v73 = -1073741637;
            }
            if ( v73 >= 0 && qword_1C0255788 )
              qword_1C0255788(*(unsigned int *)(v72 + 2180));
            *pgbFinishDefGUIFontInit = 0;
          }
        }
      }
      v74 = *(_QWORD *)this;
      _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
      do
        v75 = *(_DWORD *)(v74 + 40);
      while ( v75 != _InterlockedCompareExchange((volatile signed __int32 *)(v74 + 40), v75 & 0xFFFFFFBF, v75) );
      *(_DWORD *)(*(_QWORD *)this + 3568LL) = 0;
      v76 = *(_DWORD **)this;
      v77 = 12 * *(_DWORD *)(*(_QWORD *)this + 2180LL) / 0x48u;
      memset(v99, 0, 0x1A4uLL);
      if ( !v76[457] )
      {
        v76[457] = v77;
        v76 = *(_DWORD **)this;
      }
      if ( !v76[480] )
      {
        v76[480] = v77;
        v76 = *(_DWORD **)this;
      }
      if ( !v76[503] )
        v76[503] = v77;
      if ( (int)IsvConvertLogFontWSupported() >= 0 )
        vConvertLogFontW();
      v78 = *(_QWORD *)this;
      if ( *(_DWORD *)(*(_QWORD *)this + 2140LL) != 1 )
      {
        if ( qword_1C02557A0 )
          v70 = qword_1C02557A0();
        if ( v70 < 0 )
          goto LABEL_141;
        v79 = hfontCreate((__int64)v99, 4LL);
        *(_QWORD *)(*(_QWORD *)this + 1432LL) = v79;
        if ( v79 )
          goto LABEL_141;
        v78 = *(_QWORD *)this;
      }
      *(_QWORD *)(v78 + 1432) = gahStockObjects[13];
LABEL_141:
      if ( (int)IsvConvertLogFontWSupported() >= 0 )
        vConvertLogFontW();
      v80 = hfontCreate((__int64)v99, 5LL);
      *(_QWORD *)(*(_QWORD *)this + 1440LL) = v80;
      if ( !v80 )
        *(_QWORD *)(*(_QWORD *)this + 1440LL) = gahStockObjects[13];
      vConvertLogFontW();
      v81 = hfontCreate((__int64)v99, 6LL);
      v25 = a11;
      *(_QWORD *)(*(_QWORD *)this + 1448LL) = v81;
      if ( !v81 )
        *(_QWORD *)(*(_QWORD *)this + 1448LL) = gahStockObjects[16];
      goto LABEL_148;
    }
LABEL_147:
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v92);
    goto LABEL_105;
  }
LABEL_148:
  PDEV::InitializeClientReferenceCount(*(PDEV **)this);
  *(_DWORD *)(*(_QWORD *)this + 12LL) = 1;
  if ( (*v96 & 1) != 0 )
  {
    PDEVOBJ::bDisabled((PDEVOBJ *)&v94, 1);
    vResetSurfacePalette(*(_QWORD **)this);
  }
  v82 = (_QWORD *)(*(_QWORD *)this + 2624LL);
  v82[1] = v82;
  *v82 = v82;
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
  if ( v25 )
    RemovePDEVFromList(&gppdevListUMPDInCreate, *(struct PDEV **)this);
  **(_QWORD **)this = gppdevList;
  gppdevList = *(struct PDEV **)this;
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v83);
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  PDEVOBJ::CompletePDEV((PDEVOBJ *)&v94, *(struct DHPDEV__ **)(*(_QWORD *)this + 1800LL), *(HDEV *)this);
  v84 = (_QWORD *)(*(_QWORD *)this + 3528LL);
  v84[1] = v84;
  *v84 = v84;
  return this;
}
