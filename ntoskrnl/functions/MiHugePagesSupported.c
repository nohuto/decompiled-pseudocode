unsigned __int64 MiHugePagesSupported()
{
  return ((unsigned __int64)KeFeatureBits >> 37) & 1;
}
