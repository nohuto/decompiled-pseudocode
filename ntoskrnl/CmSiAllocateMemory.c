__int64 __fastcall CmSiAllocateMemory(__int64 a1, unsigned int a2)
{
  return ExAllocatePool2(256LL, a1, a2);
}
