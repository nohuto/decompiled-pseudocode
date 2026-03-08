/*
 * XREFs of HmgMarkUndeletable @ 0x1C003EA00
 * Callers:
 *     SetSysColor @ 0x1C001A584 (SetSysColor.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C001D0B4 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 *     GreMarkUndeletableBitmap @ 0x1C00CD3E0 (GreMarkUndeletableBitmap.c)
 *     GreMarkUndeletableBrush @ 0x1C00D3680 (GreMarkUndeletableBrush.c)
 *     bInitICM @ 0x1C031D1E8 (bInitICM.c)
 *     bInitBRUSHOBJ @ 0x1C031D4F4 (bInitBRUSHOBJ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 */

__int64 __fastcall HmgMarkUndeletable(unsigned int a1, char a2)
{
  unsigned int v3; // edi
  __int16 v4; // ebx^2
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  v3 = 0;
  v6 = 0LL;
  v7 = 0;
  v4 = HIWORD(a1);
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v6, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0, 0);
  if ( v7 )
  {
    if ( *(_BYTE *)(v6 + 14) == a2 && *(_WORD *)(v6 + 12) == v4 )
    {
      *(_BYTE *)(v6 + 15) |= 1u;
      v3 = 1;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
    if ( v7 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
  }
  return v3;
}
