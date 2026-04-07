/*
 * XREFs of ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x180013CB4
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800139F0 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18002A1D4 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180010F0C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 */

char __fastcall CWindowData::IsSimpleClientArea(CWindowData *this)
{
  char v1; // di

  v1 = 0;
  if ( (*((_BYTE *)this + 609) & 0x10) == 0
    && (*((_BYTE *)this + 611) & 0x40) == 0
    && !*((_DWORD *)this + 124)
    && (!*((_QWORD *)this + 46)
     || *((HWND *)this + 5) == CWindowList::GetShellWindowForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 61))) )
  {
    return 1;
  }
  return v1;
}
