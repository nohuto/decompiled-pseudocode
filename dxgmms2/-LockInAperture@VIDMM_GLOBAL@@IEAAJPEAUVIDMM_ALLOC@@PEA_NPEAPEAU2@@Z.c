__int64 __fastcall VIDMM_GLOBAL::LockInAperture(VIDMM_WORKER_THREAD **this, __int64 **a2, bool *a3, __int64 ***a4)
{
  struct _VIDMM_GLOBAL_ALLOC *v8; // rbx

  v8 = (struct _VIDMM_GLOBAL_ALLOC *)**a2;
  if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)this, &EventPerformanceWarning, (__int64)a3, 22);
  if ( *((_QWORD *)v8 + 15) )
  {
    VIDMM_WORKER_THREAD::SuspendAccessToAllocation(*this, v8);
    VIDMM_GLOBAL::EvictOneAllocation((VIDMM_GLOBAL *)this, a2, 0LL);
  }
  return VIDMM_GLOBAL::PageInOneAllocation((__int64)this, (__int64)a2, 2LL, 0, a3, a4, 0, -1LL);
}
