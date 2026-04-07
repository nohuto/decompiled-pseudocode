/*
 * XREFs of ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18009A240
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032090 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x18000DCA4 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016970 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180018414 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024BC0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180024F40 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x180033504 (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18003A3A0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180097850 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800B7318 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::UpdateSharedVirtualDesktopVisual(
        CWindowList *this,
        unsigned int a2,
        const struct MILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL *a3,
        const struct _REMOTE_PORT_VIEW *a4)
{
  struct CThumbnailData *ThumbnailData; // r14
  _QWORD *ViewBase; // rbx
  _QWORD *v10; // r15
  __int64 v11; // r12
  HWND v12; // rbx
  int SyncedWindowDataByHwnd; // eax
  int v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // edx
  _QWORD *v17; // r15
  int v18; // r12d
  HWND v19; // rbx
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v22; // r9d
  CDesktopThumbnailBase *v23; // rcx
  LONG v24; // eax
  RECT v25; // xmm0
  LONG v26; // eax
  CVisual *v27; // rcx
  unsigned int v29; // [rsp+20h] [rbp-59h]
  struct CWindowData *v30; // [rsp+30h] [rbp-49h] BYREF
  struct CWindowData *v31; // [rsp+38h] [rbp-41h] BYREF
  _QWORD *v32; // [rsp+40h] [rbp-39h]
  CWindowList *v33; // [rsp+48h] [rbp-31h]
  struct _RTL_CRITICAL_SECTION *v34; // [rsp+50h] [rbp-29h] BYREF
  _DWM_THUMBNAIL_PROPERTIES v35; // [rsp+58h] [rbp-21h] BYREF

  v33 = this;
  v34 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  memset(&v35, 0, sizeof(v35));
  if ( !ThumbnailData
    || a2 != *((_DWORD *)a3 + 2)
    || *(double *)((char *)a3 + 36) == 0.0
    || *(double *)((char *)a3 + 44) == 0.0
    || !*((_BYTE *)ThumbnailData + 34)
    || *((_DWORD *)ThumbnailData + 28) != 2 )
  {
    v29 = 4057;
    goto LABEL_52;
  }
  if ( a4->ViewSize < 8 * (unsigned __int64)(unsigned int)(*((_DWORD *)a3 + 4) + *((_DWORD *)a3 + 3)) )
  {
    v29 = 4062;
LABEL_52:
    v22 = -2147024809;
    v14 = -2147024809;
    goto LABEL_53;
  }
  ViewBase = a4->ViewBase;
  v10 = (_QWORD *)((char *)ThumbnailData + 128);
  *((_DWORD *)ThumbnailData + 38) = 0;
  v32 = ViewBase;
  DynArrayImpl<0>::ShrinkToSize((__int64)ThumbnailData + 128, 8u);
  v11 = 0LL;
  if ( !*((_DWORD *)a3 + 3) )
  {
LABEL_20:
    v17 = (_QWORD *)((char *)ThumbnailData + 160);
    *((_DWORD *)ThumbnailData + 46) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)ThumbnailData + 160, 8u);
    v18 = 0;
    if ( *((_DWORD *)a3 + 4) )
    {
      while ( 1 )
      {
        v19 = (HWND)ViewBase[v18 + *((_DWORD *)a3 + 3)];
        if ( (unsigned int)DwmValidateWindow(v19, a2) )
        {
          SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(v33, v19, &v31);
          v14 = SyncedWindowDataByHwnd;
          if ( SyncedWindowDataByHwnd < 0 )
          {
            v29 = 4090;
            goto LABEL_31;
          }
          if ( v31 )
          {
            v20 = *((_DWORD *)ThumbnailData + 46);
            v21 = v20 + 1;
            if ( v20 + 1 < v20 )
            {
              v14 = -2147024362;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
              goto LABEL_38;
            }
            if ( v21 > *((_DWORD *)ThumbnailData + 45) )
            {
              v30 = (struct CWindowData *)&v31;
              v14 = DynArrayImpl<0>::Grow((char **)ThumbnailData + 20, 8u, 1, 0, (unsigned __int64 *)&v30);
              if ( v14 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xC0u);
LABEL_38:
                v29 = 4093;
                goto LABEL_29;
              }
              *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)ThumbnailData + 46))++) + *v17) = *(_QWORD *)v30;
            }
            else
            {
              *(_QWORD *)(*v17 + 8LL * v20) = v31;
              *((_DWORD *)ThumbnailData + 46) = v21;
            }
          }
        }
        if ( (unsigned int)++v18 >= *((_DWORD *)a3 + 4) )
          break;
        ViewBase = v32;
      }
    }
    v23 = (CDesktopThumbnailBase *)*((_QWORD *)ThumbnailData + 15);
    if ( v23
      && (SyncedWindowDataByHwnd = CDesktopThumbnailBase::UpdateWindowClones(v23),
          v14 = SyncedWindowDataByHwnd,
          SyncedWindowDataByHwnd < 0) )
    {
      v29 = 4102;
    }
    else
    {
      v24 = (int)*(double *)((char *)a3 + 36);
      v35.rcDestination.left = 0;
      v35.rcDestination.top = 0;
      v35.dwFlags = 3;
      v25 = *(RECT *)((char *)a3 + 20);
      v35.rcDestination.right = v24;
      v26 = (int)*(double *)((char *)a3 + 44);
      v35.rcSource = v25;
      v35.rcDestination.bottom = v26;
      SyncedWindowDataByHwnd = CThumbnailData::UpdateProperties(ThumbnailData, &v35);
      v14 = SyncedWindowDataByHwnd;
      if ( SyncedWindowDataByHwnd >= 0 )
      {
        SyncedWindowDataByHwnd = CDCompVirtualDesktopThumbnailData::EnsureThumbnailVisual(ThumbnailData);
        v14 = SyncedWindowDataByHwnd;
        if ( SyncedWindowDataByHwnd >= 0 )
        {
          SyncedWindowDataByHwnd = VisualCollection::InsertRelative(
                                     (VisualCollection *)(*((_QWORD *)ThumbnailData + 12) + 32LL),
                                     *((struct CVisual **)ThumbnailData + 13),
                                     0LL,
                                     0,
                                     1);
          v14 = SyncedWindowDataByHwnd;
          if ( SyncedWindowDataByHwnd >= 0 )
          {
            v27 = *(CVisual **)(*((_QWORD *)ThumbnailData + 2) + 384LL);
            if ( v27 )
              CVisual::SetDirtyFlags(v27, 0x8000000);
            goto LABEL_54;
          }
          v29 = 4112;
        }
        else
        {
          v29 = 4111;
        }
      }
      else
      {
        v29 = 4110;
      }
    }
LABEL_31:
    v22 = SyncedWindowDataByHwnd;
    goto LABEL_53;
  }
  while ( 1 )
  {
    v12 = (HWND)ViewBase[v11];
    if ( !(unsigned int)DwmValidateWindow(v12, a2) )
      goto LABEL_19;
    SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(v33, v12, &v30);
    v14 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v29 = 4075;
      goto LABEL_31;
    }
    if ( !v30 )
      goto LABEL_19;
    v15 = *((_DWORD *)ThumbnailData + 38);
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
      break;
    if ( v16 > *((_DWORD *)ThumbnailData + 37) )
    {
      v31 = (struct CWindowData *)&v30;
      v14 = DynArrayImpl<0>::Grow((char **)ThumbnailData + 16, 8u, 1, 0, (unsigned __int64 *)&v31);
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xC0u);
        goto LABEL_28;
      }
      *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)ThumbnailData + 38))++) + *v10) = *(_QWORD *)v31;
    }
    else
    {
      *(_QWORD *)(*v10 + 8LL * v15) = v30;
      *((_DWORD *)ThumbnailData + 38) = v16;
    }
LABEL_19:
    ViewBase = v32;
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= *((_DWORD *)a3 + 3) )
      goto LABEL_20;
  }
  v14 = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_28:
  v29 = 4078;
LABEL_29:
  v22 = v14;
LABEL_53:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, v29);
LABEL_54:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v34);
  return (unsigned int)v14;
}
