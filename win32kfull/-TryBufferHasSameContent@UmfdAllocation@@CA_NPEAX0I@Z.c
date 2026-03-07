bool __fastcall UmfdAllocation::TryBufferHasSameContent(void *a1, void *a2, unsigned int a3)
{
  return RtlCompareMemory(a1, a2, a3) == a3;
}
