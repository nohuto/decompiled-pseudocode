__int64 __fastcall SdbpCheckRuntimePlatform(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  unsigned int DWORDTag; // eax

  v5 = *(_DWORD *)(a2 + 552);
  DWORDTag = SdbReadDWORDTag(a3, a5, 255LL);
  return SdbpCheckRuntimePlatformImpl(a1, *(unsigned int *)(a3 + 2608), v5, DWORDTag);
}
