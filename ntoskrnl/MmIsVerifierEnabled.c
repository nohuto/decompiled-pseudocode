/*
 * XREFs of MmIsVerifierEnabled @ 0x140AB9E10
 * Callers:
 *     PopVerifierFlushMemoryBeforeSleep @ 0x140AA46C4 (PopVerifierFlushMemoryBeforeSleep.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x14036B1B0 (VfIsVerifierEnabled.c)
 */

NTSTATUS __stdcall MmIsVerifierEnabled(PULONG VerifierFlags)
{
  NTSTATUS v1; // ebx

  v1 = 0;
  if ( VerifierFlags )
  {
    if ( (_QWORD)ViVerifierDriverAddedThunkListHead )
    {
      if ( (unsigned int)VfIsVerifierEnabled() && (VfRuleClasses & 0xFF217644) != 0
        || (VfRuleClasses & 0x10) != 0 && (VfRuleClasses & 0x400000) == 0 )
      {
        *VerifierFlags = MmVerifierData;
        return v1;
      }
      *VerifierFlags = 0;
    }
    else
    {
      *VerifierFlags = 0;
    }
    return -1073741637;
  }
  return -1073741637;
}
