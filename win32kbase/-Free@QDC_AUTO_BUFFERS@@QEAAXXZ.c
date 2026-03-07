void __fastcall QDC_AUTO_BUFFERS::Free(QDC_AUTO_BUFFERS *this)
{
  QDC_AUTO_BUFFERS *v1; // rdx

  v1 = (QDC_AUTO_BUFFERS *)*((_QWORD *)this + 55);
  if ( v1 )
  {
    if ( v1 != this )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
      *((_QWORD *)this + 55) = 0LL;
    }
  }
}
