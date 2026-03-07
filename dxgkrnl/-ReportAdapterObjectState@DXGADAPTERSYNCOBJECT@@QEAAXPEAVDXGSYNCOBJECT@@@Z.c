void __fastcall DXGADAPTERSYNCOBJECT::ReportAdapterObjectState(
        DXGADAPTERSYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        __int64 a3)
{
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx
  int v8; // eax
  const EVENT_DESCRIPTOR *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // [rsp+40h] [rbp-28h]

  if ( !bTracingEnabled )
    goto LABEL_22;
  v5 = *((_QWORD *)this + 4);
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  a3 = (unsigned int)(*((_DWORD *)a2 + 50) - 1);
  if ( *((_DWORD *)a2 + 50) == 1 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppqqpt_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        &EventReportSynchronizationMutex,
        0LL,
        v6,
        v5,
        4,
        *((_DWORD *)a2 + 51),
        *((unsigned int *)a2 + 68),
        *((_DWORD *)a2 + 52));
  }
  else
  {
    a3 = (unsigned int)(*((_DWORD *)a2 + 50) - 2);
    if ( *((_DWORD *)a2 + 50) == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ppqqpqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          &EventReportSemaphore,
          0LL,
          v6,
          v5,
          4,
          *((_DWORD *)a2 + 51),
          *((unsigned int *)a2 + 68),
          *((_DWORD *)a2 + 52),
          *((_DWORD *)a2 + 53));
    }
    else
    {
      a3 = (unsigned int)(*((_DWORD *)a2 + 50) - 3);
      if ( *((_DWORD *)a2 + 50) == 3 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
          goto LABEL_22;
        v7 = *((unsigned int *)a2 + 68);
        v11 = *((_QWORD *)a2 + 26);
        v8 = *((_DWORD *)a2 + 51);
        v9 = (const EVENT_DESCRIPTOR *)&EventReportFence;
        goto LABEL_17;
      }
      a3 = (unsigned int)(*((_DWORD *)a2 + 50) - 4);
      if ( *((_DWORD *)a2 + 50) != 4 )
      {
        a3 = (unsigned int)(*((_DWORD *)a2 + 50) - 5);
        if ( *((_DWORD *)a2 + 50) != 5 )
        {
          if ( *((_DWORD *)a2 + 50) == 6 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0ppqqppqi_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                &EventReportPeriodicMonitoredFence,
                0LL,
                v6,
                v5,
                4,
                *((_DWORD *)a2 + 51),
                *((unsigned int *)a2 + 68),
                *((unsigned int *)a2 + 52),
                *((_DWORD *)a2 + 53),
                *((_QWORD *)a2 + 27));
          }
          else
          {
            WdLogSingleEntry1(1LL, 1053LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 1053LL, 0LL, 0LL, 0LL, 0LL);
          }
          goto LABEL_22;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
          goto LABEL_22;
        v7 = *((unsigned int *)a2 + 68);
        v11 = *((_QWORD *)a2 + 26);
        v8 = *((_DWORD *)a2 + 51);
        v9 = (const EVENT_DESCRIPTOR *)&EventReportMonitoredFence;
LABEL_17:
        McTemplateK0ppqqpx_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, v9, 0LL, v6, v5, 4, v8, v7, v11);
        goto LABEL_22;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ppqqpx_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          &EventReportCPUNotification,
          0LL,
          v6,
          v5,
          4,
          *((_DWORD *)a2 + 51),
          *((unsigned int *)a2 + 68),
          *((_QWORD *)a2 + 26));
    }
  }
LABEL_22:
  v10 = *((unsigned int *)a2 + 20);
  if ( (_DWORD)v10 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0ppp_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventReportSyncObject,
      a3,
      *((_QWORD *)this + 4),
      v10,
      0LL);
}
