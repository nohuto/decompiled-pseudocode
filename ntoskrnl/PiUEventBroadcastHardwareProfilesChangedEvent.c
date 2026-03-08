/*
 * XREFs of PiUEventBroadcastHardwareProfilesChangedEvent @ 0x140956B40
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x1407F80C0 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     MmGetSessionById @ 0x14022A4F0 (MmGetSessionById.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 */

LONG_PTR __fastcall PiUEventBroadcastHardwareProfilesChangedEvent(__int64 a1, __int64 a2)
{
  LONG_PTR result; // rax
  void *SessionById; // rdi

  if ( (_DWORD)a1 == -1 )
    return ZwUpdateWnfStateData((__int64)&WNF_PNPA_HARDWAREPROFILES_CHANGED, a2);
  SessionById = (void *)MmGetSessionById(a1, a2);
  result = 0LL;
  if ( SessionById )
  {
    ZwUpdateWnfStateData((__int64)&WNF_PNPA_HARDWAREPROFILES_CHANGED_SESSION, a2);
    return ObfDereferenceObject(SessionById);
  }
  return result;
}
