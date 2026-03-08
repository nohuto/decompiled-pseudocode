/*
 * XREFs of NtUserRemoteThinwireStats @ 0x1C01DAE60
 * Callers:
 *     <none>
 * Callees:
 *     RemoteThinwireStats @ 0x1C02061E8 (RemoteThinwireStats.c)
 */

__int64 __fastcall NtUserRemoteThinwireStats(volatile void *Address)
{
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  LODWORD(Address) = RemoteThinwireStats(Address);
  UserSessionSwitchLeaveCrit(v2);
  return (unsigned int)Address;
}
