/*
 * XREFs of ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x180098AE4
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180031850 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800118B8 (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x180032CC4 (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::QueryThumbnailSourceSize(
        CWindowList *this,
        int a2,
        struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE *a3)
{
  struct CThumbnailData *ThumbnailData; // rax
  int v7; // edi
  struct CThumbnailData *v8; // rsi
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // edx
  struct CSecondaryWindowRepresentation *v16; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  v7 = 0;
  v8 = ThumbnailData;
  if ( ThumbnailData && a2 == *((_DWORD *)a3 + 2) )
  {
    v9 = *(_QWORD *)ThumbnailData;
    v16 = 0LL;
    v10 = (*(__int64 (__fastcall **)(struct CThumbnailData *))(v9 + 8))(ThumbnailData);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v12 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(*((CThumbnailVisual **)v8 + 11), &v16);
      v11 = v12;
      if ( v12 >= 0 )
      {
        v13 = 0;
        if ( *((_DWORD *)v16 + 20) - *((_DWORD *)v16 + 23) - *((_DWORD *)v16 + 22) >= 0 )
          v13 = *((_DWORD *)v16 + 20) - *((_DWORD *)v16 + 23) - *((_DWORD *)v16 + 22);
        v14 = *((_DWORD *)v16 + 21) - *((_DWORD *)v16 + 25) - *((_DWORD *)v16 + 24);
        *((_DWORD *)a3 + 3) = v13;
        if ( v14 >= 0 )
          v7 = v14;
        *((_DWORD *)a3 + 4) = v7;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x1071u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x1070u);
    }
  }
  else
  {
    v11 = -2147024809;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return v11;
}
