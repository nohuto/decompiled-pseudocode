bool __fastcall TdrIsDisplayOnlyTdr(int a1)
{
  return ((a1 - 4) & 0xFFFFFFFC) == 0 && a1 != 6 || a1 == 8;
}
