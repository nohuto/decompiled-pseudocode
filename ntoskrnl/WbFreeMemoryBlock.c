/*
 * XREFs of WbFreeMemoryBlock @ 0x140754DEC
 * Callers:
 *     WbFreeWarbirdProcess @ 0x140752CDC (WbFreeWarbirdProcess.c)
 *     WbAllocateMemoryBlock @ 0x140753534 (WbAllocateMemoryBlock.c)
 *     WbAllocateUserMemory @ 0x140754868 (WbAllocateUserMemory.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1404126D0 (ZwFreeVirtualMemory.c)
 *     sub_140754E6C @ 0x140754E6C (sub_140754E6C.c)
 *     MmUnsecureVirtualMemory @ 0x1407D48C0 (MmUnsecureVirtualMemory.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
      sub_140754E6C(v3);
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
