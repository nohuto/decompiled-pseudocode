__int64 __fastcall RtlCapabilityCheckForSingleSessionSku(HANDLE ExistingTokenHandle, UNICODE_STRING *String2, char *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a3 )
  {
    if ( RtlIsMultiSessionSku((__int64)ExistingTokenHandle, (__int64)String2) )
      *a3 = 0;
    else
      return (unsigned int)RtlCapabilityCheck(ExistingTokenHandle, String2, a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
