bool __fastcall VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(VIDMM_GLOBAL *this)
{
  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled )
    return *((_QWORD *)this + 5128) != 0LL;
  else
    return *((_QWORD *)this + 5123) != 0LL;
}
