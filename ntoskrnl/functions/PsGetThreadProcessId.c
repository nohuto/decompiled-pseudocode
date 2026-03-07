HANDLE __stdcall PsGetThreadProcessId(PETHREAD Thread)
{
  return (HANDLE)Thread[1].CycleTime;
}
