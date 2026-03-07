__int64 __fastcall RFONTOBJ::bSkipCHSFontSegUISymFallback(RFONTOBJ *this, __int16 a2, struct PFF *a3, struct PFF *a4)
{
  if ( *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 32) + 13964LL)
    || (unsigned __int16)(a2 + 0x2000) > 0x18FFu
    || (*((_DWORD *)a4 + 13) & 0x4000) == 0 )
  {
    return 0LL;
  }
  else
  {
    return (*((_DWORD *)a3 + 13) >> 15) & 1;
  }
}
