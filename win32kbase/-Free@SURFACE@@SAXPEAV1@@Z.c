void __fastcall SURFACE::Free(_QWORD *Entry)
{
  char *v2; // rdx

  if ( Entry[85] )
    ReleaseReferenceCountedObjectHandle(0LL);
  if ( *((_BYTE *)Entry + 688) )
  {
    v2 = (char *)Entry[9];
    if ( v2 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
      Entry[9] = 0LL;
    }
  }
  FreeIsolatedType<NSInstrumentation::CLookAsideTypeIsolation<221184,864>>(Entry);
}
