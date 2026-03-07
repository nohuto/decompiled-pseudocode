void __fastcall TrackObjectReferenceInitialization(
        __int64 a1,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a2,
        unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v7; // rdi

  v3 = a3;
  v5 = (unsigned int)a1;
  v6 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( a2 )
  {
    v7 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(v6 + 16 * v5 + 8040);
    if ( v7 )
    {
      if ( (_DWORD)v3 )
      {
        do
        {
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v7, a2, 1);
          --v3;
        }
        while ( v3 );
      }
    }
  }
}
