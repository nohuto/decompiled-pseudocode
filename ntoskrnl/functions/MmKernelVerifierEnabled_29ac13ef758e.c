__int64 MmKernelVerifierEnabled()
{
  return ((unsigned int)MiFlags >> 1) & 1;
}
