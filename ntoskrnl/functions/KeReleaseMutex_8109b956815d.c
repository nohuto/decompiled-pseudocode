LONG __stdcall KeReleaseMutex(PRKMUTEX Mutex, BOOLEAN Wait)
{
  return KeReleaseMutant(Mutex, 1, 0, Wait);
}
