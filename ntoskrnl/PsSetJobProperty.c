/*
 * XREFs of PsSetJobProperty @ 0x1405A1A00
 * Callers:
 *     <none>
 * Callees:
 *     PspRemoveProperty @ 0x1403BED38 (PspRemoveProperty.c)
 *     PspInsertProperty @ 0x1403BEE04 (PspInsertProperty.c)
 */

__int64 __fastcall PsSetJobProperty(__int64 a1, __int64 a2, void *a3)
{
  KSPIN_LOCK *v4; // rcx

  if ( KeGetCurrentIrql() < 2u
    && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)] != PsJobType )
  {
    return 3221225485LL;
  }
  v4 = (KSPIN_LOCK *)(a1 + 1496);
  if ( a3 )
    return PspInsertProperty(v4, a2, a3);
  else
    return PspRemoveProperty(v4, a2, 0LL);
}
