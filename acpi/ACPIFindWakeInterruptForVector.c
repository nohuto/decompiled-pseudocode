/*
 * XREFs of ACPIFindWakeInterruptForVector @ 0x1C00449AC
 * Callers:
 *     ACPIAssociateWakeInterrupt @ 0x1C004431C (ACPIAssociateWakeInterrupt.c)
 *     ACPIDelayedFreeWakeInterrupt @ 0x1C0044668 (ACPIDelayedFreeWakeInterrupt.c)
 *     ACPIDisconnectWakeInterrupt @ 0x1C00448F8 (ACPIDisconnectWakeInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIFindWakeInterruptForVector(int a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  unsigned int v4; // r9d

  *a3 = 0LL;
  v3 = AcpiPowerWaitWakeInterruptList;
  v4 = -1073741275;
  while ( (__int64 *)v3 != &AcpiPowerWaitWakeInterruptList )
  {
    if ( *(_DWORD *)(v3 + 32) == a1 && *(_QWORD *)(v3 + 40) == a2 )
    {
      v4 = 0;
      *a3 = v3;
      return v4;
    }
    v3 = *(_QWORD *)v3;
  }
  return v4;
}
