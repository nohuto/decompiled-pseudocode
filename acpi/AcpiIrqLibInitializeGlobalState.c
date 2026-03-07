__int64 __fastcall AcpiIrqLibInitializeGlobalState(__int64 a1)
{
  __int64 result; // rax

  qword_1C006E758 = (__int64)IrqArbTestAllocation;
  qword_1C006E760 = (__int64)IrqArbRetestAllocation;
  qword_1C006E768 = (__int64)IrqArbCommitAllocation;
  qword_1C006E778 = (__int64)IrqArbBootAllocation;
  qword_1C006E788 = (__int64)IrqArbQueryConflict;
  qword_1C006E7A0 = (__int64)IrqArbPreprocessEntry;
  qword_1C006E7B0 = (__int64)IrqArbGetNextAllocationRange;
  qword_1C006E7B8 = (__int64)IrqArbFindSuitableRange;
  qword_1C006E7D0 = (__int64)IrqArbOverrideConflict;
  qword_1C006E7C0 = (__int64)IrqArbAddAllocation;
  qword_1C006E7C8 = (__int64)IrqArbBacktrackAllocation;
  qword_1C006E738 = (__int64)IrqArbUnpackRequirement;
  qword_1C006E740 = (__int64)IrqArbPackResource;
  qword_1C006E748 = (__int64)IrqArbUnpackResource;
  qword_1C006E750 = (__int64)IrqArbScoreRequirement;
  qword_1C006E7A8 = (__int64)IrqArbAllocateEntry;
  result = ArbInitializeArbiterInstance((__int64)&IrqLibArbiterInstance, a1, 2, (__int64)L"ACPI_IRQ");
  if ( (int)result >= 0 )
  {
    result = PcisuppInitGlobalState();
    if ( (int)result >= 0 )
    {
      result = LinkNodeInitGlobalState();
      if ( (int)result >= 0 )
      {
        result = IcInitGlobalState();
        if ( (int)result >= 0 )
          return ProcessorInitGlobalState();
      }
    }
  }
  return result;
}
