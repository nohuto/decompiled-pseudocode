/*
 * XREFs of PopGetReasonListByReasonCode @ 0x1406F4468
 * Callers:
 *     PopRemoveReasonRecordByReasonCode @ 0x1406F441C (PopRemoveReasonRecordByReasonCode.c)
 *     PopLogSleepDisabled @ 0x14077EB0C (PopLogSleepDisabled.c)
 *     PopCheckDisabledReason @ 0x14079B864 (PopCheckDisabledReason.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetReasonListByReasonCode(int a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  char v3; // dl

  v1 = PowerStateDisableReasonListHead;
  v2 = 0LL;
  v3 = 0;
  while ( (__int64 *)v1 != &PowerStateDisableReasonListHead )
  {
    v2 = v1;
    if ( *(_DWORD *)(v1 + 24) == a1 )
    {
      v3 = 1;
      return v2 & -(__int64)(v3 != 0);
    }
    v1 = *(_QWORD *)v1;
  }
  return v2 & -(__int64)(v3 != 0);
}
