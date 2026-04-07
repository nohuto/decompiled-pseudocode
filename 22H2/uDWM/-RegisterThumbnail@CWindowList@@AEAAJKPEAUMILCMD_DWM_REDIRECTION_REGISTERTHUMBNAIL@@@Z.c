/*
 * XREFs of ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x18009919C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180031850 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180017BD4 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800262C4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x18002B9F8 (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x180094F8C (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CWindowList::RegisterThumbnail(
        CWindowList *this,
        int a2,
        struct MILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL *a3)
{
  HWND v6; // rdx
  int SyncedWindowDataByHwnd; // eax
  int v8; // ebx
  int v9; // r9d
  struct CWindowData *v10; // rsi
  struct CWindowData *v11; // r15
  char IsBaseThumbnailDestinationReachable; // al
  __int64 v13; // rax
  struct CWindowData *v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // r8d
  int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // r8d
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned int v26; // [rsp+20h] [rbp-20h]
  struct CWindowData *v27; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+38h] [rbp-8h] BYREF
  DWORD dwProcessId; // [rsp+90h] [rbp+50h] BYREF
  struct CWindowData *v30; // [rsp+98h] [rbp+58h] BYREF

  v28 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = *(HWND *)((char *)a3 + 12);
  v30 = 0LL;
  v27 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v6, &v30);
  v8 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v26 = 3772;
LABEL_3:
    v9 = SyncedWindowDataByHwnd;
    goto LABEL_4;
  }
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a3 + 20), &v27);
  v8 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v26 = 3773;
    goto LABEL_3;
  }
  v10 = v30;
  dwProcessId = 0;
  if ( !GetWindowThreadProcessId(*((HWND *)v30 + 5), &dwProcessId)
    || (v11 = v27) == 0LL
    || a2 != dwProcessId
    || *((_DWORD *)a3 + 7) && a2 != GetCurrentProcessId()
    || (*((_QWORD *)this + 48) = v10,
        IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(
                                                (struct CWindowData **)this,
                                                v11),
        *((_QWORD *)this + 48) = 0LL,
        IsBaseThumbnailDestinationReachable) )
  {
    v8 = -2147024809;
    goto LABEL_50;
  }
  v13 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          96LL);
  v14 = (struct CWindowData *)v13;
  if ( v13 )
  {
    *(_QWORD *)v13 = &CThumbnailData::`vftable';
    *(_QWORD *)(v13 + 8) = 0LL;
    *(_QWORD *)(v13 + 16) = 0LL;
    *(_QWORD *)(v13 + 24) = 0LL;
    *(_DWORD *)(v13 + 32) = 0;
    *(_OWORD *)(v13 + 36) = 0LL;
    *(_OWORD *)(v13 + 52) = 0LL;
    *(_QWORD *)(v13 + 68) = 0LL;
    *(_DWORD *)(v13 + 76) = 0;
    *(_BYTE *)(v13 + 80) = 0;
    *(_QWORD *)(v13 + 88) = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  v30 = v14;
  if ( !v14 )
  {
    v8 = -2147024882;
    v26 = 3810;
    v9 = -2147024882;
    goto LABEL_4;
  }
  *((_QWORD *)v14 + 1) = *(_QWORD *)((char *)a3 + 4);
  *((_QWORD *)v30 + 2) = v10;
  *((_QWORD *)v30 + 3) = v11;
  *((_BYTE *)v30 + 32) = *((_DWORD *)a3 + 7) != 0;
  *((_BYTE *)v30 + 33) = *((_DWORD *)a3 + 8) != 0;
  *((_BYTE *)v30 + 34) = 0;
  v15 = *((_DWORD *)this + 94);
  v16 = v15 + 1;
  if ( v15 + 1 < v15 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_27:
    v26 = 3819;
LABEL_28:
    v9 = v8;
    goto LABEL_4;
  }
  if ( v16 > *((_DWORD *)this + 93) )
  {
    v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 352, 8u, 1, &v30);
    v8 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0xC0u);
    if ( v8 < 0 )
      goto LABEL_27;
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 44) + 8LL * *((unsigned int *)this + 94)) = v30;
    *((_DWORD *)this + 94) = v16;
  }
  v17 = *((_DWORD *)v10 + 124);
  v18 = v17 + 1;
  if ( v17 + 1 < v17 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_36:
    v26 = 3826;
    goto LABEL_28;
  }
  if ( v18 > *((_DWORD *)v10 + 123) )
  {
    v22 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v10 + 472, 8u, 1, &v30);
    v8 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0xC0u);
    if ( v8 < 0 )
      goto LABEL_36;
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v10 + 59) + 8LL * *((unsigned int *)v10 + 124)) = v30;
    *((_DWORD *)v10 + 124) = v18;
  }
  v20 = *((_DWORD *)v11 + 132);
  v21 = v20 + 1;
  if ( v20 + 1 < v20 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_46:
    v26 = 3827;
    goto LABEL_28;
  }
  if ( v21 > *((_DWORD *)v11 + 131) )
  {
    v24 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v11 + 504, 8u, 1, &v30);
    v8 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0xC0u);
    if ( v8 < 0 )
      goto LABEL_46;
  }
  else
  {
    v8 = 0;
    *(_QWORD *)(*((_QWORD *)v11 + 63) + 8LL * *((unsigned int *)v11 + 132)) = v30;
    *((_DWORD *)v11 + 132) = v21;
  }
  if ( !*((_QWORD *)v10 + 48) )
    goto LABEL_50;
  v23 = (*(__int64 (__fastcall **)(struct CWindowData *))(*(_QWORD *)v30 + 8LL))(v30);
  v8 = v23;
  if ( v23 >= 0 )
  {
    v23 = CTopLevelWindow::OnThumbnailAdded(*((CTopLevelWindow **)v10 + 48), *((struct CVisual **)v30 + 11));
    v8 = v23;
    if ( v23 >= 0 )
      goto LABEL_50;
    v26 = 3837;
  }
  else
  {
    v26 = 3835;
  }
  v9 = v23;
LABEL_4:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v26);
LABEL_50:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v28);
  return (unsigned int)v8;
}
