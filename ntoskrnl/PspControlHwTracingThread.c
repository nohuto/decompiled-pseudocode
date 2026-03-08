/*
 * XREFs of PspControlHwTracingThread @ 0x1409AB490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PspControlHwTracingThread(__int64 a1, int a2)
{
  if ( a2 )
  {
    if ( a2 == 1 )
      *(_QWORD *)(a1 + 592) &= ~0x100uLL;
  }
  else
  {
    *(_QWORD *)(a1 + 592) |= 0x100uLL;
  }
}
