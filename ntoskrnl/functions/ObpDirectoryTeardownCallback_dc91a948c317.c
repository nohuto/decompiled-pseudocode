char __fastcall ObpDirectoryTeardownCallback(__int64 a1)
{
  char result; // al
  volatile signed __int64 *v3; // rcx

  ObMakeTemporaryObject(*(PVOID *)a1);
  result = ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x7254624Fu);
  v3 = *(volatile signed __int64 **)(a1 + 8);
  if ( v3 )
    return ObDereferenceDeviceMap(v3, 1u);
  return result;
}
