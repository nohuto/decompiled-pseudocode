__int64 __fastcall HalpSocApiAllocatePhysicalMemory(__int64 a1, unsigned int a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( HalpTimerLoaderBlock )
    return HalpAllocPhysicalMemory(HalpTimerLoaderBlock, &v3, a2, 0LL);
  else
    return 0LL;
}
