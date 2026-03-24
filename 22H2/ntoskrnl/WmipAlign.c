/*
 * XREFs of WmipAlign @ 0x14032E0C0
 * Callers:
 *     WmipInsertStaticNames @ 0x1406B1C50 (WmipInsertStaticNames.c)
 *     WmipQueryAllData @ 0x1406B1EB4 (WmipQueryAllData.c)
 *     WmipAllocateSingleInstanceWnode @ 0x140931760 (WmipAllocateSingleInstanceWnode.c)
 *     WmipDereferenceEvent @ 0x14093243C (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14093282C (WmipIncludeStaticNames.c)
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
