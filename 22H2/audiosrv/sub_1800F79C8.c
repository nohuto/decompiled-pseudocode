/*
 * XREFs of sub_1800F79C8 @ 0x1800F79C8
 * Callers:
 *     sub_1800F77E0 @ 0x1800F77E0 (sub_1800F77E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F79C8(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, __int64 a6)
{
  __int64 v6; // rax
  int v8; // [rsp+88h] [rbp+20h] BYREF

  v8 = a4;
  if ( a6 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(a6 + 2 * v6) );
  }
  return EtwTraceMessage(a1, 43LL, &unk_180171E90, 28LL, &v8);
}
