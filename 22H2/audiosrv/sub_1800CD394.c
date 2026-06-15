/*
 * XREFs of sub_1800CD394 @ 0x1800CD394
 * Callers:
 *     sub_1800324D0 @ 0x1800324D0 (sub_1800324D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CD394(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
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
  return EtwTraceMessage(a1, 43LL, &unk_18015DF00, 29LL, a4);
}
