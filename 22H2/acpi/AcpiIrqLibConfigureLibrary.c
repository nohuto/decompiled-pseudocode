/*
 * XREFs of AcpiIrqLibConfigureLibrary @ 0x1C00BD584
 * Callers:
 *     ACPIInitialize @ 0x1C00BED6C (ACPIInitialize.c)
 * Callees:
 *     IcAddSecondaryIcInstance @ 0x1C0097938 (IcAddSecondaryIcInstance.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C00A3490 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     IcAddGicInstance @ 0x1C00B75E0 (IcAddGicInstance.c)
 *     IrqPolicyConfigure @ 0x1C00BC884 (IrqPolicyConfigure.c)
 *     IrqArbUpdateInterruptLimit @ 0x1C00BD65C (IrqArbUpdateInterruptLimit.c)
 *     IrqPolicyUpdatePolicy @ 0x1C00BD6C4 (IrqPolicyUpdatePolicy.c)
 *     IrqLibpParseMadt @ 0x1C00BD72C (IrqLibpParseMadt.c)
 *     ProcessorConfigure @ 0x1C00BD930 (ProcessorConfigure.c)
 */

__int64 __fastcall AcpiIrqLibConfigureLibrary(int a1, __int64 a2)
{
  int v4; // r8d
  __int64 result; // rax

  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_1C007F130);
  IrqLibRealInterruptModel = a1;
  v4 = 1;
  if ( (unsigned int)(a1 - 2) > 2 )
    v4 = a1;
  IrqLibInterruptModel = v4;
  if ( v4 != 1 )
    return 3221225485LL;
  result = ProcessorConfigure();
  if ( (int)result >= 0 )
  {
    result = IrqPolicyConfigure();
    if ( (int)result >= 0 )
    {
      if ( IrqLibRealInterruptModel != 1 )
      {
        switch ( IrqLibRealInterruptModel )
        {
          case 2:
            IrqLibGicVersion = 1;
            break;
          case 3:
            IrqLibGicVersion = 3;
            break;
          case 4:
            IrqLibpParseMadt(a2);
            result = IcAddGicInstance(0);
            goto LABEL_8;
          default:
            return 3221225473LL;
        }
      }
      result = IrqLibpParseMadt(a2);
LABEL_8:
      if ( (int)result >= 0 )
      {
        result = IrqPolicyUpdatePolicy();
        if ( (int)result >= 0 )
        {
          IrqArbUpdateInterruptLimit();
          IcAddSecondaryIcInstance();
          HalPrivateDispatchTable[22] = IrqTransGetInterruptVector;
          HalPrivateDispatchTable[23] = IrqLibpGetVectorInput;
          HalPrivateDispatchTable[27] = IrqLibAllocateMessageTarget;
          HalPrivateDispatchTable[28] = IrqLibFreeMessageTarget;
          return 0LL;
        }
      }
    }
  }
  return result;
}
