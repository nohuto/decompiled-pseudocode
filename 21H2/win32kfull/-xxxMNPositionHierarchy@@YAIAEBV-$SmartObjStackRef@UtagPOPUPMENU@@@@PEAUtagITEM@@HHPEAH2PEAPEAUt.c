/*
 * XREFs of ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0236330
 * Callers:
 *     xxxMNOpenHierarchy @ 0x1C0239AB8 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0042200 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C0042310 (_MonitorFromRect.c)
 *     MNGetpItemFromIndex @ 0x1C0048164 (MNGetpItemFromIndex.c)
 *     IsTrayWindow @ 0x1C005EB30 (IsTrayWindow.c)
 *     GetDpiDependentMetric @ 0x1C00614D0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0063CBC (GetDpiForSystem.c)
 *     GetDPIMetrics @ 0x1C00E0DEC (GetDPIMetrics.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104AC8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C0124CA8 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0235768 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C02437B0 (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 */

__int64 __fastcall xxxMNPositionHierarchy(__int64 **a1, __int64 *a2, int a3, int a4, int *a5, LONG *a6, __int64 a7)
{
  __int64 *v10; // rax
  bool v11; // zf
  __int64 *v12; // rax
  unsigned int v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // rax
  char v16; // di
  int v17; // esi
  __int64 *v18; // rax
  MenuHelpers *v19; // rcx
  bool v20; // bl
  LONG left; // eax
  int v22; // edx
  LONG v23; // ebx
  __int64 v24; // rax
  __int64 *v25; // rdx
  __int64 v26; // rsi
  LONG bottom; // edi
  int v28; // esi
  __int64 *v29; // rax
  int v30; // ebx
  struct tagMONITOR *v31; // rax
  __int64 *v32; // rdx
  __int64 v33; // rbx
  int v34; // edi
  LONG v35; // ebx
  _DWORD *v36; // rcx
  unsigned int DpiForSystem; // eax
  _QWORD *v38; // rcx
  int v40; // [rsp+20h] [rbp-71h]
  __int128 v41; // [rsp+28h] [rbp-69h] BYREF
  __int64 v42; // [rsp+38h] [rbp-59h]
  int v43; // [rsp+40h] [rbp-51h]
  __int64 *v44; // [rsp+48h] [rbp-49h]
  int *v45; // [rsp+50h] [rbp-41h]
  LONG *v46; // [rsp+58h] [rbp-39h]
  __int64 v47; // [rsp+60h] [rbp-31h]
  int **v48[2]; // [rsp+68h] [rbp-29h] BYREF
  int **v49[2]; // [rsp+78h] [rbp-19h] BYREF
  struct tagRECT v50; // [rsp+88h] [rbp-9h] BYREF

  v45 = a5;
  v46 = a6;
  v47 = a7;
  v10 = *a1;
  v44 = a2;
  v41 = 0LL;
  v11 = (*(_DWORD *)*v10 & 1) == 0;
  v12 = *a1;
  if ( v11 )
  {
    v13 = 1;
    v28 = *(_DWORD *)(*a2 + 64) + *(_DWORD *)(*a2 + 72) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v12 + 16) + 40LL) + 88LL);
    bottom = *(_DWORD *)(*a2 + 68) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 92LL);
    if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 124LL) & 3) != 0 )
    {
      v29 = (__int64 *)MNGetpItemFromIndex(*(_QWORD *)(**a1 + 40), *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 116LL));
      v30 = *(_DWORD *)(*v29 + 68);
      bottom += *(_DWORD *)(GetDPIMetrics(*v29) + 28) - v30;
    }
    v31 = _MonitorFromWindowInternal(*(struct tagWND **)(**a1 + 16), 1, 0);
    v32 = *a1;
    v33 = (__int64)v31;
    v42 = (__int64)v31;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v49, *v32);
    MNGetPopupBoundsRect(v49, v33, &v41, 0);
    if ( ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0) != ((*(_DWORD *)**a1 & 0x10) != 0)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3 >= (int)v41 )
    {
      v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3;
      v13 = 2;
    }
    if ( v28 + a3 > SDWORD2(v41) )
    {
      v13 = 2;
      v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0 )
      v13 ^= 3u;
  }
  else
  {
    v13 = 4;
    v14 = *(_QWORD *)(*(_QWORD *)(*v12 + 16) + 40LL);
    v15 = *a2;
    v16 = *(_BYTE *)(v14 + 31) & 0x20;
    v17 = *(_DWORD *)(*a2 + 64);
    v43 = *(_DWORD *)(*a2 + 68);
    LODWORD(v14) = *(_DWORD *)(v15 + 72);
    LODWORD(v42) = *(_DWORD *)(v15 + 76);
    v40 = v14;
    v18 = *a1;
    v50 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
    v19 = (MenuHelpers *)*v18;
    v20 = 1;
    if ( *(_QWORD *)(*v18 + 40) )
    {
      v19 = *(MenuHelpers **)(*(_QWORD *)(**a1 + 40) + 40LL);
      if ( (*((_DWORD *)v19 + 10) & 0x20) != 0 )
        v20 = 0;
    }
    if ( v16 && (unsigned int)IsTrayWindow(*(_QWORD **)(**a1 + 16)) )
      xxxSendMinRectMessages(*(unsigned __int64 **)(**a1 + 16), (struct _LARGE_STRING *)&v50);
    if ( MenuHelpers::GetMenuRightAlignHint(v19) || !v20 )
    {
      v22 = v40;
      *(_DWORD *)**a1 |= 0x10u;
      left = v50.left;
      if ( v16 )
        v23 = v50.right - a3;
      else
        v23 = v50.left + v40 + v17 - a3;
    }
    else
    {
      left = v50.left;
      v22 = v40;
      if ( v16 )
        v23 = v50.left;
      else
        v23 = v17 + v50.left;
    }
    if ( !v16 )
    {
      v50.left = v17 + left;
      v50.right = v22 + v17 + left;
      v50.top += v43;
      v50.bottom = v50.top + v42;
    }
    v24 = MonitorFromRect(&v50, 1u, 0);
    v25 = *a1;
    v26 = v24;
    v42 = v24;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v48, *v25);
    MNGetPopupBoundsRect(v48, v26, &v41, 0);
    if ( v16 )
    {
      bottom = v50.top - a4;
      if ( v50.top - a4 < SDWORD1(v41) )
        bottom = v50.bottom;
    }
    else
    {
      bottom = v50.bottom;
    }
    v28 = DWORD2(v41) - a3;
    if ( v23 < DWORD2(v41) - a3 )
      v28 = v23;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0 )
    {
      v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 96LL)
          + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL)
          - v28
          - a3;
      if ( v28 >= DWORD2(v41) - a3 )
        v28 = DWORD2(v41) - a3;
    }
  }
  if ( bottom + a4 <= SHIDWORD(v41) )
  {
    v35 = DWORD1(v41);
  }
  else
  {
    v34 = bottom - a4;
    v35 = DWORD1(v41);
    v36 = (_DWORD *)**a1;
    if ( (*v36 & 1) != 0 )
    {
      DpiForSystem = GetDpiForSystem((__int64)v36);
      bottom = v34 - GetDpiDependentMetric(26LL, DpiForSystem);
      if ( bottom < v35 )
      {
LABEL_44:
        bottom = HIDWORD(v41) - a4;
        goto LABEL_46;
      }
      v13 = 8;
    }
    else
    {
      bottom = *(_DWORD *)(*v44 + 76) + 6 + v34;
    }
    if ( bottom < v35 || bottom + a4 > SHIDWORD(v41) )
      goto LABEL_44;
  }
LABEL_46:
  if ( v28 <= (int)v41 )
    v28 = v41;
  v38 = (_QWORD *)v47;
  if ( bottom <= v35 )
    bottom = v35;
  *v45 = v28;
  *v46 = bottom;
  if ( v38 )
    *v38 = v42;
  return v13;
}
