/*
 * XREFs of ?HwndLookupAllocTableData@@YAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C00E79D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall HwndLookupAllocTableData(struct _RTL_GENERIC_TABLE *Table, CLONG ByteSize)
{
  PVOID result; // rax

  result = 0LL;
  if ( ByteSize )
    return (PVOID)Win32AllocPoolZInit(ByteSize, 1282242372LL);
  return result;
}
