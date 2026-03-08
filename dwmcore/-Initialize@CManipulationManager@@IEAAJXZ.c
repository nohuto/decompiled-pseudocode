/*
 * XREFs of ?Initialize@CManipulationManager@@IEAAJXZ @ 0x1800CAB14
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800AE4F0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateManipulationThread@CManipulationManager@@IEAAJXZ @ 0x1800CAC38 (-CreateManipulationThread@CManipulationManager@@IEAAJXZ.c)
 *     ?SetupMessageCallThreadInfo@CManipulationManager@@IEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x1800CAF6C (-SetupMessageCallThreadInfo@CManipulationManager@@IEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUM.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ClearWaitHandles@CManipulationManager@@KAXXZ @ 0x18019AAB8 (-ClearWaitHandles@CManipulationManager@@KAXXZ.c)
 */

__int64 __fastcall CManipulationManager::Initialize(CManipulationManager *this)
{
  unsigned int v2; // ebx
  HANDLE *v3; // rdi
  HANDLE EventW; // rax
  struct IMessageSession *v5; // rax
  int ManipulationThread; // eax
  __int64 v7; // rcx
  int v9; // r9d
  signed int v10; // eax
  signed int LastError; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( _InterlockedCompareExchange(&CManipulationManager::s_bManipThreadInitialized, 1, 0) )
    return v2;
  v3 = &CManipulationManager::s_rghWaitEvents;
  do
  {
    SetLastError(0);
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *v3 = EventW;
    if ( !EventW )
    {
      LastError = GetLastError();
      v2 = LastError;
      if ( LastError > 0 )
        v2 = (unsigned __int16)LastError | 0x80070000;
      v12 = 115;
      goto LABEL_18;
    }
    ++v2;
    ++v3;
  }
  while ( v2 < 3 );
  SetLastError(0);
  CManipulationManager::s_hManipThreadInitializedWaitEvent = CreateEventW(0LL, 0, 0, 0LL);
  if ( !CManipulationManager::s_hManipThreadInitializedWaitEvent )
  {
    v10 = GetLastError();
    v2 = v10;
    if ( v10 > 0 )
      v2 = (unsigned __int16)v10 | 0x80070000;
    v12 = 122;
LABEL_18:
    if ( (v2 & 0x80000000) == 0 )
      v2 = -2003304445;
    v9 = v2;
    goto LABEL_21;
  }
  v5 = (struct IMessageSession *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 656LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 656LL));
  ManipulationThread = CManipulationManager::SetupMessageCallThreadInfo(
                         this,
                         v5,
                         (int (*)(void *, const void *, int))CManipulationManager::s_RenderThreadEndpointProc,
                         (CManipulationManager *)((char *)this + 56));
  v2 = ManipulationThread;
  if ( ManipulationThread < 0 )
  {
    v12 = 131;
  }
  else
  {
    ManipulationThread = CManipulationManager::CreateManipulationThread(this);
    v2 = ManipulationThread;
    if ( ManipulationThread >= 0 )
      return v2;
    v12 = 136;
  }
  v9 = ManipulationThread;
LABEL_21:
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v9, v12, 0LL);
  CManipulationManager::ClearWaitHandles();
  _InterlockedCompareExchange(&CManipulationManager::s_bManipThreadInitialized, 0, 1);
  return v2;
}
