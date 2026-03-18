/*
 * XREFs of ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C002DB2C
 * Callers:
 *     HMAllocObjectEx @ 0x1C002D20C (HMAllocObjectEx.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00305C8 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMCreateHandleForObject @ 0x1C004DE50 (HMCreateHandleForObject.c)
 *     HMFreeObject @ 0x1C004E3F0 (HMFreeObject.c)
 *     HMRemoveHandleForObject @ 0x1C0050440 (HMRemoveHandleForObject.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C00AC568 (HMChangeOwnerPheProcessWorker.c)
 *     HMChangeOwnerThreadWorker @ 0x1C00C2298 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetEtwUserHandleType(unsigned __int8 a1)
{
  __int64 result; // rax

  result = 255LL;
  if ( a1 == 255 )
    return result;
  result = 12LL;
  if ( a1 > 0xCu )
  {
    result = 19LL;
    if ( a1 == 19 )
      return result;
    if ( a1 <= 0x13u )
    {
      result = 13LL;
      if ( a1 != 13 )
      {
        if ( a1 == 14 )
          return 14LL;
        if ( a1 == 15 )
          return 15LL;
        if ( a1 != 16 )
        {
          if ( a1 == 17 )
            return 17LL;
          if ( a1 == 18 )
            return 18LL;
          return 0xFFFFFFFFLL;
        }
        return 16LL;
      }
      return result;
    }
    result = 20LL;
    switch ( a1 )
    {
      case 0x14u:
        return result;
      case 0x15u:
        return 21LL;
      case 0x16u:
        return 22LL;
      case 0x17u:
        return 23LL;
      case 0x18u:
        return 24LL;
    }
    return 0xFFFFFFFFLL;
  }
  if ( a1 == 12 )
    return result;
  result = 6LL;
  if ( a1 > 6u )
  {
    result = 7LL;
    switch ( a1 )
    {
      case 7u:
        return result;
      case 8u:
        return 8LL;
      case 9u:
        return 9LL;
      case 0xAu:
        return 10LL;
      case 0xBu:
        return 11LL;
    }
    return 0xFFFFFFFFLL;
  }
  if ( a1 != 6 )
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
      }
      return 0xFFFFFFFFLL;
    }
    return 0LL;
  }
  return result;
}
