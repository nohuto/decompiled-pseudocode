/*
 * XREFs of SdbpCheckRuntimePlatform @ 0x140965A20
 * Callers:
 *     <none>
 * Callees:
 *     SdbReadDWORDTag @ 0x140759F54 (SdbReadDWORDTag.c)
 *     SdbpCheckRuntimePlatformImpl @ 0x140965A78 (SdbpCheckRuntimePlatformImpl.c)
 */

__int64 __fastcall SdbpCheckRuntimePlatform(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  unsigned int DWORDTag; // eax

  v5 = *(_DWORD *)(a2 + 544);
  DWORDTag = SdbReadDWORDTag(a3, a5, 255LL, a4);
  return SdbpCheckRuntimePlatformImpl(a1, *(unsigned int *)(a3 + 2608), v5, DWORDTag);
}
