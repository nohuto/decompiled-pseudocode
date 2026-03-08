/*
 * XREFs of PnpGetLogString @ 0x1403C1C48
 * Callers:
 *     PiDevCfgLogDeviceStarted @ 0x140874EF4 (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140875198 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_140A7D864;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_140A7D864;
  return result;
}
