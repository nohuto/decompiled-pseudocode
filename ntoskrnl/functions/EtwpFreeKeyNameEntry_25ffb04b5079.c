void __fastcall EtwpFreeKeyNameEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x74777445u);
}
