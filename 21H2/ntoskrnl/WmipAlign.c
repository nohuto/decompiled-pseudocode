/*
 * XREFs of WmipAlign @ 0x140252FF0
 * Callers:
 *     WmipInsertStaticNames @ 0x14062DC80 (WmipInsertStaticNames.c)
 *     WmipQueryAllData @ 0x14062DEE4 (WmipQueryAllData.c)
 *     WmipAllocateSingleInstanceWnode @ 0x140931870 (WmipAllocateSingleInstanceWnode.c)
 *     WmipDereferenceEvent @ 0x14093254C (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14093293C (WmipIncludeStaticNames.c)
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
