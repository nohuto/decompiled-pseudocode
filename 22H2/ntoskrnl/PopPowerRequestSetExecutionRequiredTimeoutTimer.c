/*
 * XREFs of PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x14085628C
 * Callers:
 *     PopUpdatePdcSystemIdleState @ 0x1407A750C (PopUpdatePdcSystemIdleState.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x1408561F0 (PopPowerRequestExecutionRequiredSettingCallback.c)
 * Callees:
 *     KeSetTimer2 @ 0x140250130 (KeSetTimer2.c)
 */

_BOOL8 PopPowerRequestSetExecutionRequiredTimeoutTimer()
{
  unsigned __int64 v0; // rcx
  __int64 v1; // rdx
  _BOOL8 result; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( byte_140C3F693 && PopExecutionRequiredTimeout )
  {
    v0 = 10000000LL * (unsigned int)PopExecutionRequiredTimeout;
    if ( MEMORY[0xFFFFF78000000008] - qword_140C3F698 < v0 )
      v1 = MEMORY[0xFFFFF78000000008] - qword_140C3F698 - v0;
    else
      v1 = -10000000LL;
    v3[1] = -1LL;
    v3[0] = 0LL;
    return KeSetTimer2((__int64)&PopPowerRequestExecutionRequiredTimeoutTimer, v1, 0LL, (__int64)v3);
  }
  return result;
}
