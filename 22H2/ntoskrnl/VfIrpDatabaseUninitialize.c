/*
 * XREFs of VfIrpDatabaseUninitialize @ 0x140AE2A84
 * Callers:
 *     ViIovPluginUnload @ 0x1405D1F70 (ViIovPluginUnload.c)
 *     VfPacketFree @ 0x140ADE104 (VfPacketFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
