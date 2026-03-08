/*
 * XREFs of CmpCompareKeysByName @ 0x140A1CA20
 * Callers:
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140A16968 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x140A20A7C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackEntryAdvance @ 0x140A20E5C (CmpKeyEnumStackEntryAdvance.c)
 *     CmpKeyEnumStackEntryBegin @ 0x140A20F7C (CmpKeyEnumStackEntryBegin.c)
 * Callees:
 *     CmpCompareTwoCompressedNames @ 0x14076D7AC (CmpCompareTwoCompressedNames.c)
 *     CmpCompareCompressedName @ 0x140775138 (CmpCompareCompressedName.c)
 *     CmpCompareUnicodeString @ 0x14077B3C0 (CmpCompareUnicodeString.c)
 */

__int64 __fastcall CmpCompareKeysByName(__int64 a1, __int64 a2)
{
  __int16 v2; // r8
  unsigned __int8 *v3; // r10
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // dx
  unsigned __int16 v7; // r8
  __int128 v8; // [rsp+20h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-10h] BYREF

  v2 = *(_WORD *)(a2 + 2);
  v3 = (unsigned __int8 *)(a2 + 76);
  v9 = 0LL;
  v8 = 0LL;
  if ( (*(_BYTE *)(a1 + 2) & 0x20) != 0 )
  {
    v4 = *(_WORD *)(a2 + 72);
    v5 = *(_WORD *)(a1 + 72);
    if ( (v2 & 0x20) != 0 )
    {
      return CmpCompareTwoCompressedNames((unsigned __int8 *)(a1 + 76), v5, v3, v4);
    }
    else
    {
      *((_QWORD *)&v8 + 1) = v3;
      LOWORD(v8) = v4;
      WORD1(v8) = v4;
      return (unsigned int)-CmpCompareCompressedName((__int64)&v8, (unsigned __int8 *)(a1 + 76), v5, 0);
    }
  }
  else
  {
    *((_QWORD *)&v9 + 1) = a1 + 76;
    if ( (v2 & 0x20) != 0 )
    {
      v7 = *(_WORD *)(a2 + 72);
      LOWORD(v9) = *(_WORD *)(a1 + 72);
      WORD1(v9) = v9;
      return CmpCompareCompressedName((__int64)&v9, (unsigned __int8 *)(a2 + 76), v7, 0);
    }
    else
    {
      LOWORD(v8) = *(_WORD *)(a2 + 72);
      WORD1(v8) = v8;
      LOWORD(v9) = *(_WORD *)(a1 + 72);
      WORD1(v9) = v9;
      *((_QWORD *)&v8 + 1) = a2 + 76;
      return CmpCompareUnicodeString((__int64)&v9, (__int64)&v8, 0);
    }
  }
}
