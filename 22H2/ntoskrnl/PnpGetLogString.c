/*
 * XREFs of PnpGetLogString @ 0x1403CDA48
 * Callers:
 *     PiDevCfgLogDeviceStarted @ 0x140879E9C (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14087A140 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_140A805A4;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_140A805A4;
  return result;
}
