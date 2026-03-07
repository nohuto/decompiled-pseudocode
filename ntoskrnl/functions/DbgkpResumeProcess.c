void __fastcall DbgkpResumeProcess(__int64 a1)
{
  PsThawMultiProcess(a1, 0LL, 1u);
  KeLeaveCriticalRegion();
}
