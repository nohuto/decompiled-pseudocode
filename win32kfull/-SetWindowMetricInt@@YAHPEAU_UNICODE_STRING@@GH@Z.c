__int64 __fastcall SetWindowMetricInt(struct _UNICODE_STRING *a1, unsigned __int16 a2, unsigned int a3)
{
  unsigned int v3; // r10d

  v3 = a3;
  if ( a2 <= 0x8Fu )
  {
    if ( a2 != 143 && a2 != 64 && a2 != 65 && a2 != 136 && a2 != 137 && a2 != 138 && (unsigned int)a2 - 140 >= 2 )
      return UpdateWinIniInt(a1, 23LL, a2, v3);
LABEL_17:
    v3 = -((int)(1440 * a3 + (*(unsigned __int16 *)(gpsi + 6998LL) >> 1)) / *(unsigned __int16 *)(gpsi + 6998LL));
    return UpdateWinIniInt(a1, 23LL, a2, v3);
  }
  if ( a2 == 144 || a2 == 146 || a2 == 147 || a2 == 148 || a2 == 152 || a2 == 153 || a2 == 158 )
    goto LABEL_17;
  return UpdateWinIniInt(a1, 23LL, a2, v3);
}
