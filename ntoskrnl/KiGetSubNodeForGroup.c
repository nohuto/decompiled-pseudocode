/*
 * XREFs of KiGetSubNodeForGroup @ 0x1402E9A50
 * Callers:
 *     KeBuildLogicalProcessorSystemInformation @ 0x140775954 (KeBuildLogicalProcessorSystemInformation.c)
 *     KiConfigureProcessorBlock @ 0x140A85FE4 (KiConfigureProcessorBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetSubNodeForGroup(__int64 a1, unsigned int a2)
{
  return *(_QWORD *)(a1 + 8LL * a2 + 24);
}
