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
