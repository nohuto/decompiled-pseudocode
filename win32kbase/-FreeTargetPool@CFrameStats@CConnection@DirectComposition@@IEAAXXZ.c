void __fastcall DirectComposition::CConnection::CFrameStats::FreeTargetPool(
        DirectComposition::CConnection::CFrameStats *this)
{
  char *v1; // rdx

  v1 = (char *)*((_QWORD *)this + 5);
  if ( v1 )
  {
    if ( v1 != (char *)this + 48 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
      *((_QWORD *)this + 5) = 0LL;
    }
  }
}
