/*
 * XREFs of HalConvertDeviceIdtToIrql @ 0x140822B00
 * Callers:
 *     HalpQueryResources @ 0x1408229CC (HalpQueryResources.c)
 * Callees:
 *     <none>
 */

char __fastcall HalConvertDeviceIdtToIrql(unsigned int a1)
{
  unsigned __int8 v1; // cl

  if ( a1 >= 0x100 )
    return 3;
  v1 = (unsigned __int8)a1 >> 4;
  if ( v1 < 3u )
    return 3;
  if ( v1 > 0xCu )
    return 12;
  return v1;
}
