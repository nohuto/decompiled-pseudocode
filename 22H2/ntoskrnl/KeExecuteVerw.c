/*
 * XREFs of KeExecuteVerw @ 0x140413500
 * Callers:
 *     PoIdle @ 0x140221E90 (PoIdle.c)
 *     PpmIdleDefaultExecute @ 0x1403BC900 (PpmIdleDefaultExecute.c)
 * Callees:
 *     <none>
 */

void KeExecuteVerw()
{
  __asm { verw    word ptr gs:902Ah }
}
