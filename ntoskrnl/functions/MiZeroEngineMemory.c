__int64 __fastcall MiZeroEngineMemory(_DWORD *a1, unsigned int a2, void *a3, size_t a4)
{
  unsigned int v8; // ebx
  __int64 v10; // rcx
  __int64 HardwareDescriptor; // r12

  v8 = 0;
  if ( !*a1 )
  {
    HardwareDescriptor = MiAllocateHardwareDescriptor();
    if ( HardwareDescriptor )
    {
      ++dword_140C12FB0;
      MiZeroMemory(v10, a3, a4, a2, HardwareDescriptor);
      MiFreeHardwareDescriptor(a1, HardwareDescriptor);
      return 0LL;
    }
    v8 = 1;
  }
  if ( a2 == 1 )
    KeZeroPages(a3, a4);
  else
    memset(a3, 0, a4);
  return v8;
}
