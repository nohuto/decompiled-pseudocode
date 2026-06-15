/*
 * XREFs of sub_1800CB170 @ 0x1800CB170
 * Callers:
 *     sub_18006DA9C @ 0x18006DA9C (sub_18006DA9C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CB170(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
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
  return EtwTraceMessage(a1, 43LL, &unk_18015DEF0, 74LL, a4);
}
