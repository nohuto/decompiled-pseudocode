/*
 * XREFs of sub_1800F568C @ 0x1800F568C
 * Callers:
 *     sub_1800F357C @ 0x1800F357C (sub_1800F357C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F568C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rdx
  const wchar_t *v10; // r11
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  bool v14; // zf

  v9 = -1LL;
  v10 = a4;
  if ( a9 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)(a9 + 2 * v11) );
  }
  if ( a8 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(a8 + 2 * v12) );
  }
  if ( a5 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(a5 + 2 * v13) );
  }
  v14 = a4 == 0LL;
  if ( a4 )
  {
    do
      ++v9;
    while ( a4[v9] );
    v14 = a4 == 0LL;
  }
  if ( v14 )
    v10 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &unk_180171BD8, 26LL, v10);
}
