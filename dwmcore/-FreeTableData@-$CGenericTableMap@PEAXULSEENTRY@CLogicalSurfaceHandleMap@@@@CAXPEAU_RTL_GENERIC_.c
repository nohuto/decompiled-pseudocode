void __fastcall CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::FreeTableData(
        struct _RTL_GENERIC_TABLE *Table,
        PVOID Buffer)
{
  operator delete(Buffer);
}
