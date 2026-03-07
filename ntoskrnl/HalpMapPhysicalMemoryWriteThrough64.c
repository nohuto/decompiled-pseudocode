unsigned __int64 __fastcall HalpMapPhysicalMemoryWriteThrough64(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  LOBYTE(a4) = a3;
  return HalpMap(a1, a2, 0, a4, 4u);
}
