/*
 * XREFs of ObpFastReplenishReference @ 0x1403520A4
 * Callers:
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     ObFastReferenceObject @ 0x1403434A0 (ObFastReferenceObject.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1403440B0 (MiReferenceControlAreaFileWithTag.c)
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 * Callees:
 *     ObpIncrPointerCountEx @ 0x140352120 (ObpIncrPointerCountEx.c)
 */

signed __int64 __fastcall ObpFastReplenishReference(signed __int64 *a1, __int64 a2)
{
  signed __int64 result; // rax
  signed __int64 v5; // rtt

  ObpIncrPointerCountEx(a2 - 48, 15LL);
  _m_prefetchw(a1);
  result = *a1;
  while ( (result & 0xF) == 0 )
  {
    if ( a2 != (result & 0xFFFFFFFFFFFFFFF0uLL) )
      break;
    v5 = result;
    result = _InterlockedCompareExchange64(a1, result + 15, result);
    if ( v5 == result )
      return result;
  }
  return _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 - 48), 0xFFFFFFFFFFFFFFF1uLL);
}
