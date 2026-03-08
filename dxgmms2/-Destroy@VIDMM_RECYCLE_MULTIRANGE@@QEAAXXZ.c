/*
 * XREFs of ?Destroy@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0099D5C
 * Callers:
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0099D0C (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C0099FC0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 * Callees:
 *     ?NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z @ 0x1C00020CC (-NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z.c)
 *     Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage @ 0x1C001A5BC (Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage.c)
 *     ?ReleaseMultirangeReference@VIDMM_RECYCLE_BLOCK@@QEAAXXZ @ 0x1C0032220 (-ReleaseMultirangeReference@VIDMM_RECYCLE_BLOCK@@QEAAXXZ.c)
 */

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
