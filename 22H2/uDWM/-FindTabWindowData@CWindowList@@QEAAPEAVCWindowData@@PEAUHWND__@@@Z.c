/*
 * XREFs of ?FindTabWindowData@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18009786C
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x18003FA3C (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

struct CWindowData *__fastcall CWindowList::FindTabWindowData(CWindowList *this, HWND a2)
{
  unsigned int v4; // r9d
  __int64 v5; // rbx
  unsigned int v6; // r8d
  __int64 v7; // r10
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *((_DWORD *)this + 122);
  v5 = 0LL;
  v6 = 0;
  if ( v4 )
  {
    v7 = *((_QWORD *)this + 58);
    while ( *(HWND *)(*(_QWORD *)(v7 + 8LL * v6) + 40LL) != a2 )
    {
      if ( ++v6 >= v4 )
        goto LABEL_7;
    }
    v5 = *(_QWORD *)(v7 + 8LL * v6);
  }
LABEL_7:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return (struct CWindowData *)v5;
}
