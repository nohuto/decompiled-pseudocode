void __fastcall DXGDEVICE::ReportState(DXGDEVICE *this, __int64 a2, __int64 a3)
{
  int v4; // r10d
  int v5; // r11d
  __int64 v6; // rcx
  DXGCONTEXT *i; // rbx
  struct DXGALLOCATION *v8; // rbx
  _BYTE v9[8]; // [rsp+70h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+80h] [rbp-18h]

  if ( bTracingEnabled )
  {
    a2 = *((_QWORD *)this + 5);
    a3 = *((_QWORD *)this + 14);
    v4 = *((_DWORD *)this + 118);
    v5 = *((_DWORD *)this + 117);
    v6 = *((unsigned __int8 *)this + 1898);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      McTemplateK0ppqpttqpqp_EtwWriteTransfer(
        v6,
        &EventReportDevice,
        a3,
        *(_QWORD *)(*(_QWORD *)(a2 + 64) + 80LL),
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        *((_DWORD *)this + 116),
        this,
        *((unsigned __int8 *)this + 1897),
        v6,
        v5,
        a2,
        v4,
        a3);
  }
  for ( i = (DXGCONTEXT *)*((_QWORD *)this + 62); i != (DXGDEVICE *)((char *)this + 496) && i; i = *(DXGCONTEXT **)i )
    DXGCONTEXT::ReportState(i, a2, a3);
  if ( *((_QWORD *)this + 99) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 48LL))();
  if ( *((_QWORD *)this + 100) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 128LL))();
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, (struct _KTHREAD **)this + 26, 0);
  DXGPUSHLOCK::AcquireExclusive(v10);
  v8 = (struct DXGALLOCATION *)*((_QWORD *)this + 6);
  v11 = 2;
  while ( v8 )
  {
    DXGDEVICE::ReportAllocationState(this, v8, 1);
    v8 = (struct DXGALLOCATION *)*((_QWORD *)v8 + 8);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  DXGDEVICE::ReportDeviceResources((struct _KTHREAD **)this);
  DXGDEVICE::ReportDeviceSyncObjects(this);
  if ( (*((_BYTE *)this + 1901) & 1) == 0 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 808));
    (*(void (__fastcall **)(DXGDEVICE *, char *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 712LL))(
      this,
      (char *)this + 840);
    *((_QWORD *)this + 102) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 808, 0LL);
    KeLeaveCriticalRegion();
  }
}
