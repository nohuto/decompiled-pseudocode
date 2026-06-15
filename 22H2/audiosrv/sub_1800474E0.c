/*
 * XREFs of sub_1800474E0 @ 0x1800474E0
 * Callers:
 *     sub_18006CC58 @ 0x18006CC58 (sub_18006CC58.c)
 *     sub_1800BABF4 @ 0x1800BABF4 (sub_1800BABF4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800474E0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    CoDecrementMTAUsage(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
