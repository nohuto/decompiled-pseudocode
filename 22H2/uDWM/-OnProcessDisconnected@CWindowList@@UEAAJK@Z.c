/*
 * XREFs of ?OnProcessDisconnected@CWindowList@@UEAAJK@Z @ 0x1800575B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::OnProcessDisconnected(CWindowList *this, unsigned int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 65) + 120LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
         a2);
  v4 = v3;
  if ( v3 >= 0 )
    v4 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5FE,
      (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v3);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return v4;
}
