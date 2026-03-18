/*
 * XREFs of ?DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01949B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00053F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     MonitorDestroyAllSameTypeSimulatedMonitor @ 0x1C01E9AC0 (MonitorDestroyAllSameTypeSimulatedMonitor.c)
 */

__int64 __fastcall DisplayConfigDestroySimulatedMonitors(struct DXGADAPTER *this, void *a2)
{
  unsigned int v2; // ebx
  int v4; // r8d
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  _BYTE v12[144]; // [rsp+50h] [rbp-B8h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 2181LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pContext != NULL", 2181LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, this, 0LL);
  v5 = COREADAPTERACCESS::AcquireExclusive((__int64)v12, (unsigned int)(v4 + 1));
  if ( v5 >= 0 )
  {
    v5 = MonitorDestroyAllSameTypeSimulatedMonitor(this);
    goto LABEL_8;
  }
  if ( v5 != -1073741130 )
  {
LABEL_8:
    v2 = v5;
    goto LABEL_6;
  }
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  v10[3] = this;
  v10[4] = *((int *)this + 102);
  v10[5] = *((unsigned int *)this + 101);
LABEL_6:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v12);
  return v2;
}
