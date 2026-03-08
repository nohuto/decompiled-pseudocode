/*
 * XREFs of ObRetagReferences @ 0x14070A380
 * Callers:
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 */

void __fastcall ObRetagReferences(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx

  if ( ObpTraceFlags )
  {
    v4 = a1 - 48;
    ObpPushStackInfo(a1 - 48, 0, 1u, 0x746C6644u);
    ObpPushStackInfo(v4, 1, 1u, a3);
  }
}
