/*
 * XREFs of HvlpSetRegister64 @ 0x1404F9F80
 * Callers:
 *     HvlEnlightenProcessor @ 0x1403A7298 (HvlEnlightenProcessor.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1404F146C (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlLogGuestCrashInformation @ 0x1404F184C (HvlLogGuestCrashInformation.c)
 *     HvlpPhase0Enlightenments @ 0x1404FA514 (HvlpPhase0Enlightenments.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1404FA6D0 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x14088E710 (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x14033D230 (RtlRaiseException.c)
 */

void __fastcall HvlpSetRegister64(int a1, unsigned __int64 a2)
{
  unsigned int v2; // ecx

  if ( a1 > 589831 )
  {
    if ( a1 == 589843 )
    {
      v2 = 1073741939;
      goto LABEL_23;
    }
    if ( a1 == 589847 )
    {
      v2 = 1073741857;
      goto LABEL_23;
    }
    if ( a1 > 655359 )
    {
      if ( a1 <= 655375 )
      {
        v2 = a1 + 1073086608;
        goto LABEL_23;
      }
      if ( a1 == 655379 )
      {
        v2 = 1073741955;
        goto LABEL_23;
      }
    }
    goto LABEL_20;
  }
  if ( a1 == 589831 )
  {
    v2 = 1073741828;
    goto LABEL_23;
  }
  if ( a1 < 528 )
    goto LABEL_20;
  if ( a1 <= 532 )
  {
    v2 = a1 + 1073741552;
    goto LABEL_23;
  }
  if ( a1 == 533 )
  {
    v2 = 1073742085;
    goto LABEL_23;
  }
  if ( a1 == 624 )
  {
    v2 = 1073742102;
    goto LABEL_23;
  }
  if ( a1 != 589826 )
  {
LABEL_20:
    RtlRaiseException(&ExceptionRecord);
    return;
  }
  v2 = 0x40000000;
LABEL_23:
  __writemsr(v2, a2);
}
