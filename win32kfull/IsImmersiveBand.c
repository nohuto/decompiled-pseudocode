_BOOL8 __fastcall IsImmersiveBand(__int64 a1, __int64 a2, __int64 a3)
{
  return (unsigned int)IsNonImmersiveBand(a1, a2, a3) == 0;
}
