void __fastcall VIDMM_PARTITION::ResetAdapter(VIDMM_PARTITION *this, struct VIDMM_GLOBAL *a2)
{
  struct VIDMM_PARTITION_ADAPTER_INFO *AdapterInfo; // rax
  struct VIDMM_PARTITION_ADAPTER_INFO *v3; // rbx

  AdapterInfo = VIDMM_PARTITION::GetAdapterInfo(this, a2);
  v3 = AdapterInfo;
  if ( *((_QWORD *)AdapterInfo + 1) )
  {
    VidMmiClosePerfCounters(AdapterInfo);
    NonPagedPoolZeroedArray<VIDMM_SEGMENT_GROUP_STATE,1,1833789782>::Clear((__int64)v3 + 24);
    *((_QWORD *)v3 + 1) = 0LL;
    *(_QWORD *)v3 = 0LL;
  }
}
