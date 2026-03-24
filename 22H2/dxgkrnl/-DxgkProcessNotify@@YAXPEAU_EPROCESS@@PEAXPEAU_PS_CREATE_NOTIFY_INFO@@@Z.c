/*
 * XREFs of ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x1C0008330
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003700 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008594 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008660 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C0123260 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

void __fastcall DxgkProcessNotify(unsigned __int64 Process, __int64 ProcessId, PPS_CREATE_NOTIFY_INFO CreateInfo)
{
  struct DXGTHREAD *v3; // rbx
  PEPROCESS v5; // rdi
  __int64 v6; // r15
  struct DXGTHREAD *Current; // rax
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGPROCESS *v15; // rdi
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  DXGFASTMUTEX *v20; // [rsp+20h] [rbp-10h] BYREF
  char v21; // [rsp+28h] [rbp-8h]

  v3 = 0LL;
  v5 = (PEPROCESS)Process;
  v6 = qword_1C00B19B0 & 2;
  if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(Process, &EventProfilerEnter);
  if ( KeGetCurrentIrql() < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    v3 = Current;
    if ( Current )
    {
      v8 = *((_DWORD *)Current + 9);
      if ( !v8 )
        *((_DWORD *)Current + 10) = 3;
      Process = (unsigned int)(v8 + 1);
      *((_DWORD *)Current + 9) = Process;
    }
  }
  if ( !CreateInfo )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v9 = WdLogNewEntry5_WdAssertion(Process, ProcessId);
      *(_QWORD *)(v9 + 24) = 2238LL;
      WdLogEvent5_WdAssertion(v9);
    }
    v21 = 0;
    v20 = (DXGFASTMUTEX *)((char *)DXGGLOBAL::m_pGlobal + 320);
    if ( DXGGLOBAL::m_pGlobal == (PVOID)-320LL )
    {
      v10 = WdLogNewEntry5_WdAssertion(Process, ProcessId);
      *(_QWORD *)(v10 + 24) = 762LL;
      WdLogEvent5_WdAssertion(v10);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v20 + 2) == CurrentThread )
    {
      v12 = WdLogNewEntry5_WdAssertion(CurrentThread, ProcessId);
      *(_QWORD *)(v12 + 24) = 769LL;
      WdLogEvent5_WdAssertion(v12);
    }
    if ( v21 )
    {
      v13 = WdLogNewEntry5_WdCriticalError(CurrentThread, ProcessId);
      *(_QWORD *)(v13 + 40) = &v20;
      *(_QWORD *)(v13 + 24) = 275LL;
      *(_QWORD *)(v13 + 32) = 4LL;
      *(_OWORD *)(v13 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v13);
    }
    DXGFASTMUTEX::Acquire(v20);
    v21 = 1;
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(v5);
    v15 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      *((_BYTE *)ProcessDxgProcess + 347) |= 0x80u;
      DXGPROCESS::AcquireReference(ProcessDxgProcess);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v20, v16);
      DXGPROCESS::DestroyDxgProcess(v15);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v20);
      DXGPROCESS::ReleaseReference(v15);
    }
    if ( v21 )
    {
      v21 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v20, ProcessId);
    }
  }
  if ( v3 )
  {
    v17 = *((_DWORD *)v3 + 9);
    if ( !v17 )
    {
      v18 = WdLogNewEntry5_WdAssertion(Process, ProcessId);
      *(_QWORD *)(v18 + 24) = 320LL;
      WdLogEvent5_WdAssertion(v18);
      v17 = *((_DWORD *)v3 + 9);
    }
    v19 = v17 - 1;
    *((_DWORD *)v3 + 9) = v19;
    if ( !v19 )
      *((_DWORD *)v3 + 10) = -1;
  }
  if ( v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(Process, &EventProfilerExit);
  if ( !CreateInfo )
    PsSetThreadProperty(KeGetCurrentThread(), 1750366276LL, 0LL);
}
