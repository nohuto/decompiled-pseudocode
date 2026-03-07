char __fastcall GDITrustedFontFileCompare(
        struct _RTL_AVL_TABLE *Table,
        const UNICODE_STRING *FirstStruct,
        const UNICODE_STRING *SecondStruct)
{
  LONG v3; // ecx

  v3 = RtlCompareUnicodeString(FirstStruct, SecondStruct, 0);
  if ( v3 )
    return v3 > 0;
  else
    return 2;
}
