void __fastcall VIDMM_RECYCLE_MULTIRANGE::Destroy(VIDMM_RECYCLE_MULTIRANGE *this)
{
  void *v2; // rcx
  int IsEnabledDeviceUsage; // eax
  VIDMM_RECYCLE_BLOCK *v4; // rcx
  __int64 v5; // rcx

  v2 = (void *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *((_QWORD *)this + 12) = 0LL;
  }
  IsEnabledDeviceUsage = Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage();
  v4 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 10);
  if ( IsEnabledDeviceUsage )
  {
    VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent((__int64)v4, 1, (__int64)this);
    VIDMM_RECYCLE_BLOCK::ReleaseMultirangeReference(*((VIDMM_RECYCLE_BLOCK **)this + 10));
    *((_QWORD *)this + 28) = 0LL;
    *((_BYTE *)this + 232) = 1;
  }
  else
  {
    VIDMM_RECYCLE_BLOCK::ReleaseMultirangeReference(v4);
    v5 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 28) = 0LL;
    *((_BYTE *)this + 232) = 1;
    VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent(v5, 1, (__int64)this);
  }
}
