/*
 * XREFs of ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x180096718
 * Callers:
 *     ??1CWindowList@@UEAA@XZ @ 0x180095E74 (--1CWindowList@@UEAA@XZ.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x1800978F0 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?SetResizeCompSyncObject@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z @ 0x180099B60 (-SetResizeCompSyncObject@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081124 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CWindowList::CommitAndCloseResizeCompSyncObject(CWindowList *this)
{
  __int64 v1; // r8
  int v3; // eax
  void *v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 71);
  if ( v1 )
  {
    if ( *((_BYTE *)this + 602) )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 5)
                                                                    + 16LL)
                                                      + 32LL))(
             *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
             v1);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          2714LL,
          (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v3);
      v1 = *((_QWORD *)this + 71);
      *((_BYTE *)this + 602) = 0;
    }
    NtDCompositionCommitSynchronizationObject(v1);
    ConfirmResizeCommit(*((_QWORD *)this + 72));
    v4 = (void *)*((_QWORD *)this + 71);
    *((_QWORD *)this + 72) = 0LL;
    CloseHandle(v4);
    *((_QWORD *)this + 71) = 0LL;
  }
}
