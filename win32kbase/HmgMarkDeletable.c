/*
 * XREFs of HmgMarkDeletable @ 0x1C00AD0E0
 * Callers:
 *     DestroyCacheDC @ 0x1C003DA20 (DestroyCacheDC.c)
 *     GreMarkDeletableBitmap @ 0x1C00AD090 (GreMarkDeletableBitmap.c)
 *     GreMarkDeletableRgn @ 0x1C00AD0B0 (GreMarkDeletableRgn.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 */

__int64 __fastcall HmgMarkDeletable(unsigned int a1, char a2)
{
  unsigned int v3; // edi
  __int16 v4; // ebx^2
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  v3 = 0;
  v6 = 0LL;
  v7 = 0;
  v4 = HIWORD(a1);
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v6, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v7 )
  {
    if ( *(_BYTE *)(v6 + 14) == a2 && *(_WORD *)(v6 + 12) == v4 )
    {
      *(_BYTE *)(v6 + 15) &= ~1u;
      v3 = 1;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
    if ( v7 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
  }
  return v3;
}
