/*
 * XREFs of TpAllocPool @ 0x180062CC0
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x1800137E4 (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18011235C (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocPool(PTP_POOL *PoolReturn, PVOID Reserved)
{
  __int64 v2; // r8

  if ( PoolReturn )
  {
    if ( !Reserved )
    {
      Reserved = NtCurrentPeb()->Ldr;
      if ( !*((_BYTE *)Reserved + 72) )
        return TpAllocPoolInternal(PoolReturn, 0LL);
    }
  }
  TppRaiseInvalidParameter(PoolReturn, Reserved, v2);
  return -1073741811;
}
