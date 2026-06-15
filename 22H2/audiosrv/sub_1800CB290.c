/*
 * XREFs of sub_1800CB290 @ 0x1800CB290
 * Callers:
 *     sub_18002E6A0 @ 0x18002E6A0 (sub_18002E6A0.c)
 *     sub_18002E880 @ 0x18002E880 (sub_18002E880.c)
 *     sub_180046930 @ 0x180046930 (sub_180046930.c)
 *     sub_18006DA9C @ 0x18006DA9C (sub_18006DA9C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CB290(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &unk_18015DEF0, a2, a4);
}
