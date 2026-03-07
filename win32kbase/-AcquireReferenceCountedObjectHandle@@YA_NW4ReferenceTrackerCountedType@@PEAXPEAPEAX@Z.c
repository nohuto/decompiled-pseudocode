char __fastcall AcquireReferenceCountedObjectHandle(__int64 a1, void *a2, _QWORD *a3)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v5; // rcx
  void *v6; // rax

  v5 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(*(_QWORD *)(SGDGetSessionState(a1) + 24)
                                                                       + 16LL * (unsigned int)a1
                                                                       + 8040);
  if ( v5 )
  {
    v6 = NSInstrumentation::CReferenceTracker::CReferenceCountedType::BeginTrack(v5, a2);
    if ( !v6 )
      return (char)v6;
    *a3 = v6;
  }
  else
  {
    *a3 = 0LL;
  }
  LOBYTE(v6) = 1;
  return (char)v6;
}
