/*
 * XREFs of WmipAlign @ 0x1402092D8
 * Callers:
 *     WmipQueryAllData @ 0x14069DF2C (WmipQueryAllData.c)
 *     WmipInsertStaticNames @ 0x14069E478 (WmipInsertStaticNames.c)
 *     WmipAllocateSingleInstanceWnode @ 0x1409DC6D4 (WmipAllocateSingleInstanceWnode.c)
 *     WmipDereferenceEvent @ 0x1409DD790 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1409DDB94 (WmipIncludeStaticNames.c)
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
