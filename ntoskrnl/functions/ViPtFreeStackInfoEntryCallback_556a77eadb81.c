void __fastcall ViPtFreeStackInfoEntryCallback(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x6E496956u);
}
