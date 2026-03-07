void __stdcall RtlInitializeGenericTable(
        PRTL_GENERIC_TABLE Table,
        PRTL_GENERIC_COMPARE_ROUTINE CompareRoutine,
        PRTL_GENERIC_ALLOCATE_ROUTINE AllocateRoutine,
        PRTL_GENERIC_FREE_ROUTINE FreeRoutine,
        PVOID TableContext)
{
  Table->CompareRoutine = CompareRoutine;
  Table->InsertOrderList.Blink = &Table->InsertOrderList;
  Table->InsertOrderList.Flink = &Table->InsertOrderList;
  Table->OrderedPointer = &Table->InsertOrderList;
  Table->TableContext = TableContext;
  Table->TableRoot = 0LL;
  *(_QWORD *)&Table->WhichOrderedElement = 0LL;
  Table->AllocateRoutine = AllocateRoutine;
  Table->FreeRoutine = FreeRoutine;
}
