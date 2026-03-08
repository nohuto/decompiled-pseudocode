/*
 * XREFs of HmgShareLockIgnoreStockBit @ 0x1C00BC754
 * Callers:
 *     EngModifySurface @ 0x1C00A3E40 (EngModifySurface.c)
 *     ?W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z @ 0x1C00C1250 (-W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z.c)
 * Callees:
 *     ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0047B30 (-TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C004B3B0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 */

struct OBJECT *__fastcall HmgShareLockIgnoreStockBit(unsigned int a1)
{
  struct OBJECT *v1; // rbx
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp-20h]

  v1 = 0LL;
  v4 = 0LL;
  v5 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v4, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v5 )
  {
    if ( *(_BYTE *)(v4 + 14) == 5 && ((HIWORD(a1) ^ *(unsigned __int16 *)(v4 + 12)) & 0xFFFFFF7F) == 0 )
    {
      v1 = HANDLELOCK::pObj((HANDLELOCK *)&v4);
      ++*((_DWORD *)v1 + 2);
      TrackHmgrReferenceIncrement(5, v1);
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
    if ( v5 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
  }
  return v1;
}
