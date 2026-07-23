/*
 * XREFs of WbFreeMemoryBlock @ 0x1405E70E8
 * Callers:
 *     WbAllocateMemoryBlock @ 0x1405E5A24 (WbAllocateMemoryBlock.c)
 *     WbFreeWarbirdProcess @ 0x1405E5C60 (WbFreeWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x1405E6754 (WbAllocateUserMemory.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1403FA940 (ZwFreeVirtualMemory.c)
 *     sub_1405E7168 @ 0x1405E7168 (sub_1405E7168.c)
 *     MmUnsecureVirtualMemory @ 0x1406893D0 (MmUnsecureVirtualMemory.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall WbFreeMemoryBlock(PVOID *BaseAddress)
{
  int v2; // edi
  struct _MDL *v3; // rcx
  PVOID v4; // rcx

  if ( BaseAddress )
  {
    if ( BaseAddress[2] == KeGetCurrentThread()->ApcState.Process )
    {
      v4 = BaseAddress[135];
      v2 = 1;
      if ( v4 )
        MmUnsecureVirtualMemory(v4);
    }
    else
    {
      v2 = 0;
    }
    v3 = (struct _MDL *)BaseAddress[3];
    if ( v3 )
    {
      sub_1405E7168(v3);
      BaseAddress[3] = 0LL;
    }
    BaseAddress[4] = 0LL;
    if ( *BaseAddress )
    {
      if ( v2 )
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, (PSIZE_T)BaseAddress + 1, 0x8000u);
      *BaseAddress = 0LL;
      BaseAddress[1] = 0LL;
    }
    ExFreePoolWithTag(BaseAddress, 0x42524157u);
  }
}
