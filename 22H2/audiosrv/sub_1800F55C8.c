/*
 * XREFs of sub_1800F55C8 @ 0x1800F55C8
 * Callers:
 *     sub_1800F4D90 @ 0x1800F4D90 (sub_1800F4D90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F55C8(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  bool v7; // zf

  v5 = -1LL;
  if ( a5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(a5 + 2 * v6) );
  }
  v7 = a4 == 0LL;
  if ( a4 )
  {
    do
      ++v5;
    while ( a4[v5] );
    v7 = a4 == 0LL;
  }
  if ( v7 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &unk_180171BD8, 12LL, a4);
}
