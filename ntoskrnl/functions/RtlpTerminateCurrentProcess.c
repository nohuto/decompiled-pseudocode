__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess(KeGetCurrentThread()->ApcState.Process, 0xC0000001);
}
