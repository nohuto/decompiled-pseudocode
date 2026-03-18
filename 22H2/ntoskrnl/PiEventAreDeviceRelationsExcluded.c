/*
 * XREFs of PiEventAreDeviceRelationsExcluded @ 0x1408693A4
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140867948 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     <none>
 */

char __fastcall PiEventAreDeviceRelationsExcluded(int a1)
{
  char result; // al

  result = 1;
  if ( a1 <= 1 || a1 == 4 || a1 >= 7 )
    return 0;
  return result;
}
