void __fastcall VIDMM_DEVICE::ReportState(VIDMM_DEVICE *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  VIDMM_DEVICE *i; // rdi
  unsigned int j; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  _BYTE v11[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)(v1 + 360), 0);
    DXGPUSHLOCK::AcquireShared(v12);
    v13 = 1;
    for ( i = (VIDMM_DEVICE *)*((_QWORD *)this + 20); i != (VIDMM_DEVICE *)((char *)this + 160); i = *(VIDMM_DEVICE **)i )
    {
      if ( *((int *)i + 10) > 0 && (byte_1C00769C1 & 0x10) != 0 )
        McTemplateK0pq_EtwWriteTransfer(v3, &EventVidMmReportAllocationResidency, v4);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  }
  for ( j = 0; j < *((_DWORD *)this + 17); ++j )
  {
    v7 = *((_QWORD *)this + 10);
    if ( v7 )
      VIDMM_DEVICE_PAGING_QUEUE::ReportState((VIDMM_DEVICE_PAGING_QUEUE *)(v7 + 176LL * j));
    v8 = *((_QWORD *)this + 11);
    v9 = 176LL * j;
    if ( v8 )
      VIDMM_DEVICE_PAGING_QUEUE::ReportState((VIDMM_DEVICE_PAGING_QUEUE *)(v9 + v8));
    v10 = *((_QWORD *)this + 12);
    if ( v10 )
      VIDMM_DEVICE_PAGING_QUEUE::ReportState((VIDMM_DEVICE_PAGING_QUEUE *)(v10 + v9));
  }
}
