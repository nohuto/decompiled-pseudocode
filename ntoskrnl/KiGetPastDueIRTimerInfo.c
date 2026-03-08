/*
 * XREFs of KiGetPastDueIRTimerInfo @ 0x14057B0D4
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x14022E860 (KeResumeClockTimerFromIdle.c)
 *     KiGetNextTimerExpirationDueTime @ 0x140328330 (KiGetNextTimerExpirationDueTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetPastDueIRTimerInfo(unsigned __int64 a1, _BYTE *a2, _BYTE *a3)
{
  unsigned __int64 v3; // rax
  char v4; // cl
  __int64 result; // rax

  if ( a1 < qword_140C41FB0 )
    return 0LL;
  if ( (qword_140C41FA8 & 1) != 0 )
  {
    if ( qword_140C41FA8 == 1 )
      v3 = 0LL;
    else
      v3 = qword_140C41FA8 ^ ((unsigned __int64)&unk_140C41FA0 + 1);
  }
  else
  {
    v3 = qword_140C41FA8;
  }
  *a2 = *(_BYTE *)(v3 - 46);
  v4 = *(_BYTE *)(v3 - 45);
  result = 1LL;
  *a3 = v4;
  return result;
}
