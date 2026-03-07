UCHAR __stdcall ReadBooleanNoFence(const volatile BOOLEAN *Source)
{
  return *Source;
}
