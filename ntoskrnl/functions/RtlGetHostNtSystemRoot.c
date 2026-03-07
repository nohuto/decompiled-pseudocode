char *RtlGetHostNtSystemRoot()
{
  __int64 v0; // rax

  v0 = PdcCreateWatchdogAroundClientCall();
  return (char *)PsGetServerSiloGlobals(v0) + 1264;
}
