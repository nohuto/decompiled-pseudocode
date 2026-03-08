/*
 * XREFs of ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C01A82A8
 * Callers:
 *     OutputDuplProcessTerminateForSession @ 0x1C01A8338 (OutputDuplProcessTerminateForSession.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::ProcessTerminated(OUTPUTDUPL_SESSION_MGR *this, struct _EPROCESS *a2)
{
  __int64 *v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rdi
  unsigned int v7; // eax
  struct _EPROCESS **v8; // rcx
  __int64 v9; // rbx
  DXGFASTMUTEX *v10; // [rsp+50h] [rbp-18h] BYREF
  char v11; // [rsp+58h] [rbp-10h]

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v10, (OUTPUTDUPL_SESSION_MGR *)((char *)this + 8), 0);
  if ( v11 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v10, 0LL, 0LL);
  DXGFASTMUTEX::Acquire(v10);
  v4 = (__int64 *)*((_QWORD *)this + 7);
  v5 = *((_DWORD *)this + 1);
  v11 = 1;
  v6 = *v4;
  v7 = 0;
  if ( !v5 )
    goto LABEL_7;
  v8 = (struct _EPROCESS **)(v6 + 8);
  while ( a2 != *v8 )
  {
    ++v7;
    v8 += 4;
    if ( v7 >= v5 )
      goto LABEL_7;
  }
  v9 = 32LL * v7;
  if ( *(_DWORD *)(v9 + v6) )
  {
    WdLogSingleEntry1(1LL, 4324LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcesses[i].RefCount == 0", 4324LL, 0LL, 0LL, 0LL, 0LL);
  }
  *(_QWORD *)(v9 + v6 + 8) = 0LL;
  if ( v11 )
  {
LABEL_7:
    v11 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v10);
  }
}
