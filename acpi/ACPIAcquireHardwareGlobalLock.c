bool __fastcall ACPIAcquireHardwareGlobalLock(volatile signed __int32 *a1)
{
  signed __int32 v2; // edx
  bool v3; // zf
  signed __int32 v4; // eax

  if ( *((_BYTE *)AcpiInformation + 84) )
    return 1;
  v2 = *a1;
  do
  {
    v4 = _InterlockedCompareExchange(a1, ((v2 & 2 | 4u) >> 1) | v2, v2);
    v3 = v2 == v4;
    v2 = v4;
  }
  while ( !v3 );
  return (v4 & 2) == 0;
}
