/*
 * XREFs of VfIrpDatabaseInit @ 0x1409E1AC4
 * Callers:
 *     VfInitVerifierComponents @ 0x1409C7E70 (VfInitVerifierComponents.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

_QWORD *VfIrpDatabaseInit()
{
  _QWORD *result; // rax
  __int64 v1; // rcx

  ViIrpDatabaseLock = 0;
  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x74546F49u);
  ViIrpDatabase = (__int64)result;
  if ( result )
  {
    v1 = 256LL;
    do
    {
      result[1] = result;
      *result = result;
      result += 2;
      --v1;
    }
    while ( v1 );
    ViIrpDatabaseAddressRanges = (__int64)result;
    result = memset(result, 0, 0x1000uLL);
    _InterlockedExchange(&VfIrpDatabaseInitialized, 1);
  }
  return result;
}
