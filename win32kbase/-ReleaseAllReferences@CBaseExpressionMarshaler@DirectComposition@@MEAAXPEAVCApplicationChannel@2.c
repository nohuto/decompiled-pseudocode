void __fastcall DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CWeakReferenceBase *v4; // rdx
  __int64 i; // rdi
  void *v6; // rdx

  v4 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v4);
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( *((_QWORD *)this + 13) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 29); i = (unsigned int)(i + 1) )
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 13) + 8 * i));
    v6 = (void *)*((_QWORD *)this + 13);
    if ( v6 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
    *((_QWORD *)this + 13) = 0LL;
    *((_DWORD *)this + 29) = 0;
    *((_DWORD *)this + 28) = 0;
  }
}
