__int64 __fastcall xxxSendSyncGHOSTINFO(struct _GHOSTINFO *a1)
{
  void *v1; // rbx
  __int64 v2; // rcx

  v1 = (void *)ReferenceDwmApiPort(a1);
  UserSessionSwitchLeaveCrit(v2);
  LODWORD(v1) = (int)DwmSyncSignalGhost(v1) >= 0;
  EnterCrit(1LL, 0LL);
  return (unsigned int)v1;
}
