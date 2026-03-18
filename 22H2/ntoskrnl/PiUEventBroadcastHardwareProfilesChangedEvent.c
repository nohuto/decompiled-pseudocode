/*
 * XREFs of PiUEventBroadcastHardwareProfilesChangedEvent @ 0x140959B60
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x1407AA660 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x1402C1E00 (MmGetSessionById.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 */

LONG_PTR __fastcall PiUEventBroadcastHardwareProfilesChangedEvent(unsigned int a1, __int64 a2)
{
  LONG_PTR result; // rax
  void *SessionById; // rdi

  if ( a1 == -1 )
    return ZwUpdateWnfStateData((__int64)&WNF_PNPA_HARDWAREPROFILES_CHANGED, a2);
  SessionById = (void *)MmGetSessionById(a1);
  result = 0LL;
  if ( SessionById )
  {
    ZwUpdateWnfStateData((__int64)&WNF_PNPA_HARDWAREPROFILES_CHANGED_SESSION, a2);
    return ObfDereferenceObject(SessionById);
  }
  return result;
}
