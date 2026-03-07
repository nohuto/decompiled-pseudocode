__int64 __fastcall MiIsVaRangeAvailable(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // r8
  unsigned int v6; // r11d

  v5 = a2 + a3 - 1;
  if ( a2 < 0x10000 && !*(_QWORD *)(a1 + 2240) || a2 < a4 || v5 > a5 || v5 <= a2 )
    return 0LL;
  LOBYTE(v6) = !MiCheckForConflictingVadExistence();
  return v6;
}
