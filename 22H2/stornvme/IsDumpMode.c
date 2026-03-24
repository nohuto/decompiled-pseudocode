/*
 * XREFs of IsDumpMode @ 0x1C000A674
 * Callers:
 *     NVMeEnableThrottling @ 0x1C000E9A8 (NVMeEnableThrottling.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDumpMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 16) != 0;
}
