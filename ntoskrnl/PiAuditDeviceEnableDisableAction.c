/*
 * XREFs of PiAuditDeviceEnableDisableAction @ 0x14096C730
 * Callers:
 *     PipClearDevNodeProblem @ 0x14086666C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1408667BC (PipSetDevNodeProblem.c)
 * Callees:
 *     PiAuditDeviceOperation @ 0x14096C7A8 (PiAuditDeviceOperation.c)
 */

__int64 __fastcall PiAuditDeviceEnableDisableAction(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  if ( a2 == 22 )
  {
    if ( (_DWORD)a3 == 22 )
      return result;
    v3 = 4LL;
  }
  else
  {
    if ( (_DWORD)a3 != 22 )
      return result;
    v3 = 2LL;
  }
  LOBYTE(a3) = 1;
  return PiAuditDeviceOperation(a1, v3, a3);
}
