char __fastcall WheapGenerateETWEvents(__int64 a1)
{
  char result; // al

  result = WheaIsCriticalState();
  if ( !result && (*(_DWORD *)(a1 + 104) & 0x100) == 0 )
  {
    WheapCompressErrorRecord(3, a1);
    if ( *(_DWORD *)(a1 + 20) <= 0xEFFBu )
      return WheapGenerateETWErrorRecord(a1);
    else
      return WheapGenerateETWErrorRecordLarge(a1);
  }
  return result;
}
