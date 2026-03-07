void __fastcall UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>(void *a1)
{
  if ( *gpUserTypeIsolation )
    NSInstrumentation::CTypeIsolation<36864,144>::Free((__int64)*gpUserTypeIsolation, a1);
}
