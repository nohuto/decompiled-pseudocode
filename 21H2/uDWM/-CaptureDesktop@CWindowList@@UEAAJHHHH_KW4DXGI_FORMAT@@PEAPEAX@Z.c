/*
 * XREFs of ?CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z @ 0x18003F700
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180042C3C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::CaptureDesktop(
        CWindowList *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        unsigned __int64 a6,
        DXGI_FORMAT a7,
        void **a8)
{
  __int64 v8; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int64 dwMaximumSizeLow; // rcx
  char *FileMappingW; // rbx
  int v14; // eax
  unsigned int v15; // edi
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+50h] [rbp-28h] BYREF

  v8 = a4;
  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *a8 = 0LL;
  if ( (int)v8 <= 0 || (int)a5 <= 0 )
  {
    v15 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x1531u);
    goto LABEL_8;
  }
  v11 = v8 * ((unsigned __int64)GetPixelFormatSize(a7) >> 3);
  if ( v11 > 0xFFFFFFFF )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0x1512u);
    goto LABEL_8;
  }
  dwMaximumSizeLow = (unsigned int)a5 * (unsigned __int64)(((_DWORD)v11 + 3) & 0xFFFFFFFC);
  if ( dwMaximumSizeLow > 0xFFFFFFFF )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0x1516u);
    goto LABEL_8;
  }
  FileMappingW = (char *)CreateFileMappingW((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0x8000004u, 0, dwMaximumSizeLow, 0LL);
  if ( ((unsigned __int64)(FileMappingW + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1520u);
    if ( (unsigned __int64)(FileMappingW - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_8;
LABEL_12:
    CloseHandle(FileMappingW);
    goto LABEL_8;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, _DWORD, _DWORD, DXGI_FORMAT, unsigned __int64, char *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL) + 648LL))(
          *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
          0xFFFFFFFE00000000uLL,
          a2,
          a3,
          v8,
          (_DWORD)a5,
          a7,
          a6,
          FileMappingW);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x152Cu);
    goto LABEL_12;
  }
  *a8 = FileMappingW;
LABEL_8:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return v15;
}
