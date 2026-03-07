void __fastcall HvlpFreeOverlayPages(void *a1)
{
  MmFreeContiguousMemory(a1);
}
