_BOOL8 __fastcall MiHugeRangeIsZeroed(__int64 a1, int a2)
{
  return (*(_DWORD *)(qword_140C67A70 + 8LL * (a2 & 0x3FFFFF)) & 0x10000) == 0;
}
