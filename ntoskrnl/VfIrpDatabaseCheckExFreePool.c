/*
 * XREFs of VfIrpDatabaseCheckExFreePool @ 0x140ABD876
 * Callers:
 *     VfPoolCheckIncorrectFreeApi @ 0x140AD7100 (VfPoolCheckIncorrectFreeApi.c)
 * Callees:
 *     ViIrpDatabaseAcquireLockShared @ 0x1405D0158 (ViIrpDatabaseAcquireLockShared.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x1405D01F8 (ViIrpDatabaseReleaseLockShared.c)
 *     VfUtilAddressRangeFitNoLock @ 0x140ABF404 (VfUtilAddressRangeFitNoLock.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     ViIrpDatabaseFindPointer @ 0x140ADEAC4 (ViIrpDatabaseFindPointer.c)
 */

void __fastcall VfIrpDatabaseCheckExFreePool(ULONG_PTR BugCheckParameter2)
{
  __int64 Pointer; // rbx
  KIRQL v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  if ( VfIrpDatabaseInitialized )
  {
    if ( (unsigned int)VfUtilAddressRangeFitNoLock(
                         ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (BugCheckParameter2 >> 12)),
                         BugCheckParameter2,
                         BugCheckParameter2 + 1) )
    {
      ViIrpDatabaseAcquireLockShared(&v3);
      Pointer = ViIrpDatabaseFindPointer(BugCheckParameter2);
      ViIrpDatabaseReleaseLockShared(v3);
      if ( Pointer )
      {
        if ( (MmVerifierData & 0x10) != 0 )
          VerifierBugCheckIfAppropriate(0xC4u, 0x105uLL, BugCheckParameter2, 0LL, 0LL);
      }
    }
  }
}
