void __fastcall DirectComposition::CCaptureRenderTargetMarshaler::ReleaseBuffers(
        DirectComposition::CCaptureRenderTargetMarshaler *this)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  char *v4; // rdx

  if ( *((_QWORD *)this + 11) )
  {
    v2 = 0;
    if ( *((_QWORD *)this + 13) )
    {
      v3 = 0LL;
      do
      {
        ObfDereferenceObject(*(PVOID *)(*((_QWORD *)this + 11) + 8 * v3));
        v3 = ++v2;
      }
      while ( (unsigned __int64)v2 < *((_QWORD *)this + 13) );
    }
    v4 = (char *)*((_QWORD *)this + 11);
    if ( v4 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
    *((_QWORD *)this + 11) = 0LL;
  }
}
