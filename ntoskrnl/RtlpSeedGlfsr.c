__int64 RtlpSeedGlfsr()
{
  unsigned __int64 v0; // rax
  __int64 v1; // r8
  unsigned int i; // ecx
  unsigned __int64 v3; // rdx

  v0 = __rdtsc();
  v1 = *(_QWORD *)RtlpSeedGlfsr;
  for ( i = 0; i < 0x20; ++i )
  {
    v3 = ((unsigned int)v0 & (unsigned __int64)(1LL << i)) << i;
    v1 ^= v3;
  }
  return v1;
}
