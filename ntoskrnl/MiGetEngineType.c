/*
 * XREFs of MiGetEngineType @ 0x14039580C
 * Callers:
 *     MiInitializeDpcGroupAffinity @ 0x1402A9390 (MiInitializeDpcGroupAffinity.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140B5F834 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiFindProcessorsForMemoryOnlyNode @ 0x140B96EFC (MiFindProcessorsForMemoryOnlyNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetEngineType(__int64 a1)
{
  int v1; // eax
  char v2; // dl

  v1 = 0;
  if ( KeHeteroSystem )
    v2 = *(_BYTE *)(a1 + 34056);
  else
    v2 = *(_BYTE *)(a1 + 34059);
  LOBYTE(v1) = v2 != 1;
  return (unsigned int)(v1 + 1);
}
