/*
 * XREFs of MiZeroEngineMemory @ 0x1402758F0
 * Callers:
 *     MiZeroPage @ 0x140275060 (MiZeroPage.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140811138 (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     MiZeroMemory @ 0x140389E0C (MiZeroMemory.c)
 *     KeZeroPages @ 0x14041BBF0 (KeZeroPages.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiAllocateHardwareDescriptor @ 0x140652308 (MiAllocateHardwareDescriptor.c)
 *     MiFreeHardwareDescriptor @ 0x1406528BC (MiFreeHardwareDescriptor.c)
 */

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
