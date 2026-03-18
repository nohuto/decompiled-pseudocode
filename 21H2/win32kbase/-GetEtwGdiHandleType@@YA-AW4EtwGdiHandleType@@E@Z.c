/*
 * XREFs of ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C001F220
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C001E010 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     HmgAlloc @ 0x1C001E6F0 (HmgAlloc.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C001F14C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C001F9F0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0025050 (--1SURFMEM@@QEAA@XZ.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0028DD0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C0064500 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     HmgModifyHandleType @ 0x1C0064660 (HmgModifyHandleType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetEtwGdiHandleType(unsigned __int8 a1)
{
  __int64 result; // rax

  result = 15LL;
  if ( a1 > 0xFu )
  {
    result = 23LL;
    if ( a1 > 0x17u )
    {
      result = 24LL;
      switch ( a1 )
      {
        case 0x18u:
          return result;
        case 0x19u:
          return 25LL;
        case 0x1Au:
          return 26LL;
        case 0x1Bu:
          return 27LL;
        case 0x1Cu:
          return 28LL;
        case 0x1Du:
          return 29LL;
        case 0x1Eu:
          return 30LL;
      }
    }
    else
    {
      if ( a1 == 23 )
        return result;
      result = 16LL;
      switch ( a1 )
      {
        case 0x10u:
          return result;
        case 0x11u:
          return 17LL;
        case 0x12u:
          return 18LL;
        case 0x13u:
          return 19LL;
        case 0x14u:
          return 20LL;
        case 0x15u:
          return 21LL;
        case 0x16u:
          return 22LL;
      }
    }
    return 0xFFFFFFFFLL;
  }
  if ( a1 == 15 )
    return result;
  result = 7LL;
  if ( a1 > 7u )
  {
    result = 8LL;
    switch ( a1 )
    {
      case 8u:
        return result;
      case 9u:
        return 9LL;
      case 0xAu:
        return 10LL;
      case 0xBu:
        return 11LL;
      case 0xCu:
        return 12LL;
      case 0xDu:
        return 13LL;
      case 0xEu:
        return 14LL;
    }
    return 0xFFFFFFFFLL;
  }
  if ( a1 != 7 )
  {
    if ( a1 )
    {
      switch ( a1 )
      {
        case 1u:
          return 1LL;
        case 2u:
          return 2LL;
        case 3u:
          return 3LL;
        case 4u:
          return 4LL;
        case 5u:
          return 5LL;
        case 6u:
          return 6LL;
        default:
          return 0xFFFFFFFFLL;
      }
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
