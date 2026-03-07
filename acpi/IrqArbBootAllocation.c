__int64 __fastcall IrqArbBootAllocation(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  ProcessorpClearData(1);
  IcClearPossibleData();
  v7 = ProcessorCopyData(1LL, v4, v5, v6);
  if ( v7 >= 0 )
  {
    v7 = IcCopyData(1LL);
    if ( v7 >= 0 )
    {
      v7 = ArbBootAllocation(a1, a2);
      if ( v7 >= 0 )
      {
        v7 = ProcessorCopyData(0LL, v8, v9, v10);
        if ( v7 >= 0 )
        {
          v7 = IcRemapInputs();
          if ( v7 >= 0 )
          {
            v7 = IcCopyData(0LL);
            if ( v7 >= 0 )
            {
              ProcessorpClearData(1);
              IcClearPossibleData();
            }
          }
        }
      }
    }
  }
  return (unsigned int)v7;
}
