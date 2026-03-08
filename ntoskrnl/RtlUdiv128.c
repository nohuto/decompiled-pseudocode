/*
 * XREFs of RtlUdiv128 @ 0x1403A0AE0
 * Callers:
 *     HalpTimerCreateReferencePage @ 0x1403A0A54 (HalpTimerCreateReferencePage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlUdiv128(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 *a4)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rbx

  v7 = 64LL;
  do
  {
    v8 = 2 * a2;
    v9 = (2 * a1) | (a2 >> 63);
    v10 = a1 >> 63;
    a1 = v9 - a3;
    v11 = 2 * a2;
    if ( (v10 | (unsigned __int64)v9) < a3 )
      a1 = v9;
    a2 = v11 | 1;
    if ( (v10 | (unsigned __int64)v9) < a3 )
      a2 = v8;
    --v7;
  }
  while ( v7 );
  if ( a4 )
    *a4 = a1;
  return a2;
}
