/*
 * XREFs of PsSetThreadProperty @ 0x1403BEC70
 * Callers:
 *     <none>
 * Callees:
 *     PspValidateThread @ 0x1403BECB0 (PspValidateThread.c)
 *     PspRemoveProperty @ 0x1403BED38 (PspRemoveProperty.c)
 *     PspInsertProperty @ 0x1403BEE04 (PspInsertProperty.c)
 */

__int64 __fastcall PsSetThreadProperty(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx

  result = PspValidateThread(a1, a2, a3, a3);
  if ( (int)result >= 0 )
  {
    v7 = v4 + 1560;
    if ( v5 )
      return PspInsertProperty(v7, v6, v5);
    else
      return PspRemoveProperty(v7, v6, 0LL);
  }
  return result;
}
