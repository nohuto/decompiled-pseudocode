PVOID __fastcall AllocateIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>(Gre::Base *a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(*((_QWORD *)Gre::Base::Globals(a1) + 813) + 40LL);
  if ( v1 )
    return NSInstrumentation::CTypeIsolation<233472,912>::Allocate(v1);
  else
    return 0LL;
}
