/*
 * XREFs of sub_1800CB314 @ 0x1800CB314
 * Callers:
 *     sub_18000F930 @ 0x18000F930 (sub_18000F930.c)
 *     sub_1800CA6A0 @ 0x1800CA6A0 (sub_1800CA6A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CB314(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rax
  int v7; // [rsp+78h] [rbp+20h] BYREF

  v7 = a4;
  if ( a5 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(a5 + 2 * v5) );
  }
  return EtwTraceMessage(a1, 43LL, a3, a2, &v7);
}
