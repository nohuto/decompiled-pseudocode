/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0025090
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0024834 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     hdcOpenDCW @ 0x1C003C8E0 (hdcOpenDCW.c)
 * Callees:
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C001D690 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00219D4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z @ 0x1C0027350 (-bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00273B4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C0027484 (-SETFLAG@@YAXHAECKK@Z.c)
 *     GreCreateSemaphoreInternal @ 0x1C002B04C (GreCreateSemaphoreInternal.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C002D3CC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     PushThreadGuardedObject @ 0x1C0044340 (PushThreadGuardedObject.c)
 *     PopThreadGuardedObject @ 0x1C00453C0 (PopThreadGuardedObject.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C004B6D0 (GreReleaseSemaphoreInternal.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C008D2C0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     PALLOCMEM @ 0x1C009218C (PALLOCMEM.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C00A0C7C (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00CD3F8 (-EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPE.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C00D16A0 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     vConvertLogFontW @ 0x1C00D16D8 (vConvertLogFontW.c)
 *     hfontCreate @ 0x1C00D1D60 (hfontCreate.c)
 *     ?RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z @ 0x1C00D2230 (-RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z.c)
 *     IsvConvertLogFontWSupported @ 0x1C00D2270 (IsvConvertLogFontWSupported.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C00D2A84 (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00D4158 (--1EPALOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _lambda_792d576b28627a5f7e8ec309c675ba6b_::operator() @ 0x1C00DE208 (_lambda_792d576b28627a5f7e8ec309c675ba6b_--operator().c)
 *     Feature_GdiEnableLiveKernelDump__private_ReportDeviceUsage @ 0x1C00DE33C (Feature_GdiEnableLiveKernelDump__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ?GeneratePDEVUniqueUMPDHandle@@YAPEAUHDEV__@@XZ @ 0x1C0182864 (-GeneratePDEVUniqueUMPDHandle@@YAPEAUHDEV__@@XZ.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C0199BBC (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
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
        unsigned int a11,
        unsigned int a12,
        unsigned int a13)
{
  struct PDEV *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx
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
  __int64 v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rdx
  void *v38; // r13
  unsigned int v39; // r9d
  int v40; // eax
  unsigned __int64 v41; // rdx
  int *v42; // r8
  int v43; // eax
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // edx
  __int64 v47; // r8
  int v48; // ecx
  int v49; // eax
  int v50; // edx
  int v51; // ecx
  unsigned __int16 *v52; // rbx
  unsigned int *v53; // rax
  unsigned int v54; // r8d
  unsigned int v55; // edx
  bool v56; // cc
  unsigned int v57; // r9d
  int v58; // ecx
  unsigned int v59; // ecx
  __int64 v60; // rdx
  unsigned int v61; // r15d
  __int64 v63; // rax
  __int64 v64; // rcx
  int v65; // edx
  unsigned int (__fastcall *v66)(PDEVOBJ *); // rax
  int v67; // ecx
  _DWORD *v68; // rax
  __int64 v69; // rdx
  signed __int32 v70; // ett
  __int64 v71; // rdi
  unsigned int v72; // ebx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rdx
  _QWORD *v78; // rax
  HSURF *v79; // [rsp+20h] [rbp-E0h]
  unsigned int v80; // [rsp+28h] [rbp-D8h]
  struct _GDIINFO *v81; // [rsp+30h] [rbp-D0h]
  unsigned int v82; // [rsp+38h] [rbp-C8h]
  struct tagDEVINFO *v83; // [rsp+40h] [rbp-C0h]
  HDEV v84; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v85; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v86; // [rsp+68h] [rbp-98h] BYREF
  __int64 v87; // [rsp+70h] [rbp-90h] BYREF
  void *v88; // [rsp+78h] [rbp-88h] BYREF
  struct _DRVFN *v89; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v90[32]; // [rsp+88h] [rbp-78h] BYREF
  int v91; // [rsp+A8h] [rbp-58h]
  _BYTE v92[432]; // [rsp+B0h] [rbp-50h] BYREF

  v88 = a7;
  v85 = a4;
  v16 = PDEV::Allocate(a11);
  *(_QWORD *)this = v16;
  if ( !v16 )
    return this;
  *((_QWORD *)v16 + 3) = v16;
  *(_QWORD *)(*(_QWORD *)this + 1760LL) = a2;
  *(_DWORD *)(*(_QWORD *)this + 1752LL) = 1348756854;
  *(_DWORD *)(*(_QWORD *)this + 2584LL) = a12;
  *(_DWORD *)(*(_QWORD *)this + 2588LL) = a13;
  *(_DWORD *)(*(_QWORD *)this + 3552LL) = 0;
  v17 = *(_QWORD *)this;
  v87 = v17;
  *(_QWORD *)(v17 + 3560) = 0LL;
  v18 = *(_QWORD *)this;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1760LL) + 24LL) != 6 )
  {
    *(_QWORD *)(*(_QWORD *)this + 48LL) = GreCreateSemaphoreInternal(0LL);
    v18 = *(_QWORD *)this;
    if ( !*(_QWORD *)(*(_QWORD *)this + 48LL) )
      goto LABEL_80;
  }
  if ( (a12 & 1) != 0 )
    *(_DWORD *)(v18 + 2588) = 5;
  v19 = *(_QWORD *)this;
  v20 = *(_QWORD *)(*(_QWORD *)this + 1760LL);
  if ( *(_DWORD *)(v20 + 24) == 1 && *(_DWORD *)(v19 + 2588) == 5 )
  {
    if ( qword_1C02D5CB8 && (int)qword_1C02D5CB8() >= 0 )
    {
      v21 = 0LL;
      v89 = 0LL;
      v22 = 0;
      v86 = 0;
      if ( qword_1C02D5CC0 )
      {
        qword_1C02D5CC0(&v89, &v86);
        v21 = v89;
        v22 = v86;
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
    *(_QWORD *)(*(_QWORD *)this + 3560LL) = PALLOCMEM(v25, 1886221639LL);
    v26 = *(void **)(*(_QWORD *)this + 3560LL);
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
  SETFLAG(v23, (volatile unsigned int *)(v17 + 40), 0x8000u);
  v36 = *(_QWORD *)(SGDGetSessionState(v35) + 24);
  if ( v23 )
  {
    *(_QWORD *)(*(_QWORD *)this + 1768LL) = *((_QWORD *)a2 + 5);
    EngAcquireSemaphore(*(HSEMAPHORE *)(v36 + 8));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v36 + 8), 16LL);
    *(_QWORD *)(*(_QWORD *)this + 16LL) = GeneratePDEVUniqueUMPDHandle();
    **(_QWORD **)this = *(_QWORD *)(v36 + 6072);
    v37 = *(_QWORD *)(v36 + 8);
    *(_QWORD *)(v36 + 6072) = *(_QWORD *)this;
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", v37);
    GreReleaseSemaphoreInternal(*(_QWORD *)(v36 + 8));
  }
  v91 = 0;
  PushThreadGuardedObject(v90, this, lambda_792d576b28627a5f7e8ec309c675ba6b_::_lambda_invoker_cdecl_);
  v38 = v88;
  v84 = *(HDEV *)this;
  v39 = *(_QWORD *)this + 2104;
  v83 = (struct tagDEVINFO *)(*(_QWORD *)this + 1792LL);
  v81 = (struct _GDIINFO *)(*(_QWORD *)this + 2104LL);
  v79 = (HSURF *)(*(_QWORD *)this + 1448LL);
  v91 = 1;
  *(_QWORD *)(*(_QWORD *)this + 1768LL) = PDEVOBJ::EnablePDEV(
                                            (PDEVOBJ *)&v87,
                                            a3,
                                            v85,
                                            v39,
                                            v79,
                                            v80,
                                            v81,
                                            v82,
                                            v83,
                                            v84,
                                            Src,
                                            v88);
  if ( v91 )
    PopThreadGuardedObject(v90);
  v18 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 1768LL) )
    goto LABEL_80;
  if ( *(_DWORD *)(*(_QWORD *)(v18 + 1760) + 24LL) != 6 )
  {
    v40 = *(_DWORD *)(v18 + 2112);
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
      v41 = 25400 * (unsigned __int64)*(unsigned int *)(v18 + 2120) / 0x60;
    }
    *(_DWORD *)(v18 + 2112) = v41;
    v42 = (int *)(*(_QWORD *)this + 2116LL);
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
      v44 = 25400 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)this + 2124LL) / 0x60;
    }
    *v42 = v44;
    if ( !v23 )
    {
      v45 = *(_QWORD *)this;
      v46 = *(_DWORD *)(*(_QWORD *)this + 2148LL);
      if ( *(_DWORD *)(*(_QWORD *)this + 2144LL) != v46 )
      {
        if ( (unsigned __int16)(*(_WORD *)(v45 + 2150) - 100) <= 0x190u )
        {
          *(_DWORD *)(v45 + 3552) = v46;
          *(_DWORD *)(*(_QWORD *)this + 2148LL) = *(_DWORD *)(*(_QWORD *)this + 2144LL);
        }
        else
        {
          *(_DWORD *)(v45 + 2148) = 0;
          *(_DWORD *)(*(_QWORD *)this + 2144LL) = 0;
        }
      }
    }
    if ( !*(_DWORD *)(*(_QWORD *)this + 2144LL) )
      *(_DWORD *)(*(_QWORD *)this + 2144LL) = 96;
    if ( !*(_DWORD *)(*(_QWORD *)this + 2148LL) )
      *(_DWORD *)(*(_QWORD *)this + 2148LL) = 96;
    if ( *(_DWORD *)(*(_QWORD *)this + 2108LL) == 1 )
    {
      *(_DWORD *)(*(_QWORD *)this + 2180LL) = 1;
      *(_DWORD *)(*(_QWORD *)this + 2184LL) = 1;
      *(_DWORD *)(*(_QWORD *)this + 2188LL) = 3;
    }
    v47 = *(_QWORD *)this;
    v48 = 17424;
    v49 = *(_DWORD *)(*(_QWORD *)this + 2108LL);
    if ( (v49 & 0xFFFFFFFB) != 0 )
      v48 = 28313;
    v50 = v48 | 0x1000;
    if ( v49 != 1 )
      v50 = v48;
    v51 = v50 | 0x100;
    if ( (*(_DWORD *)(v47 + 1792) & 0x80000) == 0 )
      v51 = v50;
    *(_DWORD *)(v47 + 2140) = v51;
    EPALOBJ::EPALOBJ((EPALOBJ *)&v85, *(HPALETTE *)(*(_QWORD *)this + 2088LL));
    v52 = v85;
    if ( !v85 )
      goto LABEL_79;
    Feature_GdiEnableLiveKernelDump__private_ReportDeviceUsage();
    if ( !_bittest((const signed __int32 *)v52 + 6, 0x18u) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( !_bittest((const signed __int32 *)v52 + 6, 0x18u) )
      goto LABEL_79;
    if ( *((_DWORD *)v52 + 7) )
      goto LABEL_74;
    v53 = (unsigned int *)*((_QWORD *)v52 + 14);
    v54 = *v53;
    v55 = v53[1];
    v56 = v55 <= *v53;
    if ( v55 < *v53 )
    {
      v57 = v53[2];
      if ( v54 > v57 )
      {
        v58 = v55 <= v57;
        goto LABEL_72;
      }
      v56 = v55 <= v54;
    }
    if ( v56 || (v59 = v53[2], v55 <= v59) )
    {
      *(_DWORD *)(*(_QWORD *)this + 2336LL) = (v55 < v54) + 4;
LABEL_74:
      if ( (*(_DWORD *)(*(_QWORD *)this + 2140LL) & 0x100) != 0 )
      {
        Feature_GdiEnableLiveKernelDump__private_ReportDeviceUsage();
        v61 = a11;
        if ( a11 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
          if ( *((_DWORD *)v52 + 7) != 256 )
          {
            *(_DWORD *)(*(_QWORD *)this + 1792LL) &= ~0x80000u;
            *(_DWORD *)(*(_QWORD *)this + 2140LL) &= ~0x100u;
            goto LABEL_84;
          }
        }
        if ( !(unsigned int)CreateSurfacePal(
                              v52,
                              v60,
                              *(unsigned int *)(*(_QWORD *)this + 2136LL),
                              *(unsigned int *)(*(_QWORD *)this + 2208LL)) )
        {
LABEL_79:
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v85);
LABEL_80:
          lambda_792d576b28627a5f7e8ec309c675ba6b_::operator()(v18, this);
          return this;
        }
      }
      else
      {
        v61 = a11;
      }
      if ( !v61 )
      {
LABEL_85:
        v63 = *(_QWORD *)this;
        v85 = 0LL;
        *(_QWORD *)(v63 + 1776) = v52;
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v85);
        v64 = *(_QWORD *)this;
        if ( !*(_QWORD *)(*(_QWORD *)this + 1448LL)
          || (v65 = *(_DWORD *)(*(_QWORD *)(v64 + 1760) + 24LL), v65 == 1)
          || v65 == 4 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(v64 + 1760) + 24LL) == 2 )
          {
            if ( qword_1C02D5CC8 && (int)qword_1C02D5CC8() >= 0 )
            {
              v66 = (unsigned int (__fastcall *)(PDEVOBJ *))qword_1C02D5CD0;
LABEL_95:
              if ( !v66 || !v66(this) )
                goto LABEL_80;
            }
          }
          else if ( qword_1C02D5CD8 && (int)qword_1C02D5CD8() >= 0 )
          {
            v66 = (unsigned int (__fastcall *)(PDEVOBJ *))qword_1C02D5CE0;
            goto LABEL_95;
          }
        }
        *(_QWORD *)(*(_QWORD *)this + 2536LL) = v38;
        v67 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1760LL) + 24LL);
        if ( ((v67 - 1) & 0xFFFFFFFC) == 0 && v67 != 2 )
        {
          *(_QWORD *)(*(_QWORD *)this + 1704LL) = *(_QWORD *)(v17 + 2904);
          *(_QWORD *)(*(_QWORD *)this + 1696LL) = *(_QWORD *)(v17 + 2896);
          v88 = *(void **)(v36 + 8);
          EngAcquireSemaphore((HSEMAPHORE)v88);
          *(_QWORD *)(*(_QWORD *)this + 56LL) = GreCreateSemaphoreInternal(0LL);
          if ( !*(_QWORD *)(*(_QWORD *)this + 56LL) )
          {
            SEMOBJ::vUnlock((PERESOURCE *)&v88);
            goto LABEL_80;
          }
          *(_DWORD *)(*(_QWORD *)this + 40LL) |= 1u;
          SEMOBJ::vUnlock((PERESOURCE *)&v88);
        }
        *(_QWORD *)(*(_QWORD *)this + 1736LL) = *(_QWORD *)(v17 + 2840);
        *(_QWORD *)(*(_QWORD *)this + 1720LL) = *(_QWORD *)(v17 + 2968);
        *(_QWORD *)(*(_QWORD *)this + 1728LL) = *(_QWORD *)(v17 + 3368);
        *(_QWORD *)(*(_QWORD *)this + 1744LL) = *(_QWORD *)(v17 + 3360);
        if ( qword_1C02D5CE8 && (int)qword_1C02D5CE8() >= 0 )
        {
          v68 = qword_1C02D5CF0 ? (_DWORD *)qword_1C02D5CF0() : 0LL;
          *(_QWORD *)(v36 + 6064) = v68;
          if ( *v68 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1760LL) + 24LL) == 1 )
            {
              if ( qword_1C02D5CF8 && (int)qword_1C02D5CF8() >= 0 && qword_1C02D5D00 )
                qword_1C02D5D00(*(unsigned int *)(*(_QWORD *)this + 2148LL));
              **(_DWORD **)(v36 + 6064) = 0;
            }
          }
        }
        v69 = *(_QWORD *)this;
        _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
        do
          v70 = *(_DWORD *)(v69 + 40);
        while ( v70 != _InterlockedCompareExchange((volatile signed __int32 *)(v69 + 40), v70 & 0xFFFFFFBF, v70) );
        v71 = *(_QWORD *)this;
        v72 = 12 * *(_DWORD *)(*(_QWORD *)this + 2148LL) / 0x48u;
        memset(v92, 0, 0x1A4uLL);
        if ( !*(_DWORD *)(v71 + 1796) )
          *(_DWORD *)(v71 + 1796) = v72;
        if ( !*(_DWORD *)(*(_QWORD *)this + 1888LL) )
          *(_DWORD *)(*(_QWORD *)this + 1888LL) = v72;
        if ( !*(_DWORD *)(*(_QWORD *)this + 1980LL) )
          *(_DWORD *)(*(_QWORD *)this + 1980LL) = v72;
        if ( (int)IsvConvertLogFontWSupported() >= 0 )
          vConvertLogFontW(v92, *(_QWORD *)this + 1796LL);
        if ( *(_DWORD *)(*(_QWORD *)this + 2108LL) == 1 )
        {
          *(_QWORD *)(*(_QWORD *)this + 1424LL) = *(_QWORD *)(*(_QWORD *)(v36 + 3168) + 104LL);
        }
        else if ( qword_1C02D5D18 )
        {
          if ( (int)qword_1C02D5D18() >= 0 )
          {
            v73 = hfontCreate(v92, 4LL);
            *(_QWORD *)(*(_QWORD *)this + 1424LL) = v73;
            if ( !v73 )
              *(_QWORD *)(*(_QWORD *)this + 1424LL) = *(_QWORD *)(*(_QWORD *)(v36 + 3168) + 104LL);
          }
        }
        if ( (int)IsvConvertLogFontWSupported() >= 0 )
          vConvertLogFontW(v92, *(_QWORD *)this + 1888LL);
        v74 = hfontCreate(v92, 5LL);
        *(_QWORD *)(*(_QWORD *)this + 1432LL) = v74;
        if ( !v74 )
          *(_QWORD *)(*(_QWORD *)this + 1432LL) = *(_QWORD *)(*(_QWORD *)(v36 + 3168) + 104LL);
        vConvertLogFontW(v92, *(_QWORD *)this + 1980LL);
        v75 = hfontCreate(v92, 6LL);
        v17 = v87;
        v23 = a11;
        *(_QWORD *)(*(_QWORD *)this + 1440LL) = v75;
        if ( !v75 )
          *(_QWORD *)(*(_QWORD *)this + 1440LL) = *(_QWORD *)(*(_QWORD *)(v36 + 3168) + 128LL);
        goto LABEL_136;
      }
