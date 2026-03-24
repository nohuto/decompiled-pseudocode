/*
 * XREFs of PnpGetLogString @ 0x14036DE78
 * Callers:
 *     PiDevCfgLogDeviceStarted @ 0x14073727C (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140737538 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_14098BF44;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_14098BF44;
  return result;
}
