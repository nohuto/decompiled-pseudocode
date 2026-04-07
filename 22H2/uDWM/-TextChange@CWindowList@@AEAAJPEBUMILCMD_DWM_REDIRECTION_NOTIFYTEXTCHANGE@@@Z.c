/*
 * XREFs of ?TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z @ 0x180015A5C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800157E0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800156D8 (--0CWindowData@@QEAA@XZ.c)
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x180015C60 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016130 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800183C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180045320 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x1800956A8 (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 */

__int64 __fastcall CWindowList::TextChange(CWindowList *this, const struct MILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  int v6; // edi
  CWindowData *v7; // rsi
  __int64 v8; // rax
  struct IDwmWindow *v9; // r14
  int v10; // ebp
  CWindowData *v11; // rdi
  int WindowText; // eax
  int v13; // eax
  CVisual *v14; // rcx
  CWindowIconic *v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // edx
  CWindowData *v19; // rax
  int v20; // eax
  __int64 v21; // r8
  unsigned int v22; // [rsp+20h] [rbp-248h]
  WCHAR pString[256]; // [rsp+30h] [rbp-238h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_QWORD *)((char *)a2 + 4);
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  if ( v4 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7) + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7));
    v9 = (struct IDwmWindow *)v8;
    if ( v8 )
    {
      v10 = 0;
      v11 = (CWindowData *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      if ( v11 )
        goto LABEL_4;
      v19 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                             WPF::g_pProcessHeap,
                             768LL);
      if ( v19 )
        v11 = CWindowData::CWindowData(v19);
      else
        v11 = 0LL;
      if ( !v11 )
      {
        v6 = -2147024882;
        v10 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x88Bu);
LABEL_21:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x86Eu);
        goto LABEL_6;
      }
      *((_QWORD *)v11 + 3) = v9;
      (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))v9)(v9, v11);
      *((_QWORD *)v11 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v9 + 24LL))(v9);
      v20 = CWindowList::SyncWindowData(this, v9, v11);
      v10 = v20;
      if ( v20 >= 0 )
LABEL_4:
        v7 = v11;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x88Fu);
      v6 = v10;
      if ( v10 >= 0 )
        goto LABEL_6;
      goto LABEL_21;
    }
  }
LABEL_6:
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xCBAu);
  }
  else if ( v7 )
  {
    WindowText = InternalGetWindowText(*((HWND *)v7 + 5), pString, 256);
    v13 = CWindowData::SetTitle(v7, pString, WindowText);
    v6 = v13;
    if ( v13 < 0 )
    {
      v22 = 3264;
LABEL_24:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, v22);
      goto LABEL_13;
    }
    v14 = (CVisual *)*((_QWORD *)v7 + 48);
    if ( v14 )
      CVisual::SetDirtyFlags(v14, 0x10000u);
    v15 = (CWindowIconic *)*((_QWORD *)v7 + 53);
    if ( v15 )
    {
      v13 = CWindowIconic::OnTitleUpdated(v15, 1);
      v6 = v13;
      if ( v13 < 0 )
      {
        v22 = 3273;
        goto LABEL_24;
      }
    }
    v16 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 64);
    v17 = *(_DWORD *)(v16 + 360);
    if ( v17 )
    {
      v21 = *(_QWORD *)(v16 + 336);
      while ( *(CWindowData **)(v21 + 48LL * v5 + 8) != v7 )
      {
        if ( ++v5 >= v17 )
          goto LABEL_13;
      }
      CTopLevelWindow::UpdateTitle(*(CTopLevelWindow **)(v21 + 48LL * v5), *((unsigned __int16 **)v7 + 2));
    }
  }
LABEL_13:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v6;
}
