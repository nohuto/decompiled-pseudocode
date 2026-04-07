/*
 * XREFs of ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x180091080
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001A5EC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024BC0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B1F0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180042A10 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@CProjectionBorderManager@@I@Z @ 0x18008E578 (-AddMultipleAndSet@-$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@C.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x18008E618 (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18008EF4C (-ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18008F054 (-ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z @ 0x180091E5C (-_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z.c)
 *     ?_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z @ 0x180091EC4 (-_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z.c)
 *     ?_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z @ 0x180091F50 (-_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z.c)
 *     ?_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ @ 0x180092510 (-_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z @ 0x1800925EC (-_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z.c)
 *     ?_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ @ 0x180092EF4 (-_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ.c)
 *     ?UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z @ 0x1800931F4 (-UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::UpdateOutputDuplication(
        CProjectionBorderManager *this,
        const struct _D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_ *a2)
{
  CProjectionBorderManager *v5; // rcx
  unsigned int v6; // edx
  unsigned int i; // esi
  __int64 v8; // rax
  __int64 v9; // r13
  const struct _LUID *v10; // r12
  __int64 v11; // rcx
  unsigned int ProjectionVisualByAdapter; // ebx
  struct _LUID v13; // rax
  int v14; // eax
  __int64 *v15; // r14
  int v16; // eax
  __int64 v17; // r12
  unsigned __int64 v18; // rcx
  struct CVisual *OverlayRootVisualForDesktop; // rsi
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rcx
  int inserted; // eax
  __int64 v24; // rcx
  char v25; // [rsp+30h] [rbp-49h]
  unsigned __int64 v26; // [rsp+38h] [rbp-41h] BYREF
  __int64 v27; // [rsp+40h] [rbp-39h]
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+48h] [rbp-31h] BYREF
  struct CProjectionBorderVisual *v29; // [rsp+50h] [rbp-29h] BYREF
  struct CProjectionBorderVisual *v30[2]; // [rsp+58h] [rbp-21h]
  struct _LUID v31; // [rsp+68h] [rbp-11h]
  DWORD LowPart; // [rsp+70h] [rbp-9h]
  unsigned __int64 v33; // [rsp+78h] [rbp-1h]
  char v34; // [rsp+80h] [rbp+7h]
  RECT rc1; // [rsp+88h] [rbp+Fh] BYREF

  if ( *(_DWORD *)a2 > 0x10u )
    return 2147942487LL;
  v28 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  for ( i = 0; v6 < *((_DWORD *)this + 106); *(_BYTE *)(56 * v8 + *((_QWORD *)this + 50) + 48) = 0 )
  {
    v8 = v6++;
    v5 = (CProjectionBorderManager *)(56 * v8);
  }
  v9 = 0LL;
  if ( !*(_DWORD *)a2 )
  {
LABEL_30:
    CProjectionBorderManager::_RemoveInactiveVisuals(this);
    CProjectionBorderManager::_UpdateFilteredVisualList(this);
    ProjectionVisualByAdapter = -1;
    goto LABEL_31;
  }
  while ( 1 )
  {
    rc1 = 0LL;
    v10 = (const struct _LUID *)((char *)a2 + 24 * v9);
    if ( (int)CProjectionBorderManager::_GetAdapterDisplayRect(v5, v10 + 2, v10[3].LowPart, &rc1) >= 0 )
      break;
    WindowFrameLoggingTelemetry::ScreenDuplicationInvalidMonitor(v11);
LABEL_29:
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= *(_DWORD *)a2 )
      goto LABEL_30;
  }
  ProjectionVisualByAdapter = CProjectionBorderManager::_FindProjectionVisualByAdapter(
                                this,
                                v10 + 2,
                                *((_DWORD *)a2 + 6 * v9 + 6));
  if ( ProjectionVisualByAdapter == -1 )
    ProjectionVisualByAdapter = CProjectionBorderManager::_FindProjectionVisualByRect(this, &rc1);
  if ( !(unsigned int)GetDesktopID(1LL, &v26) )
    goto LABEL_29;
  v25 = 0;
  if ( ProjectionVisualByAdapter == -1 )
  {
    v13 = v10[2];
    v34 = 1;
    v30[1] = 0LL;
    v31 = v13;
    v13.LowPart = *((_DWORD *)a2 + 6 * v9 + 6);
    v29 = 0LL;
    LowPart = v13.LowPart;
    v33 = v26;
    *(RECT *)v30 = rc1;
    v14 = CProjectionBorderVisual::Create(&v29);
    i = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x82u);
      goto LABEL_33;
    }
    v15 = (__int64 *)((char *)this + 400);
    *((_DWORD *)v29 + 75) = 1;
    v16 = DynArray<CProjectionBorderManager::VisualInfo,0>::AddMultipleAndSet((__int64)this + 400, (__int64)&v29);
    i = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x85u);
      goto LABEL_33;
    }
    ProjectionVisualByAdapter = *((_DWORD *)this + 106) - 1;
    v25 = 1;
  }
  else
  {
    v15 = (__int64 *)((char *)this + 400);
    v17 = 56LL * ProjectionVisualByAdapter;
    v27 = ProjectionVisualByAdapter;
    *(_BYTE *)(v17 + *((_QWORD *)this + 50) + 48) = 1;
    if ( !EqualRect(&rc1, (const RECT *)(v17 + *((_QWORD *)this + 50) + 8LL)) )
    {
      v25 = 1;
      *(RECT *)(v17 + *v15 + 8) = rc1;
    }
    v18 = v26;
    if ( v26 == *(_QWORD *)(v17 + *v15 + 40) )
    {
      v21 = v27;
LABEL_26:
      if ( v25 )
      {
        CProjectionBorderVisual::UpdateRect(
          *(CProjectionBorderVisual **)(56 * v21 + *v15),
          (const struct tagRECT *)(56 * v21 + *v15 + 8));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(56 * v21 + *v15) + 104LL))(*(_QWORD *)(56 * v21 + *v15));
        v24 = *(_QWORD *)(*(_QWORD *)(56 * v21 + *v15) + 24LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 64LL))(v24);
      }
      WindowFrameLoggingTelemetry::ScreenDuplicationEnabled(v18);
      goto LABEL_29;
    }
    *(_QWORD *)(v17 + *v15 + 40) = v26;
  }
  OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                  v26,
                                  1);
  if ( OverlayRootVisualForDesktop
    || (OverlayRootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                        v26)) != 0LL )
  {
    v20 = *v15;
    v21 = ProjectionVisualByAdapter;
    v27 = 56LL * ProjectionVisualByAdapter;
    v22 = *(_QWORD *)(*(_QWORD *)(v27 + v20) + 24LL);
    if ( v22 )
    {
      VisualCollection::Remove((VisualCollection *)(v22 + 32), *(struct CVisual **)(v27 + v20));
      v20 = *((_QWORD *)this + 50);
    }
    inserted = VisualCollection::InsertRelative(
                 (struct CVisual *)((char *)OverlayRootVisualForDesktop + 32),
                 *(struct CVisual **)(v27 + v20),
                 0LL,
                 0,
                 1);
    i = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0xAFu);
      goto LABEL_31;
    }
    goto LABEL_26;
  }
  i = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xA7u);
LABEL_31:
  if ( ProjectionVisualByAdapter != -1 )
    CProjectionBorderManager::_RemoveVisualByIndex(this, ProjectionVisualByAdapter);
LABEL_33:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v28);
  return i;
}
