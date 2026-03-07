PVOID __fastcall HwndLookupAllocTableData(struct _RTL_GENERIC_TABLE *Table, CLONG ByteSize)
{
  PVOID result; // rax

  result = 0LL;
  if ( ByteSize )
    return (PVOID)Win32AllocPoolZInit(ByteSize, 1282242372LL);
  return result;
}
