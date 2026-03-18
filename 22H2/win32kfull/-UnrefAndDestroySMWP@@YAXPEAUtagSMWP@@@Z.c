/*
 * XREFs of ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C01A6310
 * Callers:
 *     <none>
 * Callees:
 *     DestroySMWP @ 0x1C00A1B10 (DestroySMWP.c)
 */

void __fastcall UnrefAndDestroySMWP(struct tagSMWP *a1)
{
  __int64 v1; // rax

  v1 = HMUnlockObject(a1);
  if ( v1 )
    DestroySMWP(v1);
}
