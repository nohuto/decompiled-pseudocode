/*
 * XREFs of PsGetJobProperty @ 0x1402C8610
 * Callers:
 *     PsGetThreadProperty @ 0x1402C83E0 (PsGetThreadProperty.c)
 * Callees:
 *     PspGetJobProperty @ 0x1402C8674 (PspGetJobProperty.c)
 */

__int64 __fastcall PsGetJobProperty(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  if ( KeGetCurrentIrql() < 2u
    && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)] != PsJobType )
  {
    return 0LL;
  }
  PspGetJobProperty(a1, a2, &v3);
  return v3;
}
