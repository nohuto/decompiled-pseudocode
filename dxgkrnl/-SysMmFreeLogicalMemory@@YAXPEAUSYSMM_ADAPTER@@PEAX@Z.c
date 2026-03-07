void __fastcall SysMmFreeLogicalMemory(struct SYSMM_LOGICAL_ALLOCATOR **a1, struct SYSMM_LOGICAL_BLOCK *a2)
{
  SmmFreeLogicalAddress(a1[46], a2);
}
