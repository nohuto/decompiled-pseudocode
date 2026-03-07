char __fastcall ReadBinaryRegistryValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned int *a5,
        unsigned int *a6)
{
  char result; // al
  void *RegistryBuffer; // rax

  result = StorPortRegistryRead(a1, "HostIdentifier", 1LL);
  if ( !result && *a6 > *a5 )
  {
    StorPortFreeRegistryBuffer(a1);
    *a5 = *a6;
    RegistryBuffer = (void *)StorPortAllocateRegistryBuffer(a1, a6);
    *a4 = RegistryBuffer;
    if ( !RegistryBuffer )
      return 0;
    if ( *a6 < *a5 )
    {
      StorPortFreeRegistryBuffer(a1);
      *a4 = 0LL;
      return 0;
    }
    NVMeZeroMemory(RegistryBuffer, *a5);
    return StorPortRegistryRead(a1, "HostIdentifier", 1LL);
  }
  return result;
}