LABEL_84:
      v52[7] |= 0x4000u;
      goto LABEL_85;
    }
    v58 = 3 - (v59 < v54);
LABEL_72:
    *(_DWORD *)(*(_QWORD *)this + 2336LL) = v58;
    goto LABEL_74;
  }
LABEL_136:
  PDEV::InitializeClientReferenceCount(*(PDEV **)this);
  *(_DWORD *)(*(_QWORD *)this + 12LL) = 1;
  if ( (*(_DWORD *)(v17 + 40) & 1) != 0 )
  {
    PDEVOBJ::bDisabled((PDEVOBJ *)&v87, 1);
    vResetSurfacePalette(*(HDEV *)this);
  }
  v76 = (_QWORD *)(*(_QWORD *)this + 2600LL);
  v76[1] = v76;
  *v76 = v76;
  EngAcquireSemaphore(*(HSEMAPHORE *)(v36 + 8));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v36 + 8), 16LL);
  if ( v23 )
    RemovePDEVFromList((struct PDEV **)(v36 + 6072), *(struct PDEV **)this);
  **(_QWORD **)this = *(_QWORD *)(v36 + 6080);
  v77 = *(_QWORD *)(v36 + 8);
  *(_QWORD *)(v36 + 6080) = *(_QWORD *)this;
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", v77);
  GreReleaseSemaphoreInternal(*(_QWORD *)(v36 + 8));
  PDEVOBJ::CompletePDEV((PDEVOBJ *)&v87, *(struct DHPDEV__ **)(*(_QWORD *)this + 1768LL), *(HDEV *)this);
  v78 = (_QWORD *)(*(_QWORD *)this + 3504LL);
  v78[1] = v78;
  *v78 = v78;
  return this;
}
