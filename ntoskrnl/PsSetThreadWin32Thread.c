/*
 * XREFs of PsSetThreadWin32Thread @ 0x1407821D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int64 __fastcall PsSetThreadWin32Thread(__int64 a1, __int64 a2, signed __int64 a3)
{
  signed __int64 result; // rax

  if ( !a2 )
    return _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 456), 0LL, a3);
  _InterlockedExchange64((volatile __int64 *)(a1 + 456), a2);
  return result;
}
