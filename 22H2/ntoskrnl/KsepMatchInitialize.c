/*
 * XREFs of KsepMatchInitialize @ 0x140A9224C
 * Callers:
 *     KseInitialize @ 0x140A3BCCC (KseInitialize.c)
 * Callees:
 *     KsepMatchInitMachineInfo @ 0x140A6A0D0 (KsepMatchInitMachineInfo.c)
 */

__int64 KsepMatchInitialize()
{
  return KsepMatchInitMachineInfo();
}
