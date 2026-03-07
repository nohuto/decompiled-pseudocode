void __fastcall TrackObjectReferenceIncrement(
        __int64 a1,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v5; // rcx

  v3 = (unsigned int)a1;
  v4 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( a2 )
  {
    v5 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(v4 + 16 * v3 + 8040);
    if ( v5 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v5, a2, 1);
  }
}
