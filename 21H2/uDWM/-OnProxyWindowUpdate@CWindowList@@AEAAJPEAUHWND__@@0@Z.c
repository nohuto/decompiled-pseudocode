/*
 * XREFs of ?OnProxyWindowUpdate@CWindowList@@AEAAJPEAUHWND__@@0@Z @ 0x180006568
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032090 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180015C8C (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::OnProxyWindowUpdate(CWindowList *this, HWND a2, HWND a3)
{
  __int64 v6; // rbp
  struct CWindowData *WindowDataByHwnd; // rbx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  struct CWindowData *v11; // rax
  __int64 v12; // rcx
  bool v13; // zf
  int v14; // eax
  int v16; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+68h] [rbp+20h] BYREF

  v18 = &CDesktopManager::s_csDwmInstance;
  v6 = 0LL;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(this, a2);
  if ( WindowDataByHwnd )
  {
    v11 = 0LL;
    if ( !a3 || (v11 = CWindowList::FindWindowDataByHwnd(this, a3)) != 0LL )
    {
      v12 = *((_QWORD *)WindowDataByHwnd + 74);
      if ( v12 )
      {
        v6 = *(_QWORD *)(v12 + 40);
        *(_QWORD *)(v12 + 600) = 0LL;
      }
      if ( a3 )
      {
        if ( *((_QWORD *)v11 + 75) )
        {
          v8 = -2147024809;
          v9 = 7107LL;
          v10 = 2147942487LL;
          goto LABEL_16;
        }
        *((_QWORD *)WindowDataByHwnd + 74) = v11;
        v13 = *((_QWORD *)v11 + 48) == 0LL;
        *((_QWORD *)v11 + 75) = WindowDataByHwnd;
        if ( v13 )
          *((_BYTE *)v11 + 613) |= 0x10u;
      }
      else
      {
        *((_QWORD *)WindowDataByHwnd + 74) = 0LL;
      }
      v14 = (*(__int64 (__fastcall **)(_QWORD, HWND, HWND, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 65)
                                                                   + 112LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
              a2,
              a3,
              v6);
      v8 = v14;
      if ( v14 >= 0 )
      {
        v8 = 0;
        goto LABEL_18;
      }
      v10 = (unsigned int)v14;
      v9 = 7121LL;
    }
    else
    {
      v8 = -2147024809;
      v9 = 7088LL;
      v10 = 2147942487LL;
    }
  }
  else
  {
    v8 = -2147024809;
    v9 = 7083LL;
    v10 = 2147942487LL;
  }
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)v10,
    v16);
LABEL_18:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return v8;
}
