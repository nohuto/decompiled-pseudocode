/*
 * XREFs of PopQueuePowerRequestCallback @ 0x1402706F8
 * Callers:
 *     PoClearPowerRequestInternal @ 0x1402701DC (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1402703A0 (PoSetPowerRequestInternal.c)
 * Callees:
 *     PopQueuePowerRequestCallbacks @ 0x140270738 (PopQueuePowerRequestCallbacks.c)
 */

__int64 __fastcall PopQueuePowerRequestCallback(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v4; // r10
  __int64 (__fastcall **v5)(); // rdx
  __int64 result; // rax

  v4 = a2;
  v5 = &off_140C002D8;
  result = 2 * v4;
  if ( *(&off_140C002D8 + 2 * v4) )
  {
    LOBYTE(a3) = -(char)a3;
    LOBYTE(v5) = a4;
    *(_BYTE *)(v4 + a1 + 72) += (_BYTE)a3 != 0 ? 1 : -1;
    return PopQueuePowerRequestCallbacks(a1, v5, a3);
  }
  return result;
}
