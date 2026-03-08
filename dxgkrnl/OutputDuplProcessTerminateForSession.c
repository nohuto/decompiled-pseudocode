/*
 * XREFs of OutputDuplProcessTerminateForSession @ 0x1C01A8338
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8400 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x1C0016DE4 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C01A82A8 (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 */

void OutputDuplProcessTerminateForSession()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 CurrentProcessSessionId; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  OUTPUTDUPL_SESSION_MGR *v8; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v10; // rbx
  const wchar_t *v11; // r9
  DXGFASTMUTEX *v12; // [rsp+50h] [rbp-18h] BYREF
  char v13; // [rsp+58h] [rbp-10h]

  v2 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v2 )
    goto LABEL_11;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v1, v0, v3, v4);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v12, (struct DXGFASTMUTEX *const)(v2 + 88), 0);
  if ( v13 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v12, 0LL, 0LL);
  DXGFASTMUTEX::Acquire(v12);
  v13 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v2 + 80) )
  {
    DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v12);
    v6 = 0LL;
  }
  else
  {
    _mm_lfence();
    v6 = *(_QWORD *)(*(_QWORD *)(v2 + 48) + 8 * CurrentProcessSessionId);
    v13 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v12);
  }
  if ( v6 )
  {
    v8 = *(OUTPUTDUPL_SESSION_MGR **)(v6 + 8);
    if ( v8 )
    {
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v7);
      OUTPUTDUPL_SESSION_MGR::ProcessTerminated(v8, CurrentProcess);
      return;
    }
    v10 = 3079LL;
    WdLogSingleEntry1(2LL, 3079LL);
    v11 = L"OUTPUTDUPL_SESSION_MGR is NULL";
  }
  else
  {
LABEL_11:
    v10 = 3072LL;
    WdLogSingleEntry1(2LL, 3072LL);
    v11 = L"DXGSESSIONDATA is NULL";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, v10, 0LL, 0LL, 0LL, 0LL);
}
