/*
 * XREFs of CiTaskIndexReference @ 0x1C00011A0
 * Callers:
 *     CiDispatchCreateTaskIndexClient @ 0x1C000A240 (CiDispatchCreateTaskIndexClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiTaskIndexReference(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 48));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
