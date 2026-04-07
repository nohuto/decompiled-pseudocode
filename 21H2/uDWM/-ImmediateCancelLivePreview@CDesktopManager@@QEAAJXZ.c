/*
 * XREFs of ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x1800093FC
 * Callers:
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x180035ABC (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180036BA0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::ImmediateCancelLivePreview(CDesktopManager *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  WPARAM v4; // rdi
  signed int LastError; // eax

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         56LL);
  v4 = v3;
  if ( v3 )
  {
    *(_DWORD *)v3 = 0;
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)(v3 + 16) = 0LL;
    *(_DWORD *)(v3 + 24) = 1;
    *(_DWORD *)(v3 + 32) = 1;
    SetLastError(0);
    if ( PostThreadMessageW(*((_DWORD *)this + 164), 0x405u, v4, 0LL) )
    {
      v4 = 0LL;
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      v2 = LastError;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LastError, 0xAD6u);
    }
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xAC9u);
  }
  (*(void (__fastcall **)(WPF::HeapBase *, WPARAM))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v4);
  return v2;
}
