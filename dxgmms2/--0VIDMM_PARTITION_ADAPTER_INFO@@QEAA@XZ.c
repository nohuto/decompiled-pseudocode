VIDMM_PARTITION_ADAPTER_INFO *__fastcall VIDMM_PARTITION_ADAPTER_INFO::VIDMM_PARTITION_ADAPTER_INFO(
        VIDMM_PARTITION_ADAPTER_INFO *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 94) = 0;
  return this;
}
