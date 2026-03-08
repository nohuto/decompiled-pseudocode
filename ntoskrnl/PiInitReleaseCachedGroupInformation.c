/*
 * XREFs of PiInitReleaseCachedGroupInformation @ 0x1408429D8
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x14039C088 (PnpCompleteSystemStartProcess.c)
 * Callees:
 *     PnpFreeUnicodeStringList @ 0x14039C134 (PnpFreeUnicodeStringList.c)
 */

void PiInitReleaseCachedGroupInformation()
{
  if ( PiInitGroupOrderTable )
  {
    PnpFreeUnicodeStringList((PVOID *)PiInitGroupOrderTable, (unsigned __int16)PiInitGroupOrderTableCount);
    PiInitGroupOrderTable = 0LL;
    PiInitGroupOrderTableCount = 0;
  }
}
