/*
 * XREFs of WmipAlign @ 0x1402E09E0
 * Callers:
 *     WmipInsertStaticNames @ 0x14078CB04 (WmipInsertStaticNames.c)
 *     WmipQueryAllData @ 0x14078CD70 (WmipQueryAllData.c)
 *     WmipAllocateSingleInstanceWnode @ 0x1409DC140 (WmipAllocateSingleInstanceWnode.c)
 *     WmipDereferenceEvent @ 0x1409DCFD4 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1409DD3C4 (WmipIncludeStaticNames.c)
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
