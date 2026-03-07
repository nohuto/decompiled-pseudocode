struct VIDMM_PARTITION_ADAPTER_INFO *__fastcall VIDMM_PARTITION::GetAdapterInfo(
        VIDMM_PARTITION *this,
        struct VIDMM_GLOBAL *a2)
{
  return (struct VIDMM_PARTITION_ADAPTER_INFO *)(384LL * VIDMM_GLOBAL::AdapterId(a2) + *((_QWORD *)this + 5));
}
