/*
 * XREFs of ?GDINetworkedFontFileNodeCompare@@YA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_AVL_TABLE@@PEAX1@Z @ 0x1C028D030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall GDINetworkedFontFileNodeCompare(
        struct _RTL_AVL_TABLE *Table,
        const UNICODE_STRING *FirstStruct,
        const UNICODE_STRING *SecondStruct)
{
  LONG v3; // ecx

  v3 = RtlCompareUnicodeString(FirstStruct + 1, SecondStruct + 1, 0);
  if ( v3 )
    return v3 > 0;
  else
    return 2;
}
