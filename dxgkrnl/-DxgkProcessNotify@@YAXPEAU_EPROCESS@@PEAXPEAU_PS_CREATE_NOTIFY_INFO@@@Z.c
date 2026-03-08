/*
 * XREFs of ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x1C0012D20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C0008D6C (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008E50 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008E74 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C004C6C0 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01A6B80 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

void __fastcall DxgkProcessNotify(PEPROCESS Process, HANDLE ProcessId, PPS_CREATE_NOTIFY_INFO CreateInfo)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  struct DXGGLOBAL *Global; // rax
  DXGPROCESS *ProcessDxgProcess; // rbx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  DXGFASTMUTEX *v15; // [rsp+68h] [rbp-A0h] BYREF
  int v16; // [rsp+70h] [rbp-98h]
  _QWORD v17[2]; // [rsp+78h] [rbp-90h] BYREF
  char v18; // [rsp+88h] [rbp-80h]
  _BYTE v19[208]; // [rsp+98h] [rbp-70h] BYREF

  LODWORD(v17[0]) = -1;
  v17[1] = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v18 = 1;
    LODWORD(v17[0]) = 3;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(Process, &EventProfilerEnter, CreateInfo, 3LL);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v17, 3);
  if ( !CreateInfo )
  {
    Global = DXGGLOBAL::GetGlobal();
    LOBYTE(v16) = 0;
    v15 = (struct DXGGLOBAL *)((char *)Global + 368);
    if ( Global == (struct DXGGLOBAL *)-368LL )
    {
      WdLogSingleEntry1(1LL, 592LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v10,
            v9,
            v11,
            0,
            2,
            -1,
            (__int64)L"m_pMutex != NULL",
            592LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((struct _KTHREAD **)v15 + 3) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 599LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v13,
            v12,
            v14,
            0,
            2,
            -1,
            (__int64)L"!m_pMutex->IsOwner()",
            599LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    DXGFASTMUTEX::Acquire(v15);
    LOBYTE(v16) = 1;
    ProcessDxgProcess = (DXGPROCESS *)PsGetProcessDxgProcess(Process);
    if ( ProcessDxgProcess )
    {
      CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v19);
      *((_DWORD *)ProcessDxgProcess + 106) |= 0x800u;
      DXGPROCESS::AcquireReference(ProcessDxgProcess);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v15);
      DXGPROCESS::DestroyDxgProcess(ProcessDxgProcess);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v15);
      DXGPROCESS::ReleaseReference(ProcessDxgProcess);
      CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v19);
    }
    if ( (_BYTE)v16 )
    {
      LOBYTE(v16) = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v15);
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v17);
  if ( v18 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerExit, v6, LODWORD(v17[0]));
  }
}
