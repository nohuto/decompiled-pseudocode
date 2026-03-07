__int64 __fastcall DT_GetLongChar(const unsigned __int16 *a1, int a2, int a3)
{
  unsigned __int16 v3; // r8
  unsigned __int16 v4; // ax

  if ( a2 + 1 < a3 && (v3 = a1[a2], (v3 & 0xFC00) == 0xD800) && (v4 = a1[a2 + 1], (v4 & 0xFC00) == 0xDC00) )
    return (((v3 & 0x3FF) << 10) | v4 & 0x3FFu) + 0x10000;
  else
    return a1[a2];
}
