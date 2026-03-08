/*
 * XREFs of UnlockQueue @ 0x1C0154540
 * Callers:
 *     <none>
 * Callees:
 *     FreeQueue @ 0x1C00706A4 (FreeQueue.c)
 */

void __fastcall UnlockQueue(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1[100]-- == 1 && (a1[99] & 0x4000000) != 0 )
    FreeQueue(a1, a2, a3, a4);
}
