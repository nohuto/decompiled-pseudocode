/*
 * XREFs of ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x180099160
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180016020 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180018414 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026B04 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x18002C1A4 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompVirtualDesktopThumbnailData@@QEAA@XZ @ 0x180096000 (--0CDCompVirtualDesktopThumbnailData@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowList::RegisterSharedVirtualDesktopVisual(
        CWindowList *this,
        HWND a2,
        union _LARGE_INTEGER a3,
        void *a4)
{
  struct CVisual *v8; // r14
  int SyncedWindowDataByHwnd; // eax
  int v10; // edi
  struct CWindowData *v11; // r15
  CDCompVirtualDesktopThumbnailData *v12; // rax
  CDCompVirtualDesktopThumbnailData *v13; // rsi
  int v14; // eax
  _QWORD *v15; // r10
  __int64 v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // edx
  int v20; // eax
  int v21; // eax
  struct CVisual *v23; // [rsp+30h] [rbp-20h] BYREF
  struct CWindowData *v24; // [rsp+38h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+40h] [rbp-10h] BYREF

  v25 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v24);
  v10 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0xF99u);
    goto LABEL_28;
  }
  v11 = v24;
  if ( !v24 )
  {
    v10 = -2147024809;
    goto LABEL_28;
  }
  v12 = (CDCompVirtualDesktopThumbnailData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                 + 8LL))(
                                               WPF::g_pProcessHeap,
                                               192LL);
  if ( v12 )
    v13 = CDCompVirtualDesktopThumbnailData::CDCompVirtualDesktopThumbnailData(v12);
  else
    v13 = 0LL;
  if ( !v13 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xFA4u);
    goto LABEL_28;
  }
  *((union _LARGE_INTEGER *)v13 + 1) = a3;
  *((_QWORD *)v13 + 2) = v11;
  *((_QWORD *)v13 + 3) = 0LL;
  *((_WORD *)v13 + 16) = 0;
  *((_BYTE *)v13 + 34) = 1;
  *((_DWORD *)v13 + 28) = 2;
  v14 = CVisual::CreateFromSharedHandle(a4, &v23);
  v10 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xFB0u);
    v8 = v23;
    goto LABEL_28;
  }
  v8 = v23;
  v15 = (_QWORD *)((char *)this + 352);
  *((_QWORD *)v13 + 12) = v23;
  v16 = *((unsigned int *)this + 94);
  v24 = v13;
  v17 = v16 + 1;
  if ( (int)v16 + 1 < (unsigned int)v16 )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xFB6u);
    goto LABEL_28;
  }
  if ( v17 > *((_DWORD *)this + 93) )
  {
    v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v15, 8u, 1, &v24);
    v10 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0xC0u);
    if ( v10 < 0 )
      goto LABEL_21;
  }
  else
  {
    *(_QWORD *)(*v15 + 8 * v16) = v13;
    *((_DWORD *)this + 94) = v17;
  }
  v24 = v13;
  v18 = *((_DWORD *)v11 + 124);
  v8 = 0LL;
  v19 = v18 + 1;
  if ( v18 + 1 < v18 )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xFBCu);
    goto LABEL_28;
  }
  if ( v19 <= *((_DWORD *)v11 + 123) )
  {
    v10 = 0;
    *(_QWORD *)(*((_QWORD *)v11 + 59) + 8LL * *((unsigned int *)v11 + 124)) = v13;
    *((_DWORD *)v11 + 124) = v19;
    goto LABEL_28;
  }
  v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v11 + 472, 8u, 1, &v24);
  v10 = v21;
  if ( v21 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0xC0u);
  if ( v10 < 0 )
    goto LABEL_27;
LABEL_28:
  CloseHandle(a4);
  if ( v8 )
    CBaseObject::Release(v8);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v25);
  return (unsigned int)v10;
}
