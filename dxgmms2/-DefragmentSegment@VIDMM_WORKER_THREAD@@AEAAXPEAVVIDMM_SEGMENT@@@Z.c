void __fastcall VIDMM_WORKER_THREAD::DefragmentSegment(VIDMM_GLOBAL **this, struct VIDMM_SEGMENT *a2)
{
  LARGE_INTEGER PerformanceCounter; // rdi
  LARGE_INTEGER v5; // rbx
  unsigned __int64 v6; // rsi

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  VIDMM_GLOBAL::Defragment(*this, a2);
  v5 = KeQueryPerformanceCounter(0LL);
  v6 = VidMmiTickCountTo100ns(v5.QuadPart - PerformanceCounter.QuadPart);
  VIDMM_COMMIT_TELEMETRY::LogFullDefragPass((VIDMM_COMMIT_TELEMETRY *)(this + 26), v6);
  WdLogSingleEntry1(4LL, v6 / 0xA / 0x3E8);
  this[43] = (VIDMM_GLOBAL *)((char *)this[43] + v5.QuadPart - PerformanceCounter.QuadPart);
  ++*((_DWORD *)this + 94);
}
