__int64 __fastcall DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::AllocateTableEntry(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  return NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
           (NSInstrumentation::CLeakTrackingAllocator *)Table,
           260LL,
           ByteSize,
           0x74634344u);
}
