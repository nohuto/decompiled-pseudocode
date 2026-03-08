/*
 * XREFs of PpmCheckArmPeriod @ 0x14038E300
 * Callers:
 *     PpmCheckReInit @ 0x1408265CC (PpmCheckReInit.c)
 * Callees:
 *     PpmCheckResetProcessors @ 0x14038F23C (PpmCheckResetProcessors.c)
 */

char PpmCheckArmPeriod()
{
  char result; // al
  __int64 v1; // rdx

  result = PpmCheckArmed;
  v1 = PpmCheckMinimumPeriod;
  if ( (unsigned int)(10000 * HIDWORD(PpmCurrentProfile[55 * dword_140C3D48C + 7])) > (unsigned __int64)PpmCheckMinimumPeriod )
    v1 = (unsigned int)(10000 * HIDWORD(PpmCurrentProfile[55 * dword_140C3D48C + 7]));
  if ( !PpmCheckArmed )
    goto LABEL_7;
  if ( v1 != PpmCheckPeriod )
  {
    _InterlockedExchange64(&PpmCheckLastEffectiveExecutionTime, 0LL);
    result = 0;
    PpmCheckArmed = 0;
  }
  if ( !result )
  {
LABEL_7:
    PpmCheckPeriod = v1;
    PpmCheckResetProcessors(0LL);
    result = _InterlockedExchange64(&PpmCheckLastEffectiveExecutionTime, 1LL);
    PpmCheckArmed = 1;
  }
  return result;
}
