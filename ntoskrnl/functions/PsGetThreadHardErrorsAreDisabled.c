bool __fastcall PsGetThreadHardErrorsAreDisabled(__int64 a1)
{
  return (*(_BYTE *)(a1 + 1376) & 0x10) != 0;
}
