__int64 BgMarkHiberPhase()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( (dword_140C0E3B0 & 1) != 0 )
    v0 = BgpFwMarkHiberPhase();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
