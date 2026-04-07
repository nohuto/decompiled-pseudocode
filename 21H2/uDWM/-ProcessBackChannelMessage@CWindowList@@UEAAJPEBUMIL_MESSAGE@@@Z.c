/*
 * XREFs of ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x180036260
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180013884 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180036300 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?OnNotifyRoundTripReply@CLivePreview@@QEAA_NI@Z @ 0x18003635C (-OnNotifyRoundTripReply@CLivePreview@@QEAA_NI@Z.c)
 *     ?ReleaseCVICache@CDesktopManager@@SAXXZ @ 0x180053690 (-ReleaseCVICache@CDesktopManager@@SAXXZ.c)
 */

__int64 __fastcall CWindowList::ProcessBackChannelMessage(CWindowList *this, const struct MIL_MESSAGE *a2)
{
  unsigned int v2; // ebx
  int started; // eax
  int v6; // ebx
  CWindowData *v7; // rdi
  CWindowData *i; // rbx
  __int64 v9; // r8
  char *v10; // rax
  PVOID RestartKey; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( *(_DWORD *)a2 == 8 )
  {
    if ( !CLivePreview::OnNotifyRoundTripReply(
            *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 64),
            *((_DWORD *)a2 + 2)) )
    {
      started = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
      v2 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x65Fu);
    }
  }
  else if ( *(_DWORD *)a2 == 5 )
  {
    v6 = *((_DWORD *)a2 + 3);
    v12 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( v6 == 1 )
    {
      RestartKey = 0LL;
      while ( 1 )
      {
        v10 = (char *)RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
        if ( !v10 )
          break;
        v7 = (CWindowData *)(v10 + 80);
        for ( i = (CWindowData *)*((_QWORD *)v10 + 10); i != v7; i = *(CWindowData **)i )
          CWindowData::ClearSnapshot(i, 1, v9, 1);
      }
      CDesktopManager::ReleaseCVICache();
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
    return 0;
  }
  else
  {
    v2 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147418113, 0x668u);
  }
  return v2;
}
