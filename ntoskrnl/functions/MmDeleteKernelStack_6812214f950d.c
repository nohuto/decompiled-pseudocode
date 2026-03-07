signed __int64 __fastcall MmDeleteKernelStack(ULONG_PTR a1, unsigned int a2)
{
  return MmDeleteKernelStackEx(a1, a2, 0LL);
}
