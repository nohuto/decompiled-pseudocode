/*
 * XREFs of ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C00335E0
 * Callers:
 *     HmgAlloc @ 0x1C0001410 (HmgAlloc.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C0017368 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     HmgModifyHandleType @ 0x1C00174D0 (HmgModifyHandleType.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C002D7C0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0031B30 (--1SURFMEM@@QEAA@XZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0033220 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C003350C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0035F00 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C0036120 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
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
    if ( a1 <= 0x17u )
    {
      if ( a1 != 23 )
      {
        result = 16LL;
        if ( a1 != 16 )
        {
          switch ( a1 )
          {
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
            default:
              return 0xFFFFFFFFLL;
          }
        }
      }
      return result;
    }
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
