void __fastcall CTouchProcessor::CleanupCoalesceInfo(CTouchProcessor *this)
{
  void *v1; // rdx

  v1 = (void *)*((_QWORD *)this + 18);
  if ( v1 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
    *((_QWORD *)this + 18) = 0LL;
    *((_DWORD *)this + 34) = 0;
  }
}
