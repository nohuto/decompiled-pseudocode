__int64 __fastcall HalpQueryHeterogeneousMemoryAttributesInterface(_QWORD *a1)
{
  *a1 = HalpNumaQueryMemorySideCacheInfo;
  return 0LL;
}
