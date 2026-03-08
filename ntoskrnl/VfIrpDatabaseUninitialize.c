/*
 * XREFs of VfIrpDatabaseUninitialize @ 0x140ADEA84
 * Callers:
 *     ViIovPluginUnload @ 0x1405CFAC0 (ViIovPluginUnload.c)
 *     VfPacketFree @ 0x140ADA104 (VfPacketFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 VfIrpDatabaseUninitialize()
{
  __int64 result; // rax

  if ( ViIrpDatabase )
  {
    ExFreePoolWithTag(ViIrpDatabase, 0);
    ViIrpDatabase = 0LL;
  }
  result = (unsigned int)_InterlockedExchange(&VfIrpDatabaseInitialized, 0);
  ViIrpDatabaseLock = 0;
  return result;
}
