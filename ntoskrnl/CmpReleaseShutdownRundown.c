void CmpReleaseShutdownRundown()
{
  ExReleaseRundownProtection_0(&CmpShutdownRundown);
  KeLeaveCriticalRegion();
}
