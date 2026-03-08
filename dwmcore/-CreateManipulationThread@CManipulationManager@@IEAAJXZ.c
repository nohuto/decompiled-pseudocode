/*
 * XREFs of ?CreateManipulationThread@CManipulationManager@@IEAAJXZ @ 0x1800CAC38
 * Callers:
 *     ?Initialize@CManipulationManager@@IEAAJXZ @ 0x1800CAB14 (-Initialize@CManipulationManager@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::CreateManipulationThread(HANDLE *this)
{
  HANDLE *v1; // rdi
  int v2; // eax
  unsigned int v3; // ebx
  HANDLE v4; // rax
  int v6; // r9d
  DWORD dwCreationFlags; // [rsp+20h] [rbp-18h]
  DWORD ThreadId; // [rsp+40h] [rbp+8h] BYREF

  v1 = this;
  if ( *((_BYTE *)this + 152) )
  {
    v3 = -2147467260;
    dwCreationFlags = 918;
LABEL_8:
    v6 = v3;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1803535A0, 3u, v6, dwCreationFlags, 0LL);
    return v3;
  }
  v2 = (*((__int64 (__fastcall **)(HANDLE *))*this + 7))(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v6 = v2;
    dwCreationFlags = 921;
    goto LABEL_10;
  }
  v4 = CreateThread(0LL, 0LL, CManipulationManager::s_ThreadMain, v1, 4u, &ThreadId);
  this = (HANDLE *)ThreadId;
  v1[18] = v4;
  CManipulationManager::s_dwManipulationThreadId = (unsigned int)this;
  if ( !v4 )
  {
    v3 = -2147024882;
    dwCreationFlags = 935;
    goto LABEL_8;
  }
  SetThreadDescription(v4, L"DWM Manipulation Thread");
  SetThreadPriority(v1[18], 16);
  ResumeThread(v1[18]);
  WaitForSingleObject(CManipulationManager::s_hManipThreadInitializedWaitEvent, 0xFFFFFFFF);
  return v3;
}
