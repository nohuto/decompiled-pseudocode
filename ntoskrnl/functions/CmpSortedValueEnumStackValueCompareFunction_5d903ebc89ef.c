LONG __fastcall CmpSortedValueEnumStackValueCompareFunction(_QWORD *a1, __int64 *a2)
{
  _WORD *v2; // rax
  __int64 v3; // r9
  unsigned __int16 v4; // r10
  unsigned __int16 v5; // dx
  __int16 v6; // r8
  __int16 v7; // r8
  UNICODE_STRING String2; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING String1; // [rsp+30h] [rbp-10h] BYREF

  v2 = (_WORD *)*a1;
  v3 = *a2;
  *(_DWORD *)(&String1.MaximumLength + 1) = 0;
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  v4 = v2[1];
  v5 = *(_WORD *)(v3 + 2);
  v6 = v2[8];
  String1.Buffer = v2 + 10;
  String1.Length = v4;
  String1.MaximumLength = v4;
  String2.Buffer = (wchar_t *)(v3 + 20);
  String2.Length = v5;
  String2.MaximumLength = v5;
  v7 = v6 & 1;
  if ( v7 )
  {
    if ( (*(_BYTE *)(v3 + 16) & 1) != 0 )
      return CmpCompareTwoCompressedNames((unsigned __int8 *)v2 + 20, v4, (unsigned __int8 *)(v3 + 20), v5);
  }
  else if ( (*(_BYTE *)(v3 + 16) & 1) != 0 )
  {
    return CmpCompareCompressedName((__int64)&String1, (unsigned __int8 *)(v3 + 20), v5, 0);
  }
  if ( v7 )
    return -(int)CmpCompareCompressedName((__int64)&String2, (unsigned __int8 *)v2 + 20, v4, 0);
  else
    return RtlCompareUnicodeString(&String1, &String2, 1u);
}
