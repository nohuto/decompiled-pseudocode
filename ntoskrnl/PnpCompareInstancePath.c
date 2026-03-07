__int64 __fastcall PnpCompareInstancePath(
        struct _RTL_AVL_TABLE *Table,
        PCUNICODE_STRING *FirstStruct,
        PCUNICODE_STRING *SecondStruct)
{
  LONG v3; // ecx
  __int64 result; // rax

  v3 = RtlCompareUnicodeString(FirstStruct[1], SecondStruct[1], 1u);
  result = 0LL;
  if ( v3 >= 0 )
  {
    LOBYTE(result) = v3 <= 0;
    return (unsigned int)(result + 1);
  }
  return result;
}
