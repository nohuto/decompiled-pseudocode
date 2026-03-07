BOOLEAN __fastcall Win7PsGetVersion(ULONG *a1, ULONG *a2, ULONG *a3, UNICODE_STRING *a4)
{
  BOOLEAN Version; // bp

  Version = PsGetVersion(a1, a2, a3, 0LL);
  if ( a1 )
    *a1 = 6;
  if ( a2 )
    *a2 = 1;
  if ( a3 )
    *a3 = 7600;
  if ( a4 )
    RtlInitUnicodeString(a4, 0LL);
  return Version;
}
