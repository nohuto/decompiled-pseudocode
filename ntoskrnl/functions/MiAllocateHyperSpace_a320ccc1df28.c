unsigned __int64 __fastcall MiAllocateHyperSpace(__int64 a1)
{
  unsigned __int64 *MmInternal; // rbx
  unsigned __int64 result; // rax

  MmInternal = (unsigned __int64 *)KeGetCurrentPrcb()->MmInternal;
  result = MiGetUltraMapping(MmInternal + 1556, 3u, a1, 0);
  MmInternal[1543] = ((result >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  return result;
}
