__int64 __fastcall MiFlushCachedIoPfnRange(__int64 a1, int a2)
{
  unsigned int v2; // edx

  v2 = a2 << 12;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_WORD *)(a1 + 8) = 8 * ((v2 >> 12) + 6);
  *(_WORD *)(a1 + 10) = 2;
  *(_QWORD *)(a1 + 40) = v2;
  ++dword_140C69298;
  return MiFlushCacheMdl();
}
