/*
 * XREFs of ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z @ 0x18002BDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x18000DCA4 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016970 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180018414 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024BC0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026B04 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180028714 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x18002C1A4 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x18002C238 (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x180095960 (McTemplateU0p_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CWindowList::RegisterSharedThumbnailVisual(
        CWindowList *this,
        HWND a2,
        HWND a3,
        int a4,
        int a5,
        const struct _DWM_THUMBNAIL_PROPERTIES *a6,
        union _LARGE_INTEGER a7,
        void *a8)
{
  struct CVisual *v12; // r15
  int SyncedWindowDataByHwnd; // eax
  int v14; // ebx
  struct CWindowData *v15; // r13
  bool v16; // zf
  struct CWindowData *v17; // r14
  bool IsBaseThumbnailDestinationReachable; // al
  __int64 v19; // rax
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // rcx
  _QWORD *v23; // r10
  unsigned int v24; // eax
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // edx
  unsigned int v28; // eax
  unsigned int v29; // edx
  int updated; // eax
  struct CVisual *v31; // rax
  CVisual *v32; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // r9d
  struct CVisual *v38; // rax
  unsigned int v39; // [rsp+20h] [rbp-30h]
  struct CWindowData *v40; // [rsp+30h] [rbp-20h] BYREF
  struct CVisual *v41; // [rsp+38h] [rbp-18h] BYREF
  struct CWindowData *v42; // [rsp+40h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v43; // [rsp+48h] [rbp-8h] BYREF

  v43 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v42);
  v14 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v39 = 3869;
LABEL_49:
    v37 = SyncedWindowDataByHwnd;
LABEL_54:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v37, v39);
    goto LABEL_32;
  }
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a3, &v40);
  v14 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v39 = 3870;
    goto LABEL_49;
  }
  v15 = v42;
  if ( !v42 )
    goto LABEL_56;
  v16 = a4 == 0;
  v17 = v40;
  if ( v16 )
  {
    if ( v40 )
      goto LABEL_6;
LABEL_56:
    v14 = -2147024809;
    goto LABEL_57;
  }
  if ( v40 )
    goto LABEL_56;
LABEL_6:
  *((_QWORD *)this + 48) = v42;
  if ( v17 )
    IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(this, v17);
  else
    IsBaseThumbnailDestinationReachable = 0;
  *((_QWORD *)this + 48) = 0LL;
  if ( IsBaseThumbnailDestinationReachable )
  {
    v14 = -2147024809;
    goto LABEL_32;
  }
  v19 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          120LL);
  v20 = v19;
  if ( v19 )
  {
    *(_QWORD *)(v19 + 8) = 0LL;
    *(_QWORD *)(v19 + 16) = 0LL;
    *(_QWORD *)(v19 + 24) = 0LL;
    *(_DWORD *)(v19 + 32) = 0;
    *(_OWORD *)(v19 + 36) = 0LL;
    *(_OWORD *)(v19 + 52) = 0LL;
    *(_QWORD *)(v19 + 68) = 0LL;
    *(_DWORD *)(v19 + 76) = 0;
    *(_BYTE *)(v19 + 80) = 0;
    *(_QWORD *)v19 = &CDCompThumbnailData::`vftable';
    *(_QWORD *)(v19 + 88) = 0LL;
    *(_QWORD *)(v19 + 96) = 0LL;
    *(_QWORD *)(v19 + 104) = 0LL;
    *(_DWORD *)(v19 + 112) = 0;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !v20 )
  {
    v14 = -2147024882;
    v39 = 3900;
    v37 = -2147024882;
    goto LABEL_54;
  }
  *(union _LARGE_INTEGER *)(v20 + 8) = a7;
  *(_BYTE *)(v20 + 33) = a5 != 0;
  *(_QWORD *)(v20 + 16) = v15;
  *(_DWORD *)(v20 + 112) = a4 != 0;
  *(_QWORD *)(v20 + 24) = v17;
  *(_BYTE *)(v20 + 32) = 0;
  *(_BYTE *)(v20 + 34) = 1;
  v21 = CVisual::CreateFromSharedHandle(a8, &v41);
  v14 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0xF47u);
    v12 = v41;
    goto LABEL_57;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v22, &CommitChannel_WindowList_Thumbnail, a2);
  v12 = v41;
  v23 = (_QWORD *)((char *)this + 352);
  *(_QWORD *)(v20 + 96) = v41;
  v24 = *((_DWORD *)this + 94);
  v42 = (struct CWindowData *)v20;
  v25 = v24 + 1;
  if ( v24 + 1 < v24 )
  {
    v14 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_64:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xF4Eu);
LABEL_57:
    if ( v12 )
      CBaseObject::Release(v12);
    goto LABEL_32;
  }
  if ( v25 <= *((_DWORD *)this + 93) )
  {
    *(_QWORD *)(*v23 + 8LL * v24) = v20;
    *((_DWORD *)this + 94) = v25;
    goto LABEL_18;
  }
  v34 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v23, 8u, 1, &v42);
  v14 = v34;
  if ( v34 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0xC0u);
  if ( v14 < 0 )
    goto LABEL_64;
LABEL_18:
  v42 = (struct CWindowData *)v20;
  v26 = *((_DWORD *)v15 + 124);
  v27 = v26 + 1;
  if ( v26 + 1 < v26 )
  {
    v14 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    goto LABEL_52;
  }
  if ( v27 <= *((_DWORD *)v15 + 123) )
  {
    *(_QWORD *)(*((_QWORD *)v15 + 59) + 8LL * v26) = v20;
    *((_DWORD *)v15 + 124) = v27;
    goto LABEL_21;
  }
  v35 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v15 + 472, 8u, 1, &v42);
  v14 = v35;
  if ( v35 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0xC0u);
  if ( v14 < 0 )
  {
LABEL_52:
    v39 = 3926;
LABEL_53:
    v37 = v14;
    goto LABEL_54;
  }
LABEL_21:
  if ( v17 )
  {
    v42 = (struct CWindowData *)v20;
    v28 = *((_DWORD *)v17 + 132);
    v29 = v28 + 1;
    if ( v28 + 1 < v28 )
    {
      v14 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    else
    {
      if ( v29 <= *((_DWORD *)v17 + 131) )
      {
        *(_QWORD *)(*((_QWORD *)v17 + 63) + 8LL * v28) = v20;
        *((_DWORD *)v17 + 132) = v29;
        goto LABEL_25;
      }
      v36 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v17 + 504, 8u, 1, &v42);
      v14 = v36;
      if ( v36 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0xC0u);
      if ( v14 >= 0 )
        goto LABEL_25;
    }
    v39 = 3929;
    goto LABEL_53;
  }
LABEL_25:
  if ( a4 )
  {
    updated = CThumbnailData::UpdateProperties((CThumbnailData *)v20, a6);
    v14 = updated;
    if ( updated < 0 )
    {
      v39 = 3941;
      goto LABEL_69;
    }
    updated = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    v14 = updated;
    if ( updated < 0 )
    {
      v39 = 3942;
      goto LABEL_69;
    }
    v38 = (struct CVisual *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    updated = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)(v20 + 96) + 32LL), v38, 0LL, 0, 1);
    v14 = updated;
    if ( updated < 0 )
    {
      v39 = 3943;
      goto LABEL_69;
    }
  }
  else
  {
    updated = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    v14 = updated;
    if ( updated < 0 )
    {
      v39 = 3947;
      goto LABEL_69;
    }
    updated = CThumbnailData::UpdateProperties((CThumbnailData *)v20, a6);
    v14 = updated;
    if ( updated < 0 )
    {
      v39 = 3948;
      goto LABEL_69;
    }
    v31 = (struct CVisual *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    updated = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)(v20 + 96) + 32LL), v31, 0LL, 0, 1);
    v14 = updated;
    if ( updated < 0 )
    {
      v39 = 3949;
      goto LABEL_69;
    }
    if ( CDesktopManager::IsLogonDesktop(*((_QWORD *)v15 + 15)) )
    {
      updated = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + 96) + 64LL))(*(_QWORD *)(v20 + 96));
      v14 = updated;
      if ( updated < 0 )
      {
        v39 = 3955;
LABEL_69:
        v37 = updated;
        goto LABEL_54;
      }
    }
  }
  v32 = (CVisual *)*((_QWORD *)v15 + 48);
  if ( v32 )
    CVisual::SetDirtyFlags(v32, 0x8000000);
LABEL_32:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v43);
  return (unsigned int)v14;
}
