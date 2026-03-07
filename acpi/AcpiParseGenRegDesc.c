__int64 __fastcall AcpiParseGenRegDesc(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __int64 v4; // r10

  if ( *(_BYTE *)a1 != 0x82 || *(_WORD *)(a1 + 1) != 12 )
    return 3222536200LL;
  *(_BYTE *)a2 = *(_BYTE *)(a1 + 3);
  *(_BYTE *)(a2 + 1) = *(_BYTE *)(a1 + 4);
  *(_BYTE *)(a2 + 2) = *(_BYTE *)(a1 + 5);
  *(_QWORD *)(a2 + 4) = *(_QWORD *)(a1 + 7);
  LOBYTE(a3) = *(_BYTE *)(a1 + 5);
  LOBYTE(a2) = *(_BYTE *)(a1 + 4);
  LOBYTE(a1) = *(_BYTE *)(a1 + 6);
  v3 = AcpiTranslateAccessSize(a1, a2, a3);
  *(_BYTE *)(v4 + 3) = v3;
  return 0LL;
}
