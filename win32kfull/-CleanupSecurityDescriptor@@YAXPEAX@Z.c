void __fastcall CleanupSecurityDescriptor(void *a1, __int64 a2)
{
  if ( a1 )
  {
    LOBYTE(a2) = 1;
    SeReleaseSecurityDescriptor(a1, a2, 0LL);
  }
}
