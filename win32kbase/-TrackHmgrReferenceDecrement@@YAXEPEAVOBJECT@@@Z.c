void __fastcall TrackHmgrReferenceDecrement(__int64 a1, struct OBJECT *a2)
{
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v2; // rbx
  __int64 v3; // rax
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v4; // rcx

  if ( (_BYTE)a1 == 5 )
  {
    v2 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a2 + 85);
    v3 = SGDGetSessionState(a1);
    if ( v2 )
    {
      v4 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(*(_QWORD *)(v3 + 24) + 8040LL);
      if ( v4 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v4, v2, 0);
    }
  }
  else if ( (_BYTE)a1 == 16 )
  {
    TrackObjectReferenceDecrement(
      2LL,
      *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)a2 + 17));
  }
}
