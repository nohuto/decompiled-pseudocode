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
