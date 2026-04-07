/*
 * XREFs of ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x180051714
 * Callers:
 *     ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x180051638 (-ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z.c)
 *     ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x180098A10 (-PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::PostActivateLivePreview(
        CDesktopManager *this,
        const struct MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW *a2)
{
  unsigned int v2; // ebx
  WPARAM v5; // rdi
  __int64 v6; // rax
  int v8; // r9d
  signed int LastError; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v2 = 0;
  v5 = 0LL;
  if ( !*((_DWORD *)this + 164) )
  {
    v8 = -2147467259;
    v10 = 2720;
LABEL_8:
    v2 = v8;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v10);
    goto LABEL_5;
  }
  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         56LL);
  v5 = v6;
  if ( !v6 )
  {
    v8 = -2147024882;
    v10 = 2729;
    goto LABEL_8;
  }
  *(_DWORD *)v6 = *((_DWORD *)a2 + 1);
  *(_QWORD *)(v6 + 8) = *((_QWORD *)a2 + 1);
  *(_QWORD *)(v6 + 16) = *((_QWORD *)a2 + 2);
  *(_DWORD *)(v6 + 24) = *((_DWORD *)a2 + 6);
  *(_DWORD *)(v6 + 28) = *((_DWORD *)a2 + 7);
  *(_DWORD *)(v6 + 32) = 0;
  *(_OWORD *)(v6 + 36) = *((_OWORD *)a2 + 2);
  SetLastError(0);
  if ( !PostThreadMessageW(*((_DWORD *)this + 164), 0x405u, v5, 0LL) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v10 = 2744;
    if ( LastError >= 0 )
      LastError = -2003304445;
    v2 = LastError;
    v8 = LastError;
    goto LABEL_12;
  }
  v5 = 0LL;
LABEL_5:
  (*(void (__fastcall **)(WPF::HeapBase *, WPARAM))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v5);
  return v2;
}
