/*
 * XREFs of MiFillPageExtraInfo @ 0x140619DB4
 * Callers:
 *     MiLogAllocateWsleEvent @ 0x140619E1C (MiLogAllocateWsleEvent.c)
 *     MiLogRemoveWsleEvent @ 0x140619EE0 (MiLogRemoveWsleEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall MiFillPageExtraInfo(unsigned __int64 *a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // r8

  v3 = a3 & 0xFFFFFFFFFFFFF000uLL;
  *a1 = v3;
  if ( a2 )
  {
    if ( a2 == 1 )
      v3 |= 1uLL;
    else
      v3 |= 2uLL;
  }
  *a1 = v3;
}
