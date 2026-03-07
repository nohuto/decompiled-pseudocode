void __fastcall Gre::Base::FreeSessionGlobalsArea(Gre::Base *this)
{
  __int64 v1; // rbx
  char *v2; // rdx

  v1 = SGDGetSessionState(this);
  v2 = *(char **)(v1 + 24);
  if ( v2 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
    *(_QWORD *)(v1 + 24) = 0LL;
  }
}
