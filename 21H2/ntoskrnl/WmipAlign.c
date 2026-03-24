/*
 * XREFs of WmipAlign @ 0x140264F60
 * Callers:
 *     WmipInsertStaticNames @ 0x140638E70 (WmipInsertStaticNames.c)
 *     WmipQueryAllData @ 0x1406390D4 (WmipQueryAllData.c)
 *     WmipAllocateSingleInstanceWnode @ 0x140931710 (WmipAllocateSingleInstanceWnode.c)
 *     WmipDereferenceEvent @ 0x1409323EC (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1409327DC (WmipIncludeStaticNames.c)
 * Callees:
 *     <none>
 */

char __fastcall WmipAlign(int a1, int *a2)
{
  int v2; // ecx
  char result; // al

  v2 = a1 - 1;
  if ( *a2 + v2 < (unsigned int)*a2 )
    return 0;
  result = 1;
  *a2 = (*a2 + v2) & ~v2;
  return result;
}
