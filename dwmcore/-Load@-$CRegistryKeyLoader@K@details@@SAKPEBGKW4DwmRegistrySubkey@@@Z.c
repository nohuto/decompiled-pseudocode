__int64 __fastcall details::CRegistryKeyLoader<unsigned long>::Load(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  if ( RegGetDwmDwordHelper(a1, (__int64)&v5, a3) )
    return v5;
  return a2;
}
