void __fastcall VIDMM_RECYCLE_HEAP_MGR::DestroyRange(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_RANGE *a2,
        __int64 a3)
{
  VIDMM_RECYCLE_BLOCK *v5; // rdi
  int IsEnabledDeviceUsage; // eax
  __int64 v7; // rcx
  bool v8; // zf

  if ( (byte_1C00769C2 & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer((__int64)this, &EventRecycleRangeDestroy, a3, a2);
  WdLogSingleEntry1(4LL, a2);
  VIDMM_RECYCLE_BLOCK::NotifyRangeEvent(*((_QWORD *)a2 + 9), 1, (__int64)a2);
  v5 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)a2 + 9);
  --*(_QWORD *)v5;
  IsEnabledDeviceUsage = Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage();
  v7 = *(_QWORD *)v5;
  if ( IsEnabledDeviceUsage )
  {
    if ( v7 )
      goto LABEL_9;
    v8 = *((_QWORD *)v5 + 1) == 0LL;
  }
  else
  {
    v8 = v7 == 0;
  }
  if ( v8 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v5);
LABEL_9:
  *((_BYTE *)a2 + 168) = 1;
  VIDMM_RECYCLE_HEAP_MGR::FreeWithStore(
    this,
    *((struct _LOOKASIDE_LIST_EX **)this + 164),
    a2,
    (void **)this + 203,
    (unsigned int *)this + 404);
}
