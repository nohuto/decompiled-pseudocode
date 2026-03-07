void __fastcall DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase(
        DirectComposition::CResourceMarshalerArrayBase *this)
{
  unsigned __int64 i; // rcx
  void *v3; // rdx
  __int64 v4; // rdx

  for ( i = 0LL; i < *((_QWORD *)this + 2); ++i )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * i);
    --*(_QWORD *)(v4 + 24);
  }
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *(_QWORD *)this = 0LL;
  }
}
