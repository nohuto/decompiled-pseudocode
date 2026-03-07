PVOID __fastcall CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::AllocTableData(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  return DefaultHeap::Alloc(ByteSize);
}
