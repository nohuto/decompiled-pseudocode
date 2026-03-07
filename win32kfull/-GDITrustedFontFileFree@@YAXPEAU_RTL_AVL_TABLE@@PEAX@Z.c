void __fastcall GDITrustedFontFileFree(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x66667447u);
}
