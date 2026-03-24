/*
 * XREFs of ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1C02920FC
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C026B9EC (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0047124 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpx_EtwWriteTransfer @ 0x1C00492B4 (McTemplateK0ppqqpx_EtwWriteTransfer.c)
 *     McTemplateK0ppqqppqi_EtwWriteTransfer @ 0x1C004936C (McTemplateK0ppqqppqi_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpqq_EtwWriteTransfer @ 0x1C0049444 (McTemplateK0ppqqpqq_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpt_EtwWriteTransfer @ 0x1C00494F8 (McTemplateK0ppqqpt_EtwWriteTransfer.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::ReportAdapterObjectState(
        DXGADAPTERSYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        __int64 a3)
{
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  const EVENT_DESCRIPTOR *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // [rsp+40h] [rbp-28h]

  if ( !bTracingEnabled )
    goto LABEL_22;
  v5 = *((_QWORD *)this + 4);
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  a3 = (unsigned int)(*((_DWORD *)a2 + 48) - 1);
  if ( *((_DWORD *)a2 + 48) == 1 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0ppqqpt_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        &EventReportSynchronizationMutex,
        0LL,
        v6,
        v5,
        4,
        *((_DWORD *)a2 + 49),
        *((unsigned int *)a2 + 66),
        *((_DWORD *)a2 + 50));
  }
  else
  {
    a3 = (unsigned int)(*((_DWORD *)a2 + 48) - 2);
    if ( *((_DWORD *)a2 + 48) == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppqqpqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          &EventReportSemaphore,
          0LL,
          v6,
          v5,
          4,
          *((_DWORD *)a2 + 49),
          *((unsigned int *)a2 + 66),
          *((_DWORD *)a2 + 50),
          *((_DWORD *)a2 + 51));
    }
    else
    {
      a3 = (unsigned int)(*((_DWORD *)a2 + 48) - 3);
      if ( *((_DWORD *)a2 + 48) == 3 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_22;
        v8 = *((unsigned int *)a2 + 66);
        v12 = *((_QWORD *)a2 + 25);
        v9 = *((_DWORD *)a2 + 49);
        v10 = (const EVENT_DESCRIPTOR *)&EventReportFence;
        goto LABEL_17;
      }
      a3 = (unsigned int)(*((_DWORD *)a2 + 48) - 4);
      if ( *((_DWORD *)a2 + 48) != 4 )
      {
        a3 = (unsigned int)(*((_DWORD *)a2 + 48) - 5);
        if ( *((_DWORD *)a2 + 48) != 5 )
        {
          if ( *((_DWORD *)a2 + 48) == 6 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0ppqqppqi_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                &EventReportPeriodicMonitoredFence,
                0LL,
                v6,
                v5,
                4,
                *((_DWORD *)a2 + 49),
                *((unsigned int *)a2 + 66),
                *((unsigned int *)a2 + 50),
                *((_DWORD *)a2 + 51),
                *((_QWORD *)a2 + 26));
          }
          else
          {
            v7 = WdLogNewEntry5_WdAssertion(this, a2);
            *(_QWORD *)(v7 + 24) = 984LL;
            WdLogEvent5_WdAssertion(v7);
          }
          goto LABEL_22;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_22;
        v8 = *((unsigned int *)a2 + 66);
        v12 = *((_QWORD *)a2 + 25);
        v9 = *((_DWORD *)a2 + 49);
        v10 = (const EVENT_DESCRIPTOR *)&EventReportMonitoredFence;
LABEL_17:
        McTemplateK0ppqqpx_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, v10, 0LL, v6, v5, 4, v9, v8, v12);
        goto LABEL_22;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppqqpx_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          &EventReportCPUNotification,
          0LL,
          v6,
          v5,
          4,
          *((_DWORD *)a2 + 49),
          *((unsigned int *)a2 + 66),
          *((_QWORD *)a2 + 25));
    }
  }
LABEL_22:
  v11 = *((unsigned int *)a2 + 18);
  if ( (_DWORD)v11 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppp_EtwWriteTransfer(v11, &EventReportSyncObject, a3, *((_QWORD *)this + 4), v11, 0LL);
}
