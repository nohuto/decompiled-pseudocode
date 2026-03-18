/*
 * XREFs of _GetDCEx @ 0x1C004A820
 * Callers:
 *     _GetDC @ 0x1C000EB00 (_GetDC.c)
 *     UserGetDesktopDC @ 0x1C005A7D0 (UserGetDesktopDC.c)
 *     UserGetMonitorDC @ 0x1C005B2C0 (UserGetMonitorDC.c)
 * Callees:
 *     IsSpbCheckDceSupported @ 0x1C000F398 (IsSpbCheckDceSupported.c)
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x1C000F504 (IsFlushWEFCOMPOSITEDDCEBoundsSupported.c)
 *     GreCreateRectRgnIndirect @ 0x1C003F2F0 (GreCreateRectRgnIndirect.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C004A2E0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C004B718 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C004B77C (--1DCOBJA@@QEAA@XZ.c)
 *     GreValidateVisrgn @ 0x1C004B7A8 (GreValidateVisrgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004B888 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C004BDD0 (GreSetDCOwnerEx.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C004D3B0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     GreSelectVisRgn @ 0x1C004EBC0 (GreSelectVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0051170 (GreUnlockVisRgn.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     GreIsRendering @ 0x1C005B8F0 (GreIsRendering.c)
 *     UpdateDCEInUseCount @ 0x1C005BB40 (UpdateDCEInUseCount.c)
 *     CreateCacheDC @ 0x1C005BC20 (CreateCacheDC.c)
 *     GreOffsetRgn @ 0x1C005BF60 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x1C005C1D0 (GreCombineRgn.c)
 *     CreateEmptyRgnPublic @ 0x1C005CAC0 (CreateEmptyRgnPublic.c)
 *     DestroyCacheDC @ 0x1C005D380 (DestroyCacheDC.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x1C005D4DC (IsGreSelectRedirectionBitmapSupported.c)
 *     HmgMarkUndeletable @ 0x1C0060900 (HmgMarkUndeletable.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0079E14 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     GreSetRectRgn @ 0x1C008A530 (GreSetRectRgn.c)
 *     DelayedDestroyCacheDC @ 0x1C00A065C (DelayedDestroyCacheDC.c)
 *     IsDeleteHrgnClipSupported @ 0x1C00AAA2C (IsDeleteHrgnClipSupported.c)
 *     GreSetLayout @ 0x1C00C2AA0 (GreSetLayout.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C01500DC (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C016BC08 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BCC0 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall GetDCEx(_QWORD *a1, HRGN a2, unsigned int a3)
{
  __int64 v3; // r14
  _QWORD *v5; // rsi
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
  __int64 v22; // r15
  _QWORD *v23; // r13
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
  unsigned int v36; // edi
  __int64 *v37; // rsi
  __int64 *i; // rbx
  char *v39; // r14
  char *v40; // rdi
  int v41; // ebx
  int v42; // eax
  bool v43; // zf
  _QWORD *v44; // r15
  HDC v45; // rcx
  _QWORD *v46; // r14
  int v47; // edi
  __int64 v48; // rdx
  unsigned __int64 v49; // xmm0_8
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v56; // rdi
  _DWORD *v57; // rdi
  unsigned int v58; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  void *QuadPart; // rsi
  unsigned int v61; // r8d
  unsigned int v62; // edx
  unsigned int v63; // edx
  int v64; // esi
  _QWORD *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  _QWORD *v72; // rdi
  __int64 v73; // rsi
  __int64 v74; // rcx
  __int64 v75; // rcx
  int v76; // r8d
  struct _ERESOURCE *v77; // rcx
  __int64 v78; // rsi
  __int64 v79; // rcx
  int v80; // r8d
  struct _ERESOURCE *v81; // rcx
  __int64 v82; // rsi
  __int64 v83; // rcx
  int v84; // r8d
  struct _ERESOURCE *v85; // rcx
  int v87; // edi
  bool v88; // cf
  int v89; // edx
  HRGN v90; // rsi
  struct HOBJ__ *RectRgnIndirect; // rax
  HDC v92; // rdx
  struct HOBJ__ *v93; // rdi
  HRGN v94; // rax
  __int64 v95; // rdx
  HRGN v96; // rdi
  _QWORD *v97; // rdx
  __int64 v98; // r9
  unsigned __int8 v99; // cl
  __int64 v100; // rax
  __int64 v101; // rcx
  _QWORD *v102; // rax
  HRGN v103; // rbx
  __int64 v104; // rax
  HRGN v105; // rdi
  struct HOBJ__ *v106; // rax
  HDC v107; // rcx
  HRGN v108; // rax
  __int64 v109; // rdx
  _QWORD *v110; // r8
  int v111; // r9d
  unsigned int v112; // r8d
  int v113; // r9d
  int v114; // [rsp+40h] [rbp-49h]
  _QWORD *v115; // [rsp+48h] [rbp-41h]
  HRGN v116; // [rsp+50h] [rbp-39h] BYREF
  __int64 v117; // [rsp+58h] [rbp-31h]
  __int64 v118; // [rsp+60h] [rbp-29h]
  _QWORD v119[15]; // [rsp+68h] [rbp-21h] BYREF
  unsigned __int64 v120; // [rsp+F0h] [rbp+67h] BYREF
  HRGN EmptyRgnPublic; // [rsp+F8h] [rbp+6Fh]
  unsigned int v122; // [rsp+100h] [rbp+77h] BYREF
  __int64 v123; // [rsp+108h] [rbp+7Fh] BYREF

  EmptyRgnPublic = a2;
  v120 = (unsigned __int64)a1;
  v3 = 0LL;
  v116 = 0LL;
  v5 = a1;
  v115 = 0LL;
  v117 = 0LL;
  LODWORD(v123) = 0;
  v114 = 0;
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
    v120 = (unsigned __int64)v5;
  }
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
  }
  else
  {
LABEL_17:
    v3 = 1LL;
  }
  v118 = v3;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
  if ( CurrentProcessWin32Process && !*(_QWORD *)CurrentProcessWin32Process )
    CurrentProcessWin32Process = 0LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x200) != 0 )
    DelayedDestroyCacheDC(0LL);
  if ( (a3 & 0x10000) != 0 )
  {
    v28 = a3 & 0xFFFFFFC7;
    if ( (a3 & 1) != 0 )
    {
      a3 = v28 | 0x10;
      if ( (*(_BYTE *)(v5[5] + 31LL) & 4) == 0 )
        a3 = v28;
    }
    else
    {
      v29 = (_QWORD *)v5[17];
      v30 = v28 | 0x20;
      v31 = *(_BYTE *)(v29[1] + 8LL);
      if ( v31 >= 0 )
        v30 = a3 & 0xFFFFFFC7;
      if ( (((v30 & 2) == 0) & (unsigned __int8)~((unsigned __int8)v31 >> 5)) != 0 )
      {
        if ( (v31 & 0x40) != 0 )
        {
          v104 = v29[5];
          if ( v104 )
            v22 = *(_QWORD *)(v104 + 8);
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
      a3 = v32 | 0x10;
      if ( (v33 & 4) == 0 )
        a3 = v32;
      if ( (v33 & 0x20) == 0 )
        goto LABEL_35;
      a3 &= ~8u;
      if ( !v29[10] )
        goto LABEL_35;
    }
    a3 |= 2u;
  }
LABEL_35:
  if ( (a3 & 0x80000) != 0 )
    a3 = a3 & 0xFFFFFFD5 | 2;
  if ( qword_1C0295A88 && (int)qword_1C0295A88() >= 0 )
  {
    v34 = qword_1C0295A90 ? qword_1C0295A90(v5) : 0LL;
    if ( v34 && (*(_DWORD *)(*(_QWORD *)(v34 + 40) + 24LL) & 0x20000000) != 0 )
    {
      if ( qword_1C0295A98 && (int)qword_1C0295A98() >= 0 )
      {
        if ( qword_1C0295AA0 )
          v35 = qword_1C0295AA0(v34);
        else
          v35 = 0LL;
        v117 = v35;
        if ( v35 )
        {
LABEL_48:
          a3 |= 0x4000u;
          v115 = (_QWORD *)v34;
          if ( v5 == (_QWORD *)v34 && (a3 & 0x20) != 0 )
            a3 = a3 & 0xFFFFFFDD | 2;
          if ( (unsigned __int64)EmptyRgnPublic > 2 )
          {
            if ( (a3 & 0x40000) != 0 )
            {
              v103 = EmptyRgnPublic;
              EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
              GreCombineRgn(EmptyRgnPublic, v103, 0LL, 5);
              a3 &= ~0x40000u;
            }
            GreOffsetRgn(EmptyRgnPublic);
          }
          goto LABEL_52;
        }
      }
      else
      {
        v117 = 0LL;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v34 + 40) + 26LL) & 0x20) == 0 )
        goto LABEL_52;
      goto LABEL_48;
    }
  }
LABEL_52:
  if ( (a3 & 0x20) != 0 )
  {
    v97 = (_QWORD *)v5[13];
    if ( !v97 )
      v97 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 24LL);
    a3 |= 2u;
    if ( (a3 & 0x18) == 0 )
    {
      v98 = v5[5];
      if ( (*(_BYTE *)(v98 + 21) & 1) != 0 || (*(_BYTE *)(v97[5] + 31LL) & 2) == 0 )
      {
        v99 = *(_BYTE *)(v97[5] + 31LL);
        if ( ((*(_BYTE *)(v98 + 31) ^ v99) & 0x10) == 0 )
        {
          a3 &= 0xFFFFFFE7;
          v23 = v97;
          if ( (v99 & 4) != 0 )
            a3 |= 0x10u;
        }
      }
    }
  }
  if ( (a3 & 2) == 0 && (!v5 || (struct tagTHREADINFO *)v5[2] != PtiCurrentShared()) )
    a3 |= 2u;
  v36 = a3 & 0x8080441F;
  v122 = a3 & 0x8080441F;
  if ( (a3 & 2) == 0 )
  {
    v37 = (__int64 *)((char *)gpDispInfo + 24);
    i = (__int64 *)*((_QWORD *)gpDispInfo + 3);
    if ( !i )
      goto LABEL_290;
    while ( (i[8] & 0x400002) != 0 || (unsigned int)GreIsRendering((HDC)i[1]) || i[2] != v120 && i[1] != v22 )
    {
      v37 = i;
      i = (__int64 *)*i;
      if ( !i )
        goto LABEL_290;
    }
    if ( i[7] && (a3 & 0xC0) != 0 && (int)IsDeleteHrgnClipSupported() >= 0 && qword_1C0295AD0 )
      qword_1C0295AD0(i);
    if ( (i[8] & 0x4000) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(i[4] + 40) + 27LL) & 2) != 0
        && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0
        && qword_1C0295AE0 )
      {
        qword_1C0295AE0(i);
      }
      if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 && qword_1C0294EA0 )
        qword_1C0294EA0(i[1], 0LL);
    }
    v44 = (_QWORD *)v120;
    if ( i[2] != v120
      || (_QWORD *)i[4] != v115
      || (_QWORD *)i[3] != v23
      || !(_DWORD)v3
      || ((a3 ^ *((_DWORD *)i + 16)) & 0x4000) != 0
      || (i[8] & 0x10000000) != 0 )
    {
      goto LABEL_73;
    }
    v46 = v115;
LABEL_84:
    while ( (i[8] & 0x8080441F) != v36 )
    {
LABEL_73:
      v114 = 1;
      if ( (i[8] & 0x800) == 0 && qword_1C0295AE8 && (int)qword_1C0295AE8() >= 0 && qword_1C0295AF0 )
        qword_1C0295AF0(i);
      v45 = (HDC)i[1];
      *((_DWORD *)i + 16) = v36 | 0x1000;
      GreValidateVisrgn(v45);
      v116 = 0LL;
      if ( !qword_1C0295AA8
        || (int)qword_1C0295AA8() < 0
        || !qword_1C0295AB0
        || !(unsigned int)qword_1C0295AB0(&v116, v44, v23, v36) )
      {
        *((_DWORD *)i + 16) |= 0x10000000u;
      }
      v46 = v115;
      i[2] = (__int64)v44;
      i[3] = (__int64)v23;
      i[4] = (__int64)v115;
      i[5] = 0LL;
      i[6] = 0LL;
      ResetOrg(v116, (struct tagDCE *)i, 1);
      if ( !v116 )
        LODWORD(v123) = 1;
    }
    if ( i != *((__int64 **)gpDispInfo + 3) )
    {
      *v37 = *i;
      *i = *((_QWORD *)gpDispInfo + 3);
      *((_QWORD *)gpDispInfo + 3) = i;
    }
    GreValidateVisrgn((HDC)i[1]);
    if ( (a3 & 0x80u) != 0 )
    {
      v90 = EmptyRgnPublic;
      if ( EmptyRgnPublic != (HRGN)1 )
      {
        GreSetRectRgn(ghrgnGDC, 0);
        RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
        v92 = (HDC)i[1];
        v93 = RectRgnIndirect;
        i[7] = (__int64)RectRgnIndirect;
        DCOBJA::DCOBJA((DCOBJA *)v119, v92);
        GreSelectVisRgnInternal(v119, v93, 4LL);
        DCOBJA::~DCOBJA((DCOBJA *)v119);
        i[5] = (__int64)v90;
        if ( (a3 & 0x40000) != 0 )
          *((_DWORD *)i + 16) |= 0x40000u;
        *((_DWORD *)i + 16) |= 0x80u;
        if ( v90 )
        {
          GreCombineRgn(ghrgnGDC, (HRGN)i[7], v90, 1);
          v94 = (HRGN)CreateEmptyRgnPublic();
          i[6] = (__int64)v94;
          GreCombineRgn(v94, v90, 0LL, 5);
          if ( (unsigned __int64)v90 > 2 && (i[8] & 0x40000) == 0 )
          {
            PsGetCurrentProcessId();
            LOBYTE(v95) = 4;
            HmgMarkUndeletable(v90, v95);
          }
        }
        else
        {
          i[6] = 0LL;
        }
        *((_DWORD *)i + 16) &= ~0x2000u;
        v96 = ghrgnGDC;
        DCOBJA::DCOBJA((DCOBJA *)v119, (HDC)i[1]);
        GreSelectVisRgnInternal(v119, v96, 4LL);
        DCOBJA::~DCOBJA((DCOBJA *)v119);
      }
    }
    else if ( (a3 & 0x40) != 0 )
    {
      v105 = EmptyRgnPublic;
      if ( EmptyRgnPublic )
      {
        GreSetRectRgn(ghrgnGDC, 0);
        v106 = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
        v107 = (HDC)i[1];
        i[7] = (__int64)v106;
        GreSelectVisRgn(v107);
        i[5] = (__int64)v105;
        if ( (a3 & 0x40000) != 0 )
          *((_DWORD *)i + 16) |= 0x40000u;
        *((_DWORD *)i + 16) |= 0x40u;
        if ( v105 == (HRGN)1 )
        {
          i[6] = 1LL;
        }
        else
        {
          GreCombineRgn(ghrgnGDC, (HRGN)i[7], v105, 4);
          v108 = (HRGN)CreateEmptyRgnPublic();
          i[6] = (__int64)v108;
          GreCombineRgn(v108, v105, 0LL, 5);
          if ( (unsigned __int64)v105 > 2 && (i[8] & 0x40000) == 0 )
          {
            PsGetCurrentProcessId();
            LOBYTE(v109) = 4;
            HmgMarkUndeletable(v105, v109);
          }
        }
        *((_DWORD *)i + 16) &= ~0x2000u;
        GreSelectVisRgn((HDC)i[1]);
      }
    }
    if ( (i[8] & 0x4000) != 0 )
    {
      if ( !qword_1C0294E98
        || (int)qword_1C0294E98() < 0
        || qword_1C0294EA0 && (unsigned int)qword_1C0294EA0(i[1], v117) )
      {
        v47 = v123;
      }
      else
      {
        v47 = 1;
      }
      DCOBJA::DCOBJA((DCOBJA *)v119, (HDC)i[1]);
      if ( v119[0] )
      {
        *(_DWORD *)(v119[0] + 36LL) |= 0x40u;
        v48 = *(_QWORD *)(v119[0] + 1080LL);
        v49 = _mm_srli_si128(*(__m128i *)(v119[0] + 1080LL), 8).m128i_u64[0];
        if ( (_DWORD)v48 != (_DWORD)v49
          && (int)v48 < (int)v49
          && HIDWORD(v48) != HIDWORD(v49)
          && SHIDWORD(v48) < SHIDWORD(v49) )
        {
          *(_DWORD *)(v119[0] + 1080LL) = 0x7FFFFFFF;
          *(_DWORD *)(v119[0] + 1084LL) = 0x7FFFFFFF;
          *(_DWORD *)(v119[0] + 1088LL) = 0x80000000;
          *(_DWORD *)(v119[0] + 1092LL) = 0x80000000;
        }
      }
      DCOBJA::~DCOBJA((DCOBJA *)v119);
      if ( v47 )
        GreSelectVisRgn((HDC)i[1]);
    }
    if ( (i[8] & 2) == 0 )
      goto LABEL_136;
    if ( !(unsigned int)GreSetDCOwnerEx(i[1], 2147483650LL, 0LL, 0LL) )
    {
      *((_DWORD *)i + 16) &= ~0x1000u;
      DestroyCacheDC((char *)gpDispInfo + 24, 0LL);
      goto LABEL_290;
    }
    if ( !IS_USERCRIT_OWNED_AT_ALL(v51, v50, v52, v53) )
    {
      v122 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
    }
    v54 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v54 = *ThreadWin32Thread;
    i[9] = v54;
    i[10] = 0LL;
    --gnDCECount;
    v56 = i[9];
    if ( v56 )
      v57 = *(_DWORD **)(v56 + 424);
    else
      v57 = (_DWORD *)i[10];
    if ( !bDCEInUseTelemetryDisabled )
    {
      if ( (dword_1C0290950 & 1) == 0 )
      {
        dword_1C0290950 |= 1u;
        qword_1C0290958 = 60 * llEventIntervalMinute * gliQpcFreq.QuadPart;
      }
      ++v57[276];
      ++gnInUseDCECount;
      v58 = v57[276];
      if ( v57[277] < v58 )
        v57[277] = v58;
      if ( WPP_MAIN_CB.DeviceLock.Header.LockNV < (unsigned int)gnInUseDCECount )
        WPP_MAIN_CB.DeviceLock.Header.LockNV = gnInUseDCECount;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      QuadPart = (void *)PerformanceCounter.QuadPart;
      v61 = v57[277];
      if ( ulProcessThresholdDCEInUse == 100 )
        v62 = v61 % 0x64;
      else
        v62 = v61 % ulProcessThresholdDCEInUse;
      if ( !v62
        && (signed __int64)(PerformanceCounter.QuadPart - (unsigned __int64)WPP_MAIN_CB.SecurityDescriptor) >= qword_1C0290958 )
      {
        if ( (unsigned int)dword_1C02882F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C02882F8, 0x400000000000LL) )
        {
          v122 = v57[14];
          v120 = (unsigned __int64)v110;
          v123 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1C02882F8,
            (unsigned int)&unk_1C0256915,
            (_DWORD)v110,
            v111,
            (__int64)&v123,
            (__int64)&v120,
            (__int64)&v122);
        }
        WPP_MAIN_CB.SecurityDescriptor = QuadPart;
      }
      if ( ulGlobalThresholdDCEInUse == 1000 )
        v63 = WPP_MAIN_CB.DeviceLock.Header.LockNV % 0x3E8u;
      else
        v63 = WPP_MAIN_CB.DeviceLock.Header.LockNV % ulGlobalThresholdDCEInUse;
      if ( !v63 && (__int64)QuadPart - *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount >= qword_1C0290958 )
      {
        if ( (unsigned int)dword_1C02882F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C02882F8, 0x400000000000LL) )
        {
          v120 = v112;
          v123 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            (unsigned int)&dword_1C02882F8,
            (unsigned int)&unk_1C0256951,
            v112,
            v113,
            (__int64)&v123,
            (__int64)&v120);
        }
        *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = QuadPart;
      }
    }
    if ( !v114 || !qword_1C0294EA8 || (int)qword_1C0294EA8() < 0 )
    {
LABEL_136:
      if ( (*(_BYTE *)(v44[5] + 26LL) & 0x40) != 0 && (a3 & 0x40000000) == 0 )
        GreSetLayout((HDC)i[1], -1, 1u);
      GreValidateVisrgn((HDC)i[1]);
      if ( qword_1C0294EB8 && (int)qword_1C0294EB8() >= 0 && qword_1C0294EC0 )
        qword_1C0294EC0(i[1], *v44, 0LL, 0LL, 0);
      if ( v46
        && (*(_BYTE *)(v46[5] + 26LL) & 8) != 0
        && qword_1C0294EB8
        && (int)qword_1C0294EB8() >= 0
        && qword_1C0294EC0 )
      {
        qword_1C0294EC0(
          i[1],
          *v44,
          *v46,
          (*(_BYTE *)(v46[5] + 27LL) & 2) == 0,
          (*(_WORD *)(v46[5] + 42LL) & 0x2FFF) == 669);
      }
      if ( *((int *)i + 16) < 0 )
      {
        v100 = PsGetCurrentProcessWin32Process(v71);
        if ( v100 && !*(_QWORD *)v100 )
          v100 = 0LL;
        *(_DWORD *)(v100 + 12) |= 0x200u;
        i[9] = 0LL;
        v102 = (_QWORD *)PsGetCurrentProcessWin32Process(v101);
        if ( v102 && !*v102 )
          v102 = 0LL;
        i[10] = (__int64)v102;
        UpdateDCEInUseCount(1LL, v102);
      }
      v72 = *(_QWORD **)(SGDGetSessionState(v71) + 24);
      v73 = v72[11];
      v75 = *(_QWORD *)(SGDGetSessionState(v74) + 24);
      if ( *(_DWORD *)(v75 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(
          v75,
          (unsigned int)&LockRelease,
          v76,
          v73,
          (__int64)L"GreBaseGlobals.hsemDCVisRgn");
      v77 = (struct _ERESOURCE *)v72[11];
      if ( v77 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v77);
        PsLeavePriorityRegion();
      }
      v78 = v72[15];
      v79 = *(_QWORD *)(SGDGetSessionState(v77) + 24);
      if ( *(_DWORD *)(v79 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(
          v79,
          (unsigned int)&LockRelease,
          v80,
          v78,
          (__int64)L"GreBaseGlobals.hsemGreLock");
      v81 = (struct _ERESOURCE *)v72[15];
      if ( v81 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v81);
        PsLeavePriorityRegion();
      }
      v82 = v72[10];
      v83 = *(_QWORD *)(SGDGetSessionState(v81) + 24);
      if ( *(_DWORD *)(v83 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(
          v83,
          (unsigned int)&LockRelease,
          v84,
          v82,
          (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
      v85 = (struct _ERESOURCE *)v72[10];
      if ( v85 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v85);
        PsLeavePriorityRegion();
      }
      return i[1];
    }
    LOBYTE(v64) = 18;
    v65 = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v65 )
    {
      v67 = *v65;
      if ( *v65 )
      {
        if ( *(_QWORD *)(v67 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*v65);
        if ( *(_DWORD *)(v67 + 340) )
        {
          LOBYTE(v64) = *(_DWORD *)(v67 + 340);
        }
        else
        {
          v68 = PsGetCurrentProcessWin32Process(v66);
          if ( v68 )
          {
            if ( !*(_QWORD *)v68 )
            {
              v69 = *(_QWORD *)(SGDGetSessionState(v66) + 24);
              goto LABEL_133;
            }
            v64 = *(_DWORD *)(v68 + 280);
          }
        }
      }
    }
    v69 = *(_QWORD *)(SGDGetSessionState(v66) + 24);
    if ( (v64 & 0xF) == 0 )
    {
      v70 = *(_QWORD *)(*(_QWORD *)(v69 + 3176) + 104LL);
      if ( v70 )
      {
LABEL_134:
        if ( qword_1C0294EB0 )
          qword_1C0294EB0(i[1], v70);
        goto LABEL_136;
      }
    }
LABEL_133:
    v70 = *(_QWORD *)(*(_QWORD *)(v69 + 3168) + 104LL);
    goto LABEL_134;
  }
  while ( 2 )
  {
    v37 = (__int64 *)((char *)gpDispInfo + 24);
    for ( i = (__int64 *)*((_QWORD *)gpDispInfo + 3); i; i = (__int64 *)*i )
    {
      if ( (_QWORD *)i[3] != v23 )
        goto LABEL_57;
      v46 = v115;
      if ( (_QWORD *)i[4] != v115 || i[11] )
        goto LABEL_57;
      DCOBJA::DCOBJA((DCOBJA *)v119, (HDC)i[1]);
      if ( v119[0] )
      {
        v87 = *(_DWORD *)(v119[0] + 40LL);
        DCOBJA::~DCOBJA((DCOBJA *)v119);
        v88 = (v87 & 1) != 0;
        v36 = v122;
        if ( v88 )
          goto LABEL_57;
      }
      else
      {
        DCOBJA::~DCOBJA((DCOBJA *)v119);
      }
      v89 = *((_DWORD *)i + 16);
      if ( v36 == (v89 & 0x80C05C1F)
        && ((*(_BYTE *)(v23[5] + 31LL) & 0x20) == 0 || i[2] == i[3])
        && (!v118 || (v89 & 0x10000000) == 0) )
      {
        v44 = (_QWORD *)v120;
        *((_DWORD *)i + 16) = v89 | 0x1000;
        if ( v44 != (_QWORD *)i[2] )
        {
          if ( (int)IsSpbCheckDceSupported() >= 0 && qword_1C0295AF0 )
            qword_1C0295AF0(i);
          i[2] = (__int64)v44;
          ResetOrg(0LL, (struct tagDCE *)i, 0);
        }
        goto LABEL_84;
      }
LABEL_57:
      v37 = i;
    }
    v37 = 0LL;
    v39 = (char *)gpDispInfo + 24;
    v40 = (char *)*((_QWORD *)gpDispInfo + 3);
    if ( !v40 )
      goto LABEL_68;
    do
    {
      if ( (*((_DWORD *)v40 + 16) & 0x400002) != 2 )
        goto LABEL_66;
      DCOBJA::DCOBJA((DCOBJA *)v119, *((HDC *)v40 + 1));
      if ( v119[0] )
      {
        v41 = *(_DWORD *)(v119[0] + 40LL);
        DCOBJA::~DCOBJA((DCOBJA *)v119);
        if ( (v41 & 1) != 0 )
          goto LABEL_66;
      }
      else
      {
        DCOBJA::~DCOBJA((DCOBJA *)v119);
      }
      if ( !*((_QWORD *)v40 + 11) )
      {
        v42 = *((_DWORD *)v40 + 16);
        if ( (v42 & 0x800) != 0 )
          break;
        if ( (v42 & 0x1000) == 0 )
          v37 = (__int64 *)v39;
      }
LABEL_66:
      v39 = v40;
      v40 = *(char **)v40;
    }
    while ( v40 );
    v43 = v40 == 0LL;
    if ( v40 )
    {
LABEL_70:
      v36 = v122;
      if ( !v43 )
        v37 = (__int64 *)v39;
      v44 = (_QWORD *)v120;
      i = (__int64 *)*v37;
      goto LABEL_73;
    }
LABEL_68:
    if ( v37 )
    {
      v43 = v40 == 0LL;
      goto LABEL_70;
    }
    if ( CreateCacheDC(v120, a3 & 0x4000 | 0x802, 0LL) )
    {
      v36 = v122;
      continue;
    }
    break;
  }
LABEL_290:
  GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
  return 0LL;
}
