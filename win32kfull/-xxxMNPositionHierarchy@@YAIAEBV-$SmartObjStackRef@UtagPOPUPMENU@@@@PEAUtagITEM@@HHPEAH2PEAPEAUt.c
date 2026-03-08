/*
 * XREFs of ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0218C94
 * Callers:
 *     xxxMNOpenHierarchy @ 0x1C021B7B0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxSendMinRectMessages @ 0x1C000D518 (xxxSendMinRectMessages.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C002E354 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     GetDPIMetrics @ 0x1C009FD5C (GetDPIMetrics.c)
 *     MNGetpItemFromIndex @ 0x1C00A266C (MNGetpItemFromIndex.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     _MonitorFromRect @ 0x1C00AEE80 (_MonitorFromRect.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00D2B90 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00E67A8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0218110 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C022A9CC (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 */

__int64 __fastcall xxxMNPositionHierarchy(__int64 **a1, __int64 a2, int a3, int a4, LONG *a5, int *a6, __int64 a7)
{
  __int64 *v10; // rax
  bool v11; // zf
  __int64 *v12; // rax
  unsigned int v13; // r12d
  __int64 v14; // rcx
  _DWORD *v15; // rax
  char v16; // bl
  char v17; // bl
  int v18; // esi
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // rax
  MenuHelpers *v22; // rcx
  bool v23; // di
  int v24; // eax
  LONG left; // edi
  int v26; // edx
  __int64 v27; // rax
  __int64 *v28; // rdx
  __int64 v29; // rsi
  int v30; // esi
  __int64 *v31; // rax
  int v32; // ebx
  struct tagMONITOR *v33; // rax
  __int64 *v34; // rdx
  __int64 v35; // rbx
  int v36; // esi
  LONG top; // ebx
  _DWORD *v38; // rcx
  int DpiForSystem; // eax
  _QWORD *v40; // rcx
  struct tagRECT v42; // [rsp+20h] [rbp-61h] BYREF
  int v43; // [rsp+30h] [rbp-51h]
  int v44; // [rsp+34h] [rbp-4Dh]
  int v45; // [rsp+38h] [rbp-49h]
  __int64 v46; // [rsp+40h] [rbp-41h]
  __int64 v47; // [rsp+48h] [rbp-39h]
  LONG *v48; // [rsp+50h] [rbp-31h]
  int *v49; // [rsp+58h] [rbp-29h]
  __int64 v50; // [rsp+60h] [rbp-21h]
  int **v51[2]; // [rsp+68h] [rbp-19h] BYREF
  __int128 v52; // [rsp+78h] [rbp-9h] BYREF

  v48 = a5;
  v49 = a6;
  v50 = a7;
  v10 = *a1;
  v47 = a2;
  v42 = 0LL;
  v11 = (*(_DWORD *)*v10 & 1) == 0;
  v12 = *a1;
  if ( !v11 )
  {
    v13 = 4;
    v14 = *(_QWORD *)(*(_QWORD *)(*v12 + 16) + 40LL);
    v15 = *(_DWORD **)a2;
    v16 = *(_BYTE *)(v14 + 31);
    v52 = 0LL;
    v17 = v16 & 0x20;
    v18 = v15[16];
    v44 = v15[17];
    LODWORD(v14) = v15[18];
    v45 = v15[19];
    v19 = *a1;
    v43 = v14;
    v20 = *(_QWORD *)(*(_QWORD *)(*v19 + 16) + 40LL);
    v21 = *a1;
    v52 = *(_OWORD *)(v20 + 88);
    v22 = (MenuHelpers *)*v21;
    v23 = 1;
    if ( *(_QWORD *)(*v21 + 40) )
    {
      v22 = *(MenuHelpers **)(*(_QWORD *)(**a1 + 40) + 40LL);
      if ( (*((_DWORD *)v22 + 10) & 0x20) != 0 )
        v23 = 0;
    }
    if ( v17 && IsTrayWindow(*(struct tagWND **)(**a1 + 16), 1) )
      xxxSendMinRectMessages(*(unsigned __int64 **)(**a1 + 16), (__int64)&v52);
    if ( MenuHelpers::GetMenuRightAlignHint(v22) || !v23 )
    {
      *(_DWORD *)**a1 |= 0x10u;
      if ( !v17 )
      {
        v26 = v43;
        v24 = v52;
        left = v52 + v43 + v18 - a3;
        goto LABEL_16;
      }
      left = DWORD2(v52) - a3;
    }
    else
    {
      v24 = v52;
      left = v52;
      if ( !v17 )
      {
        v26 = v43;
        left = v18 + v52;
LABEL_16:
        LODWORD(v52) = v18 + v24;
        DWORD2(v52) = v26 + v18 + v24;
        DWORD1(v52) += v44;
        HIDWORD(v52) = DWORD1(v52) + v45;
      }
    }
    v27 = MonitorFromRect((__int64)&v52, 1u, 0);
    v28 = *a1;
    v29 = v27;
    v46 = v27;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v51, *v28);
    MNGetPopupBoundsRect(v51, v29, &v42, 0);
    if ( v17 )
    {
      v30 = DWORD1(v52) - a4;
      if ( DWORD1(v52) - a4 < v42.top )
        v30 = HIDWORD(v52);
    }
    else
    {
      v30 = HIDWORD(v52);
    }
    if ( left >= v42.right - a3 )
      left = v42.right - a3;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0 )
    {
      left = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL)
           - left
           - a3
           + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 96LL);
      if ( left >= v42.right - a3 )
        left = v42.right - a3;
    }
    goto LABEL_36;
  }
  v13 = 1;
  left = *(_DWORD *)(*(_QWORD *)a2 + 64LL)
       + *(_DWORD *)(*(_QWORD *)a2 + 72LL)
       + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v12 + 16) + 40LL) + 88LL);
  v30 = *(_DWORD *)(*(_QWORD *)a2 + 68LL) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 92LL);
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 124LL) & 3) != 0 )
  {
    v31 = (__int64 *)MNGetpItemFromIndex(*(_QWORD *)(**a1 + 40), *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 116LL));
    v32 = *(_DWORD *)(*v31 + 68);
    v30 += *(_DWORD *)(GetDPIMetrics(*v31) + 28) - v32;
  }
  v33 = _MonitorFromWindowInternal(*(struct tagWND **)(**a1 + 16), 1u, 0);
  v34 = *a1;
  v35 = (__int64)v33;
  v46 = (__int64)v33;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v51, *v34);
  MNGetPopupBoundsRect(v51, v35, &v42, 0);
  if ( ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0) != ((*(_DWORD *)**a1 & 0x10) != 0)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3 >= v42.left )
  {
    left = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3;
    v13 = 2;
  }
  if ( left + a3 > v42.right )
  {
    v13 = 2;
    left = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0 )
    v13 ^= 3u;
LABEL_36:
  if ( v30 + a4 <= v42.bottom )
  {
    top = v42.top;
  }
  else
  {
    v36 = v30 - a4;
    top = v42.top;
    v38 = (_DWORD *)**a1;
    if ( (*v38 & 1) != 0 )
    {
      DpiForSystem = GetDpiForSystem((__int64)v38);
      v30 = v36 - GetDpiDependentMetric(26, DpiForSystem);
      if ( v30 < top )
      {
LABEL_43:
        v30 = v42.bottom - a4;
        goto LABEL_45;
      }
      v13 = 8;
    }
    else
    {
      v30 = *(_DWORD *)(*(_QWORD *)v47 + 76LL) + 6 + v36;
    }
    if ( v30 < top || v30 + a4 > v42.bottom )
      goto LABEL_43;
  }
LABEL_45:
  if ( left <= v42.left )
    left = v42.left;
  v40 = (_QWORD *)v50;
  if ( v30 <= top )
    v30 = top;
  *v48 = left;
  *v49 = v30;
  if ( v40 )
    *v40 = v46;
  return v13;
}
