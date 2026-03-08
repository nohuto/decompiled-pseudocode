/*
 * XREFs of IrqArbpPrepareForTestOrConflict @ 0x1C009E4D0
 * Callers:
 *     IrqArbRetestAllocation @ 0x1C009D890 (IrqArbRetestAllocation.c)
 *     IrqArbTestAllocation @ 0x1C009D900 (IrqArbTestAllocation.c)
 *     IrqArbpQueryConflictIsa @ 0x1C009E540 (IrqArbpQueryConflictIsa.c)
 * Callees:
 *     LinkNodeClearPossibleData @ 0x1C0099300 (LinkNodeClearPossibleData.c)
 *     LinkNodeCopyData @ 0x1C0099338 (LinkNodeCopyData.c)
 *     ProcessorCopyData @ 0x1C009A964 (ProcessorCopyData.c)
 *     ProcessorpClearData @ 0x1C009B098 (ProcessorpClearData.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C009E890 (IrqArbpUnreferenceArbitrationList.c)
 *     IcClearPossibleData @ 0x1C009EFD0 (IcClearPossibleData.c)
 *     IcCopyData @ 0x1C009F078 (IcCopyData.c)
 *     IcUpdateControllers @ 0x1C009F79C (IcUpdateControllers.c)
 */

__int64 __fastcall IrqArbpPrepareForTestOrConflict(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax

  ProcessorpClearData(1);
  IcClearPossibleData();
  IcUpdateControllers();
  LinkNodeClearPossibleData();
  result = ProcessorCopyData(1LL, v4, v5, v6);
  if ( (int)result >= 0 )
  {
    result = IcCopyData(1LL);
    if ( (int)result >= 0 )
    {
      result = LinkNodeCopyData(1);
      if ( (int)result >= 0 )
        return IrqArbpUnreferenceArbitrationList(a1, a2);
    }
  }
  return result;
}
