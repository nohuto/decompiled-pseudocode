void __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>(Gre::Base *a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)Gre::Base::Globals(a1) + 813) + 40LL);
  if ( v2 )
    NSInstrumentation::CTypeIsolation<233472,912>::Free(v2, a1);
}
