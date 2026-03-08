/*
 * XREFs of ACPIReleaseHardwareGlobalLock @ 0x1C00394BC
 * Callers:
 *     ACPIReleaseGlobalLock @ 0x1C003937C (ACPIReleaseGlobalLock.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C0039504 (ACPIStartNextGlobalLockRequest.c)
 * Callees:
 *     WRITE_PM1_CONTROL @ 0x1C0038F24 (WRITE_PM1_CONTROL.c)
 */

__int64 ACPIReleaseHardwareGlobalLock()
{
  volatile signed __int32 *v0; // rdx
  signed __int32 v1; // ecx
  __int64 result; // rax
  bool v3; // zf

  v0 = (volatile signed __int32 *)*((_QWORD *)AcpiInformation + 5);
  v1 = *v0;
  result = (__int64)AcpiInformation;
  if ( !*((_BYTE *)AcpiInformation + 84) )
  {
    do
    {
      result = (unsigned int)_InterlockedCompareExchange(v0, v1 & 0xFFFFFFFC, v1);
      v3 = v1 == (_DWORD)result;
      v1 = result;
    }
    while ( !v3 );
    if ( (result & 1) != 0 )
      return WRITE_PM1_CONTROL(4, 0);
  }
  return result;
}
