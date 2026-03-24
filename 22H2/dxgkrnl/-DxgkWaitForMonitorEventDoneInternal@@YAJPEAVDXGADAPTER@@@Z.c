/*
 * XREFs of ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C014E5F8
 * Callers:
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C014E110 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000DA1C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C014E738 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C014F7B8 (MonitorAcquireMonitorPendingEvent.c)
 */

__int64 __fastcall DxgkWaitForMonitorEventDoneInternal(struct DXGADAPTER *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  void *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  union _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v26[144]; // [rsp+40h] [rbp-A8h] BYREF

  if ( this )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, this, 0LL);
    if ( *((_QWORD *)this + 337) == v6 )
    {
      v21 = WdLogNewEntry5_WdError(v5, v4);
      LODWORD(v18) = -1073741637;
      *(_QWORD *)(v21 + 24) = this;
      *(_QWORD *)(v21 + 32) = -1073741637LL;
      WdLogEvent5_WdError(v21);
    }
    else
    {
      v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26, 0LL);
      if ( v7 < 0 )
      {
        LODWORD(v18) = v7;
      }
      else
      {
        v9 = (void *)*((_QWORD *)this + 27);
        ObfReferenceObject(v9);
        v10 = (int)MonitorAcquireMonitorPendingEvent(this);
        ObfDereferenceObject(v9);
        if ( (int)v10 < 0 )
        {
          v22 = WdLogNewEntry5_WdError(v12, v11);
          *(_QWORD *)(v22 + 24) = v10;
          WdLogEvent5_WdError(v22);
          LODWORD(v18) = v10;
        }
        else
        {
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v26);
          Timeout.QuadPart = -1000000LL;
          PreviousMode = ExGetPreviousMode();
          v14 = KeWaitForSingleObject((PVOID)0x18, UserRequest, PreviousMode, 0, &Timeout);
          v18 = v14;
          if ( v14 == 258 )
          {
            v23 = WdLogNewEntry5_WdWarning(v16, v15, v17);
            *(_QWORD *)(v23 + 24) = 2124LL;
            WdLogEvent5_WdWarning(v23);
          }
          else if ( v14 < 0 )
          {
            v24 = WdLogNewEntry5_WdError(v16, v15);
            *(_QWORD *)(v24 + 24) = v18;
            WdLogEvent5_WdError(v24);
          }
          MonitorReleaseMonitorPendingEvent(0LL);
        }
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26, v8);
  }
  else
  {
    v20 = WdLogNewEntry5_WdWarning(0LL, a2, a3);
    LODWORD(v18) = -1073741811;
    *(_QWORD *)(v20 + 32) = 0LL;
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v20);
  }
  return (unsigned int)v18;
}
