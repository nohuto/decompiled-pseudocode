void __fastcall VIDMM_GLOBAL::ReportPagingProcessState(VIDMM_GLOBAL *this)
{
  __int64 i; // rdi
  __int64 v3; // [rsp+28h] [rbp-80h]
  __int64 v4; // [rsp+30h] [rbp-78h]
  _QWORD v5[10]; // [rsp+50h] [rbp-58h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1754); i = (unsigned int)(i + 1) )
  {
    memset(v5, 0, sizeof(v5));
    if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
    {
      LODWORD(v4) = HIDWORD(v5[0]);
      LODWORD(v3) = 4;
      McTemplateK0ppqqpx_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        &EventReportMonitoredFence,
        0LL,
        *((_QWORD *)this + 3),
        *((_QWORD *)this + i + 749),
        v3,
        v4,
        0LL,
        v5[1]);
    }
  }
  VIDMM_DEVICE::ReportState(*((VIDMM_DEVICE **)this + 5049));
}
