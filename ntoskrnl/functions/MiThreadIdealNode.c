__int64 MiThreadIdealNode()
{
  return *(unsigned int *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 33364);
}
