/*
 * XREFs of wctomb @ 0x1403D6460
 * Callers:
 *     <none>
 * Callees:
 *     _wctomb_s_l @ 0x1403D63A4 (_wctomb_s_l.c)
 */

int __cdecl wctomb(char *MbCh, wchar_t WCh)
{
  int v2; // ebx
  int SizeConverted; // [rsp+50h] [rbp+18h] BYREF

  v2 = -1;
  SizeConverted = -1;
  if ( !wctomb_s_l(&SizeConverted, MbCh, _mb_cur_max, WCh, 0LL) )
    return SizeConverted;
  return v2;
}
