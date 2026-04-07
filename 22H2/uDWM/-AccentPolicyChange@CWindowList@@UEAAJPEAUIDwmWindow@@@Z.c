/*
 * XREFs of ?AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002BF50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018B34 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18002B214 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::AccentPolicyChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  struct CWindowData *v6; // rbx
  _DWORD *v7; // rax
  CWindowData **v8; // rcx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp-28h] BYREF
  struct CWindowData *v11[2]; // [rsp+38h] [rbp-20h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11[0] = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, v11);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x1439u);
  }
  else
  {
    v6 = v11[0];
    if ( v11[0] )
    {
      v7 = (_DWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, struct CWindowData **))(*(_QWORD *)a2 + 232LL))(
                       a2,
                       v11);
      if ( *((_DWORD *)v6 + 38) != *v7 || *((_DWORD *)v6 + 39) != v7[1] || *((_DWORD *)v6 + 40) != v7[2] )
      {
        *(_OWORD *)((char *)v6 + 152) = *(_OWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, struct CWindowData **))(*(_QWORD *)a2 + 232LL))(
                                                     a2,
                                                     v11);
        v8 = (CWindowData **)*((_QWORD *)v6 + 48);
        if ( v8 )
          CTopLevelWindow::OnAccentPolicyUpdated(v8);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v5;
}
