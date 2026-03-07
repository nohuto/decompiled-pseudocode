void __fastcall VIDMM_DEVICE_PAGING_QUEUE::ReportState(VIDMM_DEVICE_PAGING_QUEUE *this)
{
  __int64 v1; // rdi
  int v3; // [rsp+28h] [rbp-80h]
  int v4; // [rsp+30h] [rbp-78h]
  _QWORD v5[10]; // [rsp+50h] [rbp-58h] BYREF

  v1 = *((_QWORD *)this + 19);
  if ( v1 )
  {
    memset(v5, 0, sizeof(v5));
    if ( bTracingEnabled )
    {
      if ( (byte_1C00769C1 & 1) != 0 )
      {
        v4 = HIDWORD(v5[0]);
        v3 = 4;
        McTemplateK0ppqqpx_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          &EventReportMonitoredFence,
          0LL,
          *(_QWORD *)(**((_QWORD **)this + 17) + 24LL),
          v1,
          v3,
          v4,
          0LL,
          v5[1]);
      }
    }
  }
}
