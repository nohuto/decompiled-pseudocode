/*
 * XREFs of WbFreeMemoryBlock @ 0x1407E4374
 * Callers:
 *     WbAllocateMemoryBlock @ 0x1406E0214 (WbAllocateMemoryBlock.c)
 *     WbFreeWarbirdProcess @ 0x1407E17A4 (WbFreeWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x1407E43F0 (WbAllocateUserMemory.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x14041BB20 (ZwFreeVirtualMemory.c)
 *     sub_1406E9DE4 @ 0x1406E9DE4 (sub_1406E9DE4.c)
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
      sub_1406E9DE4(v3);
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
    ExFreePoolWithTag(BaseAddress, 0);
  }
}
