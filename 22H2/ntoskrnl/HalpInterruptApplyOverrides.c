/*
 * XREFs of HalpInterruptApplyOverrides @ 0x140378894
 * Callers:
 *     HalDisableInterrupt @ 0x140376CF0 (HalDisableInterrupt.c)
 *     HalpInterruptRemap @ 0x140378050 (HalpInterruptRemap.c)
 *     HalpInterruptSetDestinationInternal @ 0x1403784DC (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptRestoreClock @ 0x1403861C8 (HalpInterruptRestoreClock.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A1E84 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptSetLineState @ 0x1403A33F8 (HalpInterruptSetLineState.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403AF294 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptConnect @ 0x1404BB388 (HalpInterruptConnect.c)
 *     ExtEnvSetVpptTarget @ 0x1404BF6E4 (ExtEnvSetVpptTarget.c)
 *     HalpTimerUnmapInterrupt @ 0x1404C04C8 (HalpTimerUnmapInterrupt.c)
 *     HalpInterruptMaskAcpi @ 0x14099822C (HalpInterruptMaskAcpi.c)
 * Callees:
 *     HalpAcquireHighLevelLock @ 0x140378990 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x140378A18 (HalpInterruptFindLinesForGsiRange.c)
 *     HalpReleaseHighLevelLock @ 0x1404D06FC (HalpReleaseHighLevelLock.c)
 */

__int64 __fastcall HalpInterruptApplyOverrides(unsigned int *a1, _DWORD *a2, _DWORD *a3)
{
  char v6; // di
  char v7; // al
  __int64 v8; // rdx
  __int64 *v9; // r9
  __int64 *v10; // rcx
  __int64 result; // rax
  unsigned int v12; // edi

  v6 = 0;
  v7 = HalpAcquireHighLevelLock(&HalpInterruptOverridesLock);
  v9 = (__int64 *)HalpInterruptOverrides;
  if ( (__int64 *)HalpInterruptOverrides != &HalpInterruptOverrides )
  {
    v8 = *a1;
    while ( 1 )
    {
      v10 = v9;
      v9 = (__int64 *)*v9;
      if ( v10[2] == *(_QWORD *)a1 )
        break;
      if ( v9 == &HalpInterruptOverrides )
        goto LABEL_11;
    }
    *(_QWORD *)a1 = v10[3];
    if ( a2 )
      *a2 = *((_DWORD *)v10 + 9);
    if ( a3 )
      *a3 = *((_DWORD *)v10 + 8);
    v6 = 1;
  }
LABEL_11:
  LOBYTE(v8) = v7;
  result = HalpReleaseHighLevelLock(&HalpInterruptOverridesLock, v8);
  if ( !v6 )
  {
    result = HalpInterruptController;
    if ( *(_DWORD *)(HalpInterruptController + 216) == 2 )
    {
      result = *a1 - 45056;
      if ( (unsigned int)result <= 1 )
      {
        v12 = a1[1] + 8;
        if ( *a1 != 45057 )
          v12 = a1[1];
        result = HalpInterruptFindLinesForGsiRange(v12, v12 + 1);
        if ( result )
        {
          a1[1] = v12 + *(_DWORD *)(result + 20) - *(_DWORD *)(result + 28);
          result = *(unsigned int *)(result + 16);
          *a1 = result;
        }
      }
    }
  }
  return result;
}
