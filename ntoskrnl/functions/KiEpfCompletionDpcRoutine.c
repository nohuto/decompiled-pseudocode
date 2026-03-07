__int64 KiEpfCompletionDpcRoutine()
{
  _InterlockedIncrement(&dword_140C413EC);
  return KiEpfDrainCompletionQueue();
}
